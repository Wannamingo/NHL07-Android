/**
 * nhl_07_recomp - Recompiled code chunk 173
 * Functions: 250 (0x003792E0 - 0x00380A90)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003792E0
 * Original: 0x003792E0 - 0x003792EE (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003792E0(void)
{

loc_003792E0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    eax = eax + ecx + 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00379300
 * Original: 0x00379300 - 0x0037932D (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00379300: ;
    eax = ecx;
    ecx = 0x7B891F;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x68) = ecx;
    MEM8(eax + 0x20) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00379340
 * Original: 0x00379340 - 0x0037936F (47 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00379340: ;
    eax = MEM32(ecx + 0x64);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037936C; /* jne: not equal / not zero */

loc_00379348: ;
    edx = MEM32(ecx + 0x60);
    edx = MEM32(edx + 0x34);
    PUSH32(esp, esi);
    eax = ecx + 0x40;
    MEM32(edx + 0x10) = eax;
    esi = MEM32(ecx + 0x60);
    esi = MEM32(esi + 0x34);
    edx = ecx + 0x50;
    MEM32(esi + 0x14) = edx;
    ecx = MEM32(ecx + 0x60);
    esi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 8); PUSH32(esp, 0x0037936Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00379368u); } /* indirect call */
    }

loc_0037936B: ;
    POP32(esp, esi);

loc_0037936C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00379380
 * Original: 0x00379380 - 0x003793B4 (52 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00379380: ;
    eax = ecx + 0x20C;
    ecx = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00379390: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037939A; /* jne: not equal / not zero */

loc_00379395: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003793A8; /* je: equal / zero */

loc_0037939A: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00379390; /* jl: less (signed <) */

loc_003793A3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_003793A8: ;
    eax = MEM32(eax + 0x68);
    ecx = MEM32(eax + 0x60);
    eax = MEM32(ecx + 0x34);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003793D0
 * Original: 0x003793D0 - 0x003794EA (282 bytes, 90 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003793D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003793D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x20C);
    edx = ecx + 0x20C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    esi = MEM32(esp + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_003793FA; /* jne: not equal / not zero */

loc_003793EE: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003793FA; /* jne: not equal / not zero */

loc_003793F3: ;
    MEM32(esi) = edx;
    eax = 1;

loc_003793FA: ;
    ebx = MEM32(ecx + 0x278);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    edx = ecx + 0x278;
    if (CMP_NE(_fa, _fb)) goto loc_00379414; /* jne: not equal / not zero */

loc_0037940B: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00379414; /* jne: not equal / not zero */

loc_00379410: ;
    MEM32(esi + eax * 4) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00379414: ;
    ebx = MEM32(ecx + 0x2E4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    edx = ecx + 0x2E4;
    if (CMP_NE(_fa, _fb)) goto loc_0037942E; /* jne: not equal / not zero */

loc_00379425: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037942E; /* jne: not equal / not zero */

loc_0037942A: ;
    MEM32(esi + eax * 4) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0037942E: ;
    ebx = MEM32(ecx + 0x350);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    edx = ecx + 0x350;
    if (CMP_NE(_fa, _fb)) goto loc_00379448; /* jne: not equal / not zero */

loc_0037943F: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00379448; /* jne: not equal / not zero */

loc_00379444: ;
    MEM32(esi + eax * 4) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00379448: ;
    ebx = MEM32(ecx + 0x3BC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    edx = ecx + 0x3BC;
    if (CMP_NE(_fa, _fb)) goto loc_00379462; /* jne: not equal / not zero */

loc_00379459: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00379462; /* jne: not equal / not zero */

loc_0037945E: ;
    MEM32(esi + eax * 4) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00379462: ;
    ebx = MEM32(ecx + 0x428);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    edx = ecx + 0x428;
    if (CMP_NE(_fa, _fb)) goto loc_0037947C; /* jne: not equal / not zero */

loc_00379473: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037947C; /* jne: not equal / not zero */

loc_00379478: ;
    MEM32(esi + eax * 4) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0037947C: ;
    ebx = MEM32(ecx + 0x494);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    edx = ecx + 0x494;
    if (CMP_NE(_fa, _fb)) goto loc_00379496; /* jne: not equal / not zero */

loc_0037948D: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00379496; /* jne: not equal / not zero */

loc_00379492: ;
    MEM32(esi + eax * 4) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00379496: ;
    ebx = MEM32(ecx + 0x500);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    edx = ecx + 0x500;
    if (CMP_NE(_fa, _fb)) goto loc_003794B0; /* jne: not equal / not zero */

loc_003794A7: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003794B0; /* jne: not equal / not zero */

loc_003794AC: ;
    MEM32(esi + eax * 4) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003794B0: ;
    ebx = MEM32(ecx + 0x56C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    edx = ecx + 0x56C;
    if (CMP_NE(_fa, _fb)) goto loc_003794CA; /* jne: not equal / not zero */

loc_003794C1: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003794CA; /* jne: not equal / not zero */

loc_003794C6: ;
    MEM32(esi + eax * 4) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003794CA: ;
    edx = MEM32(ecx + 0x5D8);
    _fb = (uint32_t)(0x5D8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5D8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003794E4; /* jne: not equal / not zero */

loc_003794DB: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003794E4; /* jne: not equal / not zero */

loc_003794E0: ;
    MEM32(esi + eax * 4) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003794E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00379530
 * Original: 0x00379530 - 0x003795F6 (198 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00379530: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    MEM32(esp + 4) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_003795ED; /* jle: less or equal (signed <=) */

loc_00379545: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx + 4;
    goto loc_00379550;

    /* nop */

loc_00379550: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebx + 0x20C;

loc_00379558: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00379568; /* je: equal / zero */

loc_0037955D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x6C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00379558; /* jl: less (signed <) */

loc_00379566: ;
    goto loc_003795D4;

loc_00379568: ;
    MEM32(esi) = 2;
    eax = MEM32(edi);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0;
    ecx = MEM32(edi + 4);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(edi + 8);
    MEM32(esi + 0x1C) = edx;
    PUSH32(esp, 0x0037958Bu); RECOMP_ABI_CALL(0x0001760Du, sub_0001760D); /* call 0x0001760D */

loc_0037958B: ;
    ecx = MEM32(esi + 0x18);
    ebp = MEM32(ecx + 4);
    ecx = MEM32(ecx + 0x14);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x003795A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003795A0u); } /* indirect call */
    }

loc_003795A3: ;
    PUSH32(esp, 0x003795A8u); RECOMP_ABI_CALL(0x0001760Du, sub_0001760D); /* call 0x0001760D */

loc_003795A8: ;
    ecx = MEM32(esi + 0x1C);
    ebp = MEM32(ecx + 4);
    ecx = MEM32(ecx + 0x14);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x003795C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003795BDu); } /* indirect call */
    }

loc_003795C0: ;
    PUSH32(esp, 0x003795C5u); RECOMP_ABI_CALL(0x0002330Eu, sub_0002330E); /* call 0x0002330E */

loc_003795C5: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(eax + 0xB4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003795D4u); RECOMP_ABI_CALL(0x0002BE46u, sub_0002BE46); /* call 0x0002BE46 */

loc_003795D4: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x34;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00379550; /* jl: less (signed <) */

loc_003795EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_003795ED: ;
    MEM32(ebx) = 0;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00379630
 * Original: 0x00379630 - 0x00379686 (86 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00379630: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FCBE0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00379644; /* je: equal / zero */

loc_0037963F: ;
    PUSH32(esp, 0x00379644u); RECOMP_ABI_CALL(0x00021018u, sub_00021018); /* call 0x00021018 */

loc_00379644: ;
    _fb = (uint32_t)(0x20C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0xA;
    edi = 5;

loc_00379654: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037967C; /* jne: not equal / not zero */

loc_00379659: ;
    eax = MEM32(esi + 0x18);
    MEM32(esi) = 3;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    PUSH32(esp, 0x0037966Du); RECOMP_ABI_CALL(0x0002330Eu, sub_0002330E); /* call 0x0002330E */

loc_0037966D: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xB4);
    PUSH32(esp, 0x0037967Cu); RECOMP_ABI_CALL(0x0002FB77u, sub_0002FB77); /* call 0x0002FB77 */

loc_0037967C: ;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x6C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00379654; /* jne: not equal / not zero */

loc_00379682: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003796A0
 * Original: 0x003796A0 - 0x003796A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003796A0(void)
{

loc_003796A0: ;
    MEM32(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003796B0
 * Original: 0x003796B0 - 0x0037973A (138 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003796B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003796B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x21C;
    edi = 0xA;
    /* nop */

loc_003796C0: ;
    _fa = (uint32_t)(MEM32(esi + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + -16), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00379731; /* jne: not equal / not zero */

loc_003796C6: ;
    PUSH32(esp, 0x003796CBu); RECOMP_ABI_CALL(0x0001760Du, sub_0001760D); /* call 0x0001760D */

loc_003796CB: ;
    ecx = MEM32(esi + -4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x003796D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003796D3u); } /* indirect call */
    }

loc_003796D6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00379731; /* jne: not equal / not zero */

loc_003796DA: ;
    PUSH32(esp, 0x003796DFu); RECOMP_ABI_CALL(0x0001760Du, sub_0001760D); /* call 0x0001760D */

loc_003796DF: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x003796E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003796E6u); } /* indirect call */
    }

loc_003796E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00379731; /* jne: not equal / not zero */

loc_003796ED: ;
    PUSH32(esp, 0x003796F2u); RECOMP_ABI_CALL(0x0001760Du, sub_0001760D); /* call 0x0001760D */

loc_003796F2: ;
    ecx = MEM32(esi + -4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x003796FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003796FAu); } /* indirect call */
    }

loc_003796FD: ;
    PUSH32(esp, 0x00379702u); RECOMP_ABI_CALL(0x0001760Du, sub_0001760D); /* call 0x0001760D */

loc_00379702: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0037970Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00379709u); } /* indirect call */
    }

loc_0037970C: ;
    edx = MEM32(esi + 8);
    ecx = MEM32(0x901E30);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0037971Bu); RECOMP_ABI_CALL(0x0002A0A0u, sub_0002A0A0); /* call 0x0002A0A0 */

loc_0037971B: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(0x901E30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037972Au); RECOMP_ABI_CALL(0x0002A0A0u, sub_0002A0A0); /* call 0x0002A0A0 */

loc_0037972A: ;
    MEM32(esi + -16) = 0;

loc_00379731: ;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x6C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003796C0; /* jne: not equal / not zero */

loc_00379737: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00379760
 * Original: 0x00379760 - 0x00379761 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379760(void)
{

loc_00379760: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00379770
 * Original: 0x00379770 - 0x00379771 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379770(void)
{

loc_00379770: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00379780
 * Original: 0x00379780 - 0x0037980D (141 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00379780: ;
    eax = MEM32(0x8FC1D0);
    eax = MEM32(eax + 0xE8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x34D));
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM8(eax + 0x34D) = 0;
    PUSH32(esp, 0);
    esi = ecx;
    ecx = MEM32(0x909394);
    eax = MEM32(ecx + 8);
    ecx = MEM32(esi + 0xA5C);
    edx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x400);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003797C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003797C3u); } /* indirect call */
    }

loc_003797C6: ;
    ecx = MEM32(0x8FC1D0);
    edx = MEM32(ecx + 0xE8);
    MEM8(edx + 0x34D) = LO8(ebx);
    ecx = MEM32(esi + 0x980);
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x44);
    edx = edx + esi + 0x984;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x980) = ecx;
    MEM32(edx + 0x40) = eax;
    eax = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    goto loc_00379800;

    /* nop */

loc_00379800: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00379800; /* jne: not equal / not zero */

loc_0037980A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00379830
 * Original: 0x00379830 - 0x0037987E (78 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00379830: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    eax = MEM32(ebx + 0x980);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0037986C; /* jle: less or equal (signed <=) */

loc_00379842: ;
    ebp = MEM32(esp + 0x14);
    edi = ebx + 0x984;
    /* nop */

loc_00379850: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00379857u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00379857: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00379875; /* je: equal / zero */

loc_0037985E: ;
    eax = MEM32(ebx + 0x980);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x44;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00379850; /* jl: less (signed <) */

loc_0037986C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00379875: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003798A0
 * Original: 0x003798A0 - 0x003798F6 (86 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003798A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003798A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x980);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003798DC; /* jle: less or equal (signed <=) */

loc_003798B2: ;
    ebp = MEM32(esp + 0x14);
    ebx = edi + 0x984;
    /* nop */

loc_003798C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x003798C7u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_003798C7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003798E5; /* je: equal / zero */

loc_003798CE: ;
    eax = MEM32(edi + 0x980);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x44;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003798C0; /* jl: less (signed <) */

loc_003798DC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003798E5: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x44);
    eax = esi + edi + 0x984;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00379910
 * Original: 0x00379910 - 0x0037997B (107 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00379910: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x980);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00379976; /* jle: less or equal (signed <=) */

loc_00379920: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ebx + 0x984;
    /* nop */

loc_00379930: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037993Au); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_0037993A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00379956; /* je: equal / zero */

loc_00379941: ;
    eax = MEM32(ebx + 0x980);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x44;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00379930; /* jl: less (signed <) */

loc_0037994F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00379956: ;
    ecx = MEM32(ebp + 4);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x44);
    edi = MEM32(ebp + 0x14);
    esi = MEM32(esi + ebx + 0x9C4);
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
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00379976: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003799A0
 * Original: 0x003799A0 - 0x003799CE (46 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003799A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003799A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0x2C;
    /* nop */

loc_003799B0: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003799C3; /* je: equal / zero */

loc_003799B4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003799B0; /* jl: less (signed <) */

loc_003799BD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003799C3: ;
    eax = eax + eax * 2;
    eax = ecx + eax * 8 + 0x20;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003799E0
 * Original: 0x003799E0 - 0x00379A07 (39 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003799E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003799E0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0xC) = 3;
    edx = MEM32(0x901E28);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x8A0) = eax;
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x1C) = eax;
    PUSH32(esp, 0x00379A04u); RECOMP_ABI_CALL(0x00027C51u, sub_00027C51); /* call 0x00027C51 */

loc_00379A04: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00379A10
 * Original: 0x00379A10 - 0x00379A81 (113 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00379A10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi + 4) = ebp;
    MEM32(edi + 0x18) = ebp;
    MEM32(edi + 0xC) = ebp;
    MEM32(edi + 8) = ebp;
    MEM32(edi + 0x14) = ebp;
    MEM32(edi + 0x10) = ebp;
    esi = edi + 0x34;
    ebx = 0x64;

loc_00379A33: ;
    eax = MEM32(esi + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00379A75; /* je: equal / zero */

loc_00379A3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00379A72; /* je: equal / zero */

loc_00379A3E: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00379A72; /* je: equal / zero */

loc_00379A44: ;
    _fa = (uint32_t)(MEM32(esi + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + -16), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00379A70; /* je: equal / zero */

loc_00379A49: ;
    ecx = MEM32(edi + 0xA6C);
    edx = MEM32(edi + 0xA68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esp + 0x13) = LO8(ecx);
    if ((_fa != 0)) goto loc_00379A70; /* jne: not equal / not zero */

loc_00379A67: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00379A6Du); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00379A6D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00379A70: ;
    MEM32(esi) = ebp;

loc_00379A72: ;
    MEM32(esi + -8) = ebp;

loc_00379A75: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00379A33; /* jne: not equal / not zero */

loc_00379A7B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00379AA0
 * Original: 0x00379AA0 - 0x00379B50 (176 bytes, 59 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00379AA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi + 0x2C;
    /* nop */

loc_00379AB0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00379B2B; /* je: equal / zero */

loc_00379AB5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00379AB0; /* jl: less (signed <) */

loc_00379ABE: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00379AC0: ;
    ebx = MEM32(esp + 0x10);
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = 0;
    MEM32(esi) = 0xFFFFFFFFu;
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(esi + 0xC) = 1;
    ecx = MEM32(edi + 0xA5C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00379AEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00379AEBu); } /* indirect call */
    }

loc_00379AEE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00379B48; /* je: equal / zero */

loc_00379AF5: ;
    PUSH32(esp, 0x83226C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00379B00u); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_00379B00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00379B34; /* je: equal / zero */

loc_00379B07: ;
    eax = MEM32(0x90252C);
    edx = MEM32(edi + eax * 4 + 0xA68);
    ecx = 1;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    MEM32(esi + 0x14) = edx;
    eax = esi;
    POP32(esp, esi);
    MEM32(0x90252C) = ecx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00379B2B: ;
    eax = eax + eax * 2;
    esi = edi + eax * 8 + 0x20;
    goto loc_00379AC0;

loc_00379B34: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0x500);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00379B42u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00379B42: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = eax;

loc_00379B48: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00379B80
 * Original: 0x00379B80 - 0x00379B99 (25 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379B80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00379B80: ;
    ecx = MEM32(ecx + 0xA5C);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00379B90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00379B8Du); } /* indirect call */
    }

loc_00379B90: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00379BA0
 * Original: 0x00379BA0 - 0x00379BE2 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00379BA0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00379BB0u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_00379BB0: ;
    ecx = eax;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_00379BCC; /* je: equal / zero */

loc_00379BBE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 1);
    if (CMP_NE(_fa, _fb)) goto loc_00379BDA; /* jne: not equal / not zero */

loc_00379BC4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00379BCBu); RECOMP_ABI_CALL(0x00033501u, sub_00033501); /* call 0x00033501 */

loc_00379BCB: ;
    esp += 4; return; /* ret */

loc_00379BCC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 0);
    if (CMP_NE(_fa, _fb)) goto loc_00379BDA; /* jne: not equal / not zero */

loc_00379BD2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00379BD9u); RECOMP_ABI_CALL(0x00033501u, sub_00033501); /* call 0x00033501 */

loc_00379BD9: ;
    esp += 4; return; /* ret */

loc_00379BDA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00379BE1u); RECOMP_ABI_CALL(0x00033501u, sub_00033501); /* call 0x00033501 */

loc_00379BE1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00379C00
 * Original: 0x00379C00 - 0x00379C22 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00379C00: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00379C10u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_00379C10: ;
    SET_LO8(ecx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00379C1D; /* je: equal / zero */

loc_00379C18: ;
    MEM8(eax + 0x3B) = MEM8(eax + 0x3B) & 0xFB;
    _fa = (uint32_t)(MEM8(eax + 0x3B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

loc_00379C1D: ;
    MEM8(eax + 0x3B) = MEM8(eax + 0x3B) | 4;
    _fa = (uint32_t)(MEM8(eax + 0x3B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_00379C30
 * Original: 0x00379C30 - 0x00379C6A (58 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379C30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00379C30: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00379C39u); RECOMP_ABI_CALL(0x0001BE74u, sub_0001BE74); /* call 0x0001BE74 */

loc_00379C39: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00379C42u); RECOMP_ABI_CALL(0x0001BE74u, sub_0001BE74); /* call 0x0001BE74 */

loc_00379C42: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00379C4Bu); RECOMP_ABI_CALL(0x0001BE74u, sub_0001BE74); /* call 0x0001BE74 */

loc_00379C4B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00379C54u); RECOMP_ABI_CALL(0x0001BE74u, sub_0001BE74); /* call 0x0001BE74 */

loc_00379C54: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00379C5Du); RECOMP_ABI_CALL(0x0001BE74u, sub_0001BE74); /* call 0x0001BE74 */

loc_00379C5D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x00379C66u); RECOMP_ABI_CALL(0x0001BE74u, sub_0001BE74); /* call 0x0001BE74 */

loc_00379C66: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00379C80
 * Original: 0x00379C80 - 0x00379D4D (205 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00379C80: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = xmm1; /* movaps */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00379CAA; /* je: equal / zero */

loc_00379C94: ;
    eax = MEM32(esp + 0xC);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x10); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8C5EF0); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_00379CAA: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00379CCC; /* jne: not equal / not zero */

loc_00379CB5: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00379CC8u); RECOMP_ABI_CALL(0x0001BE74u, sub_0001BE74); /* call 0x0001BE74 */

loc_00379CC8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00379CCC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00379CE4; /* jne: not equal / not zero */

loc_00379CD1: ;
    ecx = MEM32(esp);
    eax = 1;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00379CE0u); RECOMP_ABI_CALL(0x0001BE74u, sub_0001BE74); /* call 0x0001BE74 */

loc_00379CE0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00379CE4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00379CFC; /* jne: not equal / not zero */

loc_00379CE9: ;
    ecx = MEM32(esp);
    eax = 2;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00379CF8u); RECOMP_ABI_CALL(0x0001BE74u, sub_0001BE74); /* call 0x0001BE74 */

loc_00379CF8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00379CFC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00379D14; /* jne: not equal / not zero */

loc_00379D01: ;
    ecx = MEM32(esp);
    eax = 3;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00379D10u); RECOMP_ABI_CALL(0x0001BE74u, sub_0001BE74); /* call 0x0001BE74 */

loc_00379D10: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00379D14: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00379D35; /* jne: not equal / not zero */

loc_00379D19: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp);
    eax = 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00379D31u); RECOMP_ABI_CALL(0x0001BE74u, sub_0001BE74); /* call 0x0001BE74 */

loc_00379D31: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00379D35: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00379D3F; /* jne: not equal / not zero */

loc_00379D3A: ;
    eax = 5;

loc_00379D3F: ;
    ecx = MEM32(esp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00379D49u); RECOMP_ABI_CALL(0x0001BE74u, sub_0001BE74); /* call 0x0001BE74 */

loc_00379D49: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00379D80
 * Original: 0x00379D80 - 0x00379D91 (17 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379D80(void)
{

loc_00379D80: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEM8(ecx + 0x1C) = 1;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00379DA0
 * Original: 0x00379DA0 - 0x00379DCE (46 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379DA0(void)
{

loc_00379DA0: ;
    eax = MEM32(esp + 4);
    MEM8(ecx + 0x1C) = 1;
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x14) = edx;
    eax = MEM32(eax + 0x14);
    MEM32(ecx + 0x18) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00379DE0
 * Original: 0x00379DE0 - 0x00379DF1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379DE0(void)
{

loc_00379DE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM8(ecx + 0x1C) = 1;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00379E00
 * Original: 0x00379E00 - 0x00379E2E (46 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379E00(void)
{

loc_00379E00: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM8(ecx + 0x1C) = 1;
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00379E40
 * Original: 0x00379E40 - 0x00379EEA (170 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00379E40: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ecx + 0x118) = LO8(edx);
    MEM32(ecx + 0x120) = edx;
    MEM8(ecx + 0x119) = LO8(edx);
    MEM8(ecx + 0x11D) = LO8(edx);
    MEM8(ecx + 0x11E) = LO8(edx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edx (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edi);
    edi = MEM32(esi);
    MEM8(ecx + 0x119) = LO8(eax);
    MEM8(ecx + 0x11C) = LO8(edx);
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    MEM8(ecx + 0x118) = 1;
    MEM32(ecx + 0x120) = 1;
    MEM8(ecx + 0x11E) = 1;
    edi = eax;
    edx = edx + edx * 2;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(5) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 5);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(ecx + 0x11B) = LO8(eax);
    eax = 2;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(3) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(ecx + 0x11A) = LO8(eax);
    SET_LO8(edx, MEM8(esi + 4));
    POP32(esp, edi);
    MEM8(ecx + 0x11D) = LO8(edx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00379F20
 * Original: 0x00379F20 - 0x00379FC2 (162 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00379F20: ;
    eax = MEM32(0x8C5EE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00379FC0; /* je: equal / zero */

loc_00379F31: ;
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00379F3Fu); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_00379F3F: ;
    SET_LO8(ebx, MEM8(eax + 0xC));
    ecx = MEM32(0x8FCAD8);
    eax = MEM32(ecx + 4);
    SET_LO8(ebx, LO8(ebx) & 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00379FBE; /* jle: less or equal (signed <=) */

loc_00379F54: ;
    PUSH32(esp, ebp);
    ebp = esi + 0x7C0;
    goto loc_00379F60;

    /* nop */

loc_00379F60: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00379F66u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_00379F66: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8C5EE0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x8C5EE0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00379FAC; /* je: equal / zero */

loc_00379F6E: ;
    ecx = MEM32(eax + 8);
    SET_LO8(ecx, LO8(ecx) & 0xF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00379FAC; /* je: equal / zero */

loc_00379F79: ;
    esi = MEM32(ebp);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00379F85; /* je: equal / zero */

loc_00379F80: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00379F95; /* jne: not equal / not zero */

loc_00379F85: ;
    SET_LO8(edx, MEM8(eax + 0xC));
    SET_LO8(ecx, MEM8(eax + 0xC));
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax + 0xC) = LO8(ecx);

loc_00379F95: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00379FAC; /* jne: not equal / not zero */

loc_00379F9A: ;
    SET_LO8(edx, MEM8(eax + 0xC));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax + 0xC) = LO8(edx);

loc_00379FAC: ;
    ecx = MEM32(0x8FCAD8);
    eax = MEM32(ecx + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00379F60; /* jl: less (signed <) */

loc_00379FBD: ;
    POP32(esp, ebp);

loc_00379FBE: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00379FC0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00379FF0
 * Original: 0x00379FF0 - 0x0037A000 (16 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00379FF0(void)
{

loc_00379FF0: ;
    eax = ZX16(MEM16(ecx + 2));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 4));
    eax = eax + ecx + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037A010
 * Original: 0x0037A010 - 0x0037A074 (100 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037A010: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x2E0);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0037A06F; /* jle: less or equal (signed <=) */

loc_0037A020: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebp + 0x2E4;
    goto loc_0037A030;

    /* nop */

loc_0037A030: ;
    esi = MEM32(edi);
    ecx = esi;
    PUSH32(esp, 0x0037A039u); RECOMP_ABI_CALL(0x00029290u, sub_00029290); /* call 0x00029290 */

loc_0037A039: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x110;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037A05F; /* jne: not equal / not zero */

loc_0037A046: ;
    eax = MEM32(esi + 0x34);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037A059u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_0037A059: ;
    _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3A;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) & 0xDF;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0037A05F: ;
    eax = MEM32(ebp + 0x2E0);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037A030; /* jl: less (signed <) */

loc_0037A06D: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0037A06F: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037A090
 * Original: 0x0037A090 - 0x0037A131 (161 bytes, 53 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037A090: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x2E0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0037A12B; /* jle: less or equal (signed <=) */

loc_0037A0A9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 0x2E4;

loc_0037A0B1: ;
    esi = MEM32(edi);
    ecx = esi;
    PUSH32(esp, 0x0037A0BAu); RECOMP_ABI_CALL(0x00029290u, sub_00029290); /* call 0x00029290 */

loc_0037A0BA: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x110;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037A117; /* jne: not equal / not zero */

loc_0037A0C7: ;
    eax = MEM32(esi + 0x34);
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037A0DAu); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_0037A0DA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0037A0E5u); RECOMP_ABI_CALL(0x00033501u, sub_00033501); /* call 0x00033501 */

loc_0037A0E5: ;
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037A0F1u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_0037A0F1: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x0037A0FBu); RECOMP_ABI_CALL(0x00033501u, sub_00033501); /* call 0x00033501 */

loc_0037A0FB: ;
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037A107u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_0037A107: ;
    MEM8(eax + 0x142) = LO8(ebx);
    MEM8(eax + 0x143) = LO8(ebx);
    MEM8(eax + 0x3A) = MEM8(eax + 0x3A) & 0xBF;
    _fa = (uint32_t)(MEM8(eax + 0x3A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0037A117: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 0x2E0);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037A0B1; /* jl: less (signed <) */

loc_0037A129: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0037A12B: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037A160
 * Original: 0x0037A160 - 0x0037A1AD (77 bytes, 14 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A160(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037A160: ;
    eax = MEM32(ecx + 0x2E0);
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 4 + 0x2E4) = edx;
    eax = MEM32(ecx + 0x2E0);
    edx = MEM32(esp + 8);
    MEM32(ecx + eax * 4 + 0x398) = edx;
    eax = MEM32(ecx + 0x2E0);
    edx = MEM32(esp + 0xC);
    MEM32(ecx + eax * 4 + 0x44C) = edx;
    eax = MEM32(ecx + 0x2E0);
    edx = MEM32(esp + 0x10);
    MEM32(ecx + eax * 4 + 0x500) = edx;
    MEM32(ecx + 0x2E0) = MEM32(ecx + 0x2E0) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x2E0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0037A1C0
 * Original: 0x0037A1C0 - 0x0037A1D0 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A1C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037A1C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037A1CAu); RECOMP_ABI_CALL(0x000358E2u, sub_000358E2); /* call 0x000358E2 */

loc_0037A1CA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037A1E0
 * Original: 0x0037A1E0 - 0x0037A266 (134 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0037A1E0: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x2E0);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    xmm0 = xmm1; /* movaps */
    if (CMP_L(_fas, _fbs)) goto loc_0037A239; /* jl: less (signed <) */

loc_0037A1F5: ;
    edx = esi + -4;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx + 0x504;
    edi = edx * 4;
    PUSH32(esp, ebx);
    /* nop */

loc_0037A210: ;
    ebx = MEM32(eax + -4);
    xmm2 = XMM_SCALAR(MEMF(ebx)); /* movss */
    ebx = MEM32(eax);
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ebx); /* addss */
    ebx = MEM32(eax + 4);
    xmm2.f[0] = xmm2.f[0] + MEMF(ebx); /* addss */
    ebx = MEM32(eax + 8);
    xmm2.f[0] = xmm2.f[0] + MEMF(ebx); /* addss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm0 = xmm2; /* movaps */
    if ((_fa != 0)) goto loc_0037A210; /* jne: not equal / not zero */

loc_0037A238: ;
    POP32(esp, ebx);

loc_0037A239: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0037A259; /* jge: greater or equal (signed >=) */

loc_0037A23D: ;
    eax = ecx + edi * 4 + 0x500;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0037A246: ;
    ecx = MEM32(eax);
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    if ((_fa != 0)) goto loc_0037A246; /* jne: not equal / not zero */

loc_0037A259: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0037A263; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0037A260: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0037A263: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0037A290
 * Original: 0x0037A290 - 0x0037A291 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A290(void)
{

loc_0037A290: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037A2A0
 * Original: 0x0037A2A0 - 0x0037A321 (129 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A2A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037A2A0: ;
    PUSH32(esp, edi);
    edi = ecx + 0x7C0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x33;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(0x8FCAD8);
    eax = MEM32(ecx + 4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0037A31F; /* jle: less or equal (signed <=) */

loc_0037A2BF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 1;

loc_0037A2C6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0037A2CCu); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_0037A2CC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037A30F; /* je: equal / zero */

loc_0037A2D2: ;
    MEM8(esi + 0x3B) = MEM8(esi + 0x3B) & 0xFC;
    _fa = (uint32_t)(MEM8(esi + 0x3B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0037A2E2u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_0037A2E2: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x0037A2ECu); RECOMP_ABI_CALL(0x00033501u, sub_00033501); /* call 0x00033501 */

loc_0037A2EC: ;
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0037A2F8u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_0037A2F8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x0037A303u); RECOMP_ABI_CALL(0x00033501u, sub_00033501); /* call 0x00033501 */

loc_0037A303: ;
    MEM8(esi + 0x142) = LO8(ebx);
    MEM8(esi + 0x143) = LO8(ebx);

loc_0037A30F: ;
    ecx = MEM32(0x8FCAD8);
    eax = MEM32(ecx + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037A2C6; /* jl: less (signed <) */

loc_0037A31D: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0037A31F: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0037A350
 * Original: 0x0037A350 - 0x0037A3C4 (116 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037A350: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    MEM8(ebx + 0x76C) = 1;
    ecx = MEM32(0x8FCAD8);
    eax = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0037A3C1; /* jle: less or equal (signed <=) */

loc_0037A36A: ;
    PUSH32(esp, edi);
    edi = ebx + 0x680;

loc_0037A371: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037A377u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_0037A377: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037A3AF; /* je: equal / zero */

loc_0037A37B: ;
    ecx = MEM32(eax + 0x30);
    xmm0 = XMM_SCALAR(MEMF(0x7BE95C)); /* movss */
    MEM32(edi + -204) = ecx;
    edx = MEM32(eax + 0x34);
    MEM32(edi) = edx;
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7C4070)); /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    SET_LO8(eax, MEM8(eax + 0xC));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + ebx + 0x78C) = LO8(eax);

loc_0037A3AF: ;
    ecx = MEM32(0x8FCAD8);
    eax = MEM32(ecx + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037A371; /* jl: less (signed <) */

loc_0037A3C0: ;
    POP32(esp, edi);

loc_0037A3C1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0037A3F0
 * Original: 0x0037A3F0 - 0x0037A4F0 (256 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037A3F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    SET_LO8(ecx, MEM8(eax + 0x76C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(esp + 4) = eax;
    MEM8(eax + 0x88C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0037A4EC; /* je: equal / zero */

loc_0037A40E: ;
    MEM8(eax + 0x76C) = 0;
    ecx = MEM32(0x8FCAD8);
    edx = MEM32(ecx + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0037A4EB; /* jle: less or equal (signed <=) */

loc_0037A429: ;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x680) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x680;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = eax;
    ebx = 1;
    /* nop */

loc_0037A440: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0037A446u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_0037A446: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037A4D2; /* je: equal / zero */

loc_0037A450: ;
    MEM8(esi + 0x142) = LO8(ebx);
    MEM8(esi + 0x143) = LO8(ebx);
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0037A468u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_0037A468: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x0037A472u); RECOMP_ABI_CALL(0x00033501u, sub_00033501); /* call 0x00033501 */

loc_0037A472: ;
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0037A47Eu); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_0037A47E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x0037A489u); RECOMP_ABI_CALL(0x00033501u, sub_00033501); /* call 0x00033501 */

loc_0037A489: ;
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0037A495u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_0037A495: ;
    MEM8(eax + 0x3B) = MEM8(eax + 0x3B) | 4;
    _fa = (uint32_t)(MEM8(eax + 0x3B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x3A) = MEM8(esi + 0x3A) | 0x60;
    _fa = (uint32_t)(MEM8(esi + 0x3A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3A;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 8);
    SET_LO8(eax, LO8(eax) & 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037A4C0; /* je: equal / zero */

loc_0037A4A9: ;
    ecx = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(esi + 0xC));
    SET_LO8(edx, MEM8(edi + ecx + 0x78C));
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(edx) & LO8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0xC) = LO8(eax);

loc_0037A4C0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + -204);
    MEM32(esi + 0x30) = ecx;
    edx = MEM32(eax);
    MEM32(esi + 0x34) = edx;

loc_0037A4D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + 4;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(0x8FCAD8);
    eax = MEM32(ecx + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037A440; /* jl: less (signed <) */

loc_0037A4E9: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0037A4EB: ;
    POP32(esp, edi);

loc_0037A4EC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0037A530
 * Original: 0x0037A530 - 0x0037A54B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037A530: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x88C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037A549; /* je: equal / zero */

loc_0037A53D: ;
    PUSH32(esp, 0x0037A542u); RECOMP_ABI_CALL(0x000175FEu, sub_000175FE); /* call 0x000175FE */

loc_0037A542: ;
    MEM8(esi + 0x88C) = 0;

loc_0037A549: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0037A560
 * Original: 0x0037A560 - 0x0037A567 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A560(void)
{

loc_0037A560: ;
    MEM32(ecx) = 0x832224;
    esp += 4; return; /* ret */

}

/**
 * sub_0037A570
 * Original: 0x0037A570 - 0x0037A591 (33 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037A570: ;
    ecx = MEM32(0x901E34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037A57F; /* je: equal / zero */

loc_0037A57A: ;
    PUSH32(esp, 0x0037A57Fu); RECOMP_ABI_CALL(0x00018689u, sub_00018689); /* call 0x00018689 */

loc_0037A57F: ;
    ecx = MEM32(0x901E38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037A58E; /* je: equal / zero */

loc_0037A589: ;
    PUSH32(esp, 0x0037A58Eu); RECOMP_ABI_CALL(0x00018689u, sub_00018689); /* call 0x00018689 */

loc_0037A58E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037A5A0
 * Original: 0x0037A5A0 - 0x0037A647 (167 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A5A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037A5A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0xE0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037A644; /* je: equal / zero */

loc_0037A5B2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0037A5B8u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_0037A5B8: ;
    eax = MEM32(0x919778);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x0037A5C6u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_0037A5C6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0037A5CDu); RECOMP_ABI_CALL(0x0057496Cu, sub_0057496C); /* call 0x0057496C */

loc_0037A5CD: ;
    eax = MEM32(edi + 0x144);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(edi + 0xE0) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0037A611; /* jle: less or equal (signed <=) */

loc_0037A5E3: ;
    PUSH32(esp, esi);
    esi = edi + 0x148;
    /* nop */

loc_0037A5F0: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037A602; /* je: equal / zero */

loc_0037A5F6: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0037A5FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037A5FAu); } /* indirect call */
    }

loc_0037A5FC: ;
    MEM32(esi) = 0;

loc_0037A602: ;
    eax = MEM32(edi + 0x144);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037A5F0; /* jl: less (signed <) */

loc_0037A610: ;
    POP32(esp, esi);

loc_0037A611: ;
    ecx = MEM32(edi + 0x2D8);
    MEM32(edi + 0x144) = 0;
    PUSH32(esp, 0x0037A626u); RECOMP_ABI_CALL(0x0002DC87u, sub_0002DC87); /* call 0x0002DC87 */

loc_0037A626: ;
    ecx = MEM32(edi + 0x2DC);
    PUSH32(esp, 0x0037A631u); RECOMP_ABI_CALL(0x00015768u, sub_00015768); /* call 0x00015768 */

loc_0037A631: ;
    PUSH32(esp, 0x0037A636u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_0037A636: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037A640u); RECOMP_ABI_CALL(0x0057496Cu, sub_0057496C); /* call 0x0057496C */

loc_0037A640: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);

loc_0037A644: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0037A670
 * Original: 0x0037A670 - 0x0037A6DA (106 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037A670: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x144);
    eax = edi + 1;
    MEM32(esi + 0x144) = eax;
    MEM32(esi + edi * 4 + 0x148) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0037A6D4; /* je: equal / zero */

loc_0037A697: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0037A6D3; /* jle: less or equal (signed <=) */

loc_0037A6A0: ;
    ecx = MEM32(0x909328);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0037A6B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037A6B1u); } /* indirect call */
    }

loc_0037A6B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037A6C1; /* je: equal / zero */

loc_0037A6B8: ;
    ecx = eax;
    PUSH32(esp, 0x0037A6BFu); RECOMP_ABI_CALL(0x00027E22u, sub_00027E22); /* call 0x00027E22 */

loc_0037A6BF: ;
    goto loc_0037A6C3;

loc_0037A6C1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0037A6C3: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = eax;
    MEM32(esi + edi * 4 + 0x148) = eax;
    PUSH32(esp, 0x0037A6D3u); RECOMP_ABI_CALL(0x0002CDA5u, sub_0002CDA5); /* call 0x0002CDA5 */

loc_0037A6D3: ;
    POP32(esp, ebp);

loc_0037A6D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0037A700
 * Original: 0x0037A700 - 0x0037A73E (62 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037A700: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0037A727; /* jle: less or equal (signed <=) */

loc_0037A70C: ;
    PUSH32(esp, ebx);
    ebx = esi + 4;

loc_0037A710: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037A71C; /* je: equal / zero */

loc_0037A716: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0037A71Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037A71Au); } /* indirect call */
    }

loc_0037A71C: ;
    eax = MEM32(esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037A710; /* jl: less (signed <) */

loc_0037A726: ;
    POP32(esp, ebx);

loc_0037A727: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037A737; /* je: equal / zero */

loc_0037A72E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037A734u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0037A734: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0037A737: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037A750
 * Original: 0x0037A750 - 0x0037A75B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037A750: ;
    ecx = MEM32(ecx + 0x788);
    g_seh_ebp = ebp; sub_00022021(); return; /* tail jmp 0x00022021 */

}

/**
 * sub_0037A760
 * Original: 0x0037A760 - 0x0037A76F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037A760: ;
    eax = MEM32(0x901E30);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x18) (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    esp += 4; return; /* ret */

}

/**
 * sub_0037A780
 * Original: 0x0037A780 - 0x0037A78F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A780(void)
{

loc_0037A780: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037A7A0
 * Original: 0x0037A7A0 - 0x0037A817 (119 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037A7A0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx + 0x778);
    MEM32(esp) = 1;
    MEM32(esp + 4) = 2;
    MEM32(esp + 8) = 7;
    MEM32(esp + 0xC) = 8;
    MEM32(esp + 0x10) = 5;
    MEM32(esp + 0x14) = 0x16;
    MEM32(esp + 0x18) = 0x17;
    MEM32(esp + 0x1C) = 0x2E;
    MEM32(esp + 0x20) = 0x2F;
    MEM32(esp + 0x24) = 0x40;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0037A800: ;
    _fa = (uint32_t)(MEM32(esp + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + eax * 4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037A811; /* je: equal / zero */

loc_0037A805: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0037A800; /* jb: below (unsigned <) */

loc_0037A80B: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0037A811: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0037A840
 * Original: 0x0037A840 - 0x0037A84B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A840(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037A840: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x0037A847u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_0037A847: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0037A850
 * Original: 0x0037A850 - 0x0037A8B1 (97 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A850(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037A850: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x10) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x898) = ecx;
    MEM32(eax + 0x89C) = ecx;
    MEM8(eax + 0xA2C) = LO8(ecx);
    MEM32(eax) = 0x832274;
    edx = MEM32(0x901E28);
    ecx = MEM32(edx + 0x124);
    edx = ZX16(MEM16(ecx + 2));
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x10));
    ecx = edx + ecx + 8;
    MEM32(eax + 0xA30) = ecx;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0037A8D0
 * Original: 0x0037A8D0 - 0x0037A8D3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A8D0(void)
{

loc_0037A8D0: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0037A8E0
 * Original: 0x0037A8E0 - 0x0037A90C (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A8E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037A8E0: ;
    eax = MEM32(ecx + 0x898);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    ecx = MEM32(ecx + 0x89C);
    ecx = MEM32(ecx + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_0037A909; /* je: equal / zero */

loc_0037A8F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037A909; /* je: equal / zero */

loc_0037A8FC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037A909; /* je: equal / zero */

loc_0037A901: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037A909; /* je: equal / zero */

loc_0037A906: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0037A909: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0037A920
 * Original: 0x0037A920 - 0x0037A958 (56 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0037A920: ;
    eax = MEM32(esp + 8);
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x80000007u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    if ((_fas >= 0)) goto loc_0037A934; /* jns: not sign (positive) */

loc_0037A92F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0037A934: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = 0; /* logical op clears CF */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 1;
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(esp + 8);
    if (((3) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((3) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = (uint32_t)(int32_t)SMEM8(eax + ecx);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0037A970
 * Original: 0x0037A970 - 0x0037A9A3 (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037A970: ;
    eax = MEM32(ecx + 0x898);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037A9A0; /* je: equal / zero */

loc_0037A97A: ;
    ecx = MEM32(ecx + 0x89C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037A9A0; /* je: equal / zero */

loc_0037A984: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    edx = 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0037A99D; /* jne: not equal / not zero */

loc_0037A992: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037A99D; /* jne: not equal / not zero */

loc_0037A997: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0037A99D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0037A9A0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0037A9B0
 * Original: 0x0037A9B0 - 0x0037A9E8 (56 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037A9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037A9B0: ;
    eax = MEM32(0x901E28);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x2D8);
    PUSH32(esp, 0x0037A9C3u); RECOMP_ABI_CALL(0x00019E62u, sub_00019E62); /* call 0x00019E62 */

loc_0037A9C3: ;
    ecx = MEM32(0x901E28);
    edx = MEM32(ecx + 0x2D8);
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(edx + 0x14);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0037A9E0; /* je: equal / zero */

loc_0037A9DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0037A9E0; /* jle: less or equal (signed <=) */

loc_0037A9DE: ;
    eax = ecx;

loc_0037A9E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) eax = ecx; /* cmove */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_0037AA00
 * Original: 0x0037AA00 - 0x0037AA56 (86 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037AA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037AA00: ;
    eax = MEM32(0x901E28);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(eax + 0x767));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037AA16; /* je: equal / zero */

loc_0037AA12: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0037AA16: ;
    ecx = MEM32(eax + 0x2D8);
    PUSH32(esp, 0x0037AA21u); RECOMP_ABI_CALL(0x00019E62u, sub_00019E62); /* call 0x00019E62 */

loc_0037AA21: ;
    ecx = MEM32(0x901E28);
    edx = MEM32(ecx + 0x2D8);
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(edx + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_0037AA3D; /* je: equal / zero */

loc_0037AA37: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0037AA3D; /* jle: less or equal (signed <=) */

loc_0037AA3B: ;
    eax = ecx;

loc_0037AA3D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0037AA4F; /* jge: greater or equal (signed >=) */

loc_0037AA41: ;
    SET_LO8(eax, MEM8(esi + 0xA2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037AA4F; /* jne: not equal / not zero */

loc_0037AA4B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0037AA4F: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0037AA70
 * Original: 0x0037AA70 - 0x0037AA8A (26 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037AA70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037AA70: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x8322B0;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM8(eax + 0x14) = LO8(ecx);
    MEM8(eax + 0x15) = LO8(ecx);
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0037AA90
 * Original: 0x0037AA90 - 0x0037AA93 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037AA90(void)
{

loc_0037AA90: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037AAA0
 * Original: 0x0037AAA0 - 0x0037AAA3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037AAA0(void)
{

loc_0037AAA0: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0037AAB0
 * Original: 0x0037AAB0 - 0x0037AACF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037AAB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037AAB0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x832224;
    if (TEST_Z(_fa, _fb)) goto loc_0037AAC9; /* je: equal / zero */

loc_0037AAC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037AAC6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0037AAC6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0037AAC9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037AAE0
 * Original: 0x0037AAE0 - 0x0037AB8A (170 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037AAE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_0037AAE0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEMF(0x901DFC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x832120)); /* movss */
    MEM32(esi) = 0x8322B0;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = edi;
    MEM8(esi + 0x14) = LO8(ecx);
    MEM8(esi + 0x15) = LO8(ecx);
    MEM32(esi + 8) = ecx;
    MEM8(esi + 0x16) = LO8(ecx);
    MEMF(0x901DEC) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0037AB83; /* jne: not equal / not zero */

loc_0037AB2D: ;
    PUSH32(esp, 0x0037AB32u); RECOMP_ABI_CALL(0x00028912u, sub_00028912); /* call 0x00028912 */

loc_0037AB32: ;
    ecx = eax + 0xD60;
    PUSH32(esp, 0x0037AB3Du); RECOMP_ABI_CALL(0x0001209Fu, sub_0001209F); /* call 0x0001209F */

loc_0037AB3D: ;
    MEM32(esi + 0x10) = eax;
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x8C5EC0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = esi;
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0037AB85; /* jp: parity */

loc_0037AB53: ;
    xmm0 = XMM_SCALAR(MEMF(0x9023DC)); /* movss */
    MEMF(0x901DFC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x902304)); /* movss */
    POP32(esp, edi);
    MEM32(esi + 8) = 0x14;
    MEM8(esi + 0x16) = 1;
    MEMF(0x901DEC) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0037AB83: ;
    eax = esi;

loc_0037AB85: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0037ABC0
 * Original: 0x0037ABC0 - 0x0037ABD7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037ABC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037ABC0: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037ABD6; /* jne: not equal / not zero */

loc_0037ABC6: ;
    PUSH32(esp, 0x0037ABCBu); RECOMP_ABI_CALL(0x00028912u, sub_00028912); /* call 0x00028912 */

loc_0037ABCB: ;
    ecx = eax + 0xD60;
    g_seh_ebp = ebp; sub_00033E57(); return; /* tail jmp 0x00033E57 */

loc_0037ABD6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037ABE0
 * Original: 0x0037ABE0 - 0x0037AC51 (113 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037ABE0(void)
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

loc_0037ABE0: ;
    SET_LO8(eax, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037ABEC; /* je: equal / zero */

loc_0037ABE7: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_0037ABEC: ;
    SET_LO8(eax, MEM8(ecx + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037ABF8; /* je: equal / zero */

loc_0037ABF3: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_0037ABF8: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037AC4B; /* je: equal / zero */

loc_0037AC02: ;
    eax = MEM32(ecx + 0xC);
    _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0037AC4B; /* ja: above (unsigned >) */

loc_0037AC0D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x37AC54); /* switch: 4 entries, 3 targets */
    if (_jt == 0x0037AC14u) goto loc_0037AC14;
    if (_jt == 0x0037AC1Fu) goto loc_0037AC1F;
    if (_jt == 0x0037AC3Fu) goto loc_0037AC3F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0037AC14: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0037AC4B; /* jg: greater (signed >) */

loc_0037AC19: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0037AC1F: ;
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 8); /* cvtsi2ss */
    xmm2 = XMM_SCALAR(MEMF(0x832128)); /* movss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0037AC4B; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0037AC39: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0037AC3F: ;
    eax = MEM32(ecx + 0x10);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037AC19; /* jl: less (signed <) */

loc_0037AC4B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037AD20
 * Original: 0x0037AD20 - 0x0037AD6C (76 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037AD20(void)
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

loc_0037AD20: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0037AD3A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0037AD31: ;
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_0037AD3A: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0037AD4B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0037AD45: ;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */

loc_0037AD4B: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0037AD80
 * Original: 0x0037AD80 - 0x0037ADAA (42 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037AD80(void)
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

loc_0037AD80: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0037AD93; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0xC)) */

loc_0037AD8D: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_0037AD93: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x10)); /* fdiv dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0037ADC0
 * Original: 0x0037ADC0 - 0x0037ADC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037ADC0(void)
{

loc_0037ADC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037ADD0
 * Original: 0x0037ADD0 - 0x0037ADD1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037ADD0(void)
{

loc_0037ADD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037ADE0
 * Original: 0x0037ADE0 - 0x0037ADE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037ADE0(void)
{

loc_0037ADE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037ADF0
 * Original: 0x0037ADF0 - 0x0037AE06 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0037ADF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037ADF0: ;
    SET_LO8(edx, MEM8(ecx + 0x14));
    eax = 1;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037AE03; /* jne: not equal / not zero */

loc_0037ADFC: ;
    SET_LO8(edx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037AE05; /* je: equal / zero */

loc_0037AE03: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0037AE05: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037AE10
 * Original: 0x0037AE10 - 0x0037AE17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037AE10(void)
{

loc_0037AE10: ;
    MEM32(ecx) = 0x832224;
    esp += 4; return; /* ret */

}

/**
 * sub_0037AE20
 * Original: 0x0037AE20 - 0x0037AE30 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037AE20(void)
{

loc_0037AE20: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0037AE40
 * Original: 0x0037AE40 - 0x0037AE61 (33 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037AE40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037AE40: ;
    edx = MEM32(ecx + 4);
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 4) = edx;
    edx = MEM32(ecx);
    MEM32(ecx + edx * 4 + 8) = eax;
    eax = MEM32(ecx);
    edx = MEM32(esp + 8);
    MEM32(ecx + eax * 4 + 0x58) = edx;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0037AE70
 * Original: 0x0037AE70 - 0x0037AEAF (63 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037AE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037AE70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x0037AE7Au); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_0037AE7A: ;
    edi = MEM32(ebx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebx + 4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebx + 4)); }
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0037AEA0; /* jle: less or equal (signed <=) */

loc_0037AE87: ;
    esi = ebx + 8;
    /* nop */

loc_0037AE90: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037AEA7; /* jl: less (signed <) */

loc_0037AE96: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037AE90; /* jl: less (signed <) */

loc_0037AEA0: ;
    eax = MEM32(ebx + 0x58);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0037AEA7: ;
    eax = MEM32(ebx + eax * 4 + 0x58);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0037AEC0
 * Original: 0x0037AEC0 - 0x0037AEDA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037AEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037AEC0: ;
    PUSH32(esp, 0x0037AEC5u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_0037AEC5: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x64;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    esp += 4; return; /* ret */

}

/**
 * sub_0037AEE0
 * Original: 0x0037AEE0 - 0x0037AEEE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037AEE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037AEE0: ;
    PUSH32(esp, 0x0037AEE5u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_0037AEE5: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 4)); }
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0037AF00
 * Original: 0x0037AF00 - 0x0037AF18 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037AF00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037AF00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037AF06u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_0037AF06: ;
    ecx = MEM32(esp + 8);
    esi = ecx + ecx + 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    eax = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_0037AF20
 * Original: 0x0037AF20 - 0x0037AF23 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037AF20(void)
{

loc_0037AF20: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037AF30
 * Original: 0x0037AF30 - 0x0037AF54 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037AF30(void)
{

loc_0037AF30: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x788);
    PUSH32(esp, 0x0037AF3Eu); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_0037AF3E: ;
    MEM8(eax + 0x44) = 1;
    eax = MEM32(esi + 0x788);
    ecx = MEM32(eax + 0xD4);
    MEM8(ecx + 0x44) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0037AF60
 * Original: 0x0037AF60 - 0x0037AFA2 (66 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037AF60(void)
{

loc_0037AF60: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x788);
    ecx = MEM32(eax + 0xD4);
    MEM8(ecx + 0x44) = 1;
    ecx = MEM32(esi + 0x788);
    PUSH32(esp, 0x0037AF7Eu); RECOMP_ABI_CALL(0x0002B5E5u, sub_0002B5E5); /* call 0x0002B5E5 */

loc_0037AF7E: ;
    MEM8(eax + 0x46) = 0;
    ecx = MEM32(esi + 0x788);
    PUSH32(esp, 0x0037AF8Du); RECOMP_ABI_CALL(0x0002B5E5u, sub_0002B5E5); /* call 0x0002B5E5 */

loc_0037AF8D: ;
    MEM8(eax + 0x45) = 0;
    ecx = MEM32(esi + 0x788);
    PUSH32(esp, 0x0037AF9Cu); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_0037AF9C: ;
    MEM8(eax + 0x44) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0037AFC0
 * Original: 0x0037AFC0 - 0x0037AFF3 (51 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037AFC0(void)
{

loc_0037AFC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x788);
    ecx = MEM32(eax + 0xD4);
    MEM8(ecx + 0x44) = 0;
    ecx = MEM32(esi + 0x788);
    PUSH32(esp, 0x0037AFDEu); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_0037AFDE: ;
    MEM8(eax + 0x44) = 0;
    ecx = MEM32(esi + 0x788);
    PUSH32(esp, 0x0037AFEDu); RECOMP_ABI_CALL(0x0002B5E5u, sub_0002B5E5); /* call 0x0002B5E5 */

loc_0037AFED: ;
    MEM8(eax + 0x45) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0037B000
 * Original: 0x0037B000 - 0x0037B00E (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B000(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037B000: ;
    ecx = MEM32(esp + 4);
    eax = 0x4A;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037B020
 * Original: 0x0037B020 - 0x0037B041 (33 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B020(void)
{

loc_0037B020: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x77C) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x780) = edx;
    MEM32(ecx + 0x784) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0037B050
 * Original: 0x0037B050 - 0x0037B066 (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B050(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037B050: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x77C) = eax;
    MEM32(ecx + 0x780) = eax;
    MEM32(ecx + 0x784) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0037B070
 * Original: 0x0037B070 - 0x0037B090 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037B070: ;
    SET_LO8(edx, MEM8(ecx + 0x764));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037B084; /* je: equal / zero */

loc_0037B07C: ;
    _fa = (uint32_t)(MEM8(ecx + 0x88D)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x88D), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037B08F; /* jne: not equal / not zero */

loc_0037B084: ;
    MEM8(ecx + 0x767) = LO8(eax);
    g_seh_ebp = ebp; sub_00036625(); return; /* tail jmp 0x00036625 */

loc_0037B08F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037B0A0
 * Original: 0x0037B0A0 - 0x0037B0CF (47 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B0A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037B0A0: ;
    ecx = MEM32(esp + 4);
    edx = (uint32_t)(int32_t)SMEM16(ecx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0037B0C5; /* jle: less or equal (signed <=) */

loc_0037B0AF: ;
    esi = MEM32(esp + 0x10);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0037B0B6: ;
    edi = (uint32_t)(int32_t)SMEM16(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037B0CA; /* je: equal / zero */

loc_0037B0BD: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037B0B6; /* jl: less (signed <) */

loc_0037B0C5: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0037B0CA: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0037B0E0
 * Original: 0x0037B0E0 - 0x0037B10D (45 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B0E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037B0E0: ;
    _fa = (uint32_t)(MEM8(ecx + 0x760)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x760), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037B10C; /* jne: not equal / not zero */

loc_0037B0E9: ;
    SET_LO8(eax, MEM8(ecx + 0x761));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037B10C; /* jne: not equal / not zero */

loc_0037B0F3: ;
    _fa = (uint32_t)(MEM32(ecx + 0x758)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x758), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037B10C; /* jne: not equal / not zero */

loc_0037B0FC: ;
    PUSH32(esp, 0x0037B101u); RECOMP_ABI_CALL(0x00028912u, sub_00028912); /* call 0x00028912 */

loc_0037B101: ;
    ecx = eax + 0xD60;
    g_seh_ebp = ebp; sub_00033E57(); return; /* tail jmp 0x00033E57 */

loc_0037B10C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037B120
 * Original: 0x0037B120 - 0x0037B12B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037B120: ;
    ecx = MEM32(0x8FC1D0);
    g_seh_ebp = ebp; sub_00020028(); return; /* tail jmp 0x00020028 */

}

/**
 * sub_0037B130
 * Original: 0x0037B130 - 0x0037B146 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037B130: ;
    eax = MEM32(ecx + 0x778);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037B143; /* je: equal / zero */

loc_0037B13B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037B143; /* je: equal / zero */

loc_0037B140: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0037B143: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0037B150
 * Original: 0x0037B150 - 0x0037B15D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B150(void)
{

loc_0037B150: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x89C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037B160
 * Original: 0x0037B160 - 0x0037B163 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0037B160(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037B160: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0037B170
 * Original: 0x0037B170 - 0x0037B17E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037B170: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0037B190
 * Original: 0x0037B190 - 0x0037B1AA (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B190(void)
{

loc_0037B190: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx + 4);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(ecx);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037B1B0
 * Original: 0x0037B1B0 - 0x0037B1BA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B1B0(void)
{

loc_0037B1B0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037B1C0
 * Original: 0x0037B1C0 - 0x0037B215 (85 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037B1C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD378)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0037B1E0: ;
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037B209; /* jne: not equal / not zero */

loc_0037B1E5: ;
    eax = MEM32(esi);
    ebx = edx + 1;
    xmm2.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    ebx = (int32_t)xmm3.f[0]; /* cvttss2si */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi) = eax;

loc_0037B209: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037B1E0; /* jl: less (signed <) */

loc_0037B20F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0037B230
 * Original: 0x0037B230 - 0x0037B248 (24 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B230(void)
{

loc_0037B230: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 4); /* cvtsi2ss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 8); /* cvtsi2ss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0037B250
 * Original: 0x0037B250 - 0x0037B27F (47 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B250(void)
{

loc_0037B250: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037B290
 * Original: 0x0037B290 - 0x0037B2E0 (80 bytes, 15 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B290(void)
{

loc_0037B290: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0037B300
 * Original: 0x0037B300 - 0x0037B366 (102 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B300(void)
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

loc_0037B300: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x18);
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi); /* subss */
    edx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    PUSH32(esp, edx);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edi = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0037B337u); RECOMP_ABI_CALL(0x00024EB1u, sub_00024EB1); /* call 0x00024EB1 */

loc_0037B337: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0037B361; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x10)) */

loc_0037B346: ;
    ecx = MEM32(esi + 0x20);
    fp_pop(); /* fstp st(0) */
    edx = MEM32(esi + 0x1C);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0037B35Eu); RECOMP_ABI_CALL(0x00024EB1u, sub_00024EB1); /* call 0x00024EB1 */

loc_0037B35E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0037B361: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0037B380
 * Original: 0x0037B380 - 0x0037B405 (133 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B380(void)
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

loc_0037B380: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x901E28);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x788);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0037B397u); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_0037B397: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x1C); /* ucomiss */
    edi = eax;
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0037B3B8; /* jp: parity */

loc_0037B3AE: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x20); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0037B3F3; /* jnp: not parity */

loc_0037B3B8: ;
    ecx = edi + 0x78;
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0037B3C5u); RECOMP_ABI_CALL(0x0001BE6Au, sub_0001BE6A); /* call 0x0001BE6A */

loc_0037B3C5: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x0037B3CEu); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_0037B3CE: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    ecx = esp + 0xC;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0037B3E3u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0037B3E3: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0037B3EFu); RECOMP_ABI_CALL(0x00011A6Eu, sub_00011A6E); /* call 0x00011A6E */

loc_0037B3EF: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0037B3F3: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0037B3FFu); RECOMP_ABI_CALL(0x0001B12Cu, sub_0001B12C); /* call 0x0001B12C */

loc_0037B3FF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
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
 * sub_0037B430
 * Original: 0x0037B430 - 0x0037B4C5 (149 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B430(void)
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

loc_0037B430: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x901E28);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x788);
    PUSH32(esp, 0x0037B446u); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_0037B446: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x78)) >> 32) & 1);
    eax = eax + 0x78;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0037B453u); RECOMP_ABI_CALL(0x0001BE6Au, sub_0001BE6A); /* call 0x0001BE6A */

loc_0037B453: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0037B45Cu); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_0037B45C: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    ecx = esp + 8;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0037B471u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0037B471: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm1 = xmm0; /* movaps */
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0x1C); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0037B4AB; /* jp: parity */

loc_0037B483: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0x20); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0037B4AB; /* jp: parity */

loc_0037B48D: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 4); /* subss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0037B4AB: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0037B4B7u); RECOMP_ABI_CALL(0x00011A6Eu, sub_00011A6E); /* call 0x00011A6E */

loc_0037B4B7: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    POP32(esp, esi);
    fp_st1() = RECOMP_FP_PC(fp_top() / fp_st1()); fp_pop(); /* fdivrp st(1) */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
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
 * sub_0037B4F0
 * Original: 0x0037B4F0 - 0x0037B551 (97 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0037B4F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x901E28);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x788);
    PUSH32(esp, 0x0037B506u); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_0037B506: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x78)) >> 32) & 1);
    eax = eax + 0x78;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0037B513u); RECOMP_ABI_CALL(0x0001BE6Au, sub_0001BE6A); /* call 0x0001BE6A */

loc_0037B513: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0037B51Cu); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_0037B51C: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    ecx = esp + 8;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0037B52Fu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0037B52F: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x7AA820)); /* fsub dword ptr [0x7aa820] */
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_0037B54B; /* jb: below (unsigned <) */

loc_0037B542: ;
    eax = 1;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0037B54B: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
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
 * sub_0037B570
 * Original: 0x0037B570 - 0x0037B5EE (126 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B570(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037B570: ;
    eax = MEM32(0x901E28);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 0x788);
    PUSH32(esp, 0x0037B587u); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_0037B587: ;
    ecx = (int32_t)MEMF(edi); /* cvttss2si */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    esi = eax;
    PUSH32(esp, 0x0037B59Bu); RECOMP_ABI_CALL(0x00031AD0u, sub_00031AD0); /* call 0x00031AD0 */

loc_0037B59B: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0037B5A7u); RECOMP_ABI_CALL(0x0001D2B5u, sub_0001D2B5); /* call 0x0001D2B5 */

loc_0037B5A7: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0037B5B0u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0037B5B0: ;
    eax = MEM32(edi + 0x18);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0037B5BBu); RECOMP_ABI_CALL(0x0001B12Cu, sub_0001B12C); /* call 0x0001B12C */

loc_0037B5BB: ;
    ecx = esi + 0x78;
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0037B5C8u); RECOMP_ABI_CALL(0x0001BE6Au, sub_0001BE6A); /* call 0x0001BE6A */

loc_0037B5C8: ;
    ecx = MEM32(esi + 0x48);
    edx = esp + 8;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x540) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x540;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0037B5DBu); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_0037B5DB: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0037B5E4u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0037B5E4: ;
    POP32(esp, edi);
    MEM8(esi + 0x44) = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0037B610
 * Original: 0x0037B610 - 0x0037B633 (35 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B610(void)
{

loc_0037B610: ;
    eax = MEM32(0x901E28);
    ecx = MEM32(eax + 0x788);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037B621u); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_0037B621: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0037B62Du); RECOMP_ABI_CALL(0x000307D9u, sub_000307D9); /* call 0x000307D9 */

loc_0037B62D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037B640
 * Original: 0x0037B640 - 0x0037B666 (38 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B640(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037B640: ;
    eax = MEM32(0x901E28);
    ecx = MEM32(eax + 0x788);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037B651u); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_0037B651: ;
    esi = MEM32(esp + 8);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x78;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0037B660u); RECOMP_ABI_CALL(0x0001BE6Au, sub_0001BE6A); /* call 0x0001BE6A */

loc_0037B660: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037B670
 * Original: 0x0037B670 - 0x0037B683 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B670(void)
{

loc_0037B670: ;
    eax = MEM32(ecx + 0x1210);
    ecx = MEM32(ecx + 0x1208);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037B682u); RECOMP_ABI_CALL(0x0002BA09u, sub_0002BA09); /* call 0x0002BA09 */

loc_0037B682: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037B690
 * Original: 0x0037B690 - 0x0037B792 (258 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037B690: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x1210);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(edi + 0x121C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0037B6DE; /* je: equal / zero */

loc_0037B6A7: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037B6B5; /* jne: not equal / not zero */

loc_0037B6AE: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037B6DE; /* je: equal / zero */

loc_0037B6B5: ;
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037B6CA; /* jne: not equal / not zero */

loc_0037B6BC: ;
    ecx = MEM32(edi + 0x1208);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037B6CAu); RECOMP_ABI_CALL(0x0003591Eu, sub_0003591E); /* call 0x0003591E */

loc_0037B6CA: ;
    eax = MEM32(edi + 0x1210);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037B6E5; /* jne: not equal / not zero */

loc_0037B6D7: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037B6E5; /* jne: not equal / not zero */

loc_0037B6DE: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0037B6E5: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(edi + 0x1218) = xmm0.f[0]; /* movss */
    eax = MEM32(0x901E28);
    ecx = MEM32(eax + 0x788);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037B706u); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_0037B706: ;
    ecx = MEM32(edi + 0x1210);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x1208);
    PUSH32(esp, 1);
    esi = eax;
    PUSH32(esp, 0x0037B71Cu); RECOMP_ABI_CALL(0x0001A407u, sub_0001A407); /* call 0x0001A407 */

loc_0037B71C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0037B729u); RECOMP_ABI_CALL(0x00031AD0u, sub_00031AD0); /* call 0x00031AD0 */

loc_0037B729: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0037B731u); RECOMP_ABI_CALL(0x0001D2B5u, sub_0001D2B5); /* call 0x0001D2B5 */

loc_0037B731: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0037B73Au); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0037B73A: ;
    edi = MEM32(esi + 0x48);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0037B74Au); RECOMP_ABI_CALL(0x00031AD0u, sub_00031AD0); /* call 0x00031AD0 */

loc_0037B74A: ;
    PUSH32(esp, eax);
    ecx = edi + 0x540;
    PUSH32(esp, 0x0037B756u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_0037B756: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0037B75Fu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0037B75F: ;
    PUSH32(esp, 0x3F333333);
    ecx = esi;
    PUSH32(esp, 0x0037B76Bu); RECOMP_ABI_CALL(0x0001B12Cu, sub_0001B12C); /* call 0x0001B12C */

loc_0037B76B: ;
    MEM8(esi + 0x44) = 1;
    edx = MEM32(0x901E28);
    ecx = MEM32(edx + 0x788);
    PUSH32(esp, 0x0037B780u); RECOMP_ABI_CALL(0x00031A1Cu, sub_00031A1C); /* call 0x00031A1C */

loc_0037B780: ;
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x0037B78Au); RECOMP_ABI_CALL(0x0003820Eu, sub_0003820E); /* call 0x0003820E */

loc_0037B78A: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0037B7E0
 * Original: 0x0037B7E0 - 0x0037B809 (41 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B7E0(void)
{

loc_0037B7E0: ;
    ecx = MEM32(ecx + 0x1208);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0037B7EFu); RECOMP_ABI_CALL(0x0001A407u, sub_0001A407); /* call 0x0001A407 */

loc_0037B7EF: ;
    eax = MEM32(0x901E28);
    ecx = MEM32(eax + 0x788);
    PUSH32(esp, 0x0037B7FFu); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_0037B7FF: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x0037B808u); RECOMP_ABI_CALL(0x000268DDu, sub_000268DD); /* call 0x000268DD */

loc_0037B808: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037B820
 * Original: 0x0037B820 - 0x0037B84B (43 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037B820: ;
    SET_LO8(eax, MEM8(ecx + 0x121C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037B84A; /* jne: not equal / not zero */

loc_0037B82A: ;
    MEM8(ecx + 0x121C) = 1;
    eax = MEM32(0x901E28);
    ecx = MEM32(eax + 0x788);
    PUSH32(esp, 0x0037B841u); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_0037B841: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x0037B84Au); RECOMP_ABI_CALL(0x0001B12Cu, sub_0001B12C); /* call 0x0001B12C */

loc_0037B84A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037B860
 * Original: 0x0037B860 - 0x0037B894 (52 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037B860: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x121C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037B892; /* je: equal / zero */

loc_0037B86D: ;
    eax = MEM32(0x901E28);
    ecx = MEM32(eax + 0x788);
    PUSH32(esp, 0x0037B87Du); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_0037B87D: ;
    ecx = MEM32(esi + 0x1218);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0037B88Bu); RECOMP_ABI_CALL(0x0001B12Cu, sub_0001B12C); /* call 0x0001B12C */

loc_0037B88B: ;
    MEM8(esi + 0x121C) = 0;

loc_0037B892: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0037B8B0
 * Original: 0x0037B8B0 - 0x0037B8D1 (33 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037B8B0: ;
    ecx = MEM32(ecx + 0x1208);
    PUSH32(esp, 0x0037B8BBu); RECOMP_ABI_CALL(0x0002DD86u, sub_0002DD86); /* call 0x0002DD86 */

loc_0037B8BB: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    SET_LO8(eax, LO8(edx));
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0037B8E0
 * Original: 0x0037B8E0 - 0x0037B907 (39 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B8E0(void)
{

loc_0037B8E0: ;
    ecx = MEM32(ecx + 0x1208);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037B8F3u); RECOMP_ABI_CALL(0x0002BA09u, sub_0002BA09); /* call 0x0002BA09 */

loc_0037B8F3: ;
    MEM32(esi) = 0;
    MEM32(esi + 0x90) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037B910
 * Original: 0x0037B910 - 0x0037B961 (81 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037B910: ;
    ecx = MEM32(ecx + 0x120C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037B920u); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_0037B920: ;
    esi = eax;
    eax = esi + 0x78;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0037B92Fu); RECOMP_ABI_CALL(0x0001BE6Au, sub_0001BE6A); /* call 0x0001BE6A */

loc_0037B92F: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0037B93Bu); RECOMP_ABI_CALL(0x000307D9u, sub_000307D9); /* call 0x000307D9 */

loc_0037B93B: ;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0037B945u); RECOMP_ABI_CALL(0x0001D9DBu, sub_0001D9DB); /* call 0x0001D9DB */

loc_0037B945: ;
    ecx = esp + 8;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x0037B950u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0037B950: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0037B959u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0037B959: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0037B980
 * Original: 0x0037B980 - 0x0037BA10 (144 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037B980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0037B980: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEM32(esp) = eax;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = edx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0037B9BD; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0037B9A8: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 8); /* subss */
    goto loc_0037B9C3;

loc_0037B9BD: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_0037B9C3: ;
    xmm3 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x20); /* subss */
    eax = MEM32(esp + 0x10);
    MEMF(esp) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    edx = MEM32(esp);
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x24); /* subss */
    ecx = eax;
    MEM32(ecx) = edx;
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEM32(ecx + 4) = edx;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0037BA40
 * Original: 0x0037BA40 - 0x0037BA75 (53 bytes, 13 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BA40(void)
{

loc_0037BA40: ;
    eax = MEM32(esp + 4);
    SET_LO16(edx, MEM16(esp + 8));
    MEM32(ecx) = eax;
    SET_LO16(eax, MEM16(esp + 0xC));
    MEM16(ecx + 8) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x10));
    MEM16(ecx + 0xA) = LO16(eax);
    MEM16(ecx + 0xC) = LO16(edx);
    eax = MEM32(0x901E40);
    edx = MEM32(eax + 0x1208);
    eax = MEM32(edx + 0x1C);
    MEM32(ecx + 4) = eax;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0037BA90
 * Original: 0x0037BA90 - 0x0037BAC4 (52 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BA90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037BA90: ;
    SET_LO16(edx, MEM16(esp + 4));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = 0x10;
    MEM16(ecx + 8) = LO16(eax);
    MEM16(ecx + 0xA) = LO16(edx);
    MEM16(ecx + 0xC) = LO16(eax);
    eax = MEM32(0x901E40);
    edx = MEM32(eax + 0x1208);
    eax = MEM32(edx + 0x1C);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 0x10) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037BAE0
 * Original: 0x0037BAE0 - 0x0037BB17 (55 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BAE0(void)
{

loc_0037BAE0: ;
    SET_LO16(eax, MEM16(esp + 4));
    MEM32(ecx) = 6;
    MEM16(ecx + 8) = 0xE;
    MEM16(ecx + 0xA) = LO16(eax);
    MEM16(ecx + 0xC) = 0;
    edx = MEM32(0x901E40);
    eax = MEM32(edx + 0x1208);
    edx = MEM32(eax + 0x1C);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 0x10) = 2;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037BB30
 * Original: 0x0037BB30 - 0x0037BB40 (16 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0037BB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037BB30: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037BB3D; /* je: equal / zero */

loc_0037BB36: ;
    eax = MEM32(ecx + 0xC);
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

loc_0037BB3D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0037BB50
 * Original: 0x0037BB50 - 0x0037BB70 (32 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BB50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037BB50: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037BB6D; /* je: equal / zero */

loc_0037BB56: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037BB6A; /* jne: not equal / not zero */

loc_0037BB5D: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037BB6A; /* jne: not equal / not zero */

loc_0037BB64: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0037BB6A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0037BB6D: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0037BB80
 * Original: 0x0037BB80 - 0x0037BB95 (21 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BB80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0037BB80: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0037BB92; /* je: equal / zero */

loc_0037BB86: ;
    eax = MEM32(eax + 0x1C);
    _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 4)));
    eax = eax - MEM32(ecx + 4);
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

loc_0037BB92: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0037BBA0
 * Original: 0x0037BBA0 - 0x0037BBC1 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BBA0(void)
{

loc_0037BBA0: ;
    eax = MEM32(0x901E28);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x788);
    PUSH32(esp, 0x0037BBB3u); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_0037BBB3: ;
    ecx = MEM32(eax + 0x48);
    edx = MEM32(ecx + 0x1C);
    MEM32(esi + 0x90) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0037BBD0
 * Original: 0x0037BBD0 - 0x0037BBE7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BBD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037BBD0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037BBE6; /* jl: less (signed <) */

loc_0037BBDC: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0037BBE6; /* jg: greater (signed >) */

loc_0037BBE4: ;
    eax = ecx;

loc_0037BBE6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037BBF0
 * Original: 0x0037BBF0 - 0x0037BC01 (17 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BBF0(void)
{

loc_0037BBF0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x94);
    eax = eax + ecx + 0x24;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037BC10
 * Original: 0x0037BC10 - 0x0037BC22 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BC10(void)
{

loc_0037BC10: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x0037BC1Eu); RECOMP_ABI_CALL(0x0001A64Bu, sub_0001A64B); /* call 0x0001A64B */

loc_0037BC1E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0037BC30
 * Original: 0x0037BC30 - 0x0037BC42 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BC30(void)
{

loc_0037BC30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x0037BC3Eu); RECOMP_ABI_CALL(0x0001A64Bu, sub_0001A64B); /* call 0x0001A64B */

loc_0037BC3E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0037BC50
 * Original: 0x0037BC50 - 0x0037BC5E (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BC50(void)
{

loc_0037BC50: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(eax);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037BC70
 * Original: 0x0037BC70 - 0x0037BC94 (36 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BC70(void)
{

loc_0037BC70: ;
    ecx = MEM32(ecx + 4);
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    esi = MEM32(ecx + 8);
    MEM32(edx + 8) = esi;
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037BCA0
 * Original: 0x0037BCA0 - 0x0037BCAE (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BCA0(void)
{

loc_0037BCA0: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(eax);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037BCC0
 * Original: 0x0037BCC0 - 0x0037BCDE (30 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BCC0(void)
{

loc_0037BCC0: ;
    ecx = MEM32(ecx + 4);
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037BCF0
 * Original: 0x0037BCF0 - 0x0037BCF4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BCF0(void)
{

loc_0037BCF0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0037BD00
 * Original: 0x0037BD00 - 0x0037BD0F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BD00(void)
{

loc_0037BD00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037BD0Au); RECOMP_ABI_CALL(0x0002A8E3u, sub_0002A8E3); /* call 0x0002A8E3 */

loc_0037BD0A: ;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037BD20
 * Original: 0x0037BD20 - 0x0037BD47 (39 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BD20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037BD20: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x0037BD34u); RECOMP_ABI_CALL(0x0002A8E3u, sub_0002A8E3); /* call 0x0002A8E3 */

loc_0037BD34: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0037BD40u); RECOMP_ABI_CALL(0x0002886Du, sub_0002886D); /* call 0x0002886D */

loc_0037BD40: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037BD50
 * Original: 0x0037BD50 - 0x0037BD6F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BD50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037BD50: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x832208;
    if (TEST_Z(_fa, _fb)) goto loc_0037BD69; /* je: equal / zero */

loc_0037BD60: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037BD66u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0037BD66: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0037BD69: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037BD80
 * Original: 0x0037BD80 - 0x0037BD8D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BD80(void)
{

loc_0037BD80: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x0037BD8Au); RECOMP_ABI_CALL(0x0002A8E3u, sub_0002A8E3); /* call 0x0002A8E3 */

loc_0037BD8A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037BD90
 * Original: 0x0037BD90 - 0x0037BDEE (94 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BD90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037BD90: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx + 0xC);
    eax = MEM32(ebx + 4);
    PUSH32(esp, edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0037BDD0; /* jle: less or equal (signed <=) */

loc_0037BDA8: ;
    ebp = MEM32(esp + 0x24);
    /* nop */

loc_0037BDB0: ;
    eax = esi + 2;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0037BDBDu); RECOMP_ABI_CALL(0x0002A8E3u, sub_0002A8E3); /* call 0x0002A8E3 */

loc_0037BDBD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037BDDD; /* je: equal / zero */

loc_0037BDC1: ;
    ecx = ZX16(MEM16(esi));
    eax = MEM32(ebx + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    esi = esi + ecx * 2 + 2;
    if (CMP_L(_fas, _fbs)) goto loc_0037BDB0; /* jl: less (signed <) */

loc_0037BDD0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0037BDDD: ;
    edx = MEM32(esp + 0x18);
    eax = ZX16(MEM16(edx));
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
 * sub_0037BE10
 * Original: 0x0037BE10 - 0x0037BE72 (98 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BE10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037BE10: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xC);
    ecx = ZX16(MEM16(eax));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 4) = ecx;
    esi = eax + 4;
    if (CMP_LE(_fas, _fbs)) goto loc_0037BE57; /* jle: less or equal (signed <=) */

loc_0037BE2B: ;
    ebp = MEM32(esp + 0x24);
    /* nop */

loc_0037BE30: ;
    eax = esi + 2;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0037BE3Du); RECOMP_ABI_CALL(0x0002A8E3u, sub_0002A8E3); /* call 0x0002A8E3 */

loc_0037BE3D: ;
    ecx = MEM32(esp + 0x18);
    edx = ZX16(MEM16(ecx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037BE63; /* je: equal / zero */

loc_0037BE48: ;
    eax = ZX16(MEM16(esi));
    esi = esi + eax * 2 + 2;
    eax = MEM32(edi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037BE30; /* jl: less (signed <) */

loc_0037BE57: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0037BE63: ;
    MEM32(edi + 8) = ebx;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037BE90
 * Original: 0x0037BE90 - 0x0037BF69 (217 bytes, 79 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BE90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037BE90: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    SET_LO16(eax, MEM16(esi + 4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    MEM32(esp + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0037BF62; /* je: equal / zero */

loc_0037BEA9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0037BEE9; /* jbe: below or equal (unsigned <=) */

loc_0037BEB4: ;
    eax = MEM32(esi + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + edi * 2));
    ecx = ecx & 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax + ecx * 2;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0037BED0u); RECOMP_ABI_CALL(0x0002A8E3u, sub_0002A8E3); /* call 0x0002A8E3 */

loc_0037BED0: ;
    eax = ZX16(MEM16(esp + 0x12));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0037BEDE; /* jg: greater (signed >) */

loc_0037BED9: ;
    eax = 1;

loc_0037BEDE: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX16(MEM16(esi + 4));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037BEB4; /* jl: less (signed <) */

loc_0037BEE9: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0037BEEFu); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_0037BEEF: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), LO16(edi) (16-bit) */
    ebp = edx;
    if (CMP_BE(_fa, _fb)) goto loc_0037BF5F; /* jbe: below or equal (unsigned <=) */

loc_0037BEFF: ;
    /* nop */

loc_0037BF00: ;
    eax = MEM32(esi + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + edi * 2));
    ecx = ecx & 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax + ecx * 2;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0037BF1Cu); RECOMP_ABI_CALL(0x0002A8E3u, sub_0002A8E3); /* call 0x0002A8E3 */

loc_0037BF1C: ;
    eax = ZX16(MEM16(esp + 0x16));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0037BF2A; /* jg: greater (signed >) */

loc_0037BF25: ;
    eax = 1;

loc_0037BF2A: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037BF43; /* jl: less (signed <) */

loc_0037BF30: ;
    eax = ZX16(MEM16(esi + 4));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037BF00; /* jl: less (signed <) */

loc_0037BF39: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0037BF43: ;
    esi = MEM32(esi + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + edi * 2));
    ecx = ecx & 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = esi + ecx * 2;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0037BF5Fu); RECOMP_ABI_CALL(0x0001D071u, sub_0001D071); /* call 0x0001D071 */

loc_0037BF5F: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0037BF62: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037BFA0
 * Original: 0x0037BFA0 - 0x0037C00B (107 bytes, 43 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037BFA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037BFA0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    SET_LO16(eax, MEM16(edi + 4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037BFBA; /* jne: not equal / not zero */

loc_0037BFB1: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0037BFBA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0037BFF5; /* jbe: below or equal (unsigned <=) */

loc_0037BFC3: ;
    ebx = MEM32(esp + 0x24);

loc_0037BFC7: ;
    eax = MEM32(edi + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + esi * 2));
    ecx = ecx & 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax + ecx * 2;
    PUSH32(esp, edx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0037BFE3u); RECOMP_ABI_CALL(0x0002A8E3u, sub_0002A8E3); /* call 0x0002A8E3 */

loc_0037BFE3: ;
    eax = ZX16(MEM16(esp + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037C000; /* je: equal / zero */

loc_0037BFEC: ;
    ecx = ZX16(MEM16(edi + 4));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037BFC7; /* jl: less (signed <) */

loc_0037BFF5: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0037C000: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0037C030
 * Original: 0x0037C030 - 0x0037C034 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037C030(void)
{

loc_0037C030: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_0037C040
 * Original: 0x0037C040 - 0x0037C061 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037C040(void)
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

loc_0037C040: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037C055; /* je: equal / zero */

loc_0037C047: ;
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp) = ecx;
    fp_push((double)SMEM32(esp)); /* fild */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0037C055: ;
    MEM32(esp) = 0;
    fp_push((double)SMEM32(esp)); /* fild */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0037C070
 * Original: 0x0037C070 - 0x0037C080 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037C070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037C070: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0037C090
 * Original: 0x0037C090 - 0x0037C0EF (95 bytes, 19 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037C090(void)
{

loc_0037C090: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 8); /* addss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0xC); /* addss */
    MEMF(ecx + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(ecx + 0x10) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_0037C110
 * Original: 0x0037C110 - 0x0037C134 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0037C110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037C110: ;
    SET_LO8(edx, MEM8(ecx + 0x764));
    eax = 1;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037C127; /* je: equal / zero */

loc_0037C11F: ;
    _fa = (uint32_t)(MEM8(ecx + 0x88D)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x88D), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037C131; /* jne: not equal / not zero */

loc_0037C127: ;
    SET_LO8(edx, MEM8(ecx + 0x765));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037C133; /* je: equal / zero */

loc_0037C131: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0037C133: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037C140
 * Original: 0x0037C140 - 0x0037C165 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037C140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037C140: ;
    SET_LO8(edx, MEM8(ecx + 0x760));
    eax = 1;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037C159; /* jne: not equal / not zero */

loc_0037C14F: ;
    SET_LO8(edx, MEM8(ecx + 0x761));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037C15B; /* je: equal / zero */

loc_0037C159: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0037C15B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0037C170
 * Original: 0x0037C170 - 0x0037C182 (18 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037C170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037C170: ;
    MEM32(ecx) = 0xFFFFFFFFu;
    MEM32(ecx + 4) = 0;
    g_seh_ebp = ebp; sub_0002EE39(); return; /* tail jmp 0x0002EE39 */

}

/**
 * sub_0037C190
 * Original: 0x0037C190 - 0x0037C228 (152 bytes, 48 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037C190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037C190: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi) = eax;
    SET_LO8(eax, MEM8(0x8F5B96));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037C1B2; /* je: equal / zero */

loc_0037C1A5: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037C1B2; /* je: equal / zero */

loc_0037C1AE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037C221; /* jne: not equal / not zero */

loc_0037C1B2: ;
    ecx = MEM32(0x8FCAA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037C221; /* je: equal / zero */

loc_0037C1BC: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037C1CD; /* jne: not equal / not zero */

loc_0037C1C5: ;
    eax = MEM32(ecx + 0x474);
    goto loc_0037C1ED;

loc_0037C1CD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037C1DA; /* jne: not equal / not zero */

loc_0037C1D2: ;
    eax = MEM32(ecx + 0x478);
    goto loc_0037C1ED;

loc_0037C1DA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037C1E7; /* jne: not equal / not zero */

loc_0037C1DF: ;
    eax = MEM32(ecx + 0x47C);
    goto loc_0037C1ED;

loc_0037C1E7: ;
    eax = MEM32(ecx + 0x480);

loc_0037C1ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037C220; /* je: equal / zero */

loc_0037C1F1: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0037C216u); RECOMP_ABI_CALL(0x00030522u, sub_00030522); /* call 0x00030522 */

loc_0037C216: ;
    ecx = eax;
    PUSH32(esp, 0x0037C21Du); RECOMP_ABI_CALL(0x00037B0Bu, sub_00037B0B); /* call 0x00037B0B */

loc_0037C21D: ;
    MEM32(edi + 4) = esi;

loc_0037C220: ;
    POP32(esp, esi);

loc_0037C221: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0037C250
 * Original: 0x0037C250 - 0x0037C271 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037C250(void)
{

loc_0037C250: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x901E28);
    MEM32(esp) = 0;
    edx = MEM32(ecx + 0x100);
    ecx = MEM32(edx);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037C26Fu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0037C26F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0037C280
 * Original: 0x0037C280 - 0x0037C2A1 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037C280(void)
{

loc_0037C280: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x901E28);
    MEM32(esp) = 1;
    edx = MEM32(ecx + 0x100);
    ecx = MEM32(edx);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037C29Fu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0037C29F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0037C2B0
 * Original: 0x0037C2B0 - 0x0037C375 (197 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037C2B0(void)
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

loc_0037C2B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037C36A; /* je: equal / zero */

loc_0037C2C1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037C36A; /* je: equal / zero */

loc_0037C2CD: ;
    ecx = MEM32(0x8E8F84);
    eax = MEM32(esp + 0x10);
    edx = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0037C2F0u); RECOMP_ABI_CALL(0x00013A62u, sub_00013A62); /* call 0x00013A62 */

loc_0037C2F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037C361; /* je: equal / zero */

loc_0037C2F7: ;
    ecx = MEM32(esi * 4 + 0x8E8EB8);
    ecx = MEM32(ecx + 0x20);
    eax = MEM32(eax + 0x20);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x38); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x34); /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_0037C361: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0037C36A: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_0037C3B0
 * Original: 0x0037C3B0 - 0x0037C677 (711 bytes, 176 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0037C3B0(void)
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

loc_0037C3B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x45960000);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037C3D1u); RECOMP_ABI_CALL(0x00013A62u, sub_00013A62); /* call 0x00013A62 */

loc_0037C3D1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037C667; /* je: equal / zero */

loc_0037C3DC: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037C667; /* jl: less (signed <) */

loc_0037C3E7: ;
    edx = MEM32(edi * 4 + 0x8E8EB8);
    ecx = MEM32(edx + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(0x8F010C);
    MEM32(esp + 0x48) = eax;
    eax = MEM32(ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x50) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_0037C667; /* jle: less or equal (signed <=) */

loc_0037C434: ;
    eax = MEM32(ecx + esi * 4 + 4);
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037C65C; /* je: equal / zero */

loc_0037C444: ;
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037C65C; /* je: equal / zero */

loc_0037C44E: ;
    eax = MEM32(eax + 0x20);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x2C) = eax;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x2C); /* subss */
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esp + 0x28) = edx;
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x28); /* subss */
    xmm2 = xmm1; /* movaps */
    MEM32(esp + 0x24) = ecx;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm6.f[0]; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm7.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0037C656; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0037C4DA: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AB7D4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0037C656; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AB7D4)) */

loc_0037C4E7: ;
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x40;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037C552u); RECOMP_ABI_CALL(0x000130D0u, sub_000130D0); /* call 0x000130D0 */

loc_0037C552: ;
    fp_pop(); /* fstp st(0) */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x5C); /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x58); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x54); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0037C656; /* ja: above (unsigned >) (xmm4.f[0] vs xmm0.f[0]) */

loc_0037C595: ;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x30); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x34); /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x38); /* addss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x68);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0x64) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x64);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x60);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEM32(esp + 0x78) = eax;
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x78); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEM32(esp + 0x74) = edx;
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x74); /* subss */
    xmm2 = xmm1; /* movaps */
    MEM32(esp + 0x70) = ecx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x70); /* subss */
    ecx = MEM32(esp + 0x6C);
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEM32(esp + 0x7C) = ecx;
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x7AB1DC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x20); /* comiss */
    if ((_fca > _fcb)) goto loc_0037C66F; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0x20)) */

loc_0037C656: ;
    ecx = MEM32(0x8F010C);

loc_0037C65C: ;
    eax = MEM32(ecx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037C434; /* jl: less (signed <) */

loc_0037C667: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0037C66F: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
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
 * sub_0037C730
 * Original: 0x0037C730 - 0x0037C750 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037C730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037C730: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0037C732: ;
    ecx = MEM32(eax + 0x8F00F8);
    SET_LO8(edx, MEM8(ecx + 0x54));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037C74A; /* jne: not equal / not zero */

loc_0037C73F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037C732; /* jl: less (signed <) */

loc_0037C747: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0037C74A: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0037C760
 * Original: 0x0037C760 - 0x0037C7BA (90 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037C760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037C760: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037C76C; /* jne: not equal / not zero */

loc_0037C76A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0037C76C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037C772u); RECOMP_ABI_CALL(0x00034311u, sub_00034311); /* call 0x00034311 */

loc_0037C772: ;
    ecx = MEM32(0x8C5DB0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037C799; /* je: equal / zero */

loc_0037C780: ;
    ecx = MEM32(ecx * 4 + 0x8E8FA8);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037C799; /* jne: not equal / not zero */

loc_0037C78F: ;
    _fa = (uint32_t)(MEM32(ecx + 0x1B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1B4), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037C799; /* je: equal / zero */

loc_0037C798: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0037C799: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    if ((_fa == 0)) goto loc_0037C7B4; /* je: equal / zero */

loc_0037C79F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0037C7B1; /* je: equal / zero */

loc_0037C7A2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0037C7AB; /* je: equal / zero */

loc_0037C7A5: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_0037C7AB: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0037C7B1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0037C7B4: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_0037C7D0
 * Original: 0x0037C7D0 - 0x0037C869 (153 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037C7D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037C7D0: ;
    SET_LO8(ecx, MEM8(0x8F6A24));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037C80B; /* je: equal / zero */

loc_0037C7DE: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037C80B; /* je: equal / zero */

loc_0037C7E3: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037C7F7; /* je: equal / zero */

loc_0037C7E8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037C7F7; /* je: equal / zero */

loc_0037C7ED: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037C7F7; /* je: equal / zero */

loc_0037C7F2: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037C80B; /* jne: not equal / not zero */

loc_0037C7F7: ;
    _fa = (uint32_t)(MEM32(0x8C5DBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8C5DBC), 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037C863; /* jne: not equal / not zero */

loc_0037C800: ;
    eax = 0xC;
    MEM32(0x8C5DBC) = eax;
    esp += 4; return; /* ret */

loc_0037C80B: ;
    ecx = MEM32(0x8C5DBC);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0037C84C; /* ja: above (unsigned >) */

loc_0037C819: ;
    ecx = ZX8(MEM8(ecx + 0x37C87C));
    { uint32_t _jt = MEM32(ecx * 4 + 0x37C86C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0037C827u) goto loc_0037C827;
    if (_jt == 0x0037C835u) goto loc_0037C835;
    if (_jt == 0x0037C843u) goto loc_0037C843;
    if (_jt == 0x0037C84Cu) goto loc_0037C84C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0037C827: ;
    edx = (uint32_t)(int32_t)SMEM8(0x8F6F4E);
    eax = 8;
    goto loc_0037C84C;

loc_0037C835: ;
    edx = (uint32_t)(int32_t)SMEM8(0x8F6F4D);
    eax = 4;
    goto loc_0037C84C;

loc_0037C843: ;
    edx = (uint32_t)(int32_t)SMEM8(0x8F6F4C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0037C84C: ;
    edx = MEM32(edx * 4 + 0x8E8EB8);
    _fa = (uint32_t)(MEM8(edx + 0x30)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x30), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037C85C; /* jne: not equal / not zero */

loc_0037C859: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0037C85C: ;
    _fa = (uint32_t)(MEM32(edx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x28), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037C863; /* jne: not equal / not zero */

loc_0037C862: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0037C863: ;
    MEM32(0x8C5DBC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0037C8C0
 * Original: 0x0037C8C0 - 0x0037C8DF (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037C8C0(void)
{

loc_0037C8C0: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, 0x0037C8CBu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0037C8CB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0037C8D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037C8CFu); } /* indirect call */
    }

loc_0037C8D2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0037C8D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037C8D6u); } /* indirect call */
    }

loc_0037C8D9: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0037C8F0
 * Original: 0x0037C8F0 - 0x0037C938 (72 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0037C8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037C8F0: ;
    eax = MEM32(0x901E28);
    eax = MEM32(eax + 0x780);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037C935; /* jl: less (signed <) */

loc_0037C8FF: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    PUSH32(esp, esi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x778);
    POP32(esp, esi);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x54);
    ecx = MEM32(ecx + edx + 0x8F5BE8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0037C923: ;
    edx = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x8C5DC0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037C937; /* je: equal / zero */

loc_0037C930: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037C923; /* jl: less (signed <) */

loc_0037C935: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0037C937: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037C950
 * Original: 0x0037C950 - 0x0037CAB1 (353 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037C950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037C950: ;
    ecx = MEM32(0x901E20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    eax = 0xD;
    MEM32(0x8C5DCC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0037C9C7; /* jne: not equal / not zero */

loc_0037C968: ;
    eax = MEM32(0x8C5DC8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0037C9F7; /* ja: above (unsigned >) */

loc_0037C977: ;
    eax = ZX8(MEM8(eax + 0x37CAC0));
    { uint32_t _jt = MEM32(eax * 4 + 0x37CAB4); /* switch: 3 entries, 3 targets */
    if (_jt == 0x0037C985u) goto loc_0037C985;
    if (_jt == 0x0037C9B6u) goto loc_0037C9B6;
    if (_jt == 0x0037C9F7u) goto loc_0037C9F7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0037C985: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, 0x0037C990u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0037C990: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0037C997u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037C994u); } /* indirect call */
    }

loc_0037C997: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0037C9A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037C99Fu); } /* indirect call */
    }

loc_0037C9A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037C9C2; /* jl: less (signed <) */

loc_0037C9A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0037C9C2; /* jg: greater (signed >) */

loc_0037C9AA: ;
    eax = 1;
    MEM32(0x8C5DCC) = eax;
    goto loc_0037C9C7;

loc_0037C9B6: ;
    MEM32(0x8C5DCC) = 2;
    goto loc_0037C9F7;

loc_0037C9C2: ;
    eax = MEM32(0x8C5DCC);

loc_0037C9C7: ;
    ecx = MEM32(0x901E20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037C9E3; /* jne: not equal / not zero */

loc_0037C9D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037C9F7; /* jne: not equal / not zero */

loc_0037C9D7: ;
    MEM32(0x8C5DCC) = 9;
    goto loc_0037C9F7;

loc_0037C9E3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037C9F7; /* jne: not equal / not zero */

loc_0037C9E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037C9F7; /* jne: not equal / not zero */

loc_0037C9ED: ;
    MEM32(0x8C5DCC) = 8;

loc_0037C9F7: ;
    PUSH32(esp, 0x0037C9FCu); RECOMP_ABI_CALL(0x0001DCECu, sub_0001DCEC); /* call 0x0001DCEC */

loc_0037C9FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037CA06; /* je: equal / zero */

loc_0037CA01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037CA10; /* jne: not equal / not zero */

loc_0037CA06: ;
    MEM32(0x8C5DCC) = 0xA;

loc_0037CA10: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0037CA1Du); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0037CA1D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0037CA24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037CA21u); } /* indirect call */
    }

loc_0037CA24: ;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0037CA30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037CA2Eu); } /* indirect call */
    }

loc_0037CA30: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0037CA3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037CA3Au); } /* indirect call */
    }

loc_0037CA3C: ;
    MEM16(esp + 8) = 4;
    MEM16(esp + 0xA) = 0x1E;
    MEM16(esp + 0xC) = 0x1F;
    MEM16(esp + 0xE) = 0x20;
    MEM16(esp + 0x10) = 0x21;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0037CA61: ;
    edx = (uint32_t)(int32_t)SMEM16(esp + ecx * 2 + 0xA);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037CA87; /* je: equal / zero */

loc_0037CA6A: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037CA61; /* jl: less (signed <) */

loc_0037CA70: ;
    eax = MEM32(0x8C5DCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037CA81; /* jne: not equal / not zero */

loc_0037CA7A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8C5DCC) = eax;

loc_0037CA81: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0037CA87: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0037CA90: ;
    edx = (uint32_t)(int32_t)SMEM16(esp + ecx * 2 + 0xA);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037CAA1; /* je: equal / zero */

loc_0037CA99: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037CA90; /* jl: less (signed <) */

loc_0037CA9F: ;
    goto loc_0037CA70;

loc_0037CAA1: ;
    eax = 0xC;
    POP32(esp, edi);
    MEM32(0x8C5DCC) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0037CB70
 * Original: 0x0037CB70 - 0x0037CB9B (43 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037CB70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037CB70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0037CB7Eu); RECOMP_ABI_CALL(0x000131DEu, sub_000131DE); /* call 0x000131DE */

loc_0037CB7E: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edi);
    eax = esi + 0x24;
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(edi + 8);
    MEM32(eax + 8) = ecx;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037CBB0
 * Original: 0x0037CBB0 - 0x0037CBE4 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037CBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037CBB0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x8E8F84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(0x901DF8) = LO8(eax);
    eax = MEM32(ecx + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037CBDA; /* jl: less (signed <) */

loc_0037CBCE: ;
    eax = MEM32(eax * 4 + 0x8E8EB8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    esp += 4; return; /* ret */

loc_0037CBDA: ;
    eax = MEM32(0x8E9394);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    esp += 4; return; /* ret */

}

/**
 * sub_0037CC00
 * Original: 0x0037CC00 - 0x0037CCFB (251 bytes, 84 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037CC00(void)
{

loc_0037CC00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0037CC0Eu); RECOMP_ABI_CALL(0x00020CC6u, sub_00020CC6); /* call 0x00020CC6 */

loc_0037CC0E: ;
    SET_LO8(eax, MEM8(edi + 0x30));
    MEM8(esi + 0x30) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x31));
    MEM8(esi + 0x31) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0x32));
    MEM8(esi + 0x32) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0x33));
    MEM8(esi + 0x33) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x34));
    MEM8(esi + 0x34) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0x35));
    MEM8(esi + 0x35) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0x36));
    MEM8(esi + 0x36) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x37));
    MEM8(esi + 0x37) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0x38));
    MEM8(esi + 0x38) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0x39));
    MEM8(esi + 0x39) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x3A));
    MEM8(esi + 0x3A) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0x3B));
    MEM8(esi + 0x3B) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0x3C));
    MEM8(esi + 0x3C) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x3D));
    MEM8(esi + 0x3D) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0x3E));
    MEM8(esi + 0x3E) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0x3F));
    MEM8(esi + 0x3F) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x40));
    MEM8(esi + 0x40) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0x41));
    MEM8(esi + 0x41) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0x42));
    MEM8(esi + 0x42) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x43));
    MEM8(esi + 0x43) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0x44));
    MEM8(esi + 0x44) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0x45));
    MEM8(esi + 0x45) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x46));
    MEM8(esi + 0x46) = LO8(ecx);
    SET_LO16(edx, MEM16(edi + 0x48));
    MEM16(esi + 0x48) = LO16(edx);
    SET_LO16(eax, MEM16(edi + 0x4A));
    MEM16(esi + 0x4A) = LO16(eax);
    SET_LO16(ecx, MEM16(edi + 0x4C));
    MEM16(esi + 0x4C) = LO16(ecx);
    SET_LO16(edx, MEM16(edi + 0x4E));
    MEM16(esi + 0x4E) = LO16(edx);
    SET_LO16(eax, MEM16(edi + 0x50));
    MEM16(esi + 0x50) = LO16(eax);
    ecx = MEM32(edi + 0x54);
    MEM32(esi + 0x54) = ecx;
    edx = MEM32(edi + 0x58);
    MEM32(esi + 0x58) = edx;
    eax = MEM32(edi + 0x5C);
    MEM32(esi + 0x5C) = eax;
    ecx = edi + 0x60;
    eax = MEM32(ecx);
    edx = esi + 0x60;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    edx = MEM32(edi + 0x6C);
    MEM32(esi + 0x6C) = edx;
    eax = MEM32(edi + 0x70);
    MEM32(esi + 0x70) = eax;
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037CD40
 * Original: 0x0037CD40 - 0x0037CFE5 (677 bytes, 214 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037CD40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037CD40: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x2C));
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x2C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0037CD64u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0037CD64: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0037CD6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037CD68u); } /* indirect call */
    }

loc_0037CD6B: ;
    ebx = MEM32(esp + 0x40);
    ecx = ebx + ebx * 4;
    esi = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = ebx + ebx * 4;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx + 0x8E8FA8;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = edx;
    goto loc_0037CDA0;

loc_0037CD93: ;
    ecx = MEM32(esp + 0x30);
    goto loc_0037CDA0;

    /* nop */

loc_0037CDA0: ;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(esp + 0x28) = 0xFFFFFFFFu;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1C) = ecx;

loc_0037CDB6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x12 (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(esp + 0x1C);
    ebp = MEM32(edx);
    if (CMP_GE(_fas, _fbs)) goto loc_0037CE77; /* jge: greater or equal (signed >=) */

loc_0037CDC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0037CF8B; /* jne: not equal / not zero */

loc_0037CDCD: ;
    eax = MEM32(ebp + 0x230);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 5);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0037CDE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037CDE5u); } /* indirect call */
    }

loc_0037CDE8: ;
    ebp = MEM32(ebp + 0x230);
    ecx = ZX8(MEM8(ebp + 2));
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x18) = eax;
    eax = ZX8(MEM8(ebp + 3));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi);
    PUSH32(esp, 0);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0037CE13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037CE10u); } /* indirect call */
    }

loc_0037CE13: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ebp = eax;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0037CE22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037CE1Fu); } /* indirect call */
    }

loc_0037CE22: ;
    _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(esp + 0x18))) >> 32) & 1);
    eax = eax + MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(int32_t)SMEM8(0x8F6F4C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(eax)) >> 32) & 1);
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0037CE4D; /* je: equal / zero */

loc_0037CE37: ;
    edx = (uint32_t)(int32_t)SMEM8(0x8F6F4D);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0037CE4D; /* je: equal / zero */

loc_0037CE42: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x8F6F4E);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0037CE52; /* jne: not equal / not zero */

loc_0037CE4D: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x10)) + (uint64_t)(5)) >> 32) & 1);
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 5;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0037CE52: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0037CE5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037CE5Cu); } /* indirect call */
    }

loc_0037CE5F: ;
    ecx = MEM32(esp + 0x10);
    ecx = ecx + eax * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ecx;
    goto loc_0037CF8F;

loc_0037CE77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0037CF8B; /* jne: not equal / not zero */

loc_0037CE80: ;
    edx = MEM32(ebp + 0x230);
    eax = ZX8(MEM8(edx + 6));
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esp + 0x20) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0037CE9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037CE98u); } /* indirect call */
    }

loc_0037CE9B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0037CEACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037CEA9u); } /* indirect call */
    }

loc_0037CEAC: ;
    ecx = MEM32(ebp + 0x230);
    edx = ZX16(MEM16(ecx));
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x38) = eax;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x38)); /* fild */
    MEM32(esp + 0x38) = edx;
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AD474)); /* fmul dword ptr [0x7ad474] */
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0x3C)); /* fiadd dword ptr [esp + 0x3c] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0037CEEDu); RECOMP_ABI_CALL(0x0001C793u, sub_0001C793); /* call 0x0001C793 */

loc_0037CEED: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0037CF01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037CEFEu); } /* indirect call */
    }

loc_0037CF01: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    ecx = MEM32(ebp + 0x230);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    edx = ZX16(MEM16(ecx + 2));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    MEM32(esp + 0x10) = 0;
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0037CF43; /* jbe: below or equal (unsigned <=) */

loc_0037CF25: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AD448); /* mulss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM32(esp + 0x10) = eax;

loc_0037CF43: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x8F6F4C);
    eax = MEM32(esp + 0x14);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0037CF6A; /* je: equal / zero */

loc_0037CF54: ;
    edx = (uint32_t)(int32_t)SMEM8(0x8F6F4D);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0037CF6A; /* je: equal / zero */

loc_0037CF5F: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x8F6F4E);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0037CF6F; /* jne: not equal / not zero */

loc_0037CF6A: ;
    ebp = 6;

loc_0037CF6F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0037CF7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037CF79u); } /* indirect call */
    }

loc_0037CF7C: ;
    eax = eax + eax * 2;
    ecx = ebp + eax * 2;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x10)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + ecx;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x20);

loc_0037CF8B: ;
    ecx = MEM32(esp + 0x10);

loc_0037CF8F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x24) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0037CFA1; /* jle: less or equal (signed <=) */

loc_0037CF95: ;
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;

loc_0037CFA1: ;
    ebp = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(4)) >> 32) & 1);
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x14 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0037CDB6; /* jl: less (signed <) */

loc_0037CFBF: ;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0037CFCB; /* jl: less (signed <) */

loc_0037CFC7: ;
    MEM32(esp + 0x2C) = ecx;

loc_0037CFCB: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0037CD93; /* jl: less (signed <) */

loc_0037CFD9: ;
    eax = MEM32(esp + 0x2C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0037D090
 * Original: 0x0037D090 - 0x0037D0AF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037D090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037D090: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x832260;
    if (TEST_Z(_fa, _fb)) goto loc_0037D0A9; /* je: equal / zero */

loc_0037D0A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037D0A6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0037D0A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0037D0A9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037D0C0
 * Original: 0x0037D0C0 - 0x0037D0D3 (19 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037D0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037D0C0: ;
    SET_LO8(eax, MEM8(ecx + 6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037D0D2; /* jne: not equal / not zero */

loc_0037D0C7: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037D0D2; /* je: equal / zero */

loc_0037D0CD: ;
    SET_LO8(ecx, MEM8(ecx + 4));
    MEM8(eax) = LO8(ecx);

loc_0037D0D2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037D0E0
 * Original: 0x0037D0E0 - 0x0037D0FB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037D0E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037D0E0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax) = 0xFFFFFFFFu;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_0037D110
 * Original: 0x0037D110 - 0x0037D119 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037D110(void)
{

loc_0037D110: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0037D120
 * Original: 0x0037D120 - 0x0037D12D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037D120(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037D120: ;
    eax = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    eax = eax + ecx + -48;
    esp += 4; return; /* ret */

}

/**
 * sub_0037D130
 * Original: 0x0037D130 - 0x0037D1E0 (176 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037D130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037D130: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0;
    PUSH32(esp, 0x0037D13Fu); RECOMP_ABI_CALL(0x00037980u, sub_00037980); /* call 0x00037980 */

loc_0037D13F: ;
    eax = MEM32(0x901E28);
    ecx = MEM32(eax + 0x788);
    ebx = MEM32(ecx + 0xBC);
    edx = MEM32(esi + 0x20C);
    ecx = 3;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037D163; /* jne: not equal / not zero */

loc_0037D161: ;
    SET_LO8(eax, 1);

loc_0037D163: ;
    _fa = (uint32_t)(MEM32(esi + 0x278)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x278), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037D16D; /* jne: not equal / not zero */

loc_0037D16B: ;
    SET_LO8(eax, 1);

loc_0037D16D: ;
    _fa = (uint32_t)(MEM32(esi + 0x2E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2E4), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037D177; /* jne: not equal / not zero */

loc_0037D175: ;
    SET_LO8(eax, 1);

loc_0037D177: ;
    _fa = (uint32_t)(MEM32(esi + 0x350)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x350), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037D181; /* jne: not equal / not zero */

loc_0037D17F: ;
    SET_LO8(eax, 1);

loc_0037D181: ;
    _fa = (uint32_t)(MEM32(esi + 0x3BC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3BC), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037D18B; /* jne: not equal / not zero */

loc_0037D189: ;
    SET_LO8(eax, 1);

loc_0037D18B: ;
    _fa = (uint32_t)(MEM32(esi + 0x428)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x428), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037D195; /* jne: not equal / not zero */

loc_0037D193: ;
    SET_LO8(eax, 1);

loc_0037D195: ;
    _fa = (uint32_t)(MEM32(esi + 0x494)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x494), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037D19F; /* jne: not equal / not zero */

loc_0037D19D: ;
    SET_LO8(eax, 1);

loc_0037D19F: ;
    _fa = (uint32_t)(MEM32(esi + 0x500)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x500), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037D1A9; /* jne: not equal / not zero */

loc_0037D1A7: ;
    SET_LO8(eax, 1);

loc_0037D1A9: ;
    _fa = (uint32_t)(MEM32(esi + 0x56C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x56C), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037D1B3; /* jne: not equal / not zero */

loc_0037D1B1: ;
    SET_LO8(eax, 1);

loc_0037D1B3: ;
    _fa = (uint32_t)(MEM32(esi + 0x5D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5D8), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037D1BF; /* je: equal / zero */

loc_0037D1BB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037D1D7; /* je: equal / zero */

loc_0037D1BF: ;
    PUSH32(esp, edi);
    edi = 5;

loc_0037D1C5: ;
    ecx = ebx;
    PUSH32(esp, 0x0037D1CCu); RECOMP_ABI_CALL(0x00020B5Eu, sub_00020B5E); /* call 0x00020B5E */

loc_0037D1CC: ;
    ecx = ebx;
    PUSH32(esp, 0x0037D1D3u); RECOMP_ABI_CALL(0x00026761u, sub_00026761); /* call 0x00026761 */

loc_0037D1D3: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0037D1C5; /* jne: not equal / not zero */

loc_0037D1D6: ;
    POP32(esp, edi);

loc_0037D1D7: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00018689(); return; /* tail jmp 0x00018689 */

}

/**
 * sub_0037D210
 * Original: 0x0037D210 - 0x0037D281 (113 bytes, 39 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037D210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037D210: ;
    SET_LO8(eax, MEM8(0x8C5EDC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037D27E; /* je: equal / zero */

loc_0037D219: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0037D27E; /* jge: greater or equal (signed >=) */

loc_0037D220: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax + ecx + -48;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    edi = esi + 0xC;
    PUSH32(esp, 0x8322F4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0037D23Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0037D23F: ;
    ecx = MEM32(0x901E30);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x0037D24Eu); RECOMP_ABI_CALL(0x000242CCu, sub_000242CC); /* call 0x000242CC */

loc_0037D24E: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    edi = esi + 0x20;
    PUSH32(esp, 0x8322EC);
    PUSH32(esp, edi);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x0037D264u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0037D264: ;
    ecx = MEM32(0x901E30);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x0037D273u); RECOMP_ABI_CALL(0x000242CCu, sub_000242CC); /* call 0x000242CC */

loc_0037D273: ;
    edx = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    MEM32(esi) = edx;
    POP32(esp, esi);

loc_0037D27E: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0037D2A0
 * Original: 0x0037D2A0 - 0x0037D2F8 (88 bytes, 35 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037D2A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037D2A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx + 0x214;

loc_0037D2B2: ;
    _fa = (uint32_t)(MEM32(eax + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037D2CB; /* jne: not equal / not zero */

loc_0037D2B8: ;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037D2CB; /* jne: not equal / not zero */

loc_0037D2BD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037D2DB; /* je: equal / zero */

loc_0037D2C1: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037D2D9; /* je: equal / zero */

loc_0037D2C7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037D2DB; /* je: equal / zero */

loc_0037D2CB: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037D2B2; /* jl: less (signed <) */

loc_0037D2D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0037D2D9: ;
    MEM32(eax) = esi;

loc_0037D2DB: ;
    ecx = ZX8(MEM8(esp + 0x10));
    eax = MEM32(eax + 0x5C);
    edx = esp + 0x10;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0037D2F3u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0037D2F3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0037D310
 * Original: 0x0037D310 - 0x0037D384 (116 bytes, 48 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0037D310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037D310: ;
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
    edi = MEM32(ebp + 8);
    esi = ecx + 0x214;
    ecx = MEM32(ebp + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0037D330: ;
    _fa = (uint32_t)(MEM32(esi + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + -8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037D349; /* jne: not equal / not zero */

loc_0037D336: ;
    _fa = (uint32_t)(MEM32(esi + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + -4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037D349; /* jne: not equal / not zero */

loc_0037D33B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037D35C; /* je: equal / zero */

loc_0037D33F: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037D35A; /* je: equal / zero */

loc_0037D345: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037D35C; /* je: equal / zero */

loc_0037D349: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x6C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037D330; /* jl: less (signed <) */

loc_0037D352: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_0037D35A: ;
    MEM32(esi) = ecx;

loc_0037D35C: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037D36Au); RECOMP_ABI_CALL(0x0001AA92u, sub_0001AA92); /* call 0x0001AA92 */

loc_0037D36A: ;
    eax = MEM32(esi + 0x58);
    ecx = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037D37Cu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0037D37C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0037D3B0
 * Original: 0x0037D3B0 - 0x0037D40C (92 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037D3B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037D3B0: ;
    ecx = MEM32(0x901E30);
    eax = MEM32(ecx + 0x1C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037D40B; /* je: equal / zero */

loc_0037D3BF: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0xC) (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0037D3E7; /* jne: not equal / not zero */

loc_0037D3CA: ;
    MEM32(eax + 0xC) = 3;
    eax = MEM32(0x901E28);
    MEM32(eax + 0x8A0) = edx;
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x1C) = edx;
    g_seh_ebp = ebp; sub_00027C51(); return; /* tail jmp 0x00027C51 */

loc_0037D3E7: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax + 0x10);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 8) = 0x8322FC;
    MEM32(esp + 4) = 0x901D98;
    g_seh_ebp = ebp; sub_005CBDA4(); return; /* tail jmp 0x005CBDA4 */

loc_0037D40B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037D430
 * Original: 0x0037D430 - 0x0037D561 (305 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037D430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037D430: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x20;
    ecx = 0x64;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0037D442: ;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax) = edx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 8) = edx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0037D442; /* jne: not equal / not zero */

loc_0037D456: ;
    eax = esi + 0x984;
    MEM8(eax) = LO8(ebx);
    MEM32(eax + 0x40) = ebx;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x44;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    MEM8(eax) = LO8(ebx);
    MEM32(eax + 0x40) = ebx;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x44;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEM8(eax) = LO8(ebx);
    MEM32(eax + 0x40) = ebx;
    edi = esi + 0xA68;
    ebp = 2;
    edi = edi;

loc_0037D480: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x14C08);
    PUSH32(esp, 0x0037D48Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0037D48F: ;
    MEM32(edi) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0037D480; /* jne: not equal / not zero */

loc_0037D49A: ;
    MEM32(esi + 0xA60) = ebx;
    MEM32(esi + 0x1C) = ebx;
    eax = MEM32(0x8FC1D0);
    eax = MEM32(eax + 0xE8);
    SET_LO8(ecx, MEM8(eax + 0x34D));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM8(eax + 0x34D) = LO8(ebx);
    MEM8(esp + 0x17) = LO8(ecx);
    ecx = MEM32(0x902558);
    edx = MEM32(ecx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0037D4D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037D4CEu); } /* indirect call */
    }

loc_0037D4D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0037D4E0; /* je: equal / zero */

loc_0037D4D7: ;
    ecx = eax;
    PUSH32(esp, 0x0037D4DEu); RECOMP_ABI_CALL(0x00028345u, sub_00028345); /* call 0x00028345 */

loc_0037D4DE: ;
    goto loc_0037D4E2;

loc_0037D4E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0037D4E2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    MEM32(esi + 0xA5C) = eax;
    ecx = MEM32(0x909394);
    ecx = MEM32(ecx + 8);
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x600);
    PUSH32(esp, 0x832324);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0037D507u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037D504u); } /* indirect call */
    }

loc_0037D507: ;
    edx = MEM32(0x8FC1D0);
    eax = MEM32(edx + 0xE8);
    SET_LO8(ecx, MEM8(esp + 0xB));
    MEM8(eax + 0x34D) = LO8(ecx);
    edx = MEM32(esi + 0xA5C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0037D529u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0037D529: ;
    ecx = eax;
    PUSH32(esp, 0x0037D530u); RECOMP_ABI_CALL(0x0001AC59u, sub_0001AC59); /* call 0x0001AC59 */

loc_0037D530: ;
    ecx = esi;
    PUSH32(esp, 0x0037D537u); RECOMP_ABI_CALL(0x00013E9Au, sub_00013E9A); /* call 0x00013E9A */

loc_0037D537: ;
    PUSH32(esp, 0x832310);
    ecx = esi;
    MEM32(esi + 0x980) = ebx;
    PUSH32(esp, 0x0037D549u); RECOMP_ABI_CALL(0x0001811Bu, sub_0001811B); /* call 0x0001811B */

loc_0037D549: ;
    PUSH32(esp, 0x832304);
    ecx = esi;
    PUSH32(esp, 0x0037D555u); RECOMP_ABI_CALL(0x0001811Bu, sub_0001811B); /* call 0x0001811B */

loc_0037D555: ;
    MEM32(esi) = 0x5555;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0037D5B0
 * Original: 0x0037D5B0 - 0x0037D66F (191 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037D5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037D5B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0037D5B9u); RECOMP_ABI_CALL(0x00014A4Du, sub_00014A4D); /* call 0x00014A4D */

loc_0037D5B9: ;
    edi = 0x64;
    edi = edi;

loc_0037D5C0: ;
    ecx = esi;
    PUSH32(esp, 0x0037D5C7u); RECOMP_ABI_CALL(0x000186C5u, sub_000186C5); /* call 0x000186C5 */

loc_0037D5C7: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0037D5C0; /* jne: not equal / not zero */

loc_0037D5CA: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0037D5D2u); RECOMP_ABI_CALL(0x00013E9Au, sub_00013E9A); /* call 0x00013E9A */

loc_0037D5D2: ;
    eax = MEM32(esi + 0x980);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0037D614; /* jle: less or equal (signed <=) */

loc_0037D5DE: ;
    edi = esi + 0x9C4;

loc_0037D5E4: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037D606; /* je: equal / zero */

loc_0037D5EA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037D5F0u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0037D5F0: ;
    ecx = eax;
    PUSH32(esp, 0x0037D5F7u); RECOMP_ABI_CALL(0x00012C0Cu, sub_00012C0C); /* call 0x00012C0C */

loc_0037D5F7: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037D5FFu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0037D5FF: ;
    ecx = eax;
    PUSH32(esp, 0x0037D606u); RECOMP_ABI_CALL(0x00037B2Eu, sub_00037B2E); /* call 0x00037B2E */

loc_0037D606: ;
    eax = MEM32(esi + 0x980);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x44;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037D5E4; /* jl: less (signed <) */

loc_0037D614: ;
    eax = MEM32(esi + 0xA5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0037D646; /* je: equal / zero */

loc_0037D61F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037D625u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0037D625: ;
    ecx = eax;
    PUSH32(esp, 0x0037D62Cu); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_0037D62C: ;
    ecx = MEM32(esi + 0xA5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037D63C; /* je: equal / zero */

loc_0037D636: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0037D63Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037D63Au); } /* indirect call */
    }

loc_0037D63C: ;
    MEM32(esi + 0xA5C) = 0;

loc_0037D646: ;
    _fb = (uint32_t)(0xA68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA68;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 2;

loc_0037D651: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037D666; /* je: equal / zero */

loc_0037D657: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037D65Du); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0037D65D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_0037D666: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0037D651; /* jne: not equal / not zero */

loc_0037D66C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0037D6A0
 * Original: 0x0037D6A0 - 0x0037D772 (210 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037D6A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037D6A0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x18) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0037D770; /* jle: less or equal (signed <=) */

loc_0037D6AF: ;
    PUSH32(esp, ebx);
    edx = edi + 0x2C;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);

loc_0037D6B6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edx;
    /* nop */

loc_0037D6C0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037D6D2; /* je: equal / zero */

loc_0037D6C5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037D6C0; /* jl: less (signed <) */

loc_0037D6CE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0037D6D2: ;
    ecx = eax + eax * 2;
    esi = edi + ecx * 8 + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037D76E; /* je: equal / zero */

loc_0037D6E1: ;
    MEM32(edi + 0x1C) = esi;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebx (32-bit) */
    MEM32(esi + 0xC) = 2;
    if (CMP_NE(_fa, _fb)) goto loc_0037D714; /* jne: not equal / not zero */

loc_0037D6F0: ;
    MEM32(esi + 0xC) = 3;
    eax = MEM32(0x901E28);
    MEM32(eax + 0x8A0) = ebx;
    MEM32(edi + 0x18) = MEM32(edi + 0x18) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x1C) = ebx;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x18) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0037D6B6; /* jg: greater (signed >) */

loc_0037D710: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0037D714: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0037D71Fu); RECOMP_ABI_CALL(0x00019A7Au, sub_00019A7A); /* call 0x00019A7A */

loc_0037D71F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037D737; /* je: equal / zero */

loc_0037D723: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0037D72Bu); RECOMP_ABI_CALL(0x0001229Du, sub_0001229D); /* call 0x0001229D */

loc_0037D72B: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0037D733u); RECOMP_ABI_CALL(0x00015290u, sub_00015290); /* call 0x00015290 */

loc_0037D733: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0037D737: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x10);
    ecx = MEM32(edi + 0xA5C);
    edi = MEM32(ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B15E);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x500);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0xC); PUSH32(esp, 0x0037D75Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037D757u); } /* indirect call */
    }

loc_0037D75A: ;
    edx = ZX8(LO8(eax));
    MEM32(esi) = edx;
    eax = MEM32(0x901E28);
    MEM32(eax + 0x8A0) = 0x168;

loc_0037D76E: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0037D770: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0037D7B0
 * Original: 0x0037D7B0 - 0x0037D89E (238 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0037D7B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037D7B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037D7CDu); RECOMP_ABI_CALL(0x0001AA92u, sub_0001AA92); /* call 0x0001AA92 */

loc_0037D7CD: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(0x901E28);
    esi = MEM32(eax + 0xE8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037D7E9; /* jne: not equal / not zero */

loc_0037D7E3: ;
    esi = MEM32(eax + 0xEC);

loc_0037D7E9: ;
    ebx = MEM32(ebp + 8);
    edx = MEM32(ebx * 4 + 0x8E8EB8);
    ecx = MEM32(edx + 0x48);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037D7FBu); RECOMP_ABI_CALL(0x00029290u, sub_00029290); /* call 0x00029290 */

loc_0037D7FB: ;
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0xC0);
    eax = MEM32(ecx + 0xC);
    edi = MEM32(eax + 0xC);
    ecx = eax + 0x40;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = esp + 0x90;
    PUSH32(esp, ebx);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
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
    ecx = MEM32(0x8FCAD8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037D838u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_0037D838: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 1 (32-bit) */
    ebx = eax + 0xC0;
    if (CMP_NE(_fa, _fb)) goto loc_0037D84A; /* jne: not equal / not zero */

loc_0037D844: ;
    ebx = eax + 0x100;

loc_0037D84A: ;
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    edx = esp + 0xD8;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037D864u); RECOMP_ABI_CALL(0x0001155Fu, sub_0001155F); /* call 0x0001155F */

loc_0037D864: ;
    ecx = 0x10;
    esi = eax;
    edi = esp + 0x1C;
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
    xmm0 = XMM_MEM(esp + 0x1C); /* movaps */
    XMM_STORE(ebx, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x2C); /* movaps */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(ebx + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    POP32(esp, edi);
    XMM_STORE(ebx + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x3C); /* movaps */
    POP32(esp, esi);
    XMM_STORE(ebx + 0x30, xmm0); /* movaps */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0037D8E0
 * Original: 0x0037D8E0 - 0x0037D9F3 (275 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0037D8E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037D8E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037D901u); RECOMP_ABI_CALL(0x0002127Au, sub_0002127A); /* call 0x0002127A */

loc_0037D901: ;
    ebx = MEM32(ebp + 0xC);
    eax = MEM32(ebx * 4 + 0x8E8EB8);
    ecx = MEM32(eax + 0x48);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037D916u); RECOMP_ABI_CALL(0x00029290u, sub_00029290); /* call 0x00029290 */

loc_0037D916: ;
    ecx = MEM32(eax + 0x34);
    edx = MEM32(ecx + 0xC0);
    eax = MEM32(edx + 0xC);
    esi = MEM32(eax + 0xC);
    ecx = eax + 0x40;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edi = esp + 0x90;
    PUSH32(esp, ebx);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(0x901E28);
    esi = MEM32(ecx + 0xF0);
    eax = edx;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
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
    ecx = MEM32(0x8FCAD8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037D95Fu); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_0037D95F: ;
    edx = esp + 0x50;
    ebx = eax;
    PUSH32(esp, edx);
    eax = esp + 0x94;
    PUSH32(esp, eax);
    ecx = esp + 0xD8;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037D97Bu); RECOMP_ABI_CALL(0x0001155Fu, sub_0001155F); /* call 0x0001155F */

loc_0037D97B: ;
    ecx = 0x10;
    esi = eax;
    edi = esp + 0x1C;
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
    xmm1 = XMM_MEM(esp + 0x2C); /* movaps */
    xmm0 = XMM_MEM(esp + 0x1C); /* movaps */
    XMM_STORE(ebx + 0x90, xmm1); /* movaps */
    xmm1 = XMM_MEM(esp + 0x3C); /* movaps */
    XMM_STORE(ebx + 0xA0, xmm1); /* movaps */
    xmm1 = XMM_MEM(esp + 0x4C); /* movaps */
    XMM_STORE(ebx + 0x80, xmm0); /* movaps */
    XMM_STORE(ebx + 0xB0, xmm1); /* movaps */
    XMM_STORE(ebx + 0x80, xmm0); /* movaps */
    xmm0 = XMM_MEM(ebx + 0x90); /* movaps */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(ebx + 0x90, xmm0); /* movaps */
    xmm0 = XMM_MEM(ebx + 0xA0); /* movaps */
    POP32(esp, edi);
    XMM_STORE(ebx + 0xA0, xmm0); /* movaps */
    xmm0 = XMM_MEM(ebx + 0xB0); /* movaps */
    POP32(esp, esi);
    XMM_STORE(ebx + 0xB0, xmm0); /* movaps */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0037DA40
 * Original: 0x0037DA40 - 0x0037DA74 (52 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037DA40(void)
{

loc_0037DA40: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0037DA90
 * Original: 0x0037DA90 - 0x0037DACC (60 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037DA90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037DA90: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ecx + 0x118) = LO8(eax);
    MEM32(ecx + 0x120) = eax;
    MEM8(ecx + 0x119) = LO8(eax);
    MEM8(ecx + 0x11D) = LO8(eax);
    MEM8(ecx + 0x11E) = LO8(eax);
    ecx = MEM32(0x8E8F88);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0037DABEu); RECOMP_ABI_CALL(0x00017CD4u, sub_00017CD4); /* call 0x00017CD4 */

loc_0037DABE: ;
    ecx = MEM32(0x8E8F8C);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00017CD4(); return; /* tail jmp 0x00017CD4 */

}

/**
 * sub_0037DAE0
 * Original: 0x0037DAE0 - 0x0037DB02 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037DAE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037DAE0: ;
    SET_LO8(edx, MEM8(ecx + 0x760));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037DAF6; /* jne: not equal / not zero */

loc_0037DAEC: ;
    SET_LO8(edx, MEM8(ecx + 0x761));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037DAFB; /* je: equal / zero */

loc_0037DAF6: ;
    g_seh_ebp = ebp; sub_000175FE(); return; /* tail jmp 0x000175FE */

loc_0037DAFB: ;
    MEM8(ecx + 0x88C) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0037DB10
 * Original: 0x0037DB10 - 0x0037DB2E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037DB10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037DB10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0037DB18u); RECOMP_ABI_CALL(0x00020D84u, sub_00020D84); /* call 0x00020D84 */

loc_0037DB18: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037DB28; /* je: equal / zero */

loc_0037DB1F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037DB25u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0037DB25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0037DB28: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037DB40
 * Original: 0x0037DB40 - 0x0037DB8E (78 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0037DB40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037DB40: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x138);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037DB8B; /* je: equal / zero */

loc_0037DB4E: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0037DB77; /* jle: less or equal (signed <=) */

loc_0037DB57: ;
    PUSH32(esp, edi);
    edi = esi + 4;
    goto loc_0037DB60;

    /* nop */

loc_0037DB60: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037DB6C; /* je: equal / zero */

loc_0037DB66: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0037DB6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037DB6Au); } /* indirect call */
    }

loc_0037DB6C: ;
    eax = MEM32(esi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037DB60; /* jl: less (signed <) */

loc_0037DB76: ;
    POP32(esp, edi);

loc_0037DB77: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037DB7Du); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0037DB7D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x138) = 0;
    POP32(esp, ebx);

loc_0037DB8B: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0037DBB0
 * Original: 0x0037DBB0 - 0x0037DBC3 (19 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037DBB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0037DBB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037DBBAu); RECOMP_ABI_CALL(0x0002E5E2u, sub_0002E5E2); /* call 0x0002E5E2 */

loc_0037DBBA: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037DBD0
 * Original: 0x0037DBD0 - 0x0037DC2A (90 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037DBD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037DBD0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x138);
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0037DC25; /* jge: greater or equal (signed >=) */

loc_0037DBE4: ;
    PUSH32(esp, edi);

loc_0037DBE5: ;
    edi = MEM32(eax + esi * 4 + 4);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0037DBF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037DBEDu); } /* indirect call */
    }

loc_0037DBF0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037DC07; /* jne: not equal / not zero */

loc_0037DBF4: ;
    eax = MEM32(ebx + 0x138);
    ecx = MEM32(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037DBE5; /* jl: less (signed <) */

loc_0037DC01: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0037DC07: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0037DC0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037DC0Bu); } /* indirect call */
    }

loc_0037DC0E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037DC24; /* jne: not equal / not zero */

loc_0037DC12: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0037DC19u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037DC16u); } /* indirect call */
    }

loc_0037DC19: ;
    ecx = MEM32(0x901E30);
    PUSH32(esp, 0x0037DC24u); RECOMP_ABI_CALL(0x00027C51u, sub_00027C51); /* call 0x00027C51 */

loc_0037DC24: ;
    POP32(esp, edi);

loc_0037DC25: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037DC40
 * Original: 0x0037DC40 - 0x0037DC73 (51 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037DC40(void)
{

loc_0037DC40: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    SET_LO8(edx, MEM8(ecx + 0x14));
    MEM8(eax + 0x14) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x15));
    MEM8(eax + 0x15) = LO8(edx);
    SET_LO8(ecx, MEM8(ecx + 0x16));
    MEM8(eax + 0x16) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037DC80
 * Original: 0x0037DC80 - 0x0037DCDA (90 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037DC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037DC80: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037DCD7; /* je: equal / zero */

loc_0037DC89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037DCD7; /* je: equal / zero */

loc_0037DC8D: ;
    eax = MEM32(ecx + 0x89C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0037DCD4; /* jg: greater (signed >) */

loc_0037DC97: ;
    eax = MEM32(ecx + 0x898);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0037DCD7; /* jle: less or equal (signed <=) */

loc_0037DCA1: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x0037DCA8u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_0037DCA8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037DCD4; /* jne: not equal / not zero */

loc_0037DCAF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0037DCB7u); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_0037DCB7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 1);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x0037DCC3u); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_0037DCC3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0037DCD7; /* je: equal / zero */

loc_0037DCD0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037DCD7; /* je: equal / zero */

loc_0037DCD4: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0037DCD7: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0037DCF0
 * Original: 0x0037DCF0 - 0x0037DDAD (189 bytes, 65 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037DCF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037DCF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(0x8C5EE6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0037DDA7; /* je: equal / zero */

loc_0037DD03: ;
    edx = MEM32(ecx + 0xD8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    MEM32(ecx + 0xD8) = edx;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 6), 2 (16-bit) */
    eax = MEM32(edi + 8);
    esi = ZX16(MEM16(eax));
    if (CMP_NE(_fa, _fb)) goto loc_0037DD37; /* jne: not equal / not zero */

loc_0037DD25: ;
    ebx = ZX16(MEM16(eax + 2));
    ebp = ZX16(MEM16(eax + 4));
    eax = ZX16(MEM16(eax + 6));
    MEM32(esp + 0x1C) = eax;
    goto loc_0037DD43;

loc_0037DD37: ;
    edx = ZX16(MEM16(eax + 2));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1C) = edx;

loc_0037DD43: ;
    eax = MEM32(ecx + 0x12C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037DD4F; /* jl: less (signed <) */

loc_0037DD4D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0037DD4F: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0xA34);
    PUSH32(esp, 0x0037DD5Eu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0037DD5E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0037DD8C; /* je: equal / zero */

loc_0037DD69: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037DD78u); RECOMP_ABI_CALL(0x0002FDE3u, sub_0002FDE3); /* call 0x0002FDE3 */

loc_0037DD78: ;
    edx = ZX16(MEM16(edi + 2));
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0037DD8Au); RECOMP_ABI_CALL(0x000250D7u, sub_000250D7); /* call 0x000250D7 */

loc_0037DD8A: ;
    goto loc_0037DD8E;

loc_0037DD8C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0037DD8E: ;
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx + 0x138);
    edx = MEM32(ecx);
    POP32(esp, edi);
    MEM32(ecx + edx * 4 + 4) = eax;
    eax = MEM32(ecx);
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(ecx) = eax;
    POP32(esp, ebx);

loc_0037DDA7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037DDE0
 * Original: 0x0037DDE0 - 0x0037DDFF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037DDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037DDE0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x832224;
    if (TEST_Z(_fa, _fb)) goto loc_0037DDF9; /* je: equal / zero */

loc_0037DDF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037DDF6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0037DDF6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0037DDF9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037DE10
 * Original: 0x0037DE10 - 0x0037E30F (1279 bytes, 344 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037DE10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037DE10: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebx;
    edx = ebx + 0x58;

loc_0037DE23: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037DE23; /* jne: not equal / not zero */

loc_0037DE2D: ;
    edi = ebx + 0x58;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0037DE31: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037DE31; /* jne: not equal / not zero */

loc_0037DE39: ;
    eax = MEM32(0x83226C);
    MEM32(edi) = eax;
    SET_LO8(ecx, MEM8(0x832270));
    ebp = ebx + 0x18;
    MEM8(edi + 4) = LO8(ecx);
    ecx = MEM32(ebx + 0x14);
    edx = ebp;

loc_0037DE51: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037DE51; /* jne: not equal / not zero */

loc_0037DE5B: ;
    edi = ebp;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_0037DE60: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037DE60; /* jne: not equal / not zero */

loc_0037DE68: ;
    edx = MEM32(0x8326E8);
    MEM32(edi) = edx;
    SET_LO8(eax, MEM8(0x8326EC));
    MEM8(edi + 4) = LO8(eax);
    ecx = MEM32(0x901E30);
    ecx = MEM32(ecx + 0xA5C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0037DE8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037DE87u); } /* indirect call */
    }

loc_0037DE8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037DE9A; /* je: equal / zero */

loc_0037DE8E: ;
    MEM8(ebx + 0xA2D) = 1;
    goto loc_0037DF7C;

loc_0037DE9A: ;
    ecx = MEM32(ebx + 0x14);
    MEM8(ebx + 0xA2D) = 0;
    edx = ebp;

loc_0037DEA6: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037DEA6; /* jne: not equal / not zero */

loc_0037DEB0: ;
    edi = ebp;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0037DEB3: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037DEB3; /* jne: not equal / not zero */

loc_0037DEBB: ;
    eax = MEM32(0x8326E0);
    MEM32(edi) = eax;
    SET_LO8(ecx, MEM8(0x8326E4));
    MEM8(edi + 4) = LO8(ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0xA28) = esi;
    edx = MEM32(0x901E28);
    eax = MEM32(edx + 0x124);
    _fa = (uint32_t)(MEM16(eax + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 6), LO16(esi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0037DF7C; /* jbe: below or equal (unsigned <=) */

loc_0037DEE9: ;
    /* nop */

loc_0037DEF0: ;
    ecx = ZX16(MEM16(eax + 4));
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebx + 0xA30);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(int32_t)SMEM8(ecx + edx);
    ecx = esi;
    ecx = ecx & 0x80000007u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0037DF1A; /* jns: not sign (positive) */

loc_0037DF15: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0037DF1A: ;
    edx = 1;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037DF63; /* je: equal / zero */

loc_0037DF25: ;
    eax = MEM32(ebx + 0xA28);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, esi);
    edi = eax + ebx + 0x98;
    PUSH32(esp, 0x8326D0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0037DF41u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0037DF41: ;
    ecx = MEM32(0x901E30);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x0037DF50u); RECOMP_ABI_CALL(0x000242CCu, sub_000242CC); /* call 0x000242CC */

loc_0037DF50: ;
    ecx = MEM32(ebx + 0xA28);
    MEM32(ebx + ecx * 4 + 0x8A0) = eax;
    MEM32(ebx + 0xA28) = MEM32(ebx + 0xA28) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0xA28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0037DF63: ;
    edx = MEM32(0x901E28);
    eax = MEM32(edx + 0x124);
    ecx = ZX16(MEM16(eax + 6));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037DEF0; /* jl: less (signed <) */

loc_0037DF7C: ;
    ecx = MEM32(0x901E30);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0037DF88u); RECOMP_ABI_CALL(0x000242CCu, sub_000242CC); /* call 0x000242CC */

loc_0037DF88: ;
    MEM32(ebx + 0x898) = eax;
    ecx = MEM32(0x901E28);
    edx = MEM32(ecx + 0x124);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edx + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 4), LO16(esi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0037E2F2; /* jbe: below or equal (unsigned <=) */

loc_0037DFA6: ;
    goto loc_0037DFB0;

    /* nop */
    /* nop */

loc_0037DFB0: ;
    eax = MEM32(ebx + 0xA30);
    SET_LO8(eax, MEM8(esi + eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037E2D9; /* je: equal / zero */

loc_0037DFC1: ;
    edx = esi + -2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x26 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0037E2D9; /* ja: above (unsigned >) */

loc_0037DFCD: ;
    edx = ZX8(MEM8(esi + 0x37E362));
    { uint32_t _jt = MEM32(edx * 4 + 0x37E310); /* switch: 21 entries, 21 targets */
    if (_jt == 0x0037DFDBu) goto loc_0037DFDB;
    if (_jt == 0x0037E045u) goto loc_0037E045;
    if (_jt == 0x0037E10Fu) goto loc_0037E10F;
    if (_jt == 0x0037E11Eu) goto loc_0037E11E;
    if (_jt == 0x0037E12Du) goto loc_0037E12D;
    if (_jt == 0x0037E13Cu) goto loc_0037E13C;
    if (_jt == 0x0037E14Bu) goto loc_0037E14B;
    if (_jt == 0x0037E15Au) goto loc_0037E15A;
    if (_jt == 0x0037E169u) goto loc_0037E169;
    if (_jt == 0x0037E178u) goto loc_0037E178;
    if (_jt == 0x0037E187u) goto loc_0037E187;
    if (_jt == 0x0037E1F0u) goto loc_0037E1F0;
    if (_jt == 0x0037E239u) goto loc_0037E239;
    if (_jt == 0x0037E248u) goto loc_0037E248;
    if (_jt == 0x0037E254u) goto loc_0037E254;
    if (_jt == 0x0037E260u) goto loc_0037E260;
    if (_jt == 0x0037E26Cu) goto loc_0037E26C;
    if (_jt == 0x0037E278u) goto loc_0037E278;
    if (_jt == 0x0037E284u) goto loc_0037E284;
    if (_jt == 0x0037E290u) goto loc_0037E290;
    if (_jt == 0x0037E2D9u) goto loc_0037E2D9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0037DFDB: ;
    PUSH32(esp, 0x0037DFE0u); RECOMP_ABI_CALL(0x0001EB0Bu, sub_0001EB0B); /* call 0x0001EB0B */

loc_0037DFE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037DFF4; /* jne: not equal / not zero */

loc_0037DFE5: ;
    PUSH32(esp, 0x8326C8);
    PUSH32(esp, 0x8326BC);
    goto loc_0037E2CD;

loc_0037DFF4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037E008; /* jne: not equal / not zero */

loc_0037DFF9: ;
    PUSH32(esp, 0x8326B4);
    PUSH32(esp, 0x8326A8);
    goto loc_0037E2CD;

loc_0037E008: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037E01C; /* jne: not equal / not zero */

loc_0037E00D: ;
    PUSH32(esp, 0x8326A0);
    PUSH32(esp, 0x832694);
    goto loc_0037E2CD;

loc_0037E01C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    ecx = MEM32(0x901E34);
    if (CMP_NE(_fa, _fb)) goto loc_0037E036; /* jne: not equal / not zero */

loc_0037E027: ;
    PUSH32(esp, 0x832688);
    PUSH32(esp, 0x832688);
    goto loc_0037E2D3;

loc_0037E036: ;
    PUSH32(esp, 0x832680);
    PUSH32(esp, 0x832674);
    goto loc_0037E2D3;

loc_0037E045: ;
    eax = MEM32(0x8C5DC8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0037E100; /* ja: above (unsigned >) */

loc_0037E054: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x37E38C); /* switch: 13 entries, 10 targets */
    if (_jt == 0x0037E05Bu) goto loc_0037E05B;
    if (_jt == 0x0037E06Au) goto loc_0037E06A;
    if (_jt == 0x0037E079u) goto loc_0037E079;
    if (_jt == 0x0037E088u) goto loc_0037E088;
    if (_jt == 0x0037E097u) goto loc_0037E097;
    if (_jt == 0x0037E0A6u) goto loc_0037E0A6;
    if (_jt == 0x0037E0B5u) goto loc_0037E0B5;
    if (_jt == 0x0037E0C4u) goto loc_0037E0C4;
    if (_jt == 0x0037E0D3u) goto loc_0037E0D3;
    if (_jt == 0x0037E2D9u) goto loc_0037E2D9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0037E05B: ;
    PUSH32(esp, 0x83266C);
    PUSH32(esp, 0x832660);
    goto loc_0037E2CD;

loc_0037E06A: ;
    PUSH32(esp, 0x832658);
    PUSH32(esp, 0x83264C);
    goto loc_0037E2CD;

loc_0037E079: ;
    PUSH32(esp, 0x832644);
    PUSH32(esp, 0x832638);
    goto loc_0037E2CD;

loc_0037E088: ;
    PUSH32(esp, 0x832630);
    PUSH32(esp, 0x832624);
    goto loc_0037E2CD;

loc_0037E097: ;
    PUSH32(esp, 0x83261C);
    PUSH32(esp, 0x832610);
    goto loc_0037E2CD;

loc_0037E0A6: ;
    PUSH32(esp, 0x832608);
    PUSH32(esp, 0x8325FC);
    goto loc_0037E2CD;

loc_0037E0B5: ;
    PUSH32(esp, 0x8325F4);
    PUSH32(esp, 0x8325E8);
    goto loc_0037E2CD;

loc_0037E0C4: ;
    PUSH32(esp, 0x8325E0);
    PUSH32(esp, 0x8325D4);
    goto loc_0037E2CD;

loc_0037E0D3: ;
    _fa = (uint32_t)(MEM8(0x8F6A24)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8F6A24), 2 (8-bit) */
    ecx = MEM32(0x901E34);
    if (CMP_NE(_fa, _fb)) goto loc_0037E0F1; /* jne: not equal / not zero */

loc_0037E0E2: ;
    PUSH32(esp, 0x832688);
    PUSH32(esp, 0x832688);
    goto loc_0037E2D3;

loc_0037E0F1: ;
    PUSH32(esp, 0x7E4B18);
    PUSH32(esp, 0x8325C8);
    goto loc_0037E2D3;

loc_0037E100: ;
    PUSH32(esp, 0x832688);
    PUSH32(esp, 0x832688);
    goto loc_0037E2CD;

loc_0037E10F: ;
    PUSH32(esp, 0x8325B8);
    PUSH32(esp, 0x8325AC);
    goto loc_0037E2CD;

loc_0037E11E: ;
    PUSH32(esp, 0x8325A0);
    PUSH32(esp, 0x8325A0);
    goto loc_0037E2CD;

loc_0037E12D: ;
    PUSH32(esp, 0x832598);
    PUSH32(esp, 0x83258C);
    goto loc_0037E2CD;

loc_0037E13C: ;
    PUSH32(esp, 0x832580);
    PUSH32(esp, 0x832574);
    goto loc_0037E2CD;

loc_0037E14B: ;
    PUSH32(esp, 0x832568);
    PUSH32(esp, 0x832568);
    goto loc_0037E2CD;

loc_0037E15A: ;
    PUSH32(esp, 0x832560);
    PUSH32(esp, 0x832550);
    goto loc_0037E2CD;

loc_0037E169: ;
    PUSH32(esp, 0x832544);
    PUSH32(esp, 0x832534);
    goto loc_0037E2CD;

loc_0037E178: ;
    PUSH32(esp, 0x832528);
    PUSH32(esp, 0x832518);
    goto loc_0037E2CD;

loc_0037E187: ;
    ebp = ZX8(LO8(eax));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xA (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0037E194; /* jle: less or equal (signed <=) */

loc_0037E18F: ;
    ebp = 0xA;

loc_0037E194: ;
    eax = 0x832510;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0037E2D9; /* jle: less or equal (signed <=) */

loc_0037E1CB: ;
    goto loc_0037E1D0;

    /* nop */

loc_0037E1D0: ;
    eax = MEM32(esp + edi * 4 + 0x28);
    ecx = MEM32(0x901E34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x83250C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037E1E6u); RECOMP_ABI_CALL(0x000179F5u, sub_000179F5); /* call 0x000179F5 */

loc_0037E1E6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037E1D0; /* jl: less (signed <) */

loc_0037E1EB: ;
    goto loc_0037E2D9;

loc_0037E1F0: ;
    _fa = (uint32_t)(MEM32(0x8C5DC8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8C5DC8), 1 (32-bit) */
    SET_LO8(ebx, 0x43);
    if (CMP_NE(_fa, _fb)) goto loc_0037E1FD; /* jne: not equal / not zero */

loc_0037E1FB: ;
    SET_LO8(ebx, 0x52);

loc_0037E1FD: ;
    PUSH32(esp, 0x0037E202u); RECOMP_ABI_CALL(0x00030572u, sub_00030572); /* call 0x00030572 */

loc_0037E202: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = SX8(LO8(ebx));
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, 0x8324FC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0037E217u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0037E217: ;
    ecx = MEM32(0x901E34);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8324F4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037E230u); RECOMP_ABI_CALL(0x000179F5u, sub_000179F5); /* call 0x000179F5 */

loc_0037E230: ;
    ebx = MEM32(esp + 0x10);
    goto loc_0037E2D9;

loc_0037E239: ;
    PUSH32(esp, 0x8324EC);
    PUSH32(esp, 0x8324E4);
    goto loc_0037E2CD;

loc_0037E248: ;
    PUSH32(esp, 0x8324DC);
    PUSH32(esp, 0x8324D0);
    goto loc_0037E2CD;

loc_0037E254: ;
    PUSH32(esp, 0x8324C8);
    PUSH32(esp, 0x8324BC);
    goto loc_0037E2CD;

loc_0037E260: ;
    PUSH32(esp, 0x8324B4);
    PUSH32(esp, 0x8324A8);
    goto loc_0037E2CD;

loc_0037E26C: ;
    PUSH32(esp, 0x83249C);
    PUSH32(esp, 0x83249C);
    goto loc_0037E2CD;

loc_0037E278: ;
    PUSH32(esp, 0x832490);
    PUSH32(esp, 0x832490);
    goto loc_0037E2CD;

loc_0037E284: ;
    PUSH32(esp, 0x832480);
    PUSH32(esp, 0x832480);
    goto loc_0037E2CD;

loc_0037E290: ;
    edi = MEM32(ecx + 0x77C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0037E29C; /* jge: greater or equal (signed >=) */

loc_0037E29A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0037E29C: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, 0x0037E2A7u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0037E2A7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0037E2AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037E2ABu); } /* indirect call */
    }

loc_0037E2AE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x19);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0037E2B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037E2B5u); } /* indirect call */
    }

loc_0037E2B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037E2D9; /* jl: less (signed <) */

loc_0037E2BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0037E2D9; /* jge: greater or equal (signed >=) */

loc_0037E2C0: ;
    eax = MEM32(eax * 4 + 0x8C60B0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x832478);

loc_0037E2CD: ;
    ecx = MEM32(0x901E34);

loc_0037E2D3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037E2D9u); RECOMP_ABI_CALL(0x000179F5u, sub_000179F5); /* call 0x000179F5 */

loc_0037E2D9: ;
    ecx = MEM32(0x901E28);
    edx = MEM32(ecx + 0x124);
    eax = ZX16(MEM16(edx + 4));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037DFB0; /* jl: less (signed <) */

loc_0037E2F2: ;
    ecx = MEM32(0x901E30);
    eax = ebx + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037E301u); RECOMP_ABI_CALL(0x000242CCu, sub_000242CC); /* call 0x000242CC */

loc_0037E301: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x89C) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0037E530
 * Original: 0x0037E530 - 0x0037E5D4 (164 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037E530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037E530: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0037E5D1; /* ja: above (unsigned >) */

loc_0037E543: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x37E5D4); /* switch: 4 entries, 3 targets */
    if (_jt == 0x0037E54Au) goto loc_0037E54A;
    if (_jt == 0x0037E580u) goto loc_0037E580;
    if (_jt == 0x0037E5CDu) goto loc_0037E5CD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0037E54A: ;
    ecx = MEM32(0x901E28);
    MEM32(esp + 4) = 1;
    edx = MEM32(ecx + 0x108);
    ecx = MEM32(edx);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037E56Au); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0037E56A: ;
    MEM8(esi + 0x14) = 1;
    ecx = MEM32(0x8FCBE0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037E5D1; /* je: equal / zero */

loc_0037E578: ;
    PUSH32(esp, 0x0037E57Du); RECOMP_ABI_CALL(0x0003140Eu, sub_0003140E); /* call 0x0003140E */

loc_0037E57D: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0037E580: ;
    PUSH32(esp, 0x0037E585u); RECOMP_ABI_CALL(0x00028912u, sub_00028912); /* call 0x00028912 */

loc_0037E585: ;
    ecx = eax + 0xD60;
    PUSH32(esp, 0x0037E590u); RECOMP_ABI_CALL(0x00016B40u, sub_00016B40); /* call 0x00016B40 */

loc_0037E590: ;
    SET_LO8(eax, MEM8(esi + 0x16));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037E5B2; /* je: equal / zero */

loc_0037E597: ;
    PUSH32(esp, 0x0037E59Cu); RECOMP_ABI_CALL(0x00028912u, sub_00028912); /* call 0x00028912 */

loc_0037E59C: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esi + 8); /* cvtsi2ss */
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x11D0);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0037E5B2u); RECOMP_ABI_CALL(0x0001FC54u, sub_0001FC54); /* call 0x0001FC54 */

loc_0037E5B2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3000A);
    PUSH32(esp, 0x8B21B8);
    MEM8(esi + 0x14) = 1;
    PUSH32(esp, 0x0037E5C7u); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_0037E5C7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0037E5CD: ;
    MEM8(esi + 0x14) = 1;

loc_0037E5D1: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0037E656
 * Original: 0x0037E656 - 0x0037E659 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037E656(void)
{

loc_0037E656: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0037E670
 * Original: 0x0037E670 - 0x0037EA9D (1069 bytes, 305 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037E670(void)
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

loc_0037E670: ;
    _fb = (uint32_t)(0xEC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xEC));
    esp = esp - 0xEC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x901E28);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x48);
    MEM32(esp + 0x40) = eax;
    eax = MEM32(edi + 0x34);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xC0)) >> 32) & 1);
    esi = esi + 0xC0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0037E8B0; /* jne: not equal / not zero */

loc_0037E69B: ;
    MEM32(edi + 0x34) = 1;
    ecx = MEM32(0x901E28);
    _fa = (uint32_t)(MEM8(ecx + 0x52)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x52), 2 (8-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebp);
    ebp = 0xA;
    eax = 0x14;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x10) = 5;
    MEM32(esp + 0x30) = ebp;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x2C) = ebp;
    MEM32(esp + 0x38) = ebp;
    MEM32(esp + 0x20) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0037E70A; /* jb: below (unsigned <) */

loc_0037E6E1: ;
    MEM32(esp + 0x30) = eax;
    eax = 0xF;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x2C) = ebp;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x20) = ebp;

loc_0037E70A: ;
    ecx = MEM32(ecx + 0x788);
    PUSH32(esp, 0x0037E715u); RECOMP_ABI_CALL(0x00031A1Cu, sub_00031A1C); /* call 0x00031A1C */

loc_0037E715: ;
    ecx = esp + 0x48;
    PUSH32(esp, 0x32);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0037E721u); RECOMP_ABI_CALL(0x00026216u, sub_00026216); /* call 0x00026216 */

loc_0037E721: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(0x7BA2C4)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_0037E73C; /* jb: below (unsigned <) */

loc_0037E738: ;
    MEM32(esp + 0x10) = ebx;

loc_0037E73C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0037E74F; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_0037E74B: ;
    MEM32(esp + 0x10) = ebx;

loc_0037E74F: ;
    edx = MEM32(0x901E28);
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x640) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x640 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0037E764; /* jle: less or equal (signed <=) */

loc_0037E760: ;
    MEM32(esp + 0x14) = ebx;

loc_0037E764: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x320) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x320 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0037E76F; /* jge: greater or equal (signed >=) */

loc_0037E76B: ;
    MEM32(esp + 0x14) = ebp;

loc_0037E76F: ;
    PUSH32(esp, 0xC);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0037E77Du); RECOMP_ABI_CALL(0x0002F91Au, sub_0002F91A); /* call 0x0002F91A */

loc_0037E77D: ;
    PUSH32(esp, 0xB);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0037E78Bu); RECOMP_ABI_CALL(0x0002F91Au, sub_0002F91A); /* call 0x0002F91A */

loc_0037E78B: ;
    PUSH32(esp, 0x12);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0037E797u); RECOMP_ABI_CALL(0x0002F91Au, sub_0002F91A); /* call 0x0002F91A */

loc_0037E797: ;
    ebx = 9;
    PUSH32(esp, ebx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037E7A7u); RECOMP_ABI_CALL(0x0002F91Au, sub_0002F91A); /* call 0x0002F91A */

loc_0037E7A7: ;
    PUSH32(esp, 0xD);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0037E7B5u); RECOMP_ABI_CALL(0x0002F91Au, sub_0002F91A); /* call 0x0002F91A */

loc_0037E7B5: ;
    PUSH32(esp, 0xF);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0037E7C1u); RECOMP_ABI_CALL(0x0002F91Au, sub_0002F91A); /* call 0x0002F91A */

loc_0037E7C1: ;
    PUSH32(esp, 0x10);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037E7CDu); RECOMP_ABI_CALL(0x0002F91Au, sub_0002F91A); /* call 0x0002F91A */

loc_0037E7CD: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0037E7DAu); RECOMP_ABI_CALL(0x0002F91Au, sub_0002F91A); /* call 0x0002F91A */

loc_0037E7DA: ;
    PUSH32(esp, 0xE);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0037E7E6u); RECOMP_ABI_CALL(0x0002F91Au, sub_0002F91A); /* call 0x0002F91A */

loc_0037E7E6: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x34);
    MEM32(esp + 0x5C) = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x60) = ecx;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x64) = ecx;
    ecx = MEM32(esp + 0x30);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x68) = ecx;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x6C) = ecx;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x70) = ecx;
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x74) = ecx;
    ecx = MEM32(esp + 0x38);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x78) = ecx;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x7C) = ecx;
    ecx = esp + 0x54;
    MEM32(esp + 0xAC) = 0xC;
    MEM32(esp + 0xB0) = 0xB;
    MEM32(esp + 0xB4) = 0x12;
    MEM32(esp + 0xB8) = ebx;
    MEM32(esp + 0xBC) = 0xD;
    MEM32(esp + 0xC0) = 0xF;
    MEM32(esp + 0xC4) = 0x10;
    MEM32(esp + 0xC8) = ebp;
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0xCC) = 0xE;
    MEM32(esp + 0x54) = ebx;
    PUSH32(esp, 0x0037E8AAu); RECOMP_ABI_CALL(0x0001AD3Fu, sub_0001AD3F); /* call 0x0001AD3F */

loc_0037E8AA: ;
    POP32(esp, ebp);
    goto loc_0037EA64;

loc_0037E8B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0037EA93; /* jne: not equal / not zero */

loc_0037E8B9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x0037E8C5u); RECOMP_ABI_CALL(0x00031AD0u, sub_00031AD0); /* call 0x00031AD0 */

loc_0037E8C5: ;
    eax = MEM32(0x901E28);
    ecx = MEM32(eax + 0x788);
    PUSH32(esp, 0x0037E8D5u); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_0037E8D5: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x78)) >> 32) & 1);
    eax = eax + 0x78;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0037E8E2u); RECOMP_ABI_CALL(0x0001BE6Au, sub_0001BE6A); /* call 0x0001BE6A */

loc_0037E8E2: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0037E8F0u); RECOMP_ABI_CALL(0x0002CC47u, sub_0002CC47); /* call 0x0002CC47 */

loc_0037E8F0: ;
    ecx = esp + 0x1C;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x0037E8FBu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0037E8FB: ;
    ecx = esp + 0x34;
    PUSH32(esp, 0x0037E904u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0037E904: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0037EA93; /* je: equal / zero */

loc_0037E90C: ;
    ebx = MEM32(edi + 0x34);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esp + 0x1C;
    PUSH32(esp, 0x32);
    MEM32(edi + 0x34) = ebx;
    PUSH32(esp, edx);
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x0037E921u); RECOMP_ABI_CALL(0x00026216u, sub_00026216); /* call 0x00026216 */

loc_0037E921: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(0x7AF57C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_0037E93A; /* jb: below (unsigned <) */

loc_0037E938: ;
    SET_LO8(ebx, 1);

loc_0037E93A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0037E94A; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0037E948: ;
    SET_LO8(ebx, 1);

loc_0037E94A: ;
    eax = MEM32(0x901E28);
    ecx = MEM32(eax + 0x77C);
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0037E960u); RECOMP_ABI_CALL(0x000275E4u, sub_000275E4); /* call 0x000275E4 */

loc_0037E960: ;
    edx = MEM32(0x8FC484);
    eax = MEM32(0x8FC47C);
    ecx = MEM32(0x8FC480);
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEM32(esp + 0x44) = edx;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm5.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = ecx;
    xmm2 = xmm3; /* movaps */
    if ((_fca >= _fcb)) goto loc_0037E9A1; /* jae: above or equal (unsigned >=) (xmm5.f[0] vs xmm1.f[0]) */

loc_0037E99E: ;
    xmm2 = xmm0; /* movaps */

loc_0037E9A1: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0037E9AF; /* jb: below (unsigned <) (xmm4.f[0] vs xmm1.f[0]) */

loc_0037E9AC: ;
    xmm0 = xmm3; /* movaps */

loc_0037E9AF: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0037E9BC; /* jnp: not parity */

loc_0037E9B8: ;
    SET_LO8(edx, 1);
    goto loc_0037E9BE;

loc_0037E9BC: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0037E9BE: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0037E9CA; /* jb: below (unsigned <) (xmm4.f[0] vs xmm1.f[0]) */

loc_0037E9C3: ;
    _fca = xmm5.f[0]; _fcb = MEMF(esp + 0x24); /* comiss */
    goto loc_0037E9D3;

loc_0037E9CA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */

loc_0037E9D3: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0037E9D9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm5.f[0]) */

loc_0037E9D5: ;
    SET_LO8(eax, 1);
    goto loc_0037E9DB;

loc_0037E9D9: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0037E9DB: ;
    ecx = MEM32(edi + 0x48);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0xC));
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0037EA3D; /* je: equal / zero */

loc_0037E9E3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(4));
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0037EA22; /* je: equal / zero */

loc_0037E9E8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0037EA67; /* jne: not equal / not zero */

loc_0037E9EB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0037EA0B; /* jne: not equal / not zero */

loc_0037E9EF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0037EA0B; /* je: equal / zero */

loc_0037E9F4: ;
    PUSH32(esp, 0x23);
    PUSH32(esp, 0x0037E9FBu); RECOMP_ABI_CALL(0x00016F1Eu, sub_00016F1E); /* call 0x00016F1E */

loc_0037E9FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0037EA67; /* je: equal / zero */

loc_0037EA02: ;
    MEM32(edi + 0x48) = 0x12;
    goto loc_0037EA67;

loc_0037EA0B: ;
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x0037EA12u); RECOMP_ABI_CALL(0x00016F1Eu, sub_00016F1E); /* call 0x00016F1E */

loc_0037EA12: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0037EA67; /* je: equal / zero */

loc_0037EA19: ;
    MEM32(edi + 0x48) = 0xB;
    goto loc_0037EA67;

loc_0037EA22: ;
    PUSH32(esp, 0x23);
    PUSH32(esp, 0x0037EA29u); RECOMP_ABI_CALL(0x00016F1Eu, sub_00016F1E); /* call 0x00016F1E */

loc_0037EA29: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0037EA67; /* je: equal / zero */

loc_0037EA30: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0037EA67; /* jne: not equal / not zero */

loc_0037EA34: ;
    MEM32(edi + 0x48) = 0x12;
    goto loc_0037EA67;

loc_0037EA3D: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0037EA50; /* je: equal / zero */

loc_0037EA41: ;
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0xFFFFFFF9u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x12) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x12)) >> 32) & 1);
    ebx = ebx + 0x12;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x48) = ebx;
    goto loc_0037EA67;

loc_0037EA50: ;
    PUSH32(esp, 0x23);
    PUSH32(esp, 0x0037EA57u); RECOMP_ABI_CALL(0x00016F1Eu, sub_00016F1E); /* call 0x00016F1E */

loc_0037EA57: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xA)) >> 32) & 1);
    eax = eax + 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0037EA64: ;
    MEM32(edi + 0x48) = eax;

loc_0037EA67: ;
    eax = MEM32(edi + 0x48);
    _fa = (uint32_t)(MEM32(esp + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x40), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0037EA93; /* je: equal / zero */

loc_0037EA70: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x0037EA7Du); RECOMP_ABI_CALL(0x00018CB5u, sub_00018CB5); /* call 0x00018CB5 */

loc_0037EA7D: ;
    edi = MEM32(edi + 0x48);
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 4) = edx;
    MEM32(esi) = edi;

loc_0037EA93: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xEC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xEC)) >> 32) & 1);
    esp = esp + 0xEC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0037EBB0
 * Original: 0x0037EBB0 - 0x0037EBCE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037EBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037EBB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    PUSH32(esp, 0x0037EBBBu); RECOMP_ABI_CALL(0x0003196Du, sub_0003196D); /* call 0x0003196D */

loc_0037EBBB: ;
    eax = MEM32(esi + 0x30);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0037EBCA; /* jne: not equal / not zero */

loc_0037EBC3: ;
    ecx = esi;
    PUSH32(esp, 0x0037EBCAu); RECOMP_ABI_CALL(0x0001AC6Du, sub_0001AC6D); /* call 0x0001AC6D */

loc_0037EBCA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037EBE0
 * Original: 0x0037EBE0 - 0x0037EC51 (113 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037EBE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037EBE0: ;
    eax = MEM32(0x901E28);
    ecx = MEM32(eax + 0x788);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0037EBF5u); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_0037EBF5: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0037EC01u); RECOMP_ABI_CALL(0x000307D9u, sub_000307D9); /* call 0x000307D9 */

loc_0037EC01: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0037EC0Au); RECOMP_ABI_CALL(0x00029650u, sub_00029650); /* call 0x00029650 */

loc_0037EC0A: ;
    ecx = esp + 8;
    esi = eax;
    PUSH32(esp, 0x0037EC15u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0037EC15: ;
    edx = MEM32(0x901E28);
    ecx = MEM32(edx + 0x788);
    PUSH32(esp, 0x0037EC26u); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_0037EC26: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x78;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0037EC33u); RECOMP_ABI_CALL(0x0001BE6Au, sub_0001BE6A); /* call 0x0001BE6A */

loc_0037EC33: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0037EC3Cu); RECOMP_ABI_CALL(0x00029650u, sub_00029650); /* call 0x00029650 */

loc_0037EC3C: ;
    ecx = esp + 8;
    edi = eax;
    PUSH32(esp, 0x0037EC47u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0037EC47: ;
    eax = esi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0037EC70
 * Original: 0x0037EC70 - 0x0037EC9C (44 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037EC70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037EC70: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037EC8D; /* jne: not equal / not zero */

loc_0037EC7A: ;
    ecx = esi + 8;
    PUSH32(esp, 0x0037EC82u); RECOMP_ABI_CALL(0x0001C2B6u, sub_0001C2B6); /* call 0x0001C2B6 */

loc_0037EC82: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037EC98; /* je: equal / zero */

loc_0037EC86: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037EC91; /* jne: not equal / not zero */

loc_0037EC8D: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0037EC91: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0037EC98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037EC95u); } /* indirect call */
    }

loc_0037EC98: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0037ECB0
 * Original: 0x0037ECB0 - 0x0037ECCA (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037ECB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0037ECB0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax * 4 + 0x8F0040);
    PUSH32(esp, 0x0037ECC0u); RECOMP_ABI_CALL(0x00015CF9u, sub_00015CF9); /* call 0x00015CF9 */

loc_0037ECC0: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0037ECD0
 * Original: 0x0037ECD0 - 0x0037ECF2 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037ECD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037ECD0: ;
    SET_LO8(edx, MEM8(ecx + 0x764));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037ECE7; /* je: equal / zero */

loc_0037ECDC: ;
    _fa = (uint32_t)(MEM8(ecx + 0x88D)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x88D), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037ECE7; /* je: equal / zero */

loc_0037ECE4: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0037ECE7: ;
    ecx = MEM32(0x901E40);
    g_seh_ebp = ebp; sub_0001576D(); return; /* tail jmp 0x0001576D */

}

/**
 * sub_0037ED00
 * Original: 0x0037ED00 - 0x0037ED9E (158 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037ED00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037ED00: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x88E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037ED9C; /* jne: not equal / not zero */

loc_0037ED11: ;
    _fa = (uint32_t)(MEM32(esi + 0x778)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x778), 0x7FFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037ED9C; /* je: equal / zero */

loc_0037ED21: ;
    eax = MEM32(esi + 0x138);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037ED9C; /* je: equal / zero */

loc_0037ED2B: ;
    MEM8(esi + 0x88E) = 1;
    ecx = MEM32(0x901E30);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0037ED3Eu); RECOMP_ABI_CALL(0x00013E9Au, sub_00013E9A); /* call 0x00013E9A */

loc_0037ED3E: ;
    eax = MEM32(esi + 0x138);
    MEM8(esi + 0x88D) = 1;
    ecx = MEM32(eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0037ED8F; /* jle: less or equal (signed <=) */

loc_0037ED53: ;
    ecx = MEM32(esi + 0x138);
    ecx = MEM32(ecx + edi * 4 + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0037ED62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037ED5Fu); } /* indirect call */
    }

loc_0037ED62: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037ED80; /* jne: not equal / not zero */

loc_0037ED66: ;
    eax = MEM32(esi + 0x138);
    ecx = MEM32(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037ED53; /* jl: less (signed <) */

loc_0037ED73: ;
    ecx = MEM32(0x901E30);
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00027C51(); return; /* tail jmp 0x00027C51 */

loc_0037ED80: ;
    ecx = MEM32(esi + 0x138);
    ecx = MEM32(ecx + edi * 4 + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0037ED8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037ED8Cu); } /* indirect call */
    }

loc_0037ED8F: ;
    ecx = MEM32(0x901E30);
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00027C51(); return; /* tail jmp 0x00027C51 */

loc_0037ED9C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0037EDD0
 * Original: 0x0037EDD0 - 0x0037EDF8 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037EDD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037EDD0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037EDF4; /* je: equal / zero */

loc_0037EDD8: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037EDF4; /* je: equal / zero */

loc_0037EDDF: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49A7C82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0x49A7C82 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037EDF4; /* jne: not equal / not zero */

loc_0037EDEB: ;
    ecx = MEM32(ecx + 0x28);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx);
    esp += 4; return; /* ret */

loc_0037EDF4: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_0037EE10
 * Original: 0x0037EE10 - 0x0037EE67 (87 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037EE10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037EE10: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037EE60; /* je: equal / zero */

loc_0037EE1B: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037EE60; /* je: equal / zero */

loc_0037EE22: ;
    eax = MEM32(eax + 4);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x109A6A26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x109A6A26 (32-bit) */
    ecx = MEM32(ecx + 0x1C);
    if (CMP_NE(_fa, _fb)) goto loc_0037EE50; /* jne: not equal / not zero */

loc_0037EE32: ;
    ecx = MEM32(ecx + 4);
    edx = MEM32(ecx + 4);
    eax = MEM32(ecx);
    MEM32(esp + 4) = edx;
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0037EE50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49A7DF9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x49A7DF9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037EE60; /* jne: not equal / not zero */

loc_0037EE57: ;
    edx = MEM32(ecx + 4);
    eax = MEM32(edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0037EE60: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0037EE80
 * Original: 0x0037EE80 - 0x0037EEC5 (69 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037EE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037EE80: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037EEBE; /* je: equal / zero */

loc_0037EE8B: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037EEBE; /* je: equal / zero */

loc_0037EE92: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x109A6A26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0x109A6A26 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037EEBE; /* jne: not equal / not zero */

loc_0037EE9E: ;
    edx = MEM32(eax + 0x1C);
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    MEM32(esp) = eax;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 4) = edx;
    MEM32(esp + 0xC) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0037EEBE: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0037EEE0
 * Original: 0x0037EEE0 - 0x0037EF25 (69 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037EEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037EEE0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037EF1E; /* je: equal / zero */

loc_0037EEEB: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037EF1E; /* je: equal / zero */

loc_0037EEF2: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x109A6A26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0x109A6A26 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037EF1E; /* jne: not equal / not zero */

loc_0037EEFE: ;
    edx = MEM32(eax + 0x1C);
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx);
    edx = MEM32(ecx + 8);
    MEM32(esp) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0037EF1E: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0037EF40
 * Original: 0x0037EF40 - 0x0037EF89 (73 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037EF40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037EF40: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037EF83; /* je: equal / zero */

loc_0037EF4B: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037EF83; /* je: equal / zero */

loc_0037EF52: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x109A6A26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0x109A6A26 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037EF83; /* jne: not equal / not zero */

loc_0037EF5E: ;
    edx = MEM32(eax + 0x1C);
    eax = MEM32(edx + 4);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 4) = edx;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0037EF83: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0037EFA0
 * Original: 0x0037EFA0 - 0x0037F1E6 (582 bytes, 148 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037EFA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037EFA0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    MEM32(edi) = 0;
    xmm0 = XMM_MEM(0x8F9620); /* movaps */
    XMM_STORE(esi, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9630); /* movaps */
    XMM_STORE(esi + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9640); /* movaps */
    XMM_STORE(esi + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9650); /* movaps */
    XMM_STORE(esi + 0x30, xmm0); /* movaps */
    if (CMP_EQ(_fa, _fb)) goto loc_0037F1DE; /* je: equal / zero */

loc_0037EFEA: ;
    ecx = MEM32(eax + 0x70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037F1D6; /* je: equal / zero */

loc_0037EFF5: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC9A76EE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0xC9A76EE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037F1D6; /* jne: not equal / not zero */

loc_0037F005: ;
    edx = MEM32(eax + 0x78);
    eax = MEM32(edx + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(eax);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x20) = eax;
    eax = ecx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0037F0D5; /* ja: above (unsigned >) */

loc_0037F024: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x37F1E8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0037F02Bu) goto loc_0037F02B;
    if (_jt == 0x0037F049u) goto loc_0037F049;
    if (_jt == 0x0037F05Fu) goto loc_0037F05F;
    if (_jt == 0x0037F091u) goto loc_0037F091;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0037F02B: ;
    ecx = MEM32(0x901E28);
    eax = MEM32(ecx + 0x77C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037F0D5; /* jne: not equal / not zero */

loc_0037F03F: ;
    eax = MEM32(edi);
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0037F0D3;

loc_0037F049: ;
    edx = MEM32(0x901E28);
    _fa = (uint32_t)(MEM32(edx + 0x77C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x77C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037F0D5; /* jne: not equal / not zero */

loc_0037F058: ;
    eax = MEM32(edi);
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0037F0D3;

loc_0037F05F: ;
    eax = MEM32(0x901E28);
    ecx = MEM32(eax + 0x77C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037F077; /* jne: not equal / not zero */

loc_0037F06E: ;
    PUSH32(esp, 0x0037F073u); RECOMP_ABI_CALL(0x000220B2u, sub_000220B2); /* call 0x000220B2 */

loc_0037F073: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037F0CE; /* je: equal / zero */

loc_0037F077: ;
    ecx = MEM32(0x901E28);
    _fa = (uint32_t)(MEM32(ecx + 0x77C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x77C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037F0D5; /* jne: not equal / not zero */

loc_0037F086: ;
    PUSH32(esp, 0x0037F08Bu); RECOMP_ABI_CALL(0x000220B2u, sub_000220B2); /* call 0x000220B2 */

loc_0037F08B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037F0D5; /* je: equal / zero */

loc_0037F08F: ;
    goto loc_0037F0CE;

loc_0037F091: ;
    edx = MEM32(0x901E28);
    eax = MEM32(edx + 0x77C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037F0AA; /* jne: not equal / not zero */

loc_0037F0A1: ;
    PUSH32(esp, 0x0037F0A6u); RECOMP_ABI_CALL(0x000220B2u, sub_000220B2); /* call 0x000220B2 */

loc_0037F0A6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037F0CE; /* jne: not equal / not zero */

loc_0037F0AA: ;
    eax = MEM32(0x901E28);
    _fa = (uint32_t)(MEM32(eax + 0x77C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x77C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037F0C1; /* jne: not equal / not zero */

loc_0037F0B8: ;
    PUSH32(esp, 0x0037F0BDu); RECOMP_ABI_CALL(0x000220B2u, sub_000220B2); /* call 0x000220B2 */

loc_0037F0BD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037F0CE; /* je: equal / zero */

loc_0037F0C1: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037F0CE; /* je: equal / zero */

loc_0037F0CA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037F0D5; /* jne: not equal / not zero */

loc_0037F0CE: ;
    eax = MEM32(edi);
    eax = eax ^ 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0037F0D3: ;
    MEM32(edi) = eax;

loc_0037F0D5: ;
    eax = ebp;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    if ((_fa == 0)) goto loc_0037F0F8; /* je: equal / zero */

loc_0037F0DB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0037F1D6; /* jne: not equal / not zero */

loc_0037F0E2: ;
    ecx = MEM32(0x8F95D0);
    edx = MEM32(0x8F95D4);
    eax = MEM32(0x8F95D8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    goto loc_0037F15E;

loc_0037F0F8: ;
    ecx = MEM32(0x8F95D0);
    edx = MEM32(0x8F95D4);
    eax = MEM32(0x8F95D8);
    xmm3 = XMM_SCALAR(MEMF(0x7AB330)); /* movss */
    MEM32(esp + 8) = ecx;
    ecx = MEM32(0x901E28);
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0037F128u); RECOMP_ABI_CALL(0x0001C577u, sub_0001C577); /* call 0x0001C577 */

loc_0037F128: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037F134; /* je: equal / zero */

loc_0037F12C: ;
    xmm3 = XMM_SCALAR(MEMF(0x8326F0)); /* movss */

loc_0037F134: ;
    _fa = (uint32_t)(MEM32(0x8E932C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8E932C), 2 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_NE(_fa, _fb)) goto loc_0037F16A; /* jne: not equal / not zero */

loc_0037F140: ;
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);

loc_0037F15E: ;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;

loc_0037F16A: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esi + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    MEM32(edi) = MEM32(edi) ^ 4;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0037F1D6: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0037F1DE: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0037F1E6
 * Original: 0x0037F1E6 - 0x0037F290 (170 bytes, 159 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037F1E6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037F1E6: ;
    edi = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    RECOMP_UNIMPL("aaa", 0x0037F1EAu); /* TODO: aaa */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + -16) = MEM8(ecx + -16) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx + -16)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("aaa", 0x0037F1EEu); /* TODO: aaa */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edi + -16) = MEM8(edi + -16) + LO8(ebx);
    _fa = (uint32_t)(MEM8(edi + -16)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("aaa", 0x0037F1F2u); /* TODO: aaa */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + -872400912) = MEM8(ecx + -872400912) + LO8(edx);
    _fa = (uint32_t)(MEM8(ecx + -872400912)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0037F290
 * Original: 0x0037F290 - 0x0037F302 (114 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037F290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037F290: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0037F294: ;
    ecx = MEM32(edi + 0x8E8EB8);
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037F2B5; /* je: equal / zero */

loc_0037F2A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037F2B5; /* je: equal / zero */

loc_0037F2A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037F2B5; /* je: equal / zero */

loc_0037F2AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037F2B5; /* je: equal / zero */

loc_0037F2B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037F2E9; /* jne: not equal / not zero */

loc_0037F2B5: ;
    eax = MEM32(ecx + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x901DDC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0037F2E9; /* je: equal / zero */

loc_0037F2C1: ;
    ecx = eax;
    PUSH32(esp, 0x0037F2C8u); RECOMP_ABI_CALL(0x00029290u, sub_00029290); /* call 0x00029290 */

loc_0037F2C8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037F2E9; /* je: equal / zero */

loc_0037F2CE: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037F2DA; /* je: equal / zero */

loc_0037F2D5: ;
    PUSH32(esp, 0x0037F2DAu); RECOMP_ABI_CALL(0x0001DCBFu, sub_0001DCBF); /* call 0x0001DCBF */

loc_0037F2DA: ;
    eax = MEM32(esi + 0x110);
    ecx = esi + 0x110;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0037F2E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037F2E6u); } /* indirect call */
    }

loc_0037F2E9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xBC (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0037F294; /* jle: less or equal (signed <=) */

loc_0037F2F4: ;
    PUSH32(esp, 0x0037F2F9u); RECOMP_ABI_CALL(0x0002C567u, sub_0002C567); /* call 0x0002C567 */

loc_0037F2F9: ;
    POP32(esp, edi);
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0001A664(); return; /* tail jmp 0x0001A664 */

}

/**
 * sub_0037F320
 * Original: 0x0037F320 - 0x0037F35A (58 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037F320(void)
{

loc_0037F320: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0037F370
 * Original: 0x0037F370 - 0x0037F3E1 (113 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037F370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037F370: ;
    eax = MEM32(0x8FC1D0);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(eax + 0x218)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x218), 2 (32-bit) */
    SET_LO8(eax, MEM8(esi + 0x121C));
    if (CMP_NE(_fa, _fb)) goto loc_0037F3B3; /* jne: not equal / not zero */

loc_0037F387: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037F3DD; /* jne: not equal / not zero */

loc_0037F38B: ;
    MEM8(esi + 0x121C) = 1;
    ecx = MEM32(0x901E28);
    ecx = MEM32(ecx + 0x788);
    PUSH32(esp, 0x0037F3A3u); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_0037F3A3: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 0;
    ecx = eax;
    g_seh_ebp = ebp; sub_0001B12C(); return; /* tail jmp 0x0001B12C */

loc_0037F3B3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037F3DD; /* je: equal / zero */

loc_0037F3B7: ;
    edx = MEM32(0x901E28);
    ecx = MEM32(edx + 0x788);
    PUSH32(esp, 0x0037F3C8u); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_0037F3C8: ;
    ecx = MEM32(esi + 0x1218);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0037F3D6u); RECOMP_ABI_CALL(0x0001B12Cu, sub_0001B12C); /* call 0x0001B12C */

loc_0037F3D6: ;
    MEM8(esi + 0x121C) = 0;

loc_0037F3DD: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037F400
 * Original: 0x0037F400 - 0x0037F429 (41 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037F400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037F400: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx + 0x1C;
    PUSH32(esp, esi);

loc_0037F406: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037F427; /* je: equal / zero */

loc_0037F40C: ;
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037F41A; /* jne: not equal / not zero */

loc_0037F413: ;
    esi = MEM32(ecx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037F427; /* je: equal / zero */

loc_0037F41A: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x94;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1F (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037F406; /* jl: less (signed <) */

loc_0037F425: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0037F427: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0037F440
 * Original: 0x0037F440 - 0x0037F47F (63 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037F440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037F440: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0x1C;
    esi = 0x1F;

loc_0037F451: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037F470; /* je: equal / zero */

loc_0037F457: ;
    ebx = MEM32(ecx + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037F465; /* jne: not equal / not zero */

loc_0037F45E: ;
    ebx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037F470; /* je: equal / zero */

loc_0037F465: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037F46F; /* je: equal / zero */

loc_0037F46A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037F470; /* jne: not equal / not zero */

loc_0037F46F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0037F470: ;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x94;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0037F451; /* jne: not equal / not zero */

loc_0037F479: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037F490
 * Original: 0x0037F490 - 0x0037F4F5 (101 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037F490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037F490: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx + 0x34;
    /* nop */

loc_0037F4A0: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 0x78);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    SET_LO8(ebx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037F4BD; /* je: equal / zero */

loc_0037F4AE: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037F4BD; /* jl: less (signed <) */

loc_0037F4B3: ;
    _fa = (uint32_t)(MEM32(eax + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -16), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037F4BD; /* je: equal / zero */

loc_0037F4B9: ;
    SET_LO8(edx, 1);
    goto loc_0037F4BF;

loc_0037F4BD: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0037F4BF: ;
    ecx = MEM32(eax + -24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037F4DA; /* je: equal / zero */

loc_0037F4C6: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037F4D2; /* jne: not equal / not zero */

loc_0037F4CC: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037F4DA; /* je: equal / zero */

loc_0037F4D2: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037F4ED; /* jne: not equal / not zero */

loc_0037F4D6: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037F4ED; /* jne: not equal / not zero */

loc_0037F4DA: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x94;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1F (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037F4A0; /* jl: less (signed <) */

loc_0037F4E5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0037F4ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037F510
 * Original: 0x0037F510 - 0x0037F555 (69 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037F510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037F510: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0037F520;

    /* nop */

loc_0037F520: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037F53B; /* je: equal / zero */

loc_0037F526: ;
    edi = MEM32(eax + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037F534; /* jne: not equal / not zero */

loc_0037F52D: ;
    edi = MEM32(eax + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037F53B; /* je: equal / zero */

loc_0037F534: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037F54E; /* je: equal / zero */

loc_0037F53B: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x94;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1F (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037F520; /* jl: less (signed <) */

loc_0037F547: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0037F54E: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037F570
 * Original: 0x0037F570 - 0x0037F5AE (62 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037F570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037F570: ;
    eax = MEM32(esp + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    PUSH32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_0037F5A7; /* jge: greater or equal (signed >=) */

loc_0037F57B: ;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x94);
    edx = edx + ecx + 0x1C;

loc_0037F587: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037F59B; /* je: equal / zero */

loc_0037F58D: ;
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037F5AA; /* jne: not equal / not zero */

loc_0037F594: ;
    esi = MEM32(ecx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037F5AA; /* jne: not equal / not zero */

loc_0037F59B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x94;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037F587; /* jl: less (signed <) */

loc_0037F5A7: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0037F5AA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037F5C0
 * Original: 0x0037F5C0 - 0x0037F6B7 (247 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037F5C0(void)
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

loc_0037F5C0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037F6B2; /* jl: less (signed <) */

loc_0037F5D2: ;
    ecx = MEM32(esi * 4 + 0x8E8EB8);
    edx = MEM32(ecx + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edx);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(0x8F010C);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    MEM32(esp + 0x14) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0037F6B1; /* jle: less or equal (signed <=) */

loc_0037F606: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    edi = edi;

loc_0037F620: ;
    ecx = MEM32(ecx + edx * 4 + 4);
    edi = (uint32_t)(int32_t)SMEM8(ecx + 0x39);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037F6A0; /* je: equal / zero */

loc_0037F62C: ;
    edi = MEM32(ecx + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037F6A0; /* jne: not equal / not zero */

loc_0037F633: ;
    ecx = MEM32(ecx + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(ecx);
    MEM32(esp + 0xC) = edi;
    edi = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 0x14) = ecx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esp + 0x10) = edi;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm6.f[0]; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm7.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fca = xmm3.f[0]; _fcb = MEMF(esp + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0037F6A0; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs MEMF(esp + 8)) */

loc_0037F69F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0037F6A0: ;
    ecx = MEM32(0x8F010C);
    edi = MEM32(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037F620; /* jl: less (signed <) */

loc_0037F6B1: ;
    POP32(esp, edi);

loc_0037F6B2: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0037F700
 * Original: 0x0037F700 - 0x0037F73D (61 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037F700(void)
{

loc_0037F700: ;
    SET_LO16(eax, MEM16(esp + 8));
    SET_LO16(edx, MEM16(esp + 0xC));
    MEM16(ecx + 8) = LO16(eax);
    SET_LO16(eax, MEM16(esp + 4));
    MEM32(ecx) = 0x26;
    MEM16(ecx + 0xA) = LO16(edx);
    MEM16(ecx + 0xC) = LO16(eax);
    edx = MEM32(0x901E40);
    eax = MEM32(edx + 0x1208);
    edx = MEM32(eax + 0x1C);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 0x10) = 1;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0037F750
 * Original: 0x0037F750 - 0x0037F7C3 (115 bytes, 28 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037F750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0037F750: ;
    SET_LO16(eax, MEM16(esp + 8));
    PUSH32(esp, esi);
    esi = ecx;
    MEM16(esi + 8) = LO16(eax);
    eax = MEM32(esp + 8);
    MEM32(esi) = 0x24;
    MEM16(esi + 0xA) = LO16(eax);
    MEM16(esi + 0xC) = 0xFFFF;
    ecx = MEM32(0x901E40);
    edx = MEM32(ecx + 0x1208);
    ecx = MEM32(edx + 0x1C);
    SET_LO16(edx, MEM16(esp + 0x10));
    PUSH32(esp, 0x43C00000);
    PUSH32(esp, eax);
    MEM32(esi + 4) = ecx;
    MEM16(esi + 0x14) = LO16(edx);
    MEM32(esi + 0x10) = 1;
    PUSH32(esp, 0x0037F79Du); RECOMP_ABI_CALL(0x0001FEB6u, sub_0001FEB6); /* call 0x0001FEB6 */

loc_0037F79D: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x1C); /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x7A99C0)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0037F7B8; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0037F7B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0037F7BF; /* jle: less or equal (signed <=) */

loc_0037F7B8: ;
    MEM32(esi + 0x10) = 0;

loc_0037F7BF: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0037F7E0
 * Original: 0x0037F7E0 - 0x0037F9C9 (489 bytes, 130 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037F7E0(void)
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

loc_0037F7E0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO16(eax, MEM16(esp + 0x38));
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x40);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x40);
    MEM32(esi) = 4;
    MEM16(esi + 8) = 0;
    MEM16(esi + 0xA) = LO16(edi);
    MEM16(esi + 0xC) = LO16(eax);
    ecx = MEM32(0x901E40);
    edx = MEM32(ecx + 0x1208);
    eax = MEM32(edx + 0x1C);
    MEM32(esi + 4) = eax;
    MEM8(esi + 0x16) = LO8(ebx);
    PUSH32(esp, 0x0037F823u); RECOMP_ABI_CALL(0x000220B2u, sub_000220B2); /* call 0x000220B2 */

loc_0037F823: ;
    SET_LO8(edx, MEM8(esp + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, MEM8(esp + 0x50));
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x17) = LO8(ecx);
    ecx = esp + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEM8(esi + 0x18) = LO8(edx);
    MEM8(esi + 0x19) = LO8(eax);
    PUSH32(esp, 0x0037F844u); RECOMP_ABI_CALL(0x000275E4u, sub_000275E4); /* call 0x000275E4 */

loc_0037F844: ;
    edx = MEM32(edi * 4 + 0x8E8EB8);
    eax = MEM32(edx + 0x20);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x28); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x24); /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (int32_t)MEMF(esp + 0x44); /* cvttss2si */
    MEM16(esi + 0x14) = LO16(eax);
    MEM8(esi + 0x1A) = 0;
    edx = MEM32(0x8F010C);
    eax = MEM32(edx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0037F9B9; /* jle: less or equal (signed <=) */

loc_0037F8C2: ;
    edi = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x18);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(0x7AA7D8)); /* movss */
    PUSH32(esp, ebp);

loc_0037F8D6: ;
    eax = MEM32(edx + ecx * 4 + 4);
    ebp = MEM32(eax + 0x28);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037F9AD; /* jne: not equal / not zero */

loc_0037F8E5: ;
    eax = MEM32(eax + 0x20);
    ebp = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x30) = ebp;
    ebp = MEM32(eax);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEM32(esp + 0x10) = ebp;
    ebp = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = eax;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0037F92F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0037F91A: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    goto loc_0037F935;

loc_0037F92F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */

loc_0037F935: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(esp + 0x28); /* subss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    xmm4 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(esp + 0x2C); /* subss */
    MEM32(esp + 0x34) = eax;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x7A99C0)); /* fld float */
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEM32(esp + 0x38) = eax;
    eax = MEM32(esp + 0x18);
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0x3C) = eax;
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0037F9AD; /* jbe: below or equal (unsigned <=) */

loc_0037F994: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0037F9AD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0037F99F: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0037F9AD; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_0037F9A4: ;
    MEM8(esi + 0x1A) = MEM8(esi + 0x1A) + 1;
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(0x8F010C);

loc_0037F9AD: ;
    eax = MEM32(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037F8D6; /* jl: less (signed <) */

loc_0037F9B8: ;
    POP32(esp, ebp);

loc_0037F9B9: ;
    POP32(esp, edi);
    MEM32(esi + 0x10) = 2;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0037FA50
 * Original: 0x0037FA50 - 0x0037FAAF (95 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037FA50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037FA50: ;
    SET_LO16(edx, MEM16(esp + 4));
    eax = MEM32(esp + 0xC);
    MEM16(ecx + 0xA) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 8));
    MEM16(ecx + 8) = LO16(eax);
    MEM32(ecx) = 0x3B;
    MEM16(ecx + 0xC) = LO16(edx);
    edx = MEM32(0x901E40);
    edx = MEM32(edx + 0x1208);
    edx = MEM32(edx + 0x1C);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(ecx + 4) = edx;
    if (CMP_A(_fa, _fb)) goto loc_0037FAA5; /* ja: above (unsigned >) */

loc_0037FA8A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x37FAB0); /* switch: 4 entries, 3 targets */
    if (_jt == 0x0037FA91u) goto loc_0037FA91;
    if (_jt == 0x0037FA9Bu) goto loc_0037FA9B;
    if (_jt == 0x0037FAA5u) goto loc_0037FAA5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0037FA91: ;
    MEM32(ecx + 0x10) = 1;
    esp += 16; return; /* ret 12 */

loc_0037FA9B: ;
    MEM32(ecx + 0x10) = 2;
    esp += 16; return; /* ret 12 */

loc_0037FAA5: ;
    MEM32(ecx + 0x10) = 0;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0037FAE0
 * Original: 0x0037FAE0 - 0x0037FBC8 (232 bytes, 75 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037FAE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037FAE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    SET_LO8(eax, MEM8(edi + 0x1C));
    esi = ecx;
    SET_LO16(ecx, MEM16(esp + 0x1C));
    ebx = esi + 0x20;
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edi + 0x1D));
    MEM16(esi + 0xC) = LO16(ecx);
    MEM32(esi) = 0x3A;
    MEM16(esi + 8) = LO16(ebp);
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(esi + 0xA) = LO16(eax);
    edx = MEM32(0x901E40);
    eax = MEM32(edx + 0x1208);
    ecx = MEM32(eax + 0x1C);
    edx = MEM32(esp + 0x14);
    MEM32(esi + 4) = ecx;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0037FB34u); RECOMP_ABI_CALL(0x00025839u, sub_00025839); /* call 0x00025839 */

loc_0037FB34: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    ecx = ebx + 0x28;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    ecx = MEM32(esp + 0x14);
    SET_LO16(edx, MEM16(ecx + 0x34));
    MEM16(ebx + 0x34) = LO16(edx);
    ebx = esi + 0x58;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0037FB65u); RECOMP_ABI_CALL(0x000131DEu, sub_000131DE); /* call 0x000131DE */

loc_0037FB65: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x24;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    ecx = MEM32(edi + 4);
    eax = (int32_t)MEMF(esp + 0x20); /* cvttss2si */
    MEM32(ebx + 4) = ecx;
    edx = MEM32(edi + 8);
    SET_LO16(ecx, MEM16(esp + 0x24));
    MEM32(ebx + 8) = edx;
    SET_LO8(ebx, MEM8(esp + 0x28));
    MEM16(esi + 0x14) = LO16(eax);
    MEM16(esi + 0x16) = LO16(ecx);
    MEM8(esi + 0x18) = LO8(ebx);
    MEM32(esi + 0x1C) = ebp;
    MEM32(esi + 0x10) = 1;
    PUSH32(esp, 0x0037FBA4u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_0037FBA4: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x64;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FBBA; /* je: equal / zero */

loc_0037FBB1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037FBBA; /* jne: not equal / not zero */

loc_0037FBB5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0037FBC1; /* jge: greater or equal (signed >=) */

loc_0037FBBA: ;
    MEM32(esi + 0x10) = 2;

loc_0037FBC1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0037FC10
 * Original: 0x0037FC10 - 0x0037FC38 (40 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037FC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037FC10: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FC24; /* je: equal / zero */

loc_0037FC16: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037FC27; /* jne: not equal / not zero */

loc_0037FC1D: ;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037FC27; /* jne: not equal / not zero */

loc_0037FC24: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0037FC27: ;
    edx = MEM32(eax + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FC24; /* je: equal / zero */

loc_0037FC2E: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_0037FC50
 * Original: 0x0037FC50 - 0x0037FC6C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037FC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037FC50: ;
    SET_LO16(eax, MEM16(ecx + 0xA));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0037FC68; /* jle: less or equal (signed <=) */

loc_0037FC59: ;
    eax = SX16(LO16(eax));
    ecx = MEM32(eax * 4 + 0x8E8EB8);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    esp += 4; return; /* ret */

loc_0037FC68: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_0037FC80
 * Original: 0x0037FC80 - 0x0037FC9C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037FC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037FC80: ;
    SET_LO16(eax, MEM16(ecx + 0xC));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0037FC98; /* jle: less or equal (signed <=) */

loc_0037FC89: ;
    eax = SX16(LO16(eax));
    ecx = MEM32(eax * 4 + 0x8E8EB8);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    esp += 4; return; /* ret */

loc_0037FC98: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_0037FCB0
 * Original: 0x0037FCB0 - 0x0037FCD9 (41 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0037FCB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037FCB0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037FCC1; /* jne: not equal / not zero */

loc_0037FCB8: ;
    eax = MEM32(0x8978F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FCD4; /* je: equal / zero */

loc_0037FCC1: ;
    ecx = MEM32(esp + 4);

loc_0037FCC5: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FCD6; /* je: equal / zero */

loc_0037FCCD: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037FCC5; /* jne: not equal / not zero */

loc_0037FCD4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0037FCD6: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0037FCF0
 * Original: 0x0037FCF0 - 0x0037FD16 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037FCF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037FCF0: ;
    eax = MEM32(0x8978F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FD0D; /* je: equal / zero */

loc_0037FCF9: ;
    ecx = 0x24;
    edi = edi;

loc_0037FD00: ;
    _fa = (uint32_t)(MEM16(eax + 0xC)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xC), LO16(ecx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FD11; /* je: equal / zero */

loc_0037FD06: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037FD00; /* jne: not equal / not zero */

loc_0037FD0D: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_0037FD11: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xE);
    esp += 4; return; /* ret */

}

/**
 * sub_0037FD20
 * Original: 0x0037FD20 - 0x0037FD6A (74 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037FD20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037FD20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0x1C;
    PUSH32(esp, edi);

loc_0037FD26: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FD59; /* je: equal / zero */

loc_0037FD2C: ;
    edi = MEM32(ecx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037FD3A; /* jne: not equal / not zero */

loc_0037FD33: ;
    edi = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FD59; /* je: equal / zero */

loc_0037FD3A: ;
    edi = MEM32(ecx + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FD59; /* je: equal / zero */

loc_0037FD41: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037FD59; /* jne: not equal / not zero */

loc_0037FD49: ;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 8), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037FD59; /* jne: not equal / not zero */

loc_0037FD4F: ;
    ecx = MEM32(edx + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FD68; /* je: equal / zero */

loc_0037FD59: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x94;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037FD26; /* jl: less (signed <) */

loc_0037FD65: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0037FD68: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0037FD80
 * Original: 0x0037FD80 - 0x0037FDC4 (68 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0037FD80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037FD80: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FDBF; /* je: equal / zero */

loc_0037FD86: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037FD94; /* jne: not equal / not zero */

loc_0037FD8D: ;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FDBF; /* je: equal / zero */

loc_0037FD94: ;
    edx = MEM32(eax + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FDBF; /* je: equal / zero */

loc_0037FD9B: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037FDBF; /* jne: not equal / not zero */

loc_0037FDA3: ;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x12);
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FDB7; /* je: equal / zero */

loc_0037FDAF: ;
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037FDBF; /* jne: not equal / not zero */

loc_0037FDB7: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_0037FDBF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037FDE0
 * Original: 0x0037FDE0 - 0x0037FE47 (103 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037FDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037FDE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0037FE39; /* je: equal / zero */

loc_0037FDEB: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0037FDF0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FE2D; /* je: equal / zero */

loc_0037FDF6: ;
    edi = MEM32(eax + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037FE04; /* jne: not equal / not zero */

loc_0037FDFD: ;
    edi = MEM32(eax + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FE2D; /* je: equal / zero */

loc_0037FE04: ;
    edi = MEM32(eax + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FE2D; /* je: equal / zero */

loc_0037FE0B: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037FE2D; /* jne: not equal / not zero */

loc_0037FE13: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FE23; /* je: equal / zero */

loc_0037FE1B: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037FE2D; /* jne: not equal / not zero */

loc_0037FE23: ;
    eax = MEM32(ecx + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FE40; /* je: equal / zero */

loc_0037FE2D: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x94;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1F (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037FDF0; /* jl: less (signed <) */

loc_0037FE39: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0037FE40: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037FE60
 * Original: 0x0037FE60 - 0x0037FEDE (126 bytes, 44 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037FE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037FE60: ;
    eax = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x94);
    ecx = eax + ecx + 0x1C;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FED9; /* je: equal / zero */

loc_0037FE74: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037FE82; /* jne: not equal / not zero */

loc_0037FE7B: ;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FED9; /* je: equal / zero */

loc_0037FE82: ;
    edx = MEM32(eax + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FED9; /* je: equal / zero */

loc_0037FE89: ;
    edx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037FED9; /* jne: not equal / not zero */

loc_0037FE91: ;
    eax = MEM32(ecx + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037FED9; /* jne: not equal / not zero */

loc_0037FE9B: ;
    edx = MEM32(ecx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037FEB6; /* jne: not equal / not zero */

loc_0037FEA8: ;
    eax = ZX8(MEM8(ecx + 0x16));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 4) (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 12; return; /* ret 8 */

loc_0037FEB6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x24 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FEC0; /* je: equal / zero */

loc_0037FEBB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037FECF; /* jne: not equal / not zero */

loc_0037FEC0: ;
    PUSH32(esp, 0x0037FEC5u); RECOMP_ABI_CALL(0x0001FAA1u, sub_0001FAA1); /* call 0x0001FAA1 */

loc_0037FEC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 4) (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 12; return; /* ret 8 */

loc_0037FECF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037FEDB; /* jne: not equal / not zero */

loc_0037FED4: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_0037FED9: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0037FEDB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0037FF00
 * Original: 0x0037FF00 - 0x0037FF34 (52 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037FF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037FF00: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0037FF23; /* je: equal / zero */

loc_0037FF0E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0037FF10: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0037FF19u); RECOMP_ABI_CALL(0x00034032u, sub_00034032); /* call 0x00034032 */

loc_0037FF19: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037FF2C; /* jne: not equal / not zero */

loc_0037FF1D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1F (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037FF10; /* jl: less (signed <) */

loc_0037FF23: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0037FF2C: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037FF50
 * Original: 0x0037FF50 - 0x0037FFB4 (100 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037FF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037FF50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = 0x1E;
    edx = ecx + 0x1174;

loc_0037FF61: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FFA1; /* je: equal / zero */

loc_0037FF67: ;
    ebx = MEM32(ecx + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037FF75; /* jne: not equal / not zero */

loc_0037FF6E: ;
    ebx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FFA1; /* je: equal / zero */

loc_0037FF75: ;
    ebx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FFA1; /* je: equal / zero */

loc_0037FF7C: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037FFA1; /* jne: not equal / not zero */

loc_0037FF84: ;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 8), 0x3A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037FFA1; /* jne: not equal / not zero */

loc_0037FF8A: ;
    ecx = MEM32(edx + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037FFA1; /* jne: not equal / not zero */

loc_0037FF94: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FFAF; /* je: equal / zero */

loc_0037FF99: ;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0x12);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037FFAF; /* je: equal / zero */

loc_0037FFA1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x94;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0037FF61; /* jge: greater or equal (signed >=) */

loc_0037FFAC: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0037FFAF: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037FFD0
 * Original: 0x0037FFD0 - 0x0037FFF6 (38 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037FFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037FFD0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0037FFDDu); RECOMP_ABI_CALL(0x0002B72Fu, sub_0002B72F); /* call 0x0002B72F */

loc_0037FFDD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037FFE8; /* jne: not equal / not zero */

loc_0037FFE2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0037FFE8: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x94);
    eax = eax + esi + 0x24;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00380000
 * Original: 0x00380000 - 0x0038004A (74 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00380000: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0x1C;
    PUSH32(esp, edi);

loc_00380006: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00380039; /* je: equal / zero */

loc_0038000C: ;
    edi = MEM32(ecx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038001A; /* jne: not equal / not zero */

loc_00380013: ;
    edi = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00380039; /* je: equal / zero */

loc_0038001A: ;
    edi = MEM32(ecx + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00380039; /* je: equal / zero */

loc_00380021: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00380039; /* jne: not equal / not zero */

loc_00380029: ;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 8), 0x3B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00380039; /* jne: not equal / not zero */

loc_0038002F: ;
    ecx = MEM32(edx + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00380048; /* je: equal / zero */

loc_00380039: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x94;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00380006; /* jl: less (signed <) */

loc_00380045: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00380048: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0038003A
 * Original: 0x0038003A - 0x0038004A (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038003A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038003A: ;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x94;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00380006(); return; } /* jl: less (signed <) */

loc_00380045: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00380060
 * Original: 0x00380060 - 0x003800B1 (81 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00380060: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0x1C;
    PUSH32(esp, esi);

loc_00380066: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003800A0; /* je: equal / zero */

loc_0038006C: ;
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038007A; /* jne: not equal / not zero */

loc_00380073: ;
    esi = MEM32(ecx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003800A0; /* je: equal / zero */

loc_0038007A: ;
    esi = MEM32(ecx + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003800A0; /* je: equal / zero */

loc_00380081: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003800A0; /* jne: not equal / not zero */

loc_00380089: ;
    ecx = MEM32(edx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x26 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00380096; /* je: equal / zero */

loc_00380091: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x24 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003800A0; /* jne: not equal / not zero */

loc_00380096: ;
    ecx = MEM32(edx + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003800AF; /* je: equal / zero */

loc_003800A0: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x94;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00380066; /* jl: less (signed <) */

loc_003800AC: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003800AF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003800D0
 * Original: 0x003800D0 - 0x003800E0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003800D0(void)
{

loc_003800D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax * 4 + 0x8E8EB8);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    esp += 4; return; /* ret */

}

/**
 * sub_003800F0
 * Original: 0x003800F0 - 0x003801E9 (249 bytes, 97 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003800F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003800F0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00380105u); RECOMP_ABI_CALL(0x0002A8E3u, sub_0002A8E3); /* call 0x0002A8E3 */

loc_00380105: ;
    eax = ZX16(MEM16(esp + 0xE));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x78 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003801D5; /* ja: above (unsigned >) */

loc_00380114: ;
    eax = ZX8(MEM8(eax + 0x380210));
    { uint32_t _jt = MEM32(eax * 4 + 0x3801EC); /* switch: 9 entries, 9 targets */
    if (_jt == 0x00380122u) goto loc_00380122;
    if (_jt == 0x00380132u) goto loc_00380132;
    if (_jt == 0x00380146u) goto loc_00380146;
    if (_jt == 0x00380168u) goto loc_00380168;
    if (_jt == 0x00380185u) goto loc_00380185;
    if (_jt == 0x00380199u) goto loc_00380199;
    if (_jt == 0x003801ADu) goto loc_003801AD;
    if (_jt == 0x003801C1u) goto loc_003801C1;
    if (_jt == 0x003801D5u) goto loc_003801D5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00380122: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0038012Au); RECOMP_ABI_CALL(0x0001C888u, sub_0001C888); /* call 0x0001C888 */

loc_0038012A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00380132: ;
    edx = MEM32(esi);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0038013Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038013Bu); } /* indirect call */
    }

loc_0038013E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00380146: ;
    eax = MEM32(esp + 0x10);
    ecx = ZX16(MEM16(eax + 2));
    eax = ZX16(MEM16(eax));
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(esp + 0xE));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00380160u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038015Du); } /* indirect call */
    }

loc_00380160: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00380168: ;
    eax = MEM32(esp + 0x10);
    ecx = ZX16(MEM16(eax));
    eax = ZX16(MEM16(esp + 0xA));
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0038017Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038017Au); } /* indirect call */
    }

loc_0038017D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00380185: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00380191u); RECOMP_ABI_CALL(0x00013337u, sub_00013337); /* call 0x00013337 */

loc_00380191: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00380199: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003801A5u); RECOMP_ABI_CALL(0x00026685u, sub_00026685); /* call 0x00026685 */

loc_003801A5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003801AD: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003801B9u); RECOMP_ABI_CALL(0x0002B630u, sub_0002B630); /* call 0x0002B630 */

loc_003801B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003801C1: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003801CDu); RECOMP_ABI_CALL(0x0001C482u, sub_0001C482); /* call 0x0001C482 */

loc_003801CD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003801D5: ;
    edx = MEM32(esi);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003801E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003801DEu); } /* indirect call */
    }

loc_003801E1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003802F0
 * Original: 0x003802F0 - 0x00380318 (40 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003802F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003802F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00380315; /* je: equal / zero */

loc_003802FB: ;
    eax = MEM32(eax + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(eax));
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + edx * 2;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0001D071(); return; /* tail jmp 0x0001D071 */

loc_00380315: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00380330
 * Original: 0x00380330 - 0x003803AD (125 bytes, 49 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00380330: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    SET_LO16(eax, MEM16(edi + 4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    ebp = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003803A5; /* je: equal / zero */

loc_00380344: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003803A4; /* jbe: below or equal (unsigned <=) */

loc_0038034C: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);

loc_00380351: ;
    eax = MEM32(edi + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + esi * 2));
    ecx = ecx & 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax + ecx * 2;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0038036Du); RECOMP_ABI_CALL(0x0002A8E3u, sub_0002A8E3); /* call 0x0002A8E3 */

loc_0038036D: ;
    eax = ZX16(MEM16(esp + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00380389; /* je: equal / zero */

loc_00380376: ;
    ecx = ZX16(MEM16(edi + 4));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00380351; /* jl: less (signed <) */

loc_0038037F: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00380389: ;
    edi = MEM32(edi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(edi + esi * 2));
    ecx = ebp;
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edi + edx * 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003803A3u); RECOMP_ABI_CALL(0x0001D071u, sub_0001D071); /* call 0x0001D071 */

loc_003803A3: ;
    POP32(esp, ebx);

loc_003803A4: ;
    POP32(esp, esi);

loc_003803A5: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003803D0
 * Original: 0x003803D0 - 0x003803EE (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003803D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003803D0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x7BA300;
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380400
 * Original: 0x00380400 - 0x0038042D (45 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00380400: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEM32(eax) = 0x7BA310;
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380440
 * Original: 0x00380440 - 0x00380451 (17 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380440(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00380440: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x7CA654;
    esp += 4; return; /* ret */

}

/**
 * sub_00380460
 * Original: 0x00380460 - 0x00380483 (35 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380460(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00380460: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x7CA664;
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380490
 * Original: 0x00380490 - 0x003804E3 (83 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00380490: ;
    eax = MEM32(0x8978F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003804AD; /* je: equal / zero */

loc_00380499: ;
    ecx = 0x24;
    edi = edi;

loc_003804A0: ;
    _fa = (uint32_t)(MEM16(eax + 0xC)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xC), LO16(ecx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003804B3; /* je: equal / zero */

loc_003804A6: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003804A0; /* jne: not equal / not zero */

loc_003804AD: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_003804B3: ;
    ecx = MEM32(0x8FC1D0);
    edx = MEM32(ecx + 0x1E4);
    ecx = MEM32(edx + 0xD0);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x1C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xE);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2D (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003804AD; /* jge: greater or equal (signed >=) */

loc_003804D4: ;
    SET_LO8(edx, MEM8(eax + 0x1C));
    SET_LO8(edx, LO8(edx) & 0xE0);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xA0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xA0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00380500
 * Original: 0x00380500 - 0x003805B8 (184 bytes, 61 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00380500: ;
    eax = MEM32(esp + 4);
    edx = MEM32(0x901E28);
    ecx = MEM32(edx + 0x780);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    PUSH32(esp, esi);
    SET_LO8(ebx, 1);
    if (CMP_A(_fa, _fb)) goto loc_003805B3; /* ja: above (unsigned >) */

loc_00380520: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3805B8); /* switch: 7 entries, 6 targets */
    if (_jt == 0x00380527u) goto loc_00380527;
    if (_jt == 0x00380544u) goto loc_00380544;
    if (_jt == 0x00380555u) goto loc_00380555;
    if (_jt == 0x0038056Cu) goto loc_0038056C;
    if (_jt == 0x003805A2u) goto loc_003805A2;
    if (_jt == 0x003805B3u) goto loc_003805B3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00380527: ;
    eax = MEM32(edx + 0x77C);
    ecx = MEM32(0x901E40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00380539u); RECOMP_ABI_CALL(0x000114DDu, sub_000114DD); /* call 0x000114DD */

loc_00380539: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00380544: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x901E40);
    PUSH32(esp, 0x00380550u); RECOMP_ABI_CALL(0x00019313u, sub_00019313); /* call 0x00019313 */

loc_00380550: ;
    POP32(esp, esi);
    SET_LO8(ebx, LO8(eax));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00380555: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x901E40);
    PUSH32(esp, 0x00380561u); RECOMP_ABI_CALL(0x0002B72Fu, sub_0002B72F); /* call 0x0002B72F */

loc_00380561: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0038056C: ;
    esi = MEM32(0x901E40);
    ecx = esi;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x0038057Bu); RECOMP_ABI_CALL(0x00015033u, sub_00015033); /* call 0x00015033 */

loc_0038057B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003805B3; /* je: equal / zero */

loc_00380580: ;
    ecx = MEM32(esi + 0x1208);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x94);
    edx = MEM32(ecx + 0x1C);
    _fb = (uint32_t)(MEM32(eax + esi + 0x28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(eax + esi + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA8C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003805B3; /* jge: greater or equal (signed >=) */

loc_0038059B: ;
    SET_LO8(ebx, 1);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003805A2: ;
    ecx = MEM32(0x901E40);
    PUSH32(esp, 0x003805ADu); RECOMP_ABI_CALL(0x000120EAu, sub_000120EA); /* call 0x000120EA */

loc_003805AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */

loc_003805B3: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00380610
 * Original: 0x00380610 - 0x003806B7 (167 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00380610: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = edi;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    eax = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = eax;
    ecx = MEM32(edi + 0x14);
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(edi + 0x18);
    MEM32(esi + 0x18) = edx;
    SET_LO16(eax, MEM16(edi + 0x14));
    MEM16(esi + 0x14) = LO16(eax);
    ecx = MEM32(edi + 0x14);
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(edi + 0x18);
    MEM32(esi + 0x18) = edx;
    eax = MEM32(edi + 0x1C);
    ebx = edi + 0x20;
    ebp = esi + 0x20;
    PUSH32(esp, ebx);
    ecx = ebp;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x0038066Cu); RECOMP_ABI_CALL(0x00025839u, sub_00025839); /* call 0x00025839 */

loc_0038066C: ;
    ecx = ebx + 0x28;
    eax = MEM32(ecx);
    edx = ebp + 0x28;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    SET_LO16(edx, MEM16(ebx + 0x34));
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x58;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = esi + 0x58;
    PUSH32(esp, edi);
    ecx = ebx;
    MEM16(ebp + 0x34) = LO16(edx);
    PUSH32(esp, 0x00380698u); RECOMP_ABI_CALL(0x000131DEu, sub_000131DE); /* call 0x000131DE */

loc_00380698: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x24;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    ecx = MEM32(edi + 4);
    MEM32(ebx + 4) = ecx;
    edx = MEM32(edi + 8);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 8) = edx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003806E0
 * Original: 0x003806E0 - 0x003807AC (204 bytes, 57 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003806E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003806E0: ;
    eax = MEM32(0x901E28);
    ecx = MEM32(eax + 0x780);
    PUSH32(esp, esi);
    esi = MEM32(0x901E40);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003806FAu); RECOMP_ABI_CALL(0x0002B72Fu, sub_0002B72F); /* call 0x0002B72F */

loc_003806FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00380703; /* jne: not equal / not zero */

loc_003806FF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0038070D;

loc_00380703: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x94);
    eax = eax + esi + 0x24;

loc_0038070D: ;
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0xFFFFFFD7u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFD7u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    POP32(esp, esi);
    if (CMP_A(_fa, _fb)) goto loc_003807AB; /* ja: above (unsigned >) */

loc_0038071E: ;
    edx = ZX8(MEM8(ecx + 0x3807C4));
    { uint32_t _jt = MEM32(edx * 4 + 0x3807AC); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0038072Cu) goto loc_0038072C;
    if (_jt == 0x00380750u) goto loc_00380750;
    if (_jt == 0x00380757u) goto loc_00380757;
    if (_jt == 0x0038077Cu) goto loc_0038077C;
    if (_jt == 0x00380794u) goto loc_00380794;
    if (_jt == 0x003807ABu) goto loc_003807AB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0038072C: ;
    edx = MEM32(0x901E0C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x901E0C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_003807AB; /* je: equal / zero */

loc_0038073D: ;
    ecx = eax + 0x20;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x8F0DE8;
    PUSH32(esp, 0x0038074Fu); RECOMP_ABI_CALL(0x000178CEu, sub_000178CE); /* call 0x000178CE */

loc_0038074F: ;
    esp += 4; return; /* ret */

loc_00380750: ;
    MEM32(0x901E08) = MEM32(0x901E08) + 1;
    _fa = (uint32_t)(MEM32(0x901E08)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00380757: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003807AB; /* je: equal / zero */

loc_00380760: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003807AB; /* je: equal / zero */

loc_00380764: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = 0x8F0CF0;
    MEM32(esp + 8) = 9;
    PUSH32(esp, 0x0038077Bu); RECOMP_ABI_CALL(0x000223A0u, sub_000223A0); /* call 0x000223A0 */

loc_0038077B: ;
    esp += 4; return; /* ret */

loc_0038077C: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = 0x8F0CF0;
    MEM32(esp + 8) = 8;
    PUSH32(esp, 0x00380793u); RECOMP_ABI_CALL(0x000223A0u, sub_000223A0); /* call 0x000223A0 */

loc_00380793: ;
    esp += 4; return; /* ret */

loc_00380794: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x8F0CF0;
    MEM32(esp + 8) = 0xA;
    PUSH32(esp, 0x003807ABu); RECOMP_ABI_CALL(0x000223A0u, sub_000223A0); /* call 0x000223A0 */

loc_003807AB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003807AC
 * Original: 0x003807AC - 0x00380820 (116 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003807AC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003807AC: ;
    PUSH32(esp, edi);
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003807B9; /* jl: less (signed <) */

loc_003807B2: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    { uint32_t _tmp = esp;
    esp = eax;
    eax = _tmp; }
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, eax);

loc_003807B9: ;
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    _fb = (uint32_t)(7) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(0x5050505)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(0x5050505));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xCC040305u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xCC040305u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_00380820
 * Original: 0x00380820 - 0x003809E0 (448 bytes, 135 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00380820: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x832744);
    esi = ecx;
    PUSH32(esp, 0x00380836u); RECOMP_ABI_CALL(0x0002330Eu, sub_0002330E); /* call 0x0002330E */

loc_00380836: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0038083Eu); RECOMP_ABI_CALL(0x000235CFu, sub_000235CF); /* call 0x000235CF */

loc_0038083E: ;
    edi = esi + 0x20;
    ecx = edi;
    PUSH32(esp, 0x00380848u); RECOMP_ABI_CALL(0x00033FB5u, sub_00033FB5); /* call 0x00033FB5 */

loc_00380848: ;
    eax = MEM32(esp + 0x118);
    ecx = MEM32(esp + 0x114);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x98;
    PUSH32(esp, edx);
    MEM32(esi) = 0x832738;
    MEM32(edi) = 0x832720;
    PUSH32(esp, 0x00380871u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00380871: ;
    PUSH32(esp, 0x82C450);
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x7E0928);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0038088Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0038088D: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00380895u); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_00380895: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003808A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038089Eu); } /* indirect call */
    }

loc_003808A1: ;
    edx = MEM32(eax + 0x14);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7F0108)); /* movss */
    PUSH32(esp, 0x832708);
    eax = esp + 0x94;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, 0x7E0928);
    PUSH32(esp, ecx);
    MEM32(esi + 0x30) = edx;
    MEMF(esi + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x4C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x34) = 0;
    PUSH32(esp, 0x003808F1u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003808F1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003808F9u); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_003808F9: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00380905u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00380902u); } /* indirect call */
    }

loc_00380905: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00380946; /* je: equal / zero */

loc_00380909: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0038091Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00380918u); } /* indirect call */
    }

loc_0038091A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00380941; /* je: equal / zero */

loc_00380920: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0038093Cu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0038093C: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00380943;

loc_00380941: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00380943: ;
    MEM32(esi + 0x34) = edi;

loc_00380946: ;
    PUSH32(esp, 0x8326F4);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, 0x7E0928);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00380962u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00380962: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x4F4B106);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00380982u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00380982: ;
    ecx = MEM32(esp + 0x3C);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = 0x8C602C;
    PUSH32(esp, 0x0038099Bu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0038099B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x003809A4u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003809A4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003809C1; /* je: equal / zero */

loc_003809AB: ;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, 0x1E);
    PUSH32(esp, ecx);
    ecx = MEM32(0x901D80);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003809BFu); RECOMP_ABI_CALL(0x00019D31u, sub_00019D31); /* call 0x00019D31 */

loc_003809BF: ;
    goto loc_003809C3;

loc_003809C1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003809C3: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    MEM32(esi + 0x60) = eax;
    PUSH32(esp, 0x003809D0u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_003809D0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00380A50
 * Original: 0x00380A50 - 0x00380A58 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00380A50: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000253CA(); return; /* tail jmp 0x000253CA */

}

/**
 * sub_00380A60
 * Original: 0x00380A60 - 0x00380A7E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00380A60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00380A68u); RECOMP_ABI_CALL(0x00028F7Fu, sub_00028F7F); /* call 0x00028F7F */

loc_00380A68: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00380A78; /* je: equal / zero */

loc_00380A6F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00380A75u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00380A75: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00380A78: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00380A90
 * Original: 0x00380A90 - 0x00380AE7 (87 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380A90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00380A90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x34);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = esi + 0x20;
    MEM32(esi) = 0x832738;
    MEM32(ebx) = 0x832720;
    if (CMP_EQ(_fa, _fb)) goto loc_00380AC2; /* je: equal / zero */

loc_00380AAB: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00380AB3u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00380AB3: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00380AC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00380ABFu); } /* indirect call */
    }

loc_00380AC2: ;
    ecx = MEM32(esi + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x34) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00380AD6; /* je: equal / zero */

loc_00380AD0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00380AD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00380AD4u); } /* indirect call */
    }

loc_00380AD6: ;
    ecx = ebx;
    PUSH32(esp, 0x00380ADDu); RECOMP_ABI_CALL(0x000186A7u, sub_000186A7); /* call 0x000186A7 */

loc_00380ADD: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0001B4CE(); return; /* tail jmp 0x0001B4CE */

}
