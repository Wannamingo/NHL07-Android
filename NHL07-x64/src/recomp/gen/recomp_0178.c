/**
 * nhl_07_recomp - Recompiled code chunk 178
 * Functions: 250 (0x003ACE40 - 0x003B79B0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003ACE40
 * Original: 0x003ACE40 - 0x003ACFBD (381 bytes, 136 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ACE40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = esi;
    ebx = 5;
    edi = edi;

loc_003ACE50: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ACE5B; /* je: equal / zero */

loc_003ACE54: ;
    ecx = edi;
    PUSH32(esp, 0x003ACE5Bu); RECOMP_ABI_CALL(0x00575E02u, sub_00575E02); /* call 0x00575E02 */

loc_003ACE5B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003ACE50; /* jne: not equal / not zero */

loc_003ACE61: ;
    eax = MEM32(esp + 0x14);
    ebx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DF0);
    PUSH32(esp, 0x003ACE77u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003ACE77: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003ACE83u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003ACE83: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7FC4E8);
    PUSH32(esp, 0x003ACE92u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003ACE92: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003ACE9Eu); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003ACE9E: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DC0);
    edi = esi + 0x14;
    PUSH32(esp, 0x003ACEB0u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003ACEB0: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003ACEBCu); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003ACEBC: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x829EE8);
    PUSH32(esp, 0x003ACECBu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003ACECB: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003ACED7u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003ACED7: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833F74);
    edi = esi + 0x28;
    PUSH32(esp, 0x003ACEE9u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003ACEE9: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003ACEF5u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003ACEF5: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833F60);
    PUSH32(esp, 0x003ACF04u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003ACF04: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003ACF10u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003ACF10: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833F74);
    edi = esi + 0x3C;
    PUSH32(esp, 0x003ACF22u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003ACF22: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003ACF2Eu); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003ACF2E: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833F4C);
    PUSH32(esp, 0x003ACF3Du); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003ACF3D: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003ACF49u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003ACF49: ;
    PUSH32(esp, ecx);
    ecx = esp;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DD8);
    PUSH32(esp, 0x003ACF5Bu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003ACF5B: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003ACF67u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003ACF67: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x829EF8);
    PUSH32(esp, 0x003ACF76u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003ACF76: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003ACF82u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003ACF82: ;
    PUSH32(esp, ecx);
    ecx = esp;
    eax = ebx + 0x1C;
    MEM32(ecx) = 0;
    edx = MEM32(eax);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ACFA7; /* je: equal / zero */

loc_003ACF95: ;
    MEM32(ecx) = edx;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003ACFA3u); RECOMP_ABI_CALL(0x00576041u, sub_00576041); /* call 0x00576041 */

loc_003ACFA3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003ACFA7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003ACFADu); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003ACFAD: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003ACFB9u); RECOMP_ABI_CALL(0x00576041u, sub_00576041); /* call 0x00576041 */

loc_003ACFB9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003AD020
 * Original: 0x003AD020 - 0x003AD0EF (207 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AD020: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x003AD033u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003AD033: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AD042; /* je: equal / zero */

loc_003AD03A: ;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax) = edi;

loc_003AD042: ;
    esi = MEM32(esp + 0xC);
    MEM32(esi) = eax;
    eax = MEM32(0x906B88);
    ecx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x906B88) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003AD072; /* jne: not equal / not zero */

loc_003AD059: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x003AD068u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003AD068: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906B84) = eax;
    goto loc_003AD077;

loc_003AD072: ;
    eax = MEM32(0x906B84);

loc_003AD077: ;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    PUSH32(esp, 0x003AD085u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_003AD085: ;
    PUSH32(esp, 0x906B7C);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x833264);
    PUSH32(esp, 0x003AD097u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003AD097: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x833E04);
    PUSH32(esp, 0x003AD0A5u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AD0A5: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003AD0AFu); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_003AD0AF: ;
    ecx = eax;
    PUSH32(esp, 0x003AD0B6u); RECOMP_ABI_CALL(0x00023C91u, sub_00023C91); /* call 0x00023C91 */

loc_003AD0B6: ;
    PUSH32(esp, 0x003AD0BBu); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_003AD0BB: ;
    PUSH32(esp, 0x906B80);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x833194);
    PUSH32(esp, 0x003AD0CDu); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003AD0CD: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x833E04);
    PUSH32(esp, 0x003AD0DBu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AD0DB: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003AD0E5u); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_003AD0E5: ;
    ecx = eax;
    PUSH32(esp, 0x003AD0ECu); RECOMP_ABI_CALL(0x00023C91u, sub_00023C91); /* call 0x00023C91 */

loc_003AD0EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003AD130
 * Original: 0x003AD130 - 0x003AD4F0 (960 bytes, 311 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003AD130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AD130: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(0x9153E0);
    PUSH32(esp, esi);
    esi = MEM32(0x9153C8);
    MEM32(esp + 0x18) = ecx;
    ecx = 0x8CC1DC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_003AD195; /* je: equal / zero */

loc_003AD168: ;
    MEM32(0x9153C8) = ecx;
    ebx = ebx | 0x80000000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8CC204) = ecx;
    MEM32(0x8CC208) = ecx;
    MEM32(0x8CC20C) = ecx;
    MEM32(0x8CC210) = ecx;
    MEM32(0x8CC214) = ecx;

loc_003AD195: ;
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x10), 1 (8-bit) */
    esi = MEM32(eax + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_003AD1AD; /* je: equal / zero */

loc_003AD19E: ;
    ecx = ZX16(MEM16(0x9153CC));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AD1AD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8DBED0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x8DBED0) (32-bit) */
    ecx = MEM32(0x8CC204);
    if (CMP_EQ(_fa, _fb)) esi = MEM32(ebp + 8); /* cmove */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    edi = 0xFFFFFFFDu;
    if (CMP_NE(_fa, _fb)) goto loc_003AD1D0; /* jne: not equal / not zero */

loc_003AD1C6: ;
    ecx = MEM32(eax + 0x10);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AD1E1; /* je: equal / zero */

loc_003AD1D0: ;
    ecx = MEM32(eax + 0x10);
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CC204) = esi;
    MEM32(eax + 0x10) = ecx;

loc_003AD1E1: ;
    _fa = (uint32_t)(MEM8(eax + 0x24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x24), 1 (8-bit) */
    esi = MEM32(eax + 0x20);
    if (TEST_Z(_fa, _fb)) goto loc_003AD1F6; /* je: equal / zero */

loc_003AD1EA: ;
    ecx = ZX16(MEM16(0x9153CC));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AD1F6: ;
    _fa = (uint32_t)(MEM32(0x8CC208)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CC208), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AD208; /* jne: not equal / not zero */

loc_003AD1FE: ;
    ecx = MEM32(eax + 0x24);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AD219; /* je: equal / zero */

loc_003AD208: ;
    ecx = MEM32(eax + 0x24);
    ebx = ebx | 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CC208) = esi;
    MEM32(eax + 0x24) = ecx;

loc_003AD219: ;
    _fa = (uint32_t)(MEM8(eax + 0x38)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x38), 1 (8-bit) */
    esi = MEM32(eax + 0x34);
    if (TEST_Z(_fa, _fb)) goto loc_003AD22E; /* je: equal / zero */

loc_003AD222: ;
    ecx = ZX16(MEM16(0x9153CC));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AD22E: ;
    _fa = (uint32_t)(MEM32(0x8CC20C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CC20C), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AD240; /* jne: not equal / not zero */

loc_003AD236: ;
    ecx = MEM32(eax + 0x38);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AD251; /* je: equal / zero */

loc_003AD240: ;
    ecx = MEM32(eax + 0x38);
    ebx = ebx | 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CC20C) = esi;
    MEM32(eax + 0x38) = ecx;

loc_003AD251: ;
    _fa = (uint32_t)(MEM8(eax + 0x4C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x4C), 1 (8-bit) */
    esi = MEM32(eax + 0x48);
    if (TEST_Z(_fa, _fb)) goto loc_003AD266; /* je: equal / zero */

loc_003AD25A: ;
    ecx = ZX16(MEM16(0x9153CC));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AD266: ;
    _fa = (uint32_t)(MEM32(0x8CC210)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CC210), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AD278; /* jne: not equal / not zero */

loc_003AD26E: ;
    ecx = MEM32(eax + 0x4C);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AD289; /* je: equal / zero */

loc_003AD278: ;
    ecx = MEM32(eax + 0x4C);
    ebx = ebx | 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CC210) = esi;
    MEM32(eax + 0x4C) = ecx;

loc_003AD289: ;
    _fa = (uint32_t)(MEM8(eax + 0x60)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x60), 1 (8-bit) */
    esi = MEM32(eax + 0x5C);
    if (TEST_Z(_fa, _fb)) goto loc_003AD2A1; /* je: equal / zero */

loc_003AD292: ;
    ecx = ZX16(MEM16(0x9153CC));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AD2A1: ;
    _fa = (uint32_t)(MEM32(0x8CC214)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CC214), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AD2B3; /* jne: not equal / not zero */

loc_003AD2A9: ;
    ecx = MEM32(eax + 0x60);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AD2C4; /* je: equal / zero */

loc_003AD2B3: ;
    ecx = MEM32(eax + 0x60);
    ebx = ebx | 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CC214) = esi;
    MEM32(eax + 0x60) = ecx;

loc_003AD2C4: ;
    eax = MEM32(0x8CC20C);
    ecx = MEM32(0x8CC210);
    edi = ebx;
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = ecx;
    MEM32(esp + 0x18) = edi;
    if ((_fa == 0)) goto loc_003AD35C; /* je: equal / zero */

loc_003AD2E0: ;
    edx = MEM32(0x8CC204);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD2ECu); RECOMP_ABI_CALL(0x0056713Du, sub_0056713D); /* call 0x0056713D */

loc_003AD2EC: ;
    esi = eax;
    eax = MEM32(0x8CC208);
    ecx = 0x10;
    edi = esp + 0x64;
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
    ecx = esp + 0x24;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    ecx = esp + 0x60;
    if (CMP_EQ(_fa, _fb)) goto loc_003AD31B; /* je: equal / zero */

loc_003AD30D: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD319u); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003AD319: ;
    goto loc_003AD33C;

loc_003AD31B: ;
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD32Au); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003AD32A: ;
    ecx = 0x10;
    esi = esp + 0xAC;
    edi = esp + 0x2C;
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

loc_003AD33C: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD351u); RECOMP_ABI_CALL(0x005A0F40u, sub_005A0F40); /* call 0x005A0F40 */

loc_003AD351: ;
    edi = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AD35C: ;
    esi = ebx;
    esi = esi & 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_003AD379; /* je: equal / zero */

loc_003AD363: ;
    eax = MEM32(0x8CC204);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD375u); RECOMP_ABI_CALL(0x00563B98u, sub_00563B98); /* call 0x00563B98 */

loc_003AD375: ;
    edx = MEM32(esp + 0x10);

loc_003AD379: ;
    eax = ebx;
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = eax;
    if ((_fa == 0)) goto loc_003AD39A; /* je: equal / zero */

loc_003AD384: ;
    eax = MEM32(0x8CC214);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD396u); RECOMP_ABI_CALL(0x00563B84u, sub_00563B84); /* call 0x00563B84 */

loc_003AD396: ;
    edx = MEM32(esp + 0x10);

loc_003AD39A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AD3F6; /* je: equal / zero */

loc_003AD39E: ;
    ecx = MEM32(edx);
    PUSH32(esp, 3);
    PUSH32(esp, 0xC);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD3AEu); RECOMP_ABI_CALL(0x00560519u, sub_00560519); /* call 0x00560519 */

loc_003AD3AE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edx = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_003AD3F6; /* je: equal / zero */

loc_003AD3B6: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0xD);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD3C6u); RECOMP_ABI_CALL(0x00560519u, sub_00560519); /* call 0x00560519 */

loc_003AD3C6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edx = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_003AD3F6; /* je: equal / zero */

loc_003AD3CE: ;
    ecx = MEM32(edx);
    PUSH32(esp, 1);
    PUSH32(esp, 7);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD3DEu); RECOMP_ABI_CALL(0x00560519u, sub_00560519); /* call 0x00560519 */

loc_003AD3DE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edx = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_003AD3F6; /* je: equal / zero */

loc_003AD3E6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD3F6u); RECOMP_ABI_CALL(0x00560519u, sub_00560519); /* call 0x00560519 */

loc_003AD3F6: ;
    edx = MEM32(0x906BB4);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD404u); RECOMP_ABI_CALL(0x00561172u, sub_00561172); /* call 0x00561172 */

loc_003AD404: ;
    ecx = MEM32(0x906BB8);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD412u); RECOMP_ABI_CALL(0x0056118Eu, sub_0056118E); /* call 0x0056118E */

loc_003AD412: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_003AD42D; /* je: equal / zero */

loc_003AD41D: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFA2u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD42Au); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003AD42A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AD42D: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFA6u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD43Eu); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003AD43E: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFA7u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD44Fu); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003AD44F: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AD467; /* je: equal / zero */

loc_003AD457: ;
    edx = MEM32(edi + 8);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFABu);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD464u); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003AD464: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AD467: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AD47C; /* je: equal / zero */

loc_003AD46C: ;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD479u); RECOMP_ABI_CALL(0x00561112u, sub_00561112); /* call 0x00561112 */

loc_003AD479: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AD47C: ;
    ebx = MEM32(esp + 0x1C);
    ecx = MEM32(ebx + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD48Bu); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003AD48B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AD4A0; /* je: equal / zero */

loc_003AD492: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD4A0u); RECOMP_ABI_CALL(0x00563B0Bu, sub_00563B0B); /* call 0x00563B0B */

loc_003AD4A0: ;
    esi = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_003AD4B8; /* je: equal / zero */

loc_003AD4AA: ;
    ecx = MEM32(edi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD4B6u); RECOMP_ABI_CALL(0x00560820u, sub_00560820); /* call 0x00560820 */

loc_003AD4B6: ;
    goto loc_003AD4C4;

loc_003AD4B8: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD4C4u); RECOMP_ABI_CALL(0x005606D4u, sub_005606D4); /* call 0x005606D4 */

loc_003AD4C4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AD4D6; /* je: equal / zero */

loc_003AD4C8: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD4D6u); RECOMP_ABI_CALL(0x00563B24u, sub_00563B24); /* call 0x00563B24 */

loc_003AD4D6: ;
    eax = MEM32(ebx + 0xC);
    ecx = MEM32(ebx + 8);
    edx = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD4E6u); RECOMP_ABI_CALL(0x005611AAu, sub_005611AA); /* call 0x005611AA */

loc_003AD4E6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003AD3FF
 * Original: 0x003AD3FF - 0x003AD4F0 (241 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD3FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD3FF: ;
    PUSH32(esp, 0x003AD404u); RECOMP_ABI_CALL(0x00561172u, sub_00561172); /* call 0x00561172 */

loc_003AD404: ;
    ecx = MEM32(0x906BB8);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003AD412u); RECOMP_ABI_CALL(0x0056118Eu, sub_0056118E); /* call 0x0056118E */

loc_003AD412: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_003AD42D; /* je: equal / zero */

loc_003AD41D: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFA2u);
    PUSH32(esp, 0x003AD42Au); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003AD42A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AD42D: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFA6u);
    PUSH32(esp, 0x003AD43Eu); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003AD43E: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFA7u);
    PUSH32(esp, 0x003AD44Fu); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003AD44F: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AD467; /* je: equal / zero */

loc_003AD457: ;
    edx = MEM32(edi + 8);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFABu);
    PUSH32(esp, 0x003AD464u); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003AD464: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AD467: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AD47C; /* je: equal / zero */

loc_003AD46C: ;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003AD479u); RECOMP_ABI_CALL(0x00561112u, sub_00561112); /* call 0x00561112 */

loc_003AD479: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AD47C: ;
    ebx = MEM32(esp + 0x1C);
    ecx = MEM32(ebx + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003AD48Bu); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003AD48B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AD4A0; /* je: equal / zero */

loc_003AD492: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003AD4A0u); RECOMP_ABI_CALL(0x00563B0Bu, sub_00563B0B); /* call 0x00563B0B */

loc_003AD4A0: ;
    esi = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_003AD4B8; /* je: equal / zero */

loc_003AD4AA: ;
    ecx = MEM32(edi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003AD4B6u); RECOMP_ABI_CALL(0x00560820u, sub_00560820); /* call 0x00560820 */

loc_003AD4B6: ;
    goto loc_003AD4C4;

loc_003AD4B8: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    PUSH32(esp, 0x003AD4C4u); RECOMP_ABI_CALL(0x005606D4u, sub_005606D4); /* call 0x005606D4 */

loc_003AD4C4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AD4D6; /* je: equal / zero */

loc_003AD4C8: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003AD4D6u); RECOMP_ABI_CALL(0x00563B24u, sub_00563B24); /* call 0x00563B24 */

loc_003AD4D6: ;
    eax = MEM32(ebx + 0xC);
    ecx = MEM32(ebx + 8);
    edx = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003AD4E6u); RECOMP_ABI_CALL(0x005611AAu, sub_005611AA); /* call 0x005611AA */

loc_003AD4E6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003AD5E0
 * Original: 0x003AD5E0 - 0x003AD62D (77 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AD5E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    ecx = edi;
    PUSH32(esp, 0x003AD5EFu); RECOMP_ABI_CALL(0x005606BAu, sub_005606BA); /* call 0x005606BA */

loc_003AD5EF: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003AD5F7u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003AD5F7: ;
    eax = MEM32(0x906B88);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = edi;
    MEM32(0x906B88) = eax;
    if ((_fa != 0)) goto loc_003AD621; /* jne: not equal / not zero */

loc_003AD60B: ;
    eax = MEM32(0x906B84);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003AD618u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003AD618: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906B84) = edi;

loc_003AD621: ;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003AD640
 * Original: 0x003AD640 - 0x003AD64B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD640(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003AD640: ;
    fp_push(MEMF(0x7A9980)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 4)); /* fdiv dword ptr [esp + 4] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003AD650
 * Original: 0x003AD650 - 0x003AD8A9 (601 bytes, 205 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AD650: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = esi;
    ebx = 9;
    edi = edi;

loc_003AD660: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AD66B; /* je: equal / zero */

loc_003AD664: ;
    ecx = edi;
    PUSH32(esp, 0x003AD66Bu); RECOMP_ABI_CALL(0x00575E02u, sub_00575E02); /* call 0x00575E02 */

loc_003AD66B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003AD660; /* jne: not equal / not zero */

loc_003AD671: ;
    eax = MEM32(esp + 0x14);
    ebx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DF0);
    PUSH32(esp, 0x003AD687u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AD687: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003AD693u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003AD693: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7FC4E8);
    PUSH32(esp, 0x003AD6A2u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AD6A2: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003AD6AEu); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003AD6AE: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DD8);
    edi = esi + 0x14;
    PUSH32(esp, 0x003AD6C0u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AD6C0: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003AD6CCu); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003AD6CC: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x829EF8);
    PUSH32(esp, 0x003AD6DBu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AD6DB: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003AD6E7u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003AD6E7: ;
    PUSH32(esp, ecx);
    ecx = esp;
    eax = ebx + 0x28;
    MEM32(ecx) = 0;
    edx = MEM32(eax);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AD6FE; /* je: equal / zero */

loc_003AD6FA: ;
    MEM32(ecx) = edx;
    goto loc_003AD704;

loc_003AD6FE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003AD704u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003AD704: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003AD710u); RECOMP_ABI_CALL(0x00576041u, sub_00576041); /* call 0x00576041 */

loc_003AD710: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DC0);
    edi = esi + 0x28;
    PUSH32(esp, 0x003AD722u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AD722: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003AD72Eu); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003AD72E: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x829EE8);
    PUSH32(esp, 0x003AD73Du); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AD73D: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003AD749u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003AD749: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DC0);
    edi = esi + 0x3C;
    PUSH32(esp, 0x003AD75Bu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AD75B: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003AD767u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003AD767: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x82B1E8);
    PUSH32(esp, 0x003AD776u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AD776: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003AD782u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003AD782: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833F74);
    edi = esi + 0x50;
    PUSH32(esp, 0x003AD794u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AD794: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003AD7A0u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003AD7A0: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x834430);
    PUSH32(esp, 0x003AD7AFu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AD7AF: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003AD7BBu); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003AD7BB: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833F74);
    edi = esi + 0x64;
    PUSH32(esp, 0x003AD7CDu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AD7CD: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003AD7D9u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003AD7D9: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x834414);
    PUSH32(esp, 0x003AD7E8u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AD7E8: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003AD7F4u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003AD7F4: ;
    edi = esi + 0x78;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7CFB54);
    PUSH32(esp, 0x003AD806u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AD806: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003AD812u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003AD812: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8343FC);
    PUSH32(esp, 0x003AD821u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AD821: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003AD82Du); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003AD82D: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7CFB54);
    edi = esi + 0x8C;
    PUSH32(esp, 0x003AD842u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AD842: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003AD84Eu); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003AD84E: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8343E0);
    PUSH32(esp, 0x003AD85Du); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AD85D: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003AD869u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003AD869: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7CFB54);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003AD87Eu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AD87E: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003AD88Au); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003AD88A: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8343D0);
    PUSH32(esp, 0x003AD899u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AD899: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003AD8A5u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003AD8A5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003AD940
 * Original: 0x003AD940 - 0x003ADB4C (524 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003AD940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AD940: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD95Cu); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003AD95C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AD96B; /* je: equal / zero */

loc_003AD963: ;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax) = edi;

loc_003AD96B: ;
    esi = MEM32(ebp + 8);
    MEM32(esi) = eax;
    eax = MEM32(0x906BE4);
    ecx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x906BE4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003AD99A; /* jne: not equal / not zero */

loc_003AD981: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD990u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003AD990: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906BE0) = eax;
    goto loc_003AD99F;

loc_003AD99A: ;
    eax = MEM32(0x906BE0);

loc_003AD99F: ;
    MEM32(esi + 4) = eax;
    eax = MEM32(0x906BEC);
    edx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(0x906BEC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003AD9CF; /* jne: not equal / not zero */

loc_003AD9B3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xA00);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD9C5u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003AD9C5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906BE8) = eax;
    goto loc_003AD9D4;

loc_003AD9CF: ;
    eax = MEM32(0x906BE8);

loc_003AD9D4: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    PUSH32(esp, 0x7B891F);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD450)); /* movss */
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x10);
    MEM32(esi + 8) = eax;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADA19u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003ADA19: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    MEM32(esi + 0xC) = eax;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    eax = MEM32(0x906BF4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x906BF4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003ADA64; /* jne: not equal / not zero */

loc_003ADA4B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADA5Au); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003ADA5A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906BF0) = eax;
    goto loc_003ADA69;

loc_003ADA64: ;
    eax = MEM32(0x906BF0);

loc_003ADA69: ;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(0x906BFC);
    edx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(0x906BFC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003ADA9C; /* jne: not equal / not zero */

loc_003ADA83: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADA92u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003ADA92: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906BF8) = eax;
    goto loc_003ADAA1;

loc_003ADA9C: ;
    eax = MEM32(0x906BF8);

loc_003ADAA1: ;
    MEM32(esi + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADAA9u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_003ADAA9: ;
    PUSH32(esp, 0x906BD4);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x833264);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADABBu); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003ADABB: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x833E04);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADAC9u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003ADAC9: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADAD3u); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_003ADAD3: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADADAu); RECOMP_ABI_CALL(0x00023C91u, sub_00023C91); /* call 0x00023C91 */

loc_003ADADA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADADFu); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_003ADADF: ;
    PUSH32(esp, 0x906BD8);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x833194);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADAF1u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003ADAF1: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x833E04);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADAFFu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003ADAFF: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADB09u); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_003ADB09: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADB10u); RECOMP_ABI_CALL(0x00023C91u, sub_00023C91); /* call 0x00023C91 */

loc_003ADB10: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADB15u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_003ADB15: ;
    PUSH32(esp, 0x906BDC);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x7CFB54);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADB27u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003ADB27: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x833E04);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADB35u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003ADB35: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADB3Fu); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_003ADB3F: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADB46u); RECOMP_ABI_CALL(0x00023C91u, sub_00023C91); /* call 0x00023C91 */

loc_003ADB46: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003ADBD0
 * Original: 0x003ADBD0 - 0x003AE189 (1465 bytes, 437 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003ADBD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ADBD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(0x9153E0);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = edx;
    edx = MEM32(0x9153C8);
    ecx = 0x8CC4D4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003ADC4F; /* je: equal / zero */

loc_003ADC08: ;
    MEM32(0x9153C8) = ecx;
    ebx = ebx | 0x80000000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8CC4FC) = ecx;
    MEM32(0x8CC500) = ecx;
    MEM32(0x8CC504) = ecx;
    MEM32(0x8CC508) = ecx;
    MEM32(0x8CC50C) = ecx;
    MEM32(0x8CC510) = ecx;
    MEM32(0x8CC514) = ecx;
    MEM32(0x8CC518) = ecx;
    MEM32(0x8CC51C) = ecx;
    goto loc_003ADC55;

loc_003ADC4F: ;
    ecx = MEM32(0x8CC510);

loc_003ADC55: ;
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x10), 1 (8-bit) */
    esi = MEM32(eax + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_003ADC6D; /* je: equal / zero */

loc_003ADC5E: ;
    edx = ZX16(MEM16(0x9153CC));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003ADC6D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8DBED0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x8DBED0) (32-bit) */
    edx = MEM32(0x8CC4FC);
    if (CMP_EQ(_fa, _fb)) esi = MEM32(ebp + 8); /* cmove */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    edi = 0xFFFFFFFDu;
    if (CMP_NE(_fa, _fb)) goto loc_003ADC90; /* jne: not equal / not zero */

loc_003ADC86: ;
    edx = MEM32(eax + 0x10);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ADCA1; /* je: equal / zero */

loc_003ADC90: ;
    edx = MEM32(eax + 0x10);
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CC4FC) = esi;
    MEM32(eax + 0x10) = edx;

loc_003ADCA1: ;
    _fa = (uint32_t)(MEM8(eax + 0x24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x24), 1 (8-bit) */
    esi = MEM32(eax + 0x20);
    if (TEST_Z(_fa, _fb)) goto loc_003ADCB9; /* je: equal / zero */

loc_003ADCAA: ;
    edx = ZX16(MEM16(0x9153CC));
    edx = (uint32_t)((int32_t)edx * (int32_t)0xB0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003ADCB9: ;
    _fa = (uint32_t)(MEM32(0x8CC500)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CC500), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ADCCB; /* jne: not equal / not zero */

loc_003ADCC1: ;
    edx = MEM32(eax + 0x24);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ADCDC; /* je: equal / zero */

loc_003ADCCB: ;
    edx = MEM32(eax + 0x24);
    ebx = ebx | 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CC500) = esi;
    MEM32(eax + 0x24) = edx;

loc_003ADCDC: ;
    _fa = (uint32_t)(MEM8(eax + 0x38)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x38), 1 (8-bit) */
    esi = MEM32(eax + 0x34);
    if (TEST_Z(_fa, _fb)) goto loc_003ADCF1; /* je: equal / zero */

loc_003ADCE5: ;
    edx = ZX16(MEM16(0x9153CC));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003ADCF1: ;
    _fa = (uint32_t)(MEM32(0x8CC504)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CC504), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ADD03; /* jne: not equal / not zero */

loc_003ADCF9: ;
    edx = MEM32(eax + 0x38);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ADD14; /* je: equal / zero */

loc_003ADD03: ;
    edx = MEM32(eax + 0x38);
    ebx = ebx | 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CC504) = esi;
    MEM32(eax + 0x38) = edx;

loc_003ADD14: ;
    _fa = (uint32_t)(MEM8(eax + 0x4C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x4C), 1 (8-bit) */
    esi = MEM32(eax + 0x48);
    if (TEST_Z(_fa, _fb)) goto loc_003ADD29; /* je: equal / zero */

loc_003ADD1D: ;
    edx = ZX16(MEM16(0x9153CC));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003ADD29: ;
    _fa = (uint32_t)(MEM32(0x8CC508)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CC508), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ADD3B; /* jne: not equal / not zero */

loc_003ADD31: ;
    edx = MEM32(eax + 0x4C);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ADD4C; /* je: equal / zero */

loc_003ADD3B: ;
    edx = MEM32(eax + 0x4C);
    ebx = ebx | 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CC508) = esi;
    MEM32(eax + 0x4C) = edx;

loc_003ADD4C: ;
    _fa = (uint32_t)(MEM8(eax + 0x60)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x60), 1 (8-bit) */
    esi = MEM32(eax + 0x5C);
    if (TEST_Z(_fa, _fb)) goto loc_003ADD61; /* je: equal / zero */

loc_003ADD55: ;
    edx = ZX16(MEM16(0x9153CC));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003ADD61: ;
    _fa = (uint32_t)(MEM32(0x8CC50C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CC50C), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ADD73; /* jne: not equal / not zero */

loc_003ADD69: ;
    edx = MEM32(eax + 0x60);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ADD84; /* je: equal / zero */

loc_003ADD73: ;
    edx = MEM32(eax + 0x60);
    ebx = ebx | 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CC50C) = esi;
    MEM32(eax + 0x60) = edx;

loc_003ADD84: ;
    _fa = (uint32_t)(MEM8(eax + 0x74)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x74), 1 (8-bit) */
    esi = MEM32(eax + 0x70);
    if (TEST_Z(_fa, _fb)) goto loc_003ADD99; /* je: equal / zero */

loc_003ADD8D: ;
    edx = ZX16(MEM16(0x9153CC));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003ADD99: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ADDA7; /* jne: not equal / not zero */

loc_003ADD9D: ;
    edx = MEM32(eax + 0x74);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ADDBA; /* je: equal / zero */

loc_003ADDA7: ;
    edx = MEM32(eax + 0x74);
    ebx = ebx | 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi;
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CC510) = ecx;
    MEM32(eax + 0x74) = edx;

loc_003ADDBA: ;
    _fa = (uint32_t)(MEM8(eax + 0x88)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x88), 1 (8-bit) */
    esi = MEM32(eax + 0x84);
    if (TEST_Z(_fa, _fb)) goto loc_003ADDD3; /* je: equal / zero */

loc_003ADDC9: ;
    edx = ZX16(MEM16(0x9153CC));
    esi = esi + edx * 4;

loc_003ADDD3: ;
    _fa = (uint32_t)(MEM32(0x8CC514)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CC514), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ADDE8; /* jne: not equal / not zero */

loc_003ADDDB: ;
    edx = MEM32(eax + 0x88);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ADDFF; /* je: equal / zero */

loc_003ADDE8: ;
    edx = MEM32(eax + 0x88);
    ebx = ebx | 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CC514) = esi;
    MEM32(eax + 0x88) = edx;

loc_003ADDFF: ;
    _fa = (uint32_t)(MEM8(eax + 0x9C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x9C), 1 (8-bit) */
    esi = MEM32(eax + 0x98);
    if (TEST_Z(_fa, _fb)) goto loc_003ADE18; /* je: equal / zero */

loc_003ADE0E: ;
    edx = ZX16(MEM16(0x9153CC));
    esi = esi + edx * 4;

loc_003ADE18: ;
    _fa = (uint32_t)(MEM32(0x8CC518)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CC518), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ADE2D; /* jne: not equal / not zero */

loc_003ADE20: ;
    edx = MEM32(eax + 0x9C);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ADE47; /* je: equal / zero */

loc_003ADE2D: ;
    edx = MEM32(eax + 0x9C);
    ebx = ebx | 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CC518) = esi;
    MEM32(eax + 0x9C) = edx;

loc_003ADE47: ;
    _fa = (uint32_t)(MEM8(eax + 0xB0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xB0), 1 (8-bit) */
    esi = MEM32(eax + 0xAC);
    if (TEST_Z(_fa, _fb)) goto loc_003ADE60; /* je: equal / zero */

loc_003ADE56: ;
    edx = ZX16(MEM16(0x9153CC));
    esi = esi + edx * 4;

loc_003ADE60: ;
    _fa = (uint32_t)(MEM32(0x8CC51C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CC51C), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ADE75; /* jne: not equal / not zero */

loc_003ADE68: ;
    edx = MEM32(eax + 0xB0);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ADE8F; /* je: equal / zero */

loc_003ADE75: ;
    edx = MEM32(eax + 0xB0);
    ebx = ebx | 0x100;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CC51C) = esi;
    MEM32(eax + 0xB0) = edx;

loc_003ADE8F: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(0x8CC50C);
    edi = ebx;
    edi = edi & 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 0x14) = eax;
    MEM32(edx + 0x18) = ecx;
    MEM32(esp + 0x18) = edi;
    if ((_fa == 0)) goto loc_003ADF2F; /* je: equal / zero */

loc_003ADEAD: ;
    ecx = MEM32(0x8CC4FC);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADEB9u); RECOMP_ABI_CALL(0x0056713Du, sub_0056713D); /* call 0x0056713D */

loc_003ADEB9: ;
    esi = eax;
    eax = MEM32(0x8CC504);
    edx = esp + 0x44;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    edi = esp + 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
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
    edx = esp + 0x80;
    if (CMP_EQ(_fa, _fb)) goto loc_003ADEEE; /* je: equal / zero */

loc_003ADEE0: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADEECu); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003ADEEC: ;
    goto loc_003ADF0F;

loc_003ADEEE: ;
    ecx = esp + 0xC0;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADEFDu); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003ADEFD: ;
    ecx = 0x10;
    esi = esp + 0xCC;
    edi = esp + 0x4C;
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

loc_003ADF0F: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADF24u); RECOMP_ABI_CALL(0x005A0F40u, sub_005A0F40); /* call 0x005A0F40 */

loc_003ADF24: ;
    edi = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003ADF2F: ;
    eax = ebx;
    eax = eax & 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = eax;
    if ((_fa == 0)) goto loc_003ADF7B; /* je: equal / zero */

loc_003ADF3C: ;
    eax = MEM32(0x8CC518);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(edx + 0x10);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x20);
    MEM32(eax) = ecx;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 4) = ecx;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 8) = ecx;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    MEM32(eax + 0xC) = ecx;

loc_003ADF7B: ;
    eax = ebx;
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x1C) = eax;
    if ((_fa == 0)) goto loc_003ADF9E; /* je: equal / zero */

loc_003ADF86: ;
    eax = MEM32(0x8CC514);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = MEM32(edx + 0x1C);
    xmm0.f[0] = xmm0.f[0] / MEMF(eax); /* divss */
    MEMF(ecx) = xmm0.f[0]; /* movss */

loc_003ADF9E: ;
    edx = MEM32(edx + 8);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(0x8CC508);
    PUSH32(esp, 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADFBCu); RECOMP_ABI_CALL(0x00567146u, sub_00567146); /* call 0x00567146 */

loc_003ADFBC: ;
    esi = ebx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_003ADFDD; /* je: equal / zero */

loc_003ADFC6: ;
    ecx = MEM32(0x8CC4FC);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADFDDu); RECOMP_ABI_CALL(0x00563B98u, sub_00563B98); /* call 0x00563B98 */

loc_003ADFDD: ;
    eax = ebx;
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x38) = eax;
    if ((_fa == 0)) goto loc_003ADFFF; /* je: equal / zero */

loc_003ADFE8: ;
    ecx = MEM32(0x8CC500);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADFFFu); RECOMP_ABI_CALL(0x00563B84u, sub_00563B84); /* call 0x00563B84 */

loc_003ADFFF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x101) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x101 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AE022; /* je: equal / zero */

loc_003AE007: ;
    ecx = MEM32(0x8CC51C);
    edx = MEM32(ecx);
    ecx = MEM32(esp + 0xC);
    ecx = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x11);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE022u); RECOMP_ABI_CALL(0x005604A0u, sub_005604A0); /* call 0x005604A0 */

loc_003AE022: ;
    edx = MEM32(0x906C28);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE030u); RECOMP_ABI_CALL(0x00561172u, sub_00561172); /* call 0x00561172 */

loc_003AE030: ;
    ecx = MEM32(0x906C2C);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE03Eu); RECOMP_ABI_CALL(0x0056118Eu, sub_0056118E); /* call 0x0056118E */

loc_003AE03E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_003AE059; /* je: equal / zero */

loc_003AE049: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFA2u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE056u); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003AE056: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AE059: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx + 4);
    eax = MEM32(edi + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFA6u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE06Fu); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003AE06F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_003AE086; /* jns: not sign (positive) */

loc_003AE076: ;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x46);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE083u); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003AE083: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AE086: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AE09E; /* je: equal / zero */

loc_003AE08E: ;
    edx = MEM32(edi + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x47);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE09Bu); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003AE09B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AE09E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AE0B3; /* je: equal / zero */

loc_003AE0A3: ;
    eax = MEM32(edi + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x48);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE0B0u); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003AE0B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AE0B3: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AE0C8; /* je: equal / zero */

loc_003AE0B8: ;
    ecx = MEM32(edi + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x49);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE0C5u); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003AE0C5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AE0C8: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AE0E0; /* je: equal / zero */

loc_003AE0D0: ;
    edx = MEM32(edi + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x4A);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE0DDu); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003AE0DD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AE0E0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE0EFu); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003AE0EF: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE0FEu); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003AE0FE: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE10Du); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003AE10D: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE11Cu); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003AE11C: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AE131; /* je: equal / zero */

loc_003AE123: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE131u); RECOMP_ABI_CALL(0x00563B0Bu, sub_00563B0B); /* call 0x00563B0B */

loc_003AE131: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x102 (32-bit) */
    PUSH32(esp, 0);
    if (TEST_Z(_fa, _fb)) goto loc_003AE149; /* je: equal / zero */

loc_003AE13B: ;
    ecx = MEM32(edi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE147u); RECOMP_ABI_CALL(0x00560820u, sub_00560820); /* call 0x00560820 */

loc_003AE147: ;
    goto loc_003AE155;

loc_003AE149: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE155u); RECOMP_ABI_CALL(0x005606D4u, sub_005606D4); /* call 0x005606D4 */

loc_003AE155: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AE16B; /* je: equal / zero */

loc_003AE15D: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE16Bu); RECOMP_ABI_CALL(0x00563B24u, sub_00563B24); /* call 0x00563B24 */

loc_003AE16B: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x20);
    edx = MEM32(eax + 0x1C);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE17Fu); RECOMP_ABI_CALL(0x005611AAu, sub_005611AA); /* call 0x005611AA */

loc_003AE17F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003AE300
 * Original: 0x003AE300 - 0x003AE3D5 (213 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AE300: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    ecx = edi;
    PUSH32(esp, 0x003AE30Fu); RECOMP_ABI_CALL(0x005606BAu, sub_005606BA); /* call 0x005606BA */

loc_003AE30F: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003AE317u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003AE317: ;
    eax = MEM32(0x906BE4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = edi;
    MEM32(0x906BE4) = eax;
    if ((_fa != 0)) goto loc_003AE341; /* jne: not equal / not zero */

loc_003AE32B: ;
    eax = MEM32(0x906BE0);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003AE338u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003AE338: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906BE0) = edi;

loc_003AE341: ;
    eax = MEM32(0x906BEC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = edi;
    MEM32(0x906BEC) = eax;
    if ((_fa != 0)) goto loc_003AE36B; /* jne: not equal / not zero */

loc_003AE351: ;
    ecx = MEM32(0x906BE8);
    PUSH32(esp, 0xA00);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003AE362u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003AE362: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906BE8) = edi;

loc_003AE36B: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    MEM32(esi + 8) = edi;
    PUSH32(esp, 0x003AE379u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003AE379: ;
    eax = MEM32(0x906BF4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = edi;
    MEM32(0x906BF4) = eax;
    if ((_fa != 0)) goto loc_003AE3A3; /* jne: not equal / not zero */

loc_003AE38C: ;
    edx = MEM32(0x906BF0);
    PUSH32(esp, 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003AE39Au); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003AE39A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906BF0) = edi;

loc_003AE3A3: ;
    eax = MEM32(0x906BFC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(0x906BFC) = eax;
    if ((_fa != 0)) goto loc_003AE3CF; /* jne: not equal / not zero */

loc_003AE3B9: ;
    eax = MEM32(0x906BF8);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003AE3C6u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003AE3C6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906BF8) = edi;

loc_003AE3CF: ;
    MEM32(esi + 0x1C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003AE410
 * Original: 0x003AE410 - 0x003AE546 (310 bytes, 110 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AE410: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = esi;
    ebx = 4;
    edi = edi;

loc_003AE420: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AE42B; /* je: equal / zero */

loc_003AE424: ;
    ecx = edi;
    PUSH32(esp, 0x003AE42Bu); RECOMP_ABI_CALL(0x00575E02u, sub_00575E02); /* call 0x00575E02 */

loc_003AE42B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003AE420; /* jne: not equal / not zero */

loc_003AE431: ;
    eax = MEM32(esp + 0x14);
    ebx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DF0);
    PUSH32(esp, 0x003AE447u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AE447: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003AE453u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003AE453: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7FC4E8);
    PUSH32(esp, 0x003AE462u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AE462: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003AE46Eu); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003AE46E: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DD8);
    edi = esi + 0x14;
    PUSH32(esp, 0x003AE480u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AE480: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003AE48Cu); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003AE48C: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x829EF8);
    PUSH32(esp, 0x003AE49Bu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AE49B: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003AE4A7u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003AE4A7: ;
    PUSH32(esp, ecx);
    ecx = esp;
    eax = ebx + 0x1C;
    MEM32(ecx) = 0;
    edx = MEM32(eax);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AE4BE; /* je: equal / zero */

loc_003AE4BA: ;
    MEM32(ecx) = edx;
    goto loc_003AE4C4;

loc_003AE4BE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003AE4C4u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003AE4C4: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003AE4D0u); RECOMP_ABI_CALL(0x00576041u, sub_00576041); /* call 0x00576041 */

loc_003AE4D0: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DC0);
    edi = esi + 0x28;
    PUSH32(esp, 0x003AE4E2u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AE4E2: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003AE4EEu); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003AE4EE: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x829EE8);
    PUSH32(esp, 0x003AE4FDu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AE4FD: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003AE509u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003AE509: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833F74);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003AE51Bu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AE51B: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003AE527u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003AE527: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x82B434);
    PUSH32(esp, 0x003AE536u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AE536: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003AE542u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003AE542: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003AE5A0
 * Original: 0x003AE5A0 - 0x003AE67B (219 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AE5A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x003AE5B1u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003AE5B1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AE5CC; /* je: equal / zero */

loc_003AE5B8: ;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0;
    MEM32(eax) = 0;

loc_003AE5CC: ;
    esi = MEM32(esp + 8);
    MEM32(esi) = eax;
    eax = MEM32(0x906C58);
    ecx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x906C58) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003AE5FC; /* jne: not equal / not zero */

loc_003AE5E3: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x003AE5F2u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003AE5F2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906C54) = eax;
    goto loc_003AE601;

loc_003AE5FC: ;
    eax = MEM32(0x906C54);

loc_003AE601: ;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0;
    PUSH32(esp, 0x003AE610u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_003AE610: ;
    PUSH32(esp, 0x906C4C);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x833264);
    PUSH32(esp, 0x003AE622u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003AE622: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833E04);
    PUSH32(esp, 0x003AE631u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AE631: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003AE63Bu); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_003AE63B: ;
    ecx = eax;
    PUSH32(esp, 0x003AE642u); RECOMP_ABI_CALL(0x00023C91u, sub_00023C91); /* call 0x00023C91 */

loc_003AE642: ;
    PUSH32(esp, 0x003AE647u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_003AE647: ;
    PUSH32(esp, 0x906C50);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x833194);
    PUSH32(esp, 0x003AE659u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003AE659: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833E04);
    PUSH32(esp, 0x003AE668u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AE668: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003AE672u); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_003AE672: ;
    ecx = eax;
    PUSH32(esp, 0x003AE679u); RECOMP_ABI_CALL(0x00023C91u, sub_00023C91); /* call 0x00023C91 */

loc_003AE679: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003AE6C0
 * Original: 0x003AE6C0 - 0x003AE9B6 (758 bytes, 243 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003AE6C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AE6C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(0x9153E0);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 8) = edx;
    edx = MEM32(0x9153C8);
    ecx = 0x8CC754;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003AE721; /* je: equal / zero */

loc_003AE6F8: ;
    MEM32(0x9153C8) = ecx;
    ebx = ebx | 0x80000000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8CC77C) = ecx;
    MEM32(0x8CC780) = ecx;
    MEM32(0x8CC784) = ecx;
    MEM32(0x8CC788) = ecx;
    goto loc_003AE727;

loc_003AE721: ;
    ecx = MEM32(0x8CC77C);

loc_003AE727: ;
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x10), 1 (8-bit) */
    esi = MEM32(eax + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_003AE73F; /* je: equal / zero */

loc_003AE730: ;
    edx = ZX16(MEM16(0x9153CC));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AE73F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8DBED0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x8DBED0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) esi = MEM32(ebp + 8); /* cmove */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    edi = 0xFFFFFFFDu;
    if (CMP_NE(_fa, _fb)) goto loc_003AE75C; /* jne: not equal / not zero */

loc_003AE752: ;
    edx = MEM32(eax + 0x10);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AE76F; /* je: equal / zero */

loc_003AE75C: ;
    edx = MEM32(eax + 0x10);
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi;
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CC77C) = ecx;
    MEM32(eax + 0x10) = edx;

loc_003AE76F: ;
    _fa = (uint32_t)(MEM8(eax + 0x24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x24), 1 (8-bit) */
    esi = MEM32(eax + 0x20);
    if (TEST_Z(_fa, _fb)) goto loc_003AE787; /* je: equal / zero */

loc_003AE778: ;
    edx = ZX16(MEM16(0x9153CC));
    edx = (uint32_t)((int32_t)edx * (int32_t)0xB0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AE787: ;
    _fa = (uint32_t)(MEM32(0x8CC780)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CC780), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AE799; /* jne: not equal / not zero */

loc_003AE78F: ;
    edx = MEM32(eax + 0x24);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AE7AA; /* je: equal / zero */

loc_003AE799: ;
    edx = MEM32(eax + 0x24);
    ebx = ebx | 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CC780) = esi;
    MEM32(eax + 0x24) = edx;

loc_003AE7AA: ;
    _fa = (uint32_t)(MEM8(eax + 0x38)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x38), 1 (8-bit) */
    esi = MEM32(eax + 0x34);
    if (TEST_Z(_fa, _fb)) goto loc_003AE7BF; /* je: equal / zero */

loc_003AE7B3: ;
    edx = ZX16(MEM16(0x9153CC));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AE7BF: ;
    _fa = (uint32_t)(MEM32(0x8CC784)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CC784), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AE7D1; /* jne: not equal / not zero */

loc_003AE7C7: ;
    edx = MEM32(eax + 0x38);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AE7E2; /* je: equal / zero */

loc_003AE7D1: ;
    edx = MEM32(eax + 0x38);
    ebx = ebx | 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CC784) = esi;
    MEM32(eax + 0x38) = edx;

loc_003AE7E2: ;
    _fa = (uint32_t)(MEM8(eax + 0x4C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x4C), 1 (8-bit) */
    esi = MEM32(eax + 0x48);
    if (TEST_Z(_fa, _fb)) goto loc_003AE7F7; /* je: equal / zero */

loc_003AE7EB: ;
    edx = ZX16(MEM16(0x9153CC));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AE7F7: ;
    _fa = (uint32_t)(MEM32(0x8CC788)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CC788), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AE809; /* jne: not equal / not zero */

loc_003AE7FF: ;
    edx = MEM32(eax + 0x4C);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AE81A; /* je: equal / zero */

loc_003AE809: ;
    edx = MEM32(eax + 0x4C);
    ebx = ebx | 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CC788) = esi;
    MEM32(eax + 0x4C) = edx;

loc_003AE81A: ;
    eax = MEM32(0x8CC788);
    edx = MEM32(esp + 0x10);
    esi = ebx;
    esi = esi & 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 8) = eax;
    MEM32(esp + 0x18) = esi;
    if ((_fa == 0)) goto loc_003AE8A9; /* je: equal / zero */

loc_003AE831: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE837u); RECOMP_ABI_CALL(0x0056713Du, sub_0056713D); /* call 0x0056713D */

loc_003AE837: ;
    esi = eax;
    eax = MEM32(0x8CC784);
    ecx = 0x10;
    edi = esp + 0x64;
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
    ecx = esp + 0x24;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    ecx = esp + 0x60;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE866; /* je: equal / zero */

loc_003AE858: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE864u); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003AE864: ;
    goto loc_003AE887;

loc_003AE866: ;
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE875u); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003AE875: ;
    ecx = 0x10;
    esi = esp + 0xAC;
    edi = esp + 0x2C;
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

loc_003AE887: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE89Cu); RECOMP_ABI_CALL(0x005A0F40u, sub_005A0F40); /* call 0x005A0F40 */

loc_003AE89C: ;
    ecx = MEM32(0x8CC77C);
    esi = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AE8A9: ;
    edi = ebx;
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_003AE8C1; /* je: equal / zero */

loc_003AE8B0: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE8C1u); RECOMP_ABI_CALL(0x00563B98u, sub_00563B98); /* call 0x00563B98 */

loc_003AE8C1: ;
    eax = ebx;
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = eax;
    if ((_fa == 0)) goto loc_003AE8E3; /* je: equal / zero */

loc_003AE8CC: ;
    ecx = MEM32(0x8CC780);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE8E3u); RECOMP_ABI_CALL(0x00563B84u, sub_00563B84); /* call 0x00563B84 */

loc_003AE8E3: ;
    ecx = MEM32(0x906C84);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE8F1u); RECOMP_ABI_CALL(0x00561172u, sub_00561172); /* call 0x00561172 */

loc_003AE8F1: ;
    eax = MEM32(0x906C88);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE8FEu); RECOMP_ABI_CALL(0x0056118Eu, sub_0056118E); /* call 0x0056118E */

loc_003AE8FE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    esi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_003AE919; /* je: equal / zero */

loc_003AE909: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFA2u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE916u); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003AE916: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AE919: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AE92E; /* je: equal / zero */

loc_003AE91E: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFA6u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE92Bu); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003AE92B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AE92E: ;
    ebx = MEM32(esp + 0x1C);
    ecx = MEM32(ebx + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE93Du); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003AE93D: ;
    edx = MEM32(ebx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE948u); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003AE948: ;
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE953u); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003AE953: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AE968; /* je: equal / zero */

loc_003AE95A: ;
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE968u); RECOMP_ABI_CALL(0x00563B0Bu, sub_00563B0B); /* call 0x00563B0B */

loc_003AE968: ;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_003AE980; /* je: equal / zero */

loc_003AE974: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE97Eu); RECOMP_ABI_CALL(0x00560820u, sub_00560820); /* call 0x00560820 */

loc_003AE97E: ;
    goto loc_003AE98A;

loc_003AE980: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE98Au); RECOMP_ABI_CALL(0x005606D4u, sub_005606D4); /* call 0x005606D4 */

loc_003AE98A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AE99C; /* je: equal / zero */

loc_003AE98E: ;
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE99Cu); RECOMP_ABI_CALL(0x00563B24u, sub_00563B24); /* call 0x00563B24 */

loc_003AE99C: ;
    edx = MEM32(ebx + 0x14);
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE9ACu); RECOMP_ABI_CALL(0x005611AAu, sub_005611AA); /* call 0x005611AA */

loc_003AE9AC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003AEA80
 * Original: 0x003AEA80 - 0x003AEACA (74 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AEA80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AEA80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    ecx = edi;
    PUSH32(esp, 0x003AEA8Fu); RECOMP_ABI_CALL(0x005606BAu, sub_005606BA); /* call 0x005606BA */

loc_003AEA8F: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003AEA97u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003AEA97: ;
    eax = MEM32(0x906C58);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = edi;
    MEM32(0x906C58) = eax;
    if ((_fa != 0)) goto loc_003AEAC1; /* jne: not equal / not zero */

loc_003AEAAB: ;
    eax = MEM32(0x906C54);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003AEAB8u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003AEAB8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906C54) = edi;

loc_003AEAC1: ;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003AEAE0
 * Original: 0x003AEAE0 - 0x003AEC4F (367 bytes, 129 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AEAE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AEAE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = esi;
    ebx = 5;
    edi = edi;

loc_003AEAF0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AEAFB; /* je: equal / zero */

loc_003AEAF4: ;
    ecx = edi;
    PUSH32(esp, 0x003AEAFBu); RECOMP_ABI_CALL(0x00575E02u, sub_00575E02); /* call 0x00575E02 */

loc_003AEAFB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003AEAF0; /* jne: not equal / not zero */

loc_003AEB01: ;
    eax = MEM32(esp + 0x14);
    ebx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DF0);
    PUSH32(esp, 0x003AEB17u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AEB17: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003AEB23u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003AEB23: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7FC4E8);
    PUSH32(esp, 0x003AEB32u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AEB32: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003AEB3Eu); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003AEB3E: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DD8);
    edi = esi + 0x14;
    PUSH32(esp, 0x003AEB50u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AEB50: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003AEB5Cu); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003AEB5C: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x829EF8);
    PUSH32(esp, 0x003AEB6Bu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AEB6B: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003AEB77u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003AEB77: ;
    PUSH32(esp, ecx);
    ecx = esp;
    eax = ebx + 0x1C;
    MEM32(ecx) = 0;
    edx = MEM32(eax);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AEB8E; /* je: equal / zero */

loc_003AEB8A: ;
    MEM32(ecx) = edx;
    goto loc_003AEB94;

loc_003AEB8E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003AEB94u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003AEB94: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003AEBA0u); RECOMP_ABI_CALL(0x00576041u, sub_00576041); /* call 0x00576041 */

loc_003AEBA0: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DC0);
    edi = esi + 0x28;
    PUSH32(esp, 0x003AEBB2u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AEBB2: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003AEBBEu); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003AEBBE: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x829EE8);
    PUSH32(esp, 0x003AEBCDu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AEBCD: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003AEBD9u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003AEBD9: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833F74);
    edi = esi + 0x3C;
    PUSH32(esp, 0x003AEBEBu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AEBEB: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003AEBF7u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003AEBF7: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x82B434);
    PUSH32(esp, 0x003AEC06u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AEC06: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003AEC12u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003AEC12: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7CFB54);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003AEC24u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AEC24: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003AEC30u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003AEC30: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x834494);
    PUSH32(esp, 0x003AEC3Fu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AEC3F: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003AEC4Bu); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003AEC4B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003AECB0
 * Original: 0x003AECB0 - 0x003AEDBD (269 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AECB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AECB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x003AECC1u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003AECC1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AECDC; /* je: equal / zero */

loc_003AECC8: ;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0;
    MEM32(eax) = 0;

loc_003AECDC: ;
    esi = MEM32(esp + 8);
    MEM32(esi) = eax;
    eax = MEM32(0x906CB0);
    ecx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x906CB0) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003AED0C; /* jne: not equal / not zero */

loc_003AECF3: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x003AED02u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003AED02: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906CAC) = eax;
    goto loc_003AED11;

loc_003AED0C: ;
    eax = MEM32(0x906CAC);

loc_003AED11: ;
    MEM32(esi + 4) = eax;
    eax = MEM32(0x906CB8);
    edx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(0x906CB8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003AED3E; /* jne: not equal / not zero */

loc_003AED25: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x003AED34u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003AED34: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906CB4) = eax;
    goto loc_003AED43;

loc_003AED3E: ;
    eax = MEM32(0x906CB4);

loc_003AED43: ;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x003AED52u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_003AED52: ;
    PUSH32(esp, 0x906CA4);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x833264);
    PUSH32(esp, 0x003AED64u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003AED64: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833E04);
    PUSH32(esp, 0x003AED73u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AED73: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003AED7Du); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_003AED7D: ;
    ecx = eax;
    PUSH32(esp, 0x003AED84u); RECOMP_ABI_CALL(0x00023C91u, sub_00023C91); /* call 0x00023C91 */

loc_003AED84: ;
    PUSH32(esp, 0x003AED89u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_003AED89: ;
    PUSH32(esp, 0x906CA8);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x833194);
    PUSH32(esp, 0x003AED9Bu); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003AED9B: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833E04);
    PUSH32(esp, 0x003AEDAAu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AEDAA: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003AEDB4u); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_003AEDB4: ;
    ecx = eax;
    PUSH32(esp, 0x003AEDBBu); RECOMP_ABI_CALL(0x00023C91u, sub_00023C91); /* call 0x00023C91 */

loc_003AEDBB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003AEE00
 * Original: 0x003AEE00 - 0x003AF1B4 (948 bytes, 292 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003AEE00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AEE00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(0x9153E0);
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0xC) = edx;
    edx = MEM32(0x9153C8);
    ecx = 0x8CC99C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003AEE67; /* je: equal / zero */

loc_003AEE38: ;
    MEM32(0x9153C8) = ecx;
    ebx = ebx | 0x80000000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8CC9C4) = ecx;
    MEM32(0x8CC9C8) = ecx;
    MEM32(0x8CC9CC) = ecx;
    MEM32(0x8CC9D0) = ecx;
    MEM32(0x8CC9D4) = ecx;
    goto loc_003AEE6D;

loc_003AEE67: ;
    ecx = MEM32(0x8CC9D0);

loc_003AEE6D: ;
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x10), 1 (8-bit) */
    esi = MEM32(eax + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_003AEE85; /* je: equal / zero */

loc_003AEE76: ;
    edx = ZX16(MEM16(0x9153CC));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AEE85: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8DBED0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x8DBED0) (32-bit) */
    edx = MEM32(0x8CC9C4);
    if (CMP_EQ(_fa, _fb)) esi = MEM32(ebp + 8); /* cmove */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    edi = 0xFFFFFFFDu;
    if (CMP_NE(_fa, _fb)) goto loc_003AEEA8; /* jne: not equal / not zero */

loc_003AEE9E: ;
    edx = MEM32(eax + 0x10);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AEEB9; /* je: equal / zero */

loc_003AEEA8: ;
    edx = MEM32(eax + 0x10);
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CC9C4) = esi;
    MEM32(eax + 0x10) = edx;

loc_003AEEB9: ;
    _fa = (uint32_t)(MEM8(eax + 0x24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x24), 1 (8-bit) */
    esi = MEM32(eax + 0x20);
    if (TEST_Z(_fa, _fb)) goto loc_003AEED1; /* je: equal / zero */

loc_003AEEC2: ;
    edx = ZX16(MEM16(0x9153CC));
    edx = (uint32_t)((int32_t)edx * (int32_t)0xB0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AEED1: ;
    _fa = (uint32_t)(MEM32(0x8CC9C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CC9C8), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AEEE3; /* jne: not equal / not zero */

loc_003AEED9: ;
    edx = MEM32(eax + 0x24);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AEEF4; /* je: equal / zero */

loc_003AEEE3: ;
    edx = MEM32(eax + 0x24);
    ebx = ebx | 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CC9C8) = esi;
    MEM32(eax + 0x24) = edx;

loc_003AEEF4: ;
    _fa = (uint32_t)(MEM8(eax + 0x38)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x38), 1 (8-bit) */
    esi = MEM32(eax + 0x34);
    if (TEST_Z(_fa, _fb)) goto loc_003AEF09; /* je: equal / zero */

loc_003AEEFD: ;
    edx = ZX16(MEM16(0x9153CC));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AEF09: ;
    _fa = (uint32_t)(MEM32(0x8CC9CC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CC9CC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AEF1B; /* jne: not equal / not zero */

loc_003AEF11: ;
    edx = MEM32(eax + 0x38);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AEF2C; /* je: equal / zero */

loc_003AEF1B: ;
    edx = MEM32(eax + 0x38);
    ebx = ebx | 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CC9CC) = esi;
    MEM32(eax + 0x38) = edx;

loc_003AEF2C: ;
    _fa = (uint32_t)(MEM8(eax + 0x4C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x4C), 1 (8-bit) */
    esi = MEM32(eax + 0x48);
    if (TEST_Z(_fa, _fb)) goto loc_003AEF41; /* je: equal / zero */

loc_003AEF35: ;
    edx = ZX16(MEM16(0x9153CC));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AEF41: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AEF4F; /* jne: not equal / not zero */

loc_003AEF45: ;
    edx = MEM32(eax + 0x4C);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AEF62; /* je: equal / zero */

loc_003AEF4F: ;
    edx = MEM32(eax + 0x4C);
    ebx = ebx | 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi;
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CC9D0) = ecx;
    MEM32(eax + 0x4C) = edx;

loc_003AEF62: ;
    _fa = (uint32_t)(MEM8(eax + 0x60)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x60), 1 (8-bit) */
    esi = MEM32(eax + 0x5C);
    if (TEST_Z(_fa, _fb)) goto loc_003AEF75; /* je: equal / zero */

loc_003AEF6B: ;
    edx = ZX16(MEM16(0x9153CC));
    esi = esi + edx * 4;

loc_003AEF75: ;
    _fa = (uint32_t)(MEM32(0x8CC9D4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CC9D4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AEF87; /* jne: not equal / not zero */

loc_003AEF7D: ;
    edx = MEM32(eax + 0x60);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AEF98; /* je: equal / zero */

loc_003AEF87: ;
    edx = MEM32(eax + 0x60);
    ebx = ebx | 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CC9D4) = esi;
    MEM32(eax + 0x60) = edx;

loc_003AEF98: ;
    edx = MEM32(esp + 0x14);
    esi = ebx;
    esi = esi & 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 0xC) = ecx;
    MEM32(esp + 0x1C) = esi;
    if ((_fa == 0)) goto loc_003AEFF9; /* je: equal / zero */

loc_003AEFAA: ;
    xmm0 = XMM_SCALAR(MEMF(0x7DA450)); /* movss */
    eax = MEM32(0x8CC9D4);
    ecx = MEM32(edx + 8);
    xmm1 = XMM_SCALAR(MEMF(0x834384)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esp + 0x20);
    MEM32(ecx) = eax;
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x24);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(ecx + 8) = eax;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x2C);
    MEM32(ecx + 0xC) = eax;

loc_003AEFF9: ;
    eax = ebx;
    eax = eax & 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x3C) = eax;
    if ((_fa == 0)) goto loc_003AF08A; /* je: equal / zero */

loc_003AF008: ;
    ecx = MEM32(0x8CC9C4);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF014u); RECOMP_ABI_CALL(0x0056713Du, sub_0056713D); /* call 0x0056713D */

loc_003AF014: ;
    esi = eax;
    eax = MEM32(0x8CC9CC);
    edx = esp + 0x44;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    edi = esp + 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
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
    edx = esp + 0x80;
    if (CMP_EQ(_fa, _fb)) goto loc_003AF049; /* je: equal / zero */

loc_003AF03B: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF047u); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003AF047: ;
    goto loc_003AF06A;

loc_003AF049: ;
    ecx = esp + 0xC0;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF058u); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003AF058: ;
    ecx = 0x10;
    esi = esp + 0xCC;
    edi = esp + 0x4C;
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

loc_003AF06A: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF07Fu); RECOMP_ABI_CALL(0x005A0F40u, sub_005A0F40); /* call 0x005A0F40 */

loc_003AF07F: ;
    esi = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AF08A: ;
    edi = ebx;
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_003AF0A7; /* je: equal / zero */

loc_003AF091: ;
    eax = MEM32(0x8CC9C4);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF0A3u); RECOMP_ABI_CALL(0x00563B98u, sub_00563B98); /* call 0x00563B98 */

loc_003AF0A3: ;
    edx = MEM32(esp + 0x14);

loc_003AF0A7: ;
    eax = ebx;
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x1C) = eax;
    if ((_fa == 0)) goto loc_003AF0C4; /* je: equal / zero */

loc_003AF0B2: ;
    eax = MEM32(0x8CC9C8);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF0C4u); RECOMP_ABI_CALL(0x00563B84u, sub_00563B84); /* call 0x00563B84 */

loc_003AF0C4: ;
    edx = MEM32(0x906CE4);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF0D2u); RECOMP_ABI_CALL(0x00561172u, sub_00561172); /* call 0x00561172 */

loc_003AF0D2: ;
    ecx = MEM32(0x906CE8);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF0E0u); RECOMP_ABI_CALL(0x0056118Eu, sub_0056118E); /* call 0x0056118E */

loc_003AF0E0: ;
    eax = MEM32(esp + 0x44);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AF0FF; /* je: equal / zero */

loc_003AF0EB: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFA2u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF0FCu); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003AF0FC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AF0FF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    ebx = MEM32(esp + 0x14);
    if (TEST_Z(_fa, _fb)) goto loc_003AF118; /* je: equal / zero */

loc_003AF108: ;
    edx = MEM32(ebx + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFA6u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF115u); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003AF115: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AF118: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AF12C; /* je: equal / zero */

loc_003AF11C: ;
    eax = MEM32(ebx + 8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF129u); RECOMP_ABI_CALL(0x00561112u, sub_00561112); /* call 0x00561112 */

loc_003AF129: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AF12C: ;
    esi = MEM32(esp + 0x38);
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF13Bu); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003AF13B: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF146u); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003AF146: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF151u); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003AF151: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AF166; /* je: equal / zero */

loc_003AF158: ;
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF166u); RECOMP_ABI_CALL(0x00563B0Bu, sub_00563B0B); /* call 0x00563B0B */

loc_003AF166: ;
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = MEM32(ebx);
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_003AF17E; /* je: equal / zero */

loc_003AF172: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF17Cu); RECOMP_ABI_CALL(0x00560820u, sub_00560820); /* call 0x00560820 */

loc_003AF17C: ;
    goto loc_003AF188;

loc_003AF17E: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF188u); RECOMP_ABI_CALL(0x005606D4u, sub_005606D4); /* call 0x005606D4 */

loc_003AF188: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AF19A; /* je: equal / zero */

loc_003AF18C: ;
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF19Au); RECOMP_ABI_CALL(0x00563B24u, sub_00563B24); /* call 0x00563B24 */

loc_003AF19A: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF1AAu); RECOMP_ABI_CALL(0x005611AAu, sub_005611AA); /* call 0x005611AA */

loc_003AF1AA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003AF2B0
 * Original: 0x003AF2B0 - 0x003AF321 (113 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AF2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AF2B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    ecx = edi;
    PUSH32(esp, 0x003AF2BFu); RECOMP_ABI_CALL(0x005606BAu, sub_005606BA); /* call 0x005606BA */

loc_003AF2BF: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003AF2C7u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003AF2C7: ;
    eax = MEM32(0x906CB0);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = edi;
    MEM32(0x906CB0) = eax;
    if ((_fa != 0)) goto loc_003AF2F1; /* jne: not equal / not zero */

loc_003AF2DB: ;
    eax = MEM32(0x906CAC);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003AF2E8u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003AF2E8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906CAC) = edi;

loc_003AF2F1: ;
    eax = MEM32(0x906CB8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = edi;
    MEM32(0x906CB8) = eax;
    if ((_fa != 0)) goto loc_003AF318; /* jne: not equal / not zero */

loc_003AF301: ;
    ecx = MEM32(0x906CB4);
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003AF30Fu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003AF30F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906CB4) = edi;

loc_003AF318: ;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003AF340
 * Original: 0x003AF340 - 0x003AF4AF (367 bytes, 129 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AF340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AF340: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = esi;
    ebx = 5;
    edi = edi;

loc_003AF350: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AF35B; /* je: equal / zero */

loc_003AF354: ;
    ecx = edi;
    PUSH32(esp, 0x003AF35Bu); RECOMP_ABI_CALL(0x00575E02u, sub_00575E02); /* call 0x00575E02 */

loc_003AF35B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003AF350; /* jne: not equal / not zero */

loc_003AF361: ;
    eax = MEM32(esp + 0x14);
    ebx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DF0);
    PUSH32(esp, 0x003AF377u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AF377: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003AF383u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003AF383: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7FC4E8);
    PUSH32(esp, 0x003AF392u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AF392: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003AF39Eu); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003AF39E: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DD8);
    edi = esi + 0x14;
    PUSH32(esp, 0x003AF3B0u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AF3B0: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003AF3BCu); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003AF3BC: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x829EF8);
    PUSH32(esp, 0x003AF3CBu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AF3CB: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003AF3D7u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003AF3D7: ;
    PUSH32(esp, ecx);
    ecx = esp;
    eax = ebx + 0x24;
    MEM32(ecx) = 0;
    edx = MEM32(eax);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AF3EE; /* je: equal / zero */

loc_003AF3EA: ;
    MEM32(ecx) = edx;
    goto loc_003AF3F4;

loc_003AF3EE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003AF3F4u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003AF3F4: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003AF400u); RECOMP_ABI_CALL(0x00576041u, sub_00576041); /* call 0x00576041 */

loc_003AF400: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DD8);
    edi = esi + 0x28;
    PUSH32(esp, 0x003AF412u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AF412: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003AF41Eu); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003AF41E: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8340D8);
    PUSH32(esp, 0x003AF42Du); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AF42D: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003AF439u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003AF439: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833F74);
    edi = esi + 0x3C;
    PUSH32(esp, 0x003AF44Bu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AF44B: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003AF457u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003AF457: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8340C4);
    PUSH32(esp, 0x003AF466u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AF466: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003AF472u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003AF472: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DC0);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003AF484u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AF484: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003AF490u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003AF490: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x829EE8);
    PUSH32(esp, 0x003AF49Fu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AF49F: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003AF4ABu); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003AF4AB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003AF510
 * Original: 0x003AF510 - 0x003AF6CC (444 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003AF510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AF510: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF52Cu); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003AF52C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AF53B; /* je: equal / zero */

loc_003AF533: ;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax) = edi;

loc_003AF53B: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xC);
    MEM32(esi) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF54Fu); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003AF54F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AF55E; /* je: equal / zero */

loc_003AF556: ;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax) = edi;

loc_003AF55E: ;
    MEM32(esi + 4) = eax;
    eax = MEM32(0x906D10);
    ecx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x906D10) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003AF58B; /* jne: not equal / not zero */

loc_003AF572: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF581u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003AF581: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906D0C) = eax;
    goto loc_003AF590;

loc_003AF58B: ;
    eax = MEM32(0x906D0C);

loc_003AF590: ;
    MEM32(esi + 8) = eax;
    eax = MEM32(0x906D18);
    edx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(0x906D18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003AF5BD; /* jne: not equal / not zero */

loc_003AF5A4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF5B3u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003AF5B3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906D14) = eax;
    goto loc_003AF5C2;

loc_003AF5BD: ;
    eax = MEM32(0x906D14);

loc_003AF5C2: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7ABD64)); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    PUSH32(esp, 0x7B891F);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x10);
    MEM32(esi + 0xC) = eax;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF607u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003AF607: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    MEM32(esi + 0x10) = eax;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    eax = MEM32(0x906D20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x906D20) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003AF652; /* jne: not equal / not zero */

loc_003AF639: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF648u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003AF648: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906D1C) = eax;
    goto loc_003AF657;

loc_003AF652: ;
    eax = MEM32(0x906D1C);

loc_003AF657: ;
    MEM32(esi + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF65Fu); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_003AF65F: ;
    PUSH32(esp, 0x906D04);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x833264);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF671u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003AF671: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x833E04);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF67Fu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AF67F: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF689u); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_003AF689: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF690u); RECOMP_ABI_CALL(0x00023C91u, sub_00023C91); /* call 0x00023C91 */

loc_003AF690: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF695u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_003AF695: ;
    PUSH32(esp, 0x906D08);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x833194);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF6A7u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003AF6A7: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x833E04);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF6B5u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AF6B5: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF6BFu); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_003AF6BF: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF6C6u); RECOMP_ABI_CALL(0x00023C91u, sub_00023C91); /* call 0x00023C91 */

loc_003AF6C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003AF740
 * Original: 0x003AF740 - 0x003AFBC4 (1156 bytes, 377 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003AF740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AF740: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(0x9153E0);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 8) = edx;
    edx = MEM32(0x9153C8);
    ecx = 0x8CCC34;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003AF7A7; /* je: equal / zero */

loc_003AF778: ;
    MEM32(0x9153C8) = ecx;
    ebx = ebx | 0x80000000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8CCC5C) = ecx;
    MEM32(0x8CCC60) = ecx;
    MEM32(0x8CCC64) = ecx;
    MEM32(0x8CCC68) = ecx;
    MEM32(0x8CCC6C) = ecx;
    goto loc_003AF7AD;

loc_003AF7A7: ;
    ecx = MEM32(0x8CCC5C);

loc_003AF7AD: ;
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x10), 1 (8-bit) */
    esi = MEM32(eax + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_003AF7C5; /* je: equal / zero */

loc_003AF7B6: ;
    edx = ZX16(MEM16(0x9153CC));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AF7C5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8DBED0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x8DBED0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) esi = MEM32(ebp + 8); /* cmove */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    edi = 0xFFFFFFFDu;
    if (CMP_NE(_fa, _fb)) goto loc_003AF7E2; /* jne: not equal / not zero */

loc_003AF7D8: ;
    edx = MEM32(eax + 0x10);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AF7F5; /* je: equal / zero */

loc_003AF7E2: ;
    edx = MEM32(eax + 0x10);
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi;
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CCC5C) = ecx;
    MEM32(eax + 0x10) = edx;

loc_003AF7F5: ;
    _fa = (uint32_t)(MEM8(eax + 0x24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x24), 1 (8-bit) */
    esi = MEM32(eax + 0x20);
    if (TEST_Z(_fa, _fb)) goto loc_003AF80D; /* je: equal / zero */

loc_003AF7FE: ;
    edx = ZX16(MEM16(0x9153CC));
    edx = (uint32_t)((int32_t)edx * (int32_t)0xB0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AF80D: ;
    _fa = (uint32_t)(MEM32(0x8CCC60)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CCC60), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AF81F; /* jne: not equal / not zero */

loc_003AF815: ;
    edx = MEM32(eax + 0x24);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AF830; /* je: equal / zero */

loc_003AF81F: ;
    edx = MEM32(eax + 0x24);
    ebx = ebx | 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CCC60) = esi;
    MEM32(eax + 0x24) = edx;

loc_003AF830: ;
    _fa = (uint32_t)(MEM8(eax + 0x38)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x38), 1 (8-bit) */
    esi = MEM32(eax + 0x34);
    if (TEST_Z(_fa, _fb)) goto loc_003AF848; /* je: equal / zero */

loc_003AF839: ;
    edx = ZX16(MEM16(0x9153CC));
    edx = (uint32_t)((int32_t)edx * (int32_t)0xB0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AF848: ;
    _fa = (uint32_t)(MEM32(0x8CCC64)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CCC64), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AF85A; /* jne: not equal / not zero */

loc_003AF850: ;
    edx = MEM32(eax + 0x38);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AF86B; /* je: equal / zero */

loc_003AF85A: ;
    edx = MEM32(eax + 0x38);
    ebx = ebx | 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CCC64) = esi;
    MEM32(eax + 0x38) = edx;

loc_003AF86B: ;
    _fa = (uint32_t)(MEM8(eax + 0x4C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x4C), 1 (8-bit) */
    esi = MEM32(eax + 0x48);
    if (TEST_Z(_fa, _fb)) goto loc_003AF880; /* je: equal / zero */

loc_003AF874: ;
    edx = ZX16(MEM16(0x9153CC));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AF880: ;
    _fa = (uint32_t)(MEM32(0x8CCC68)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CCC68), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AF892; /* jne: not equal / not zero */

loc_003AF888: ;
    edx = MEM32(eax + 0x4C);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AF8A3; /* je: equal / zero */

loc_003AF892: ;
    edx = MEM32(eax + 0x4C);
    ebx = ebx | 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CCC68) = esi;
    MEM32(eax + 0x4C) = edx;

loc_003AF8A3: ;
    _fa = (uint32_t)(MEM8(eax + 0x60)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x60), 1 (8-bit) */
    esi = MEM32(eax + 0x5C);
    if (TEST_Z(_fa, _fb)) goto loc_003AF8B8; /* je: equal / zero */

loc_003AF8AC: ;
    edx = ZX16(MEM16(0x9153CC));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AF8B8: ;
    _fa = (uint32_t)(MEM32(0x8CCC6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CCC6C), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AF8CA; /* jne: not equal / not zero */

loc_003AF8C0: ;
    edx = MEM32(eax + 0x60);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AF8DF; /* je: equal / zero */

loc_003AF8CA: ;
    edx = esi;
    esi = MEM32(eax + 0x60);
    ebx = ebx | 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi & edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CCC6C) = edx;
    MEM32(eax + 0x60) = esi;
    goto loc_003AF8E5;

loc_003AF8DF: ;
    edx = MEM32(0x8CCC6C);

loc_003AF8E5: ;
    eax = ebx;
    eax = eax & 0x11;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = eax;
    if ((_fa == 0)) goto loc_003AF96E; /* je: equal / zero */

loc_003AF8F0: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF8F6u); RECOMP_ABI_CALL(0x0056713Du, sub_0056713D); /* call 0x0056713D */

loc_003AF8F6: ;
    esi = eax;
    eax = MEM32(0x8CCC6C);
    ecx = 0x10;
    edi = esp + 0x74;
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
    ecx = esp + 0x34;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    ecx = esp + 0x70;
    if (CMP_EQ(_fa, _fb)) goto loc_003AF925; /* je: equal / zero */

loc_003AF917: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF923u); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003AF923: ;
    goto loc_003AF946;

loc_003AF925: ;
    edx = esp + 0xB0;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF934u); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003AF934: ;
    ecx = 0x10;
    esi = esp + 0xBC;
    edi = esp + 0x3C;
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

loc_003AF946: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF95Bu); RECOMP_ABI_CALL(0x005A0F40u, sub_005A0F40); /* call 0x005A0F40 */

loc_003AF95B: ;
    ecx = MEM32(0x8CCC5C);
    edx = MEM32(0x8CCC6C);
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AF96E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AF9D3; /* je: equal / zero */

loc_003AF972: ;
    esi = ecx + 0x50;
    eax = esp + 0x30;
    ecx = 0x10;
    edi = esp + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
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
    eax = esp + 0xB0;
    if (CMP_EQ(_fa, _fb)) goto loc_003AF9A0; /* je: equal / zero */

loc_003AF992: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF99Eu); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003AF99E: ;
    goto loc_003AF9BB;

loc_003AF9A0: ;
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF9ACu); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003AF9AC: ;
    ecx = 0x10;
    esi = esp + 0x7C;
    edi = esp + 0x3C;
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

loc_003AF9BB: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF9D0u); RECOMP_ABI_CALL(0x005A0F40u, sub_005A0F40); /* call 0x005A0F40 */

loc_003AF9D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AF9D3: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 4);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8CCC68);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF9ECu); RECOMP_ABI_CALL(0x005673F9u, sub_005673F9); /* call 0x005673F9 */

loc_003AF9EC: ;
    esi = MEM32(esp + 0x1C);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AF9FEu); RECOMP_ABI_CALL(0x00567384u, sub_00567384); /* call 0x00567384 */

loc_003AF9FE: ;
    edi = ebx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_003AFA1B; /* je: equal / zero */

loc_003AFA08: ;
    ecx = MEM32(0x8CCC5C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AFA1Bu); RECOMP_ABI_CALL(0x00563B98u, sub_00563B98); /* call 0x00563B98 */

loc_003AFA1B: ;
    eax = ebx;
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x10) = eax;
    if ((_fa == 0)) goto loc_003AFA38; /* je: equal / zero */

loc_003AFA26: ;
    eax = MEM32(0x8CCC60);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AFA38u); RECOMP_ABI_CALL(0x00563B84u, sub_00563B84); /* call 0x00563B84 */

loc_003AFA38: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AFA60; /* je: equal / zero */

loc_003AFA3C: ;
    ecx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, 7);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AFA4Cu); RECOMP_ABI_CALL(0x00560519u, sub_00560519); /* call 0x00560519 */

loc_003AFA4C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AFA60; /* je: equal / zero */

loc_003AFA50: ;
    ecx = MEM32(esi);
    PUSH32(esp, 5);
    PUSH32(esp, 8);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AFA60u); RECOMP_ABI_CALL(0x00560519u, sub_00560519); /* call 0x00560519 */

loc_003AFA60: ;
    eax = ebx;
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = eax;
    if ((_fa == 0)) goto loc_003AFA7F; /* je: equal / zero */

loc_003AFA6B: ;
    ecx = MEM32(0x8CCC64);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AFA7Fu); RECOMP_ABI_CALL(0x00563B84u, sub_00563B84); /* call 0x00563B84 */

loc_003AFA7F: ;
    eax = MEM32(0x906D4C);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AFA8Cu); RECOMP_ABI_CALL(0x00561172u, sub_00561172); /* call 0x00561172 */

loc_003AFA8C: ;
    edx = MEM32(0x906D50);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AFA9Au); RECOMP_ABI_CALL(0x0056118Eu, sub_0056118E); /* call 0x0056118E */

loc_003AFA9A: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AFACD; /* je: equal / zero */

loc_003AFAA5: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFA2u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AFAB2u); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003AFAB2: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AFACD; /* je: equal / zero */

loc_003AFABD: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFA6u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AFACAu); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003AFACA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AFACD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_003AFAE1; /* jns: not sign (positive) */

loc_003AFAD1: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFAAu);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AFADEu); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003AFADE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AFAE1: ;
    ebx = MEM32(esp + 0x1C);
    ecx = MEM32(ebx + 4);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AFAF2u); RECOMP_ABI_CALL(0x00561112u, sub_00561112); /* call 0x00561112 */

loc_003AFAF2: ;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AFAFFu); RECOMP_ABI_CALL(0x00561112u, sub_00561112); /* call 0x00561112 */

loc_003AFAFF: ;
    eax = MEM32(ebx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AFB0Au); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003AFB0A: ;
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AFB15u); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003AFB15: ;
    edx = MEM32(ebx + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AFB20u); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003AFB20: ;
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AFB2Bu); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003AFB2B: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AFB40; /* je: equal / zero */

loc_003AFB32: ;
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AFB40u); RECOMP_ABI_CALL(0x00563B0Bu, sub_00563B0B); /* call 0x00563B0B */

loc_003AFB40: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_003AFB58; /* je: equal / zero */

loc_003AFB4C: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AFB56u); RECOMP_ABI_CALL(0x00560820u, sub_00560820); /* call 0x00560820 */

loc_003AFB56: ;
    goto loc_003AFB62;

loc_003AFB58: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AFB62u); RECOMP_ABI_CALL(0x005606D4u, sub_005606D4); /* call 0x005606D4 */

loc_003AFB62: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AFB74; /* je: equal / zero */

loc_003AFB66: ;
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AFB74u); RECOMP_ABI_CALL(0x00563B24u, sub_00563B24); /* call 0x00563B24 */

loc_003AFB74: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = MEM32(esi + 4);
    PUSH32(esp, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_003AFB8D; /* je: equal / zero */

loc_003AFB81: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AFB8Bu); RECOMP_ABI_CALL(0x00560820u, sub_00560820); /* call 0x00560820 */

loc_003AFB8B: ;
    goto loc_003AFB97;

loc_003AFB8D: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AFB97u); RECOMP_ABI_CALL(0x005606D4u, sub_005606D4); /* call 0x005606D4 */

loc_003AFB97: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AFBAA; /* je: equal / zero */

loc_003AFB9B: ;
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AFBAAu); RECOMP_ABI_CALL(0x00563B24u, sub_00563B24); /* call 0x00563B24 */

loc_003AFBAA: ;
    edx = MEM32(ebx + 0x1C);
    eax = MEM32(ebx + 0x18);
    ecx = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AFBBAu); RECOMP_ABI_CALL(0x005611AAu, sub_005611AA); /* call 0x005611AA */

loc_003AFBBA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003AFCF0
 * Original: 0x003AFCF0 - 0x003AFDB0 (192 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AFCF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AFCF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    ecx = edi;
    PUSH32(esp, 0x003AFD00u); RECOMP_ABI_CALL(0x005606BAu, sub_005606BA); /* call 0x005606BA */

loc_003AFD00: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003AFD08u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003AFD08: ;
    edi = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    MEM32(esi) = ebx;
    PUSH32(esp, 0x003AFD19u); RECOMP_ABI_CALL(0x005606BAu, sub_005606BA); /* call 0x005606BA */

loc_003AFD19: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003AFD21u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003AFD21: ;
    eax = MEM32(0x906D10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ebx;
    MEM32(0x906D10) = eax;
    if ((_fa != 0)) goto loc_003AFD4A; /* jne: not equal / not zero */

loc_003AFD34: ;
    eax = MEM32(0x906D0C);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003AFD41u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003AFD41: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906D0C) = ebx;

loc_003AFD4A: ;
    eax = MEM32(0x906D18);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 8) = ebx;
    MEM32(0x906D18) = eax;
    if ((_fa != 0)) goto loc_003AFD71; /* jne: not equal / not zero */

loc_003AFD5A: ;
    ecx = MEM32(0x906D14);
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003AFD68u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003AFD68: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906D14) = ebx;

loc_003AFD71: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    MEM32(esi + 0xC) = ebx;
    PUSH32(esp, 0x003AFD7Fu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003AFD7F: ;
    eax = MEM32(0x906D20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x10) = ebx;
    MEM32(0x906D20) = eax;
    if ((_fa != 0)) goto loc_003AFDA9; /* jne: not equal / not zero */

loc_003AFD92: ;
    edx = MEM32(0x906D1C);
    PUSH32(esp, 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003AFDA0u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003AFDA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906D1C) = ebx;

loc_003AFDA9: ;
    POP32(esp, edi);
    MEM32(esi + 0x14) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003AFDE0
 * Original: 0x003AFDE0 - 0x003AFF4F (367 bytes, 129 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AFDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AFDE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = esi;
    ebx = 5;
    edi = edi;

loc_003AFDF0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AFDFB; /* je: equal / zero */

loc_003AFDF4: ;
    ecx = edi;
    PUSH32(esp, 0x003AFDFBu); RECOMP_ABI_CALL(0x00575E02u, sub_00575E02); /* call 0x00575E02 */

loc_003AFDFB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003AFDF0; /* jne: not equal / not zero */

loc_003AFE01: ;
    eax = MEM32(esp + 0x14);
    ebx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DF0);
    PUSH32(esp, 0x003AFE17u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AFE17: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003AFE23u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003AFE23: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7FC4E8);
    PUSH32(esp, 0x003AFE32u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AFE32: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003AFE3Eu); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003AFE3E: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DD8);
    edi = esi + 0x14;
    PUSH32(esp, 0x003AFE50u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AFE50: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003AFE5Cu); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003AFE5C: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x829EF8);
    PUSH32(esp, 0x003AFE6Bu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AFE6B: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003AFE77u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003AFE77: ;
    PUSH32(esp, ecx);
    ecx = esp;
    eax = ebx + 0x24;
    MEM32(ecx) = 0;
    edx = MEM32(eax);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AFE8E; /* je: equal / zero */

loc_003AFE8A: ;
    MEM32(ecx) = edx;
    goto loc_003AFE94;

loc_003AFE8E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003AFE94u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003AFE94: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003AFEA0u); RECOMP_ABI_CALL(0x00576041u, sub_00576041); /* call 0x00576041 */

loc_003AFEA0: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DD8);
    edi = esi + 0x28;
    PUSH32(esp, 0x003AFEB2u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AFEB2: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003AFEBEu); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003AFEBE: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8340D8);
    PUSH32(esp, 0x003AFECDu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AFECD: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003AFED9u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003AFED9: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833F74);
    edi = esi + 0x3C;
    PUSH32(esp, 0x003AFEEBu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AFEEB: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003AFEF7u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003AFEF7: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8340C4);
    PUSH32(esp, 0x003AFF06u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AFF06: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003AFF12u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003AFF12: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DC0);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003AFF24u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AFF24: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003AFF30u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003AFF30: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x829EE8);
    PUSH32(esp, 0x003AFF3Fu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003AFF3F: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003AFF4Bu); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003AFF4B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003AFFB0
 * Original: 0x003AFFB0 - 0x003B016C (444 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003AFFB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AFFB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AFFCCu); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003AFFCC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AFFDB; /* je: equal / zero */

loc_003AFFD3: ;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax) = edi;

loc_003AFFDB: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xC);
    MEM32(esi) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AFFEFu); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003AFFEF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AFFFE; /* je: equal / zero */

loc_003AFFF6: ;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax) = edi;

loc_003AFFFE: ;
    MEM32(esi + 4) = eax;
    eax = MEM32(0x906D7C);
    ecx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x906D7C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003B002B; /* jne: not equal / not zero */

loc_003B0012: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0021u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B0021: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906D78) = eax;
    goto loc_003B0030;

loc_003B002B: ;
    eax = MEM32(0x906D78);

loc_003B0030: ;
    MEM32(esi + 8) = eax;
    eax = MEM32(0x906D84);
    edx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(0x906D84) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003B005D; /* jne: not equal / not zero */

loc_003B0044: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0053u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B0053: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906D80) = eax;
    goto loc_003B0062;

loc_003B005D: ;
    eax = MEM32(0x906D80);

loc_003B0062: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7ABD64)); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    PUSH32(esp, 0x7B891F);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x10);
    MEM32(esi + 0xC) = eax;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B00A7u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B00A7: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    MEM32(esi + 0x10) = eax;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    eax = MEM32(0x906D8C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x906D8C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003B00F2; /* jne: not equal / not zero */

loc_003B00D9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B00E8u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B00E8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906D88) = eax;
    goto loc_003B00F7;

loc_003B00F2: ;
    eax = MEM32(0x906D88);

loc_003B00F7: ;
    MEM32(esi + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B00FFu); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_003B00FF: ;
    PUSH32(esp, 0x906D70);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x833264);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0111u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003B0111: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x833E04);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B011Fu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B011F: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0129u); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_003B0129: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0130u); RECOMP_ABI_CALL(0x00023C91u, sub_00023C91); /* call 0x00023C91 */

loc_003B0130: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0135u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_003B0135: ;
    PUSH32(esp, 0x906D74);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x833194);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0147u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003B0147: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x833E04);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0155u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B0155: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B015Fu); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_003B015F: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0166u); RECOMP_ABI_CALL(0x00023C91u, sub_00023C91); /* call 0x00023C91 */

loc_003B0166: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003B001C
 * Original: 0x003B001C - 0x003B016C (336 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B001C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B001C: ;
    PUSH32(esp, 0x003B0021u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B0021: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906D78) = eax;
    goto loc_003B0030;

    eax = MEM32(0x906D78);

loc_003B0030: ;
    MEM32(esi + 8) = eax;
    eax = MEM32(0x906D84);
    edx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(0x906D84) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003B005D; /* jne: not equal / not zero */

loc_003B0044: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x003B0053u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B0053: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906D80) = eax;
    goto loc_003B0062;

loc_003B005D: ;
    eax = MEM32(0x906D80);

loc_003B0062: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7ABD64)); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    PUSH32(esp, 0x7B891F);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x10);
    MEM32(esi + 0xC) = eax;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003B00A7u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B00A7: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    MEM32(esi + 0x10) = eax;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    eax = MEM32(0x906D8C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x906D8C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003B00F2; /* jne: not equal / not zero */

loc_003B00D9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x003B00E8u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B00E8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906D88) = eax;
    goto loc_003B00F7;

loc_003B00F2: ;
    eax = MEM32(0x906D88);

loc_003B00F7: ;
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x003B00FFu); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_003B00FF: ;
    PUSH32(esp, 0x906D70);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x833264);
    PUSH32(esp, 0x003B0111u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003B0111: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x833E04);
    PUSH32(esp, 0x003B011Fu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B011F: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B0129u); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_003B0129: ;
    ecx = eax;
    PUSH32(esp, 0x003B0130u); RECOMP_ABI_CALL(0x00023C91u, sub_00023C91); /* call 0x00023C91 */

loc_003B0130: ;
    PUSH32(esp, 0x003B0135u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_003B0135: ;
    PUSH32(esp, 0x906D74);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x833194);
    PUSH32(esp, 0x003B0147u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003B0147: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x833E04);
    PUSH32(esp, 0x003B0155u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B0155: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B015Fu); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_003B015F: ;
    ecx = eax;
    PUSH32(esp, 0x003B0166u); RECOMP_ABI_CALL(0x00023C91u, sub_00023C91); /* call 0x00023C91 */

loc_003B0166: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003B003A
 * Original: 0x003B003A - 0x003B016C (306 bytes, 90 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B003A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B003A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(0x906D84) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003B005D; /* jne: not equal / not zero */

loc_003B0044: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x003B0053u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B0053: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906D80) = eax;
    goto loc_003B0062;

loc_003B005D: ;
    eax = MEM32(0x906D80);

loc_003B0062: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7ABD64)); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    PUSH32(esp, 0x7B891F);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x10);
    MEM32(esi + 0xC) = eax;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003B00A7u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B00A7: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    MEM32(esi + 0x10) = eax;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    eax = MEM32(0x906D8C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x906D8C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003B00F2; /* jne: not equal / not zero */

loc_003B00D9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x003B00E8u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B00E8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906D88) = eax;
    goto loc_003B00F7;

loc_003B00F2: ;
    eax = MEM32(0x906D88);

loc_003B00F7: ;
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x003B00FFu); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_003B00FF: ;
    PUSH32(esp, 0x906D70);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x833264);
    PUSH32(esp, 0x003B0111u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003B0111: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x833E04);
    PUSH32(esp, 0x003B011Fu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B011F: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B0129u); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_003B0129: ;
    ecx = eax;
    PUSH32(esp, 0x003B0130u); RECOMP_ABI_CALL(0x00023C91u, sub_00023C91); /* call 0x00023C91 */

loc_003B0130: ;
    PUSH32(esp, 0x003B0135u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_003B0135: ;
    PUSH32(esp, 0x906D74);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x833194);
    PUSH32(esp, 0x003B0147u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003B0147: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x833E04);
    PUSH32(esp, 0x003B0155u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B0155: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B015Fu); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_003B015F: ;
    ecx = eax;
    PUSH32(esp, 0x003B0166u); RECOMP_ABI_CALL(0x00023C91u, sub_00023C91); /* call 0x00023C91 */

loc_003B0166: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003B003B
 * Original: 0x003B003B - 0x003B016C (305 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B003B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B003B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(0x906D84) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003B005D; /* jne: not equal / not zero */

loc_003B0044: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x003B0053u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B0053: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906D80) = eax;
    goto loc_003B0062;

loc_003B005D: ;
    eax = MEM32(0x906D80);

loc_003B0062: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7ABD64)); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    PUSH32(esp, 0x7B891F);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x10);
    MEM32(esi + 0xC) = eax;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003B00A7u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B00A7: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    MEM32(esi + 0x10) = eax;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    eax = MEM32(0x906D8C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x906D8C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003B00F2; /* jne: not equal / not zero */

loc_003B00D9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x003B00E8u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B00E8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906D88) = eax;
    goto loc_003B00F7;

loc_003B00F2: ;
    eax = MEM32(0x906D88);

loc_003B00F7: ;
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x003B00FFu); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_003B00FF: ;
    PUSH32(esp, 0x906D70);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x833264);
    PUSH32(esp, 0x003B0111u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003B0111: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x833E04);
    PUSH32(esp, 0x003B011Fu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B011F: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B0129u); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_003B0129: ;
    ecx = eax;
    PUSH32(esp, 0x003B0130u); RECOMP_ABI_CALL(0x00023C91u, sub_00023C91); /* call 0x00023C91 */

loc_003B0130: ;
    PUSH32(esp, 0x003B0135u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_003B0135: ;
    PUSH32(esp, 0x906D74);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x833194);
    PUSH32(esp, 0x003B0147u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003B0147: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x833E04);
    PUSH32(esp, 0x003B0155u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B0155: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B015Fu); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_003B015F: ;
    ecx = eax;
    PUSH32(esp, 0x003B0166u); RECOMP_ABI_CALL(0x00023C91u, sub_00023C91); /* call 0x00023C91 */

loc_003B0166: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003B01E0
 * Original: 0x003B01E0 - 0x003B0664 (1156 bytes, 377 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003B01E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B01E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(0x9153E0);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 8) = edx;
    edx = MEM32(0x9153C8);
    ecx = 0x8CCF94;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003B0247; /* je: equal / zero */

loc_003B0218: ;
    MEM32(0x9153C8) = ecx;
    ebx = ebx | 0x80000000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8CCFBC) = ecx;
    MEM32(0x8CCFC0) = ecx;
    MEM32(0x8CCFC4) = ecx;
    MEM32(0x8CCFC8) = ecx;
    MEM32(0x8CCFCC) = ecx;
    goto loc_003B024D;

loc_003B0247: ;
    ecx = MEM32(0x8CCFBC);

loc_003B024D: ;
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x10), 1 (8-bit) */
    esi = MEM32(eax + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_003B0265; /* je: equal / zero */

loc_003B0256: ;
    edx = ZX16(MEM16(0x9153CC));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B0265: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8DBED0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x8DBED0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) esi = MEM32(ebp + 8); /* cmove */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    edi = 0xFFFFFFFDu;
    if (CMP_NE(_fa, _fb)) goto loc_003B0282; /* jne: not equal / not zero */

loc_003B0278: ;
    edx = MEM32(eax + 0x10);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B0295; /* je: equal / zero */

loc_003B0282: ;
    edx = MEM32(eax + 0x10);
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi;
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CCFBC) = ecx;
    MEM32(eax + 0x10) = edx;

loc_003B0295: ;
    _fa = (uint32_t)(MEM8(eax + 0x24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x24), 1 (8-bit) */
    esi = MEM32(eax + 0x20);
    if (TEST_Z(_fa, _fb)) goto loc_003B02AD; /* je: equal / zero */

loc_003B029E: ;
    edx = ZX16(MEM16(0x9153CC));
    edx = (uint32_t)((int32_t)edx * (int32_t)0xB0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B02AD: ;
    _fa = (uint32_t)(MEM32(0x8CCFC0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CCFC0), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B02BF; /* jne: not equal / not zero */

loc_003B02B5: ;
    edx = MEM32(eax + 0x24);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B02D0; /* je: equal / zero */

loc_003B02BF: ;
    edx = MEM32(eax + 0x24);
    ebx = ebx | 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CCFC0) = esi;
    MEM32(eax + 0x24) = edx;

loc_003B02D0: ;
    _fa = (uint32_t)(MEM8(eax + 0x38)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x38), 1 (8-bit) */
    esi = MEM32(eax + 0x34);
    if (TEST_Z(_fa, _fb)) goto loc_003B02E8; /* je: equal / zero */

loc_003B02D9: ;
    edx = ZX16(MEM16(0x9153CC));
    edx = (uint32_t)((int32_t)edx * (int32_t)0xB0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B02E8: ;
    _fa = (uint32_t)(MEM32(0x8CCFC4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CCFC4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B02FA; /* jne: not equal / not zero */

loc_003B02F0: ;
    edx = MEM32(eax + 0x38);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B030B; /* je: equal / zero */

loc_003B02FA: ;
    edx = MEM32(eax + 0x38);
    ebx = ebx | 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CCFC4) = esi;
    MEM32(eax + 0x38) = edx;

loc_003B030B: ;
    _fa = (uint32_t)(MEM8(eax + 0x4C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x4C), 1 (8-bit) */
    esi = MEM32(eax + 0x48);
    if (TEST_Z(_fa, _fb)) goto loc_003B0320; /* je: equal / zero */

loc_003B0314: ;
    edx = ZX16(MEM16(0x9153CC));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B0320: ;
    _fa = (uint32_t)(MEM32(0x8CCFC8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CCFC8), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B0332; /* jne: not equal / not zero */

loc_003B0328: ;
    edx = MEM32(eax + 0x4C);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B0343; /* je: equal / zero */

loc_003B0332: ;
    edx = MEM32(eax + 0x4C);
    ebx = ebx | 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CCFC8) = esi;
    MEM32(eax + 0x4C) = edx;

loc_003B0343: ;
    _fa = (uint32_t)(MEM8(eax + 0x60)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x60), 1 (8-bit) */
    esi = MEM32(eax + 0x5C);
    if (TEST_Z(_fa, _fb)) goto loc_003B0358; /* je: equal / zero */

loc_003B034C: ;
    edx = ZX16(MEM16(0x9153CC));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B0358: ;
    _fa = (uint32_t)(MEM32(0x8CCFCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CCFCC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B036A; /* jne: not equal / not zero */

loc_003B0360: ;
    edx = MEM32(eax + 0x60);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B037F; /* je: equal / zero */

loc_003B036A: ;
    edx = esi;
    esi = MEM32(eax + 0x60);
    ebx = ebx | 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi & edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CCFCC) = edx;
    MEM32(eax + 0x60) = esi;
    goto loc_003B0385;

loc_003B037F: ;
    edx = MEM32(0x8CCFCC);

loc_003B0385: ;
    eax = ebx;
    eax = eax & 0x11;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = eax;
    if ((_fa == 0)) goto loc_003B040E; /* je: equal / zero */

loc_003B0390: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0396u); RECOMP_ABI_CALL(0x0056713Du, sub_0056713D); /* call 0x0056713D */

loc_003B0396: ;
    esi = eax;
    eax = MEM32(0x8CCFCC);
    ecx = 0x10;
    edi = esp + 0x74;
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
    ecx = esp + 0x34;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    ecx = esp + 0x70;
    if (CMP_EQ(_fa, _fb)) goto loc_003B03C5; /* je: equal / zero */

loc_003B03B7: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B03C3u); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003B03C3: ;
    goto loc_003B03E6;

loc_003B03C5: ;
    edx = esp + 0xB0;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B03D4u); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003B03D4: ;
    ecx = 0x10;
    esi = esp + 0xBC;
    edi = esp + 0x3C;
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

loc_003B03E6: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B03FBu); RECOMP_ABI_CALL(0x005A0F40u, sub_005A0F40); /* call 0x005A0F40 */

loc_003B03FB: ;
    ecx = MEM32(0x8CCFBC);
    edx = MEM32(0x8CCFCC);
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B040E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B0473; /* je: equal / zero */

loc_003B0412: ;
    esi = ecx + 0x50;
    eax = esp + 0x30;
    ecx = 0x10;
    edi = esp + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
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
    eax = esp + 0xB0;
    if (CMP_EQ(_fa, _fb)) goto loc_003B0440; /* je: equal / zero */

loc_003B0432: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B043Eu); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003B043E: ;
    goto loc_003B045B;

loc_003B0440: ;
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B044Cu); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003B044C: ;
    ecx = 0x10;
    esi = esp + 0x7C;
    edi = esp + 0x3C;
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

loc_003B045B: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0470u); RECOMP_ABI_CALL(0x005A0F40u, sub_005A0F40); /* call 0x005A0F40 */

loc_003B0470: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B0473: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 4);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8CCFC8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B048Cu); RECOMP_ABI_CALL(0x005673F9u, sub_005673F9); /* call 0x005673F9 */

loc_003B048C: ;
    esi = MEM32(esp + 0x1C);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B049Eu); RECOMP_ABI_CALL(0x00567384u, sub_00567384); /* call 0x00567384 */

loc_003B049E: ;
    edi = ebx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_003B04BB; /* je: equal / zero */

loc_003B04A8: ;
    ecx = MEM32(0x8CCFBC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B04BBu); RECOMP_ABI_CALL(0x00563B98u, sub_00563B98); /* call 0x00563B98 */

loc_003B04BB: ;
    eax = ebx;
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x10) = eax;
    if ((_fa == 0)) goto loc_003B04D8; /* je: equal / zero */

loc_003B04C6: ;
    eax = MEM32(0x8CCFC0);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B04D8u); RECOMP_ABI_CALL(0x00563B84u, sub_00563B84); /* call 0x00563B84 */

loc_003B04D8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B0500; /* je: equal / zero */

loc_003B04DC: ;
    ecx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, 7);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B04ECu); RECOMP_ABI_CALL(0x00560519u, sub_00560519); /* call 0x00560519 */

loc_003B04EC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B0500; /* je: equal / zero */

loc_003B04F0: ;
    ecx = MEM32(esi);
    PUSH32(esp, 5);
    PUSH32(esp, 8);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0500u); RECOMP_ABI_CALL(0x00560519u, sub_00560519); /* call 0x00560519 */

loc_003B0500: ;
    eax = ebx;
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = eax;
    if ((_fa == 0)) goto loc_003B051F; /* je: equal / zero */

loc_003B050B: ;
    ecx = MEM32(0x8CCFC4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B051Fu); RECOMP_ABI_CALL(0x00563B84u, sub_00563B84); /* call 0x00563B84 */

loc_003B051F: ;
    eax = MEM32(0x906DB8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B052Cu); RECOMP_ABI_CALL(0x00561172u, sub_00561172); /* call 0x00561172 */

loc_003B052C: ;
    edx = MEM32(0x906DBC);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B053Au); RECOMP_ABI_CALL(0x0056118Eu, sub_0056118E); /* call 0x0056118E */

loc_003B053A: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B056D; /* je: equal / zero */

loc_003B0545: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFA2u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0552u); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003B0552: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B056D; /* je: equal / zero */

loc_003B055D: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFA6u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B056Au); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003B056A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B056D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_003B0581; /* jns: not sign (positive) */

loc_003B0571: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFAAu);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B057Eu); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003B057E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B0581: ;
    ebx = MEM32(esp + 0x1C);
    ecx = MEM32(ebx + 4);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0592u); RECOMP_ABI_CALL(0x00561112u, sub_00561112); /* call 0x00561112 */

loc_003B0592: ;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B059Fu); RECOMP_ABI_CALL(0x00561112u, sub_00561112); /* call 0x00561112 */

loc_003B059F: ;
    eax = MEM32(ebx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B05AAu); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003B05AA: ;
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B05B5u); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003B05B5: ;
    edx = MEM32(ebx + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B05C0u); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003B05C0: ;
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B05CBu); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003B05CB: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B05E0; /* je: equal / zero */

loc_003B05D2: ;
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B05E0u); RECOMP_ABI_CALL(0x00563B0Bu, sub_00563B0B); /* call 0x00563B0B */

loc_003B05E0: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_003B05F8; /* je: equal / zero */

loc_003B05EC: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B05F6u); RECOMP_ABI_CALL(0x00560820u, sub_00560820); /* call 0x00560820 */

loc_003B05F6: ;
    goto loc_003B0602;

loc_003B05F8: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0602u); RECOMP_ABI_CALL(0x005606D4u, sub_005606D4); /* call 0x005606D4 */

loc_003B0602: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B0614; /* je: equal / zero */

loc_003B0606: ;
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0614u); RECOMP_ABI_CALL(0x00563B24u, sub_00563B24); /* call 0x00563B24 */

loc_003B0614: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = MEM32(esi + 4);
    PUSH32(esp, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_003B062D; /* je: equal / zero */

loc_003B0621: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B062Bu); RECOMP_ABI_CALL(0x00560820u, sub_00560820); /* call 0x00560820 */

loc_003B062B: ;
    goto loc_003B0637;

loc_003B062D: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0637u); RECOMP_ABI_CALL(0x005606D4u, sub_005606D4); /* call 0x005606D4 */

loc_003B0637: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B064A; /* je: equal / zero */

loc_003B063B: ;
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B064Au); RECOMP_ABI_CALL(0x00563B24u, sub_00563B24); /* call 0x00563B24 */

loc_003B064A: ;
    edx = MEM32(ebx + 0x1C);
    eax = MEM32(ebx + 0x18);
    ecx = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B065Au); RECOMP_ABI_CALL(0x005611AAu, sub_005611AA); /* call 0x005611AA */

loc_003B065A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003B0790
 * Original: 0x003B0790 - 0x003B0850 (192 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B0790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B0790: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    ecx = edi;
    PUSH32(esp, 0x003B07A0u); RECOMP_ABI_CALL(0x005606BAu, sub_005606BA); /* call 0x005606BA */

loc_003B07A0: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003B07A8u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003B07A8: ;
    edi = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    MEM32(esi) = ebx;
    PUSH32(esp, 0x003B07B9u); RECOMP_ABI_CALL(0x005606BAu, sub_005606BA); /* call 0x005606BA */

loc_003B07B9: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003B07C1u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003B07C1: ;
    eax = MEM32(0x906D7C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ebx;
    MEM32(0x906D7C) = eax;
    if ((_fa != 0)) goto loc_003B07EA; /* jne: not equal / not zero */

loc_003B07D4: ;
    eax = MEM32(0x906D78);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B07E1u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003B07E1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906D78) = ebx;

loc_003B07EA: ;
    eax = MEM32(0x906D84);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 8) = ebx;
    MEM32(0x906D84) = eax;
    if ((_fa != 0)) goto loc_003B0811; /* jne: not equal / not zero */

loc_003B07FA: ;
    ecx = MEM32(0x906D80);
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003B0808u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003B0808: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906D80) = ebx;

loc_003B0811: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    MEM32(esi + 0xC) = ebx;
    PUSH32(esp, 0x003B081Fu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003B081F: ;
    eax = MEM32(0x906D8C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x10) = ebx;
    MEM32(0x906D8C) = eax;
    if ((_fa != 0)) goto loc_003B0849; /* jne: not equal / not zero */

loc_003B0832: ;
    edx = MEM32(0x906D88);
    PUSH32(esp, 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B0840u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003B0840: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906D88) = ebx;

loc_003B0849: ;
    POP32(esp, edi);
    MEM32(esi + 0x14) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003B0880
 * Original: 0x003B0880 - 0x003B09EF (367 bytes, 129 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B0880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B0880: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = esi;
    ebx = 5;
    edi = edi;

loc_003B0890: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B089B; /* je: equal / zero */

loc_003B0894: ;
    ecx = edi;
    PUSH32(esp, 0x003B089Bu); RECOMP_ABI_CALL(0x00575E02u, sub_00575E02); /* call 0x00575E02 */

loc_003B089B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003B0890; /* jne: not equal / not zero */

loc_003B08A1: ;
    eax = MEM32(esp + 0x14);
    ebx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DF0);
    PUSH32(esp, 0x003B08B7u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B08B7: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003B08C3u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003B08C3: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7FC4E8);
    PUSH32(esp, 0x003B08D2u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B08D2: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003B08DEu); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003B08DE: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DD8);
    edi = esi + 0x14;
    PUSH32(esp, 0x003B08F0u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B08F0: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003B08FCu); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003B08FC: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x829EF8);
    PUSH32(esp, 0x003B090Bu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B090B: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003B0917u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003B0917: ;
    PUSH32(esp, ecx);
    ecx = esp;
    eax = ebx + 0x24;
    MEM32(ecx) = 0;
    edx = MEM32(eax);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B092E; /* je: equal / zero */

loc_003B092A: ;
    MEM32(ecx) = edx;
    goto loc_003B0934;

loc_003B092E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B0934u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B0934: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003B0940u); RECOMP_ABI_CALL(0x00576041u, sub_00576041); /* call 0x00576041 */

loc_003B0940: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DD8);
    edi = esi + 0x28;
    PUSH32(esp, 0x003B0952u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B0952: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003B095Eu); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003B095E: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8340D8);
    PUSH32(esp, 0x003B096Du); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B096D: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003B0979u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003B0979: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833F74);
    edi = esi + 0x3C;
    PUSH32(esp, 0x003B098Bu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B098B: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003B0997u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003B0997: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8340C4);
    PUSH32(esp, 0x003B09A6u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B09A6: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003B09B2u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003B09B2: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DC0);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003B09C4u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B09C4: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003B09D0u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003B09D0: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x829EE8);
    PUSH32(esp, 0x003B09DFu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B09DF: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003B09EBu); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003B09EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003B0A50
 * Original: 0x003B0A50 - 0x003B0C0C (444 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003B0A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B0A50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0A6Cu); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B0A6C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B0A7B; /* je: equal / zero */

loc_003B0A73: ;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax) = edi;

loc_003B0A7B: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xC);
    MEM32(esi) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0A8Fu); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B0A8F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B0A9E; /* je: equal / zero */

loc_003B0A96: ;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax) = edi;

loc_003B0A9E: ;
    MEM32(esi + 4) = eax;
    eax = MEM32(0x906DE8);
    ecx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x906DE8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003B0ACB; /* jne: not equal / not zero */

loc_003B0AB2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0AC1u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B0AC1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906DE4) = eax;
    goto loc_003B0AD0;

loc_003B0ACB: ;
    eax = MEM32(0x906DE4);

loc_003B0AD0: ;
    MEM32(esi + 8) = eax;
    eax = MEM32(0x906DF0);
    edx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(0x906DF0) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003B0AFD; /* jne: not equal / not zero */

loc_003B0AE4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0AF3u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B0AF3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906DEC) = eax;
    goto loc_003B0B02;

loc_003B0AFD: ;
    eax = MEM32(0x906DEC);

loc_003B0B02: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7ABD64)); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    PUSH32(esp, 0x7B891F);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x10);
    MEM32(esi + 0xC) = eax;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0B47u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B0B47: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    MEM32(esi + 0x10) = eax;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    eax = MEM32(0x906DF8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x906DF8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003B0B92; /* jne: not equal / not zero */

loc_003B0B79: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0B88u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B0B88: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906DF4) = eax;
    goto loc_003B0B97;

loc_003B0B92: ;
    eax = MEM32(0x906DF4);

loc_003B0B97: ;
    MEM32(esi + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0B9Fu); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_003B0B9F: ;
    PUSH32(esp, 0x906DDC);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x833264);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0BB1u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003B0BB1: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x833E04);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0BBFu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B0BBF: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0BC9u); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_003B0BC9: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0BD0u); RECOMP_ABI_CALL(0x00023C91u, sub_00023C91); /* call 0x00023C91 */

loc_003B0BD0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0BD5u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_003B0BD5: ;
    PUSH32(esp, 0x906DE0);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x833194);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0BE7u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003B0BE7: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x833E04);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0BF5u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B0BF5: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0BFFu); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_003B0BFF: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0C06u); RECOMP_ABI_CALL(0x00023C91u, sub_00023C91); /* call 0x00023C91 */

loc_003B0C06: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003B0C80
 * Original: 0x003B0C80 - 0x003B1104 (1156 bytes, 377 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003B0C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B0C80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(0x9153E0);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 8) = edx;
    edx = MEM32(0x9153C8);
    ecx = 0x8CD32C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003B0CE7; /* je: equal / zero */

loc_003B0CB8: ;
    MEM32(0x9153C8) = ecx;
    ebx = ebx | 0x80000000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8CD354) = ecx;
    MEM32(0x8CD358) = ecx;
    MEM32(0x8CD35C) = ecx;
    MEM32(0x8CD360) = ecx;
    MEM32(0x8CD364) = ecx;
    goto loc_003B0CED;

loc_003B0CE7: ;
    ecx = MEM32(0x8CD354);

loc_003B0CED: ;
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x10), 1 (8-bit) */
    esi = MEM32(eax + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_003B0D05; /* je: equal / zero */

loc_003B0CF6: ;
    edx = ZX16(MEM16(0x9153CC));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B0D05: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8DBED0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x8DBED0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) esi = MEM32(ebp + 8); /* cmove */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    edi = 0xFFFFFFFDu;
    if (CMP_NE(_fa, _fb)) goto loc_003B0D22; /* jne: not equal / not zero */

loc_003B0D18: ;
    edx = MEM32(eax + 0x10);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B0D35; /* je: equal / zero */

loc_003B0D22: ;
    edx = MEM32(eax + 0x10);
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi;
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CD354) = ecx;
    MEM32(eax + 0x10) = edx;

loc_003B0D35: ;
    _fa = (uint32_t)(MEM8(eax + 0x24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x24), 1 (8-bit) */
    esi = MEM32(eax + 0x20);
    if (TEST_Z(_fa, _fb)) goto loc_003B0D4D; /* je: equal / zero */

loc_003B0D3E: ;
    edx = ZX16(MEM16(0x9153CC));
    edx = (uint32_t)((int32_t)edx * (int32_t)0xB0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B0D4D: ;
    _fa = (uint32_t)(MEM32(0x8CD358)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CD358), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B0D5F; /* jne: not equal / not zero */

loc_003B0D55: ;
    edx = MEM32(eax + 0x24);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B0D70; /* je: equal / zero */

loc_003B0D5F: ;
    edx = MEM32(eax + 0x24);
    ebx = ebx | 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CD358) = esi;
    MEM32(eax + 0x24) = edx;

loc_003B0D70: ;
    _fa = (uint32_t)(MEM8(eax + 0x38)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x38), 1 (8-bit) */
    esi = MEM32(eax + 0x34);
    if (TEST_Z(_fa, _fb)) goto loc_003B0D88; /* je: equal / zero */

loc_003B0D79: ;
    edx = ZX16(MEM16(0x9153CC));
    edx = (uint32_t)((int32_t)edx * (int32_t)0xB0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B0D88: ;
    _fa = (uint32_t)(MEM32(0x8CD35C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CD35C), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B0D9A; /* jne: not equal / not zero */

loc_003B0D90: ;
    edx = MEM32(eax + 0x38);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B0DAB; /* je: equal / zero */

loc_003B0D9A: ;
    edx = MEM32(eax + 0x38);
    ebx = ebx | 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CD35C) = esi;
    MEM32(eax + 0x38) = edx;

loc_003B0DAB: ;
    _fa = (uint32_t)(MEM8(eax + 0x4C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x4C), 1 (8-bit) */
    esi = MEM32(eax + 0x48);
    if (TEST_Z(_fa, _fb)) goto loc_003B0DC0; /* je: equal / zero */

loc_003B0DB4: ;
    edx = ZX16(MEM16(0x9153CC));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B0DC0: ;
    _fa = (uint32_t)(MEM32(0x8CD360)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CD360), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B0DD2; /* jne: not equal / not zero */

loc_003B0DC8: ;
    edx = MEM32(eax + 0x4C);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B0DE3; /* je: equal / zero */

loc_003B0DD2: ;
    edx = MEM32(eax + 0x4C);
    ebx = ebx | 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CD360) = esi;
    MEM32(eax + 0x4C) = edx;

loc_003B0DE3: ;
    _fa = (uint32_t)(MEM8(eax + 0x60)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x60), 1 (8-bit) */
    esi = MEM32(eax + 0x5C);
    if (TEST_Z(_fa, _fb)) goto loc_003B0DF8; /* je: equal / zero */

loc_003B0DEC: ;
    edx = ZX16(MEM16(0x9153CC));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B0DF8: ;
    _fa = (uint32_t)(MEM32(0x8CD364)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CD364), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B0E0A; /* jne: not equal / not zero */

loc_003B0E00: ;
    edx = MEM32(eax + 0x60);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B0E1F; /* je: equal / zero */

loc_003B0E0A: ;
    edx = esi;
    esi = MEM32(eax + 0x60);
    ebx = ebx | 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi & edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CD364) = edx;
    MEM32(eax + 0x60) = esi;
    goto loc_003B0E25;

loc_003B0E1F: ;
    edx = MEM32(0x8CD364);

loc_003B0E25: ;
    eax = ebx;
    eax = eax & 0x11;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = eax;
    if ((_fa == 0)) goto loc_003B0EAE; /* je: equal / zero */

loc_003B0E30: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0E36u); RECOMP_ABI_CALL(0x0056713Du, sub_0056713D); /* call 0x0056713D */

loc_003B0E36: ;
    esi = eax;
    eax = MEM32(0x8CD364);
    ecx = 0x10;
    edi = esp + 0x74;
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
    ecx = esp + 0x34;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    ecx = esp + 0x70;
    if (CMP_EQ(_fa, _fb)) goto loc_003B0E65; /* je: equal / zero */

loc_003B0E57: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0E63u); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003B0E63: ;
    goto loc_003B0E86;

loc_003B0E65: ;
    edx = esp + 0xB0;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0E74u); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003B0E74: ;
    ecx = 0x10;
    esi = esp + 0xBC;
    edi = esp + 0x3C;
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

loc_003B0E86: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0E9Bu); RECOMP_ABI_CALL(0x005A0F40u, sub_005A0F40); /* call 0x005A0F40 */

loc_003B0E9B: ;
    ecx = MEM32(0x8CD354);
    edx = MEM32(0x8CD364);
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B0EAE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B0F13; /* je: equal / zero */

loc_003B0EB2: ;
    esi = ecx + 0x50;
    eax = esp + 0x30;
    ecx = 0x10;
    edi = esp + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
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
    eax = esp + 0xB0;
    if (CMP_EQ(_fa, _fb)) goto loc_003B0EE0; /* je: equal / zero */

loc_003B0ED2: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0EDEu); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003B0EDE: ;
    goto loc_003B0EFB;

loc_003B0EE0: ;
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0EECu); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003B0EEC: ;
    ecx = 0x10;
    esi = esp + 0x7C;
    edi = esp + 0x3C;
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

loc_003B0EFB: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0F10u); RECOMP_ABI_CALL(0x005A0F40u, sub_005A0F40); /* call 0x005A0F40 */

loc_003B0F10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B0F13: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 4);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8CD360);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0F2Cu); RECOMP_ABI_CALL(0x005673F9u, sub_005673F9); /* call 0x005673F9 */

loc_003B0F2C: ;
    esi = MEM32(esp + 0x1C);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0F3Eu); RECOMP_ABI_CALL(0x00567384u, sub_00567384); /* call 0x00567384 */

loc_003B0F3E: ;
    edi = ebx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_003B0F5B; /* je: equal / zero */

loc_003B0F48: ;
    ecx = MEM32(0x8CD354);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0F5Bu); RECOMP_ABI_CALL(0x00563B98u, sub_00563B98); /* call 0x00563B98 */

loc_003B0F5B: ;
    eax = ebx;
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x10) = eax;
    if ((_fa == 0)) goto loc_003B0F78; /* je: equal / zero */

loc_003B0F66: ;
    eax = MEM32(0x8CD358);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0F78u); RECOMP_ABI_CALL(0x00563B84u, sub_00563B84); /* call 0x00563B84 */

loc_003B0F78: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B0FA0; /* je: equal / zero */

loc_003B0F7C: ;
    ecx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, 7);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0F8Cu); RECOMP_ABI_CALL(0x00560519u, sub_00560519); /* call 0x00560519 */

loc_003B0F8C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B0FA0; /* je: equal / zero */

loc_003B0F90: ;
    ecx = MEM32(esi);
    PUSH32(esp, 5);
    PUSH32(esp, 8);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0FA0u); RECOMP_ABI_CALL(0x00560519u, sub_00560519); /* call 0x00560519 */

loc_003B0FA0: ;
    eax = ebx;
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = eax;
    if ((_fa == 0)) goto loc_003B0FBF; /* je: equal / zero */

loc_003B0FAB: ;
    ecx = MEM32(0x8CD35C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0FBFu); RECOMP_ABI_CALL(0x00563B84u, sub_00563B84); /* call 0x00563B84 */

loc_003B0FBF: ;
    eax = MEM32(0x906E24);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0FCCu); RECOMP_ABI_CALL(0x00561172u, sub_00561172); /* call 0x00561172 */

loc_003B0FCC: ;
    edx = MEM32(0x906E28);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0FDAu); RECOMP_ABI_CALL(0x0056118Eu, sub_0056118E); /* call 0x0056118E */

loc_003B0FDA: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B100D; /* je: equal / zero */

loc_003B0FE5: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFA2u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B0FF2u); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003B0FF2: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B100D; /* je: equal / zero */

loc_003B0FFD: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFA6u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B100Au); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003B100A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B100D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_003B1021; /* jns: not sign (positive) */

loc_003B1011: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFAAu);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B101Eu); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003B101E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B1021: ;
    ebx = MEM32(esp + 0x1C);
    ecx = MEM32(ebx + 4);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1032u); RECOMP_ABI_CALL(0x00561112u, sub_00561112); /* call 0x00561112 */

loc_003B1032: ;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B103Fu); RECOMP_ABI_CALL(0x00561112u, sub_00561112); /* call 0x00561112 */

loc_003B103F: ;
    eax = MEM32(ebx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B104Au); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003B104A: ;
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1055u); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003B1055: ;
    edx = MEM32(ebx + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1060u); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003B1060: ;
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B106Bu); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003B106B: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B1080; /* je: equal / zero */

loc_003B1072: ;
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1080u); RECOMP_ABI_CALL(0x00563B0Bu, sub_00563B0B); /* call 0x00563B0B */

loc_003B1080: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_003B1098; /* je: equal / zero */

loc_003B108C: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1096u); RECOMP_ABI_CALL(0x00560820u, sub_00560820); /* call 0x00560820 */

loc_003B1096: ;
    goto loc_003B10A2;

loc_003B1098: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B10A2u); RECOMP_ABI_CALL(0x005606D4u, sub_005606D4); /* call 0x005606D4 */

loc_003B10A2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B10B4; /* je: equal / zero */

loc_003B10A6: ;
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B10B4u); RECOMP_ABI_CALL(0x00563B24u, sub_00563B24); /* call 0x00563B24 */

loc_003B10B4: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = MEM32(esi + 4);
    PUSH32(esp, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_003B10CD; /* je: equal / zero */

loc_003B10C1: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B10CBu); RECOMP_ABI_CALL(0x00560820u, sub_00560820); /* call 0x00560820 */

loc_003B10CB: ;
    goto loc_003B10D7;

loc_003B10CD: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B10D7u); RECOMP_ABI_CALL(0x005606D4u, sub_005606D4); /* call 0x005606D4 */

loc_003B10D7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B10EA; /* je: equal / zero */

loc_003B10DB: ;
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B10EAu); RECOMP_ABI_CALL(0x00563B24u, sub_00563B24); /* call 0x00563B24 */

loc_003B10EA: ;
    edx = MEM32(ebx + 0x1C);
    eax = MEM32(ebx + 0x18);
    ecx = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B10FAu); RECOMP_ABI_CALL(0x005611AAu, sub_005611AA); /* call 0x005611AA */

loc_003B10FA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003B1230
 * Original: 0x003B1230 - 0x003B12F0 (192 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B1230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B1230: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    ecx = edi;
    PUSH32(esp, 0x003B1240u); RECOMP_ABI_CALL(0x005606BAu, sub_005606BA); /* call 0x005606BA */

loc_003B1240: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003B1248u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003B1248: ;
    edi = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    MEM32(esi) = ebx;
    PUSH32(esp, 0x003B1259u); RECOMP_ABI_CALL(0x005606BAu, sub_005606BA); /* call 0x005606BA */

loc_003B1259: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003B1261u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003B1261: ;
    eax = MEM32(0x906DE8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ebx;
    MEM32(0x906DE8) = eax;
    if ((_fa != 0)) goto loc_003B128A; /* jne: not equal / not zero */

loc_003B1274: ;
    eax = MEM32(0x906DE4);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B1281u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003B1281: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906DE4) = ebx;

loc_003B128A: ;
    eax = MEM32(0x906DF0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 8) = ebx;
    MEM32(0x906DF0) = eax;
    if ((_fa != 0)) goto loc_003B12B1; /* jne: not equal / not zero */

loc_003B129A: ;
    ecx = MEM32(0x906DEC);
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003B12A8u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003B12A8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906DEC) = ebx;

loc_003B12B1: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    MEM32(esi + 0xC) = ebx;
    PUSH32(esp, 0x003B12BFu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003B12BF: ;
    eax = MEM32(0x906DF8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x10) = ebx;
    MEM32(0x906DF8) = eax;
    if ((_fa != 0)) goto loc_003B12E9; /* jne: not equal / not zero */

loc_003B12D2: ;
    edx = MEM32(0x906DF4);
    PUSH32(esp, 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B12E0u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003B12E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906DF4) = ebx;

loc_003B12E9: ;
    POP32(esp, edi);
    MEM32(esi + 0x14) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003B1320
 * Original: 0x003B1320 - 0x003B14FA (474 bytes, 169 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B1320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B1320: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = esi;
    ebx = 6;
    edi = edi;

loc_003B1330: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B133B; /* je: equal / zero */

loc_003B1334: ;
    ecx = edi;
    PUSH32(esp, 0x003B133Bu); RECOMP_ABI_CALL(0x00575E02u, sub_00575E02); /* call 0x00575E02 */

loc_003B133B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003B1330; /* jne: not equal / not zero */

loc_003B1341: ;
    eax = MEM32(esp + 0x14);
    ebx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DF0);
    PUSH32(esp, 0x003B1357u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B1357: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003B1363u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003B1363: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7FC4E8);
    PUSH32(esp, 0x003B1372u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B1372: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003B137Eu); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003B137E: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DC0);
    edi = esi + 0x14;
    PUSH32(esp, 0x003B1390u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B1390: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003B139Cu); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003B139C: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x829EE8);
    PUSH32(esp, 0x003B13ABu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B13AB: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003B13B7u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003B13B7: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833F74);
    edi = esi + 0x28;
    PUSH32(esp, 0x003B13C9u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B13C9: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003B13D5u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003B13D5: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833F60);
    PUSH32(esp, 0x003B13E4u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B13E4: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003B13F0u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003B13F0: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833F74);
    edi = esi + 0x3C;
    PUSH32(esp, 0x003B1402u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B1402: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003B140Eu); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003B140E: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833F4C);
    PUSH32(esp, 0x003B141Du); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B141D: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003B1429u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003B1429: ;
    PUSH32(esp, ecx);
    ecx = esp;
    edi = esi + 0x50;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DD8);
    PUSH32(esp, 0x003B143Bu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B143B: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003B1447u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003B1447: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x829EF8);
    PUSH32(esp, 0x003B1456u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B1456: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003B1462u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003B1462: ;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp;
    MEM32(ecx) = 0;
    eax = MEM32(ebx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B1478; /* je: equal / zero */

loc_003B1474: ;
    MEM32(ecx) = eax;
    goto loc_003B147E;

loc_003B1478: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003B147Eu); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B147E: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003B148Au); RECOMP_ABI_CALL(0x00576041u, sub_00576041); /* call 0x00576041 */

loc_003B148A: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x834558);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x64;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003B149Cu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B149C: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003B14A8u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003B14A8: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x834548);
    PUSH32(esp, 0x003B14B7u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B14B7: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003B14C3u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003B14C3: ;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = 0;
    eax = MEM32(ebx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B14E4; /* je: equal / zero */

loc_003B14D2: ;
    edx = esp + 0x14;
    MEM32(ecx) = eax;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003B14E0u); RECOMP_ABI_CALL(0x00576041u, sub_00576041); /* call 0x00576041 */

loc_003B14E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003B14E4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003B14EAu); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B14EA: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003B14F6u); RECOMP_ABI_CALL(0x00576041u, sub_00576041); /* call 0x00576041 */

loc_003B14F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003B1570
 * Original: 0x003B1570 - 0x003B1583 (19 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B1570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B1570: ;
    _fa = (uint32_t)(MEM8(ecx + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x10), 1 (8-bit) */
    eax = MEM32(ecx + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_003B1580; /* je: equal / zero */

loc_003B1579: ;
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 8;

loc_003B1580: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B1590
 * Original: 0x003B1590 - 0x003B1691 (257 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B1590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B1590: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x003B15A3u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B15A3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B15B2; /* je: equal / zero */

loc_003B15AA: ;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax) = edi;

loc_003B15B2: ;
    esi = MEM32(esp + 0xC);
    MEM32(esi) = eax;
    eax = MEM32(0x906E54);
    ecx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x906E54) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003B15E2; /* jne: not equal / not zero */

loc_003B15C9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x003B15D8u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B15D8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906E50) = eax;
    goto loc_003B15E7;

loc_003B15E2: ;
    eax = MEM32(0x906E50);

loc_003B15E7: ;
    MEM32(esi + 4) = eax;
    eax = MEM32(0x906E5C);
    edx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(0x906E5C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003B1614; /* jne: not equal / not zero */

loc_003B15FB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x003B160Au); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B160A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906E58) = eax;
    goto loc_003B1619;

loc_003B1614: ;
    eax = MEM32(0x906E58);

loc_003B1619: ;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    PUSH32(esp, 0x003B1627u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_003B1627: ;
    PUSH32(esp, 0x906E48);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x833264);
    PUSH32(esp, 0x003B1639u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003B1639: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x833E04);
    PUSH32(esp, 0x003B1647u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B1647: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B1651u); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_003B1651: ;
    ecx = eax;
    PUSH32(esp, 0x003B1658u); RECOMP_ABI_CALL(0x00023C91u, sub_00023C91); /* call 0x00023C91 */

loc_003B1658: ;
    PUSH32(esp, 0x003B165Du); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_003B165D: ;
    PUSH32(esp, 0x906E4C);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x833194);
    PUSH32(esp, 0x003B166Fu); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003B166F: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x833E04);
    PUSH32(esp, 0x003B167Du); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B167D: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003B1687u); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_003B1687: ;
    ecx = eax;
    PUSH32(esp, 0x003B168Eu); RECOMP_ABI_CALL(0x00023C91u, sub_00023C91); /* call 0x00023C91 */

loc_003B168E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003B16E0
 * Original: 0x003B16E0 - 0x003B1AF6 (1046 bytes, 338 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003B16E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B16E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(0x9153E0);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 8) = edx;
    edx = MEM32(0x9153C8);
    ecx = 0x8CD5C4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003B174D; /* je: equal / zero */

loc_003B1718: ;
    MEM32(0x9153C8) = ecx;
    ebx = ebx | 0x80000000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8CD5EC) = ecx;
    MEM32(0x8CD5F0) = ecx;
    MEM32(0x8CD5F4) = ecx;
    MEM32(0x8CD5F8) = ecx;
    MEM32(0x8CD5FC) = ecx;
    MEM32(0x8CD600) = ecx;
    goto loc_003B1753;

loc_003B174D: ;
    ecx = MEM32(0x8CD5F8);

loc_003B1753: ;
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x10), 1 (8-bit) */
    esi = MEM32(eax + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_003B176B; /* je: equal / zero */

loc_003B175C: ;
    edx = ZX16(MEM16(0x9153CC));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B176B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8DBED0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x8DBED0) (32-bit) */
    edx = MEM32(0x8CD5EC);
    if (CMP_EQ(_fa, _fb)) esi = MEM32(ebp + 8); /* cmove */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    edi = 0xFFFFFFFDu;
    if (CMP_NE(_fa, _fb)) goto loc_003B178E; /* jne: not equal / not zero */

loc_003B1784: ;
    edx = MEM32(eax + 0x10);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B179F; /* je: equal / zero */

loc_003B178E: ;
    edx = MEM32(eax + 0x10);
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CD5EC) = esi;
    MEM32(eax + 0x10) = edx;

loc_003B179F: ;
    _fa = (uint32_t)(MEM8(eax + 0x24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x24), 1 (8-bit) */
    esi = MEM32(eax + 0x20);
    if (TEST_Z(_fa, _fb)) goto loc_003B17B4; /* je: equal / zero */

loc_003B17A8: ;
    edx = ZX16(MEM16(0x9153CC));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B17B4: ;
    _fa = (uint32_t)(MEM32(0x8CD5F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CD5F0), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B17C6; /* jne: not equal / not zero */

loc_003B17BC: ;
    edx = MEM32(eax + 0x24);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B17D7; /* je: equal / zero */

loc_003B17C6: ;
    edx = MEM32(eax + 0x24);
    ebx = ebx | 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CD5F0) = esi;
    MEM32(eax + 0x24) = edx;

loc_003B17D7: ;
    _fa = (uint32_t)(MEM8(eax + 0x38)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x38), 1 (8-bit) */
    esi = MEM32(eax + 0x34);
    if (TEST_Z(_fa, _fb)) goto loc_003B17EC; /* je: equal / zero */

loc_003B17E0: ;
    edx = ZX16(MEM16(0x9153CC));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B17EC: ;
    _fa = (uint32_t)(MEM32(0x8CD5F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CD5F4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B17FE; /* jne: not equal / not zero */

loc_003B17F4: ;
    edx = MEM32(eax + 0x38);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B180F; /* je: equal / zero */

loc_003B17FE: ;
    edx = MEM32(eax + 0x38);
    ebx = ebx | 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CD5F4) = esi;
    MEM32(eax + 0x38) = edx;

loc_003B180F: ;
    _fa = (uint32_t)(MEM8(eax + 0x4C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x4C), 1 (8-bit) */
    esi = MEM32(eax + 0x48);
    if (TEST_Z(_fa, _fb)) goto loc_003B1824; /* je: equal / zero */

loc_003B1818: ;
    edx = ZX16(MEM16(0x9153CC));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B1824: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B1832; /* jne: not equal / not zero */

loc_003B1828: ;
    edx = MEM32(eax + 0x4C);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B1845; /* je: equal / zero */

loc_003B1832: ;
    edx = MEM32(eax + 0x4C);
    ebx = ebx | 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi;
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CD5F8) = ecx;
    MEM32(eax + 0x4C) = edx;

loc_003B1845: ;
    _fa = (uint32_t)(MEM8(eax + 0x60)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x60), 1 (8-bit) */
    esi = MEM32(eax + 0x5C);
    if (TEST_Z(_fa, _fb)) goto loc_003B185D; /* je: equal / zero */

loc_003B184E: ;
    edx = ZX16(MEM16(0x9153CC));
    edx = (uint32_t)((int32_t)edx * (int32_t)0xB0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B185D: ;
    _fa = (uint32_t)(MEM32(0x8CD5FC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CD5FC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B186F; /* jne: not equal / not zero */

loc_003B1865: ;
    edx = MEM32(eax + 0x60);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B1880; /* je: equal / zero */

loc_003B186F: ;
    edx = MEM32(eax + 0x60);
    ebx = ebx | 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CD5FC) = esi;
    MEM32(eax + 0x60) = edx;

loc_003B1880: ;
    _fa = (uint32_t)(MEM8(eax + 0x74)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x74), 1 (8-bit) */
    esi = MEM32(eax + 0x70);
    if (TEST_Z(_fa, _fb)) goto loc_003B1893; /* je: equal / zero */

loc_003B1889: ;
    edx = ZX16(MEM16(0x9153CC));
    esi = esi + edx * 8;

loc_003B1893: ;
    _fa = (uint32_t)(MEM32(0x8CD600)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CD600), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B18A5; /* jne: not equal / not zero */

loc_003B189B: ;
    edx = MEM32(eax + 0x74);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B18B6; /* je: equal / zero */

loc_003B18A5: ;
    edx = MEM32(eax + 0x74);
    ebx = ebx | 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CD600) = esi;
    MEM32(eax + 0x74) = edx;

loc_003B18B6: ;
    edx = MEM32(0x8CD5F4);
    eax = MEM32(esp + 0x10);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(eax + 8);
    ecx = MEM32(0x8CD600);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B18DEu); RECOMP_ABI_CALL(0x005CBBE1u, sub_005CBBE1); /* call 0x005CBBE1 */

loc_003B18DE: ;
    esi = ebx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = esi;
    if ((_fa == 0)) goto loc_003B1964; /* je: equal / zero */

loc_003B18EC: ;
    ecx = MEM32(0x8CD5EC);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B18F8u); RECOMP_ABI_CALL(0x0056713Du, sub_0056713D); /* call 0x0056713D */

loc_003B18F8: ;
    esi = eax;
    eax = MEM32(0x8CD5F0);
    edx = esp + 0x24;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    edi = esp + 0x60;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
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
    edx = esp + 0x60;
    if (CMP_EQ(_fa, _fb)) goto loc_003B1927; /* je: equal / zero */

loc_003B1919: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1925u); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003B1925: ;
    goto loc_003B1948;

loc_003B1927: ;
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1936u); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003B1936: ;
    ecx = 0x10;
    esi = esp + 0xAC;
    edi = esp + 0x2C;
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

loc_003B1948: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B195Du); RECOMP_ABI_CALL(0x005A0F40u, sub_005A0F40); /* call 0x005A0F40 */

loc_003B195D: ;
    esi = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B1964: ;
    edi = ebx;
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_003B1981; /* je: equal / zero */

loc_003B196B: ;
    eax = MEM32(0x8CD5EC);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1981u); RECOMP_ABI_CALL(0x00563B98u, sub_00563B98); /* call 0x00563B98 */

loc_003B1981: ;
    eax = ebx;
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = eax;
    if ((_fa == 0)) goto loc_003B19A2; /* je: equal / zero */

loc_003B198C: ;
    eax = MEM32(0x8CD5FC);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B19A2u); RECOMP_ABI_CALL(0x00563B84u, sub_00563B84); /* call 0x00563B84 */

loc_003B19A2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B1A02; /* je: equal / zero */

loc_003B19A6: ;
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx);
    PUSH32(esp, 3);
    PUSH32(esp, 0xC);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B19BAu); RECOMP_ABI_CALL(0x00560519u, sub_00560519); /* call 0x00560519 */

loc_003B19BA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B1A02; /* je: equal / zero */

loc_003B19BE: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax);
    PUSH32(esp, 3);
    PUSH32(esp, 0xD);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B19D2u); RECOMP_ABI_CALL(0x00560519u, sub_00560519); /* call 0x00560519 */

loc_003B19D2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B1A02; /* je: equal / zero */

loc_003B19D6: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 7);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B19EAu); RECOMP_ABI_CALL(0x00560519u, sub_00560519); /* call 0x00560519 */

loc_003B19EA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B1A02; /* je: equal / zero */

loc_003B19EE: ;
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1A02u); RECOMP_ABI_CALL(0x00560519u, sub_00560519); /* call 0x00560519 */

loc_003B1A02: ;
    edx = MEM32(0x906E88);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1A10u); RECOMP_ABI_CALL(0x00561172u, sub_00561172); /* call 0x00561172 */

loc_003B1A10: ;
    ecx = MEM32(0x906E8C);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1A1Eu); RECOMP_ABI_CALL(0x0056118Eu, sub_0056118E); /* call 0x0056118E */

loc_003B1A1E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    esi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_003B1A39; /* je: equal / zero */

loc_003B1A29: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFA2u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1A36u); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003B1A36: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B1A39: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFA6u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1A4Au); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003B1A4A: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFA7u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1A57u); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003B1A57: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B1A6F; /* je: equal / zero */

loc_003B1A5F: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFABu);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1A6Cu); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003B1A6C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B1A6F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B1A84; /* je: equal / zero */

loc_003B1A74: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1A81u); RECOMP_ABI_CALL(0x00561112u, sub_00561112); /* call 0x00561112 */

loc_003B1A81: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B1A84: ;
    ebx = MEM32(esp + 0x1C);
    eax = MEM32(ebx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1A93u); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003B1A93: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B1AA8; /* je: equal / zero */

loc_003B1A9A: ;
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1AA8u); RECOMP_ABI_CALL(0x00563B0Bu, sub_00563B0B); /* call 0x00563B0B */

loc_003B1AA8: ;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_003B1AC0; /* je: equal / zero */

loc_003B1AB4: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1ABEu); RECOMP_ABI_CALL(0x00560820u, sub_00560820); /* call 0x00560820 */

loc_003B1ABE: ;
    goto loc_003B1ACA;

loc_003B1AC0: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1ACAu); RECOMP_ABI_CALL(0x005606D4u, sub_005606D4); /* call 0x005606D4 */

loc_003B1ACA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B1ADC; /* je: equal / zero */

loc_003B1ACE: ;
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1ADCu); RECOMP_ABI_CALL(0x00563B24u, sub_00563B24); /* call 0x00563B24 */

loc_003B1ADC: ;
    edx = MEM32(ebx + 0xC);
    eax = MEM32(ebx + 8);
    ecx = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1AECu); RECOMP_ABI_CALL(0x005611AAu, sub_005611AA); /* call 0x005611AA */

loc_003B1AEC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003B1C00
 * Original: 0x003B1C00 - 0x003B1C74 (116 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B1C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B1C00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    ecx = edi;
    PUSH32(esp, 0x003B1C0Fu); RECOMP_ABI_CALL(0x005606BAu, sub_005606BA); /* call 0x005606BA */

loc_003B1C0F: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003B1C17u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003B1C17: ;
    eax = MEM32(0x906E54);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = edi;
    MEM32(0x906E54) = eax;
    if ((_fa != 0)) goto loc_003B1C41; /* jne: not equal / not zero */

loc_003B1C2B: ;
    eax = MEM32(0x906E50);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B1C38u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003B1C38: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906E50) = edi;

loc_003B1C41: ;
    eax = MEM32(0x906E5C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = edi;
    MEM32(0x906E5C) = eax;
    if ((_fa != 0)) goto loc_003B1C68; /* jne: not equal / not zero */

loc_003B1C51: ;
    ecx = MEM32(0x906E58);
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003B1C5Fu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003B1C5F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906E58) = edi;

loc_003B1C68: ;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003B1CA0
 * Original: 0x003B1CA0 - 0x003B1DD6 (310 bytes, 110 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B1CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B1CA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = esi;
    ebx = 4;
    edi = edi;

loc_003B1CB0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B1CBB; /* je: equal / zero */

loc_003B1CB4: ;
    ecx = edi;
    PUSH32(esp, 0x003B1CBBu); RECOMP_ABI_CALL(0x00575E02u, sub_00575E02); /* call 0x00575E02 */

loc_003B1CBB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003B1CB0; /* jne: not equal / not zero */

loc_003B1CC1: ;
    eax = MEM32(esp + 0x14);
    ebx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DF0);
    PUSH32(esp, 0x003B1CD7u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B1CD7: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003B1CE3u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003B1CE3: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7FC4E8);
    PUSH32(esp, 0x003B1CF2u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B1CF2: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003B1CFEu); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003B1CFE: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DD8);
    edi = esi + 0x14;
    PUSH32(esp, 0x003B1D10u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B1D10: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003B1D1Cu); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003B1D1C: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x829EF8);
    PUSH32(esp, 0x003B1D2Bu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B1D2B: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003B1D37u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003B1D37: ;
    PUSH32(esp, ecx);
    ecx = esp;
    eax = ebx + 0x28;
    MEM32(ecx) = 0;
    edx = MEM32(eax);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B1D4E; /* je: equal / zero */

loc_003B1D4A: ;
    MEM32(ecx) = edx;
    goto loc_003B1D54;

loc_003B1D4E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B1D54u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B1D54: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003B1D60u); RECOMP_ABI_CALL(0x00576041u, sub_00576041); /* call 0x00576041 */

loc_003B1D60: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DC0);
    edi = esi + 0x28;
    PUSH32(esp, 0x003B1D72u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B1D72: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003B1D7Eu); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003B1D7E: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x829EE8);
    PUSH32(esp, 0x003B1D8Du); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B1D8D: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003B1D99u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003B1D99: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DC0);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003B1DABu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B1DAB: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003B1DB7u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_003B1DB7: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x82B1E8);
    PUSH32(esp, 0x003B1DC6u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B1DC6: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003B1DD2u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_003B1DD2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003B1E30
 * Original: 0x003B1E30 - 0x003B1FA8 (376 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003B1E30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B1E30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1E4Au); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B1E4A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B1E65; /* je: equal / zero */

loc_003B1E51: ;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0;
    MEM32(eax) = 0;

loc_003B1E65: ;
    esi = MEM32(ebp + 8);
    MEM32(esi) = eax;
    eax = MEM32(0x906EB4);
    ecx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x906EB4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003B1E94; /* jne: not equal / not zero */

loc_003B1E7B: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1E8Au); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B1E8A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906EB0) = eax;
    goto loc_003B1E99;

loc_003B1E94: ;
    eax = MEM32(0x906EB0);

loc_003B1E99: ;
    MEM32(esi + 4) = eax;
    eax = MEM32(0x906EBC);
    edx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(0x906EBC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003B1EC9; /* jne: not equal / not zero */

loc_003B1EAD: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xA00);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1EBFu); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B1EBF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906EB8) = eax;
    goto loc_003B1ECE;

loc_003B1EC9: ;
    eax = MEM32(0x906EB8);

loc_003B1ECE: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    PUSH32(esp, 0x7B891F);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD450)); /* movss */
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x10);
    MEM32(esi + 8) = eax;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1F14u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B1F14: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    MEM32(esi + 0xC) = eax;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xC) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1F3Au); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_003B1F3A: ;
    PUSH32(esp, 0x906EA8);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x833264);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1F4Cu); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003B1F4C: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833E04);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1F5Bu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B1F5B: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1F65u); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_003B1F65: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1F6Cu); RECOMP_ABI_CALL(0x00023C91u, sub_00023C91); /* call 0x00023C91 */

loc_003B1F6C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1F71u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_003B1F71: ;
    PUSH32(esp, 0x906EAC);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x833194);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1F83u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003B1F83: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833E04);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1F92u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B1F92: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1F9Cu); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_003B1F9C: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B1FA3u); RECOMP_ABI_CALL(0x00023C91u, sub_00023C91); /* call 0x00023C91 */

loc_003B1FA3: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003B2010
 * Original: 0x003B2010 - 0x003B2348 (824 bytes, 268 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003B2010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B2010: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(0x9153E0);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 8) = edx;
    edx = MEM32(0x9153C8);
    ecx = 0x8CD874;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003B2071; /* je: equal / zero */

loc_003B2048: ;
    MEM32(0x9153C8) = ecx;
    ebx = ebx | 0x80000000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8CD89C) = ecx;
    MEM32(0x8CD8A0) = ecx;
    MEM32(0x8CD8A4) = ecx;
    MEM32(0x8CD8A8) = ecx;
    goto loc_003B2077;

loc_003B2071: ;
    ecx = MEM32(0x8CD89C);

loc_003B2077: ;
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x10), 1 (8-bit) */
    esi = MEM32(eax + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_003B208F; /* je: equal / zero */

loc_003B2080: ;
    edx = ZX16(MEM16(0x9153CC));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B208F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8DBED0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x8DBED0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) esi = MEM32(ebp + 8); /* cmove */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    edi = 0xFFFFFFFDu;
    if (CMP_NE(_fa, _fb)) goto loc_003B20AC; /* jne: not equal / not zero */

loc_003B20A2: ;
    edx = MEM32(eax + 0x10);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B20BF; /* je: equal / zero */

loc_003B20AC: ;
    edx = MEM32(eax + 0x10);
    ebx = ebx | 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi;
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CD89C) = ecx;
    MEM32(eax + 0x10) = edx;

loc_003B20BF: ;
    _fa = (uint32_t)(MEM8(eax + 0x24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x24), 1 (8-bit) */
    esi = MEM32(eax + 0x20);
    if (TEST_Z(_fa, _fb)) goto loc_003B20D7; /* je: equal / zero */

loc_003B20C8: ;
    edx = ZX16(MEM16(0x9153CC));
    edx = (uint32_t)((int32_t)edx * (int32_t)0xB0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B20D7: ;
    _fa = (uint32_t)(MEM32(0x8CD8A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CD8A0), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B20E9; /* jne: not equal / not zero */

loc_003B20DF: ;
    edx = MEM32(eax + 0x24);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B20FA; /* je: equal / zero */

loc_003B20E9: ;
    edx = MEM32(eax + 0x24);
    ebx = ebx | 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CD8A0) = esi;
    MEM32(eax + 0x24) = edx;

loc_003B20FA: ;
    _fa = (uint32_t)(MEM8(eax + 0x38)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x38), 1 (8-bit) */
    esi = MEM32(eax + 0x34);
    if (TEST_Z(_fa, _fb)) goto loc_003B210F; /* je: equal / zero */

loc_003B2103: ;
    edx = ZX16(MEM16(0x9153CC));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B210F: ;
    _fa = (uint32_t)(MEM32(0x8CD8A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CD8A4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B2121; /* jne: not equal / not zero */

loc_003B2117: ;
    edx = MEM32(eax + 0x38);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B2132; /* je: equal / zero */

loc_003B2121: ;
    edx = MEM32(eax + 0x38);
    ebx = ebx | 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CD8A4) = esi;
    MEM32(eax + 0x38) = edx;

loc_003B2132: ;
    _fa = (uint32_t)(MEM8(eax + 0x4C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x4C), 1 (8-bit) */
    esi = MEM32(eax + 0x48);
    if (TEST_Z(_fa, _fb)) goto loc_003B2147; /* je: equal / zero */

loc_003B213B: ;
    edx = ZX16(MEM16(0x9153CC));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B2147: ;
    _fa = (uint32_t)(MEM32(0x8CD8A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8CD8A8), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B2159; /* jne: not equal / not zero */

loc_003B214F: ;
    edx = MEM32(eax + 0x4C);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B216A; /* je: equal / zero */

loc_003B2159: ;
    edx = MEM32(eax + 0x4C);
    ebx = ebx | 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8CD8A8) = esi;
    MEM32(eax + 0x4C) = edx;

loc_003B216A: ;
    edi = ebx;
    edi = edi & 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = edi;
    if ((_fa == 0)) goto loc_003B21E7; /* je: equal / zero */

loc_003B2175: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B217Bu); RECOMP_ABI_CALL(0x0056713Du, sub_0056713D); /* call 0x0056713D */

loc_003B217B: ;
    esi = eax;
    eax = MEM32(0x8CD8A4);
    ecx = 0x10;
    edi = esp + 0x64;
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
    ecx = esp + 0x24;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    ecx = esp + 0x60;
    if (CMP_EQ(_fa, _fb)) goto loc_003B21AA; /* je: equal / zero */

loc_003B219C: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B21A8u); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003B21A8: ;
    goto loc_003B21CB;

loc_003B21AA: ;
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B21B9u); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_003B21B9: ;
    ecx = 0x10;
    esi = esp + 0xAC;
    edi = esp + 0x2C;
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

loc_003B21CB: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B21E0u); RECOMP_ABI_CALL(0x005A0F40u, sub_005A0F40); /* call 0x005A0F40 */

loc_003B21E0: ;
    edi = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B21E7: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 8);
    edx = MEM32(0x8CD8A8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B2209u); RECOMP_ABI_CALL(0x00567146u, sub_00567146); /* call 0x00567146 */

loc_003B2209: ;
    esi = ebx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_003B222A; /* je: equal / zero */

loc_003B2213: ;
    ecx = MEM32(0x8CD89C);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B222Au); RECOMP_ABI_CALL(0x00563B98u, sub_00563B98); /* call 0x00563B98 */

loc_003B222A: ;
    eax = ebx;
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = eax;
    if ((_fa == 0)) goto loc_003B224C; /* je: equal / zero */

loc_003B2235: ;
    ecx = MEM32(0x8CD8A0);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B224Cu); RECOMP_ABI_CALL(0x00563B84u, sub_00563B84); /* call 0x00563B84 */

loc_003B224C: ;
    ecx = MEM32(0x906EE8);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B225Au); RECOMP_ABI_CALL(0x00561172u, sub_00561172); /* call 0x00561172 */

loc_003B225A: ;
    eax = MEM32(0x906EEC);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B2267u); RECOMP_ABI_CALL(0x0056118Eu, sub_0056118E); /* call 0x0056118E */

loc_003B2267: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B2282; /* je: equal / zero */

loc_003B226E: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 4);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFA2u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B227Fu); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003B227F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B2282: ;
    edi = MEM32(esp + 0x1C);
    ecx = MEM32(edi + 4);
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 8);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFA6u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B229Cu); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003B229C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ebx = MEM32(esp + 0x10);
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_003B22B7; /* jns: not sign (positive) */

loc_003B22A7: ;
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x46);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B22B4u); RECOMP_ABI_CALL(0x005610E8u, sub_005610E8); /* call 0x005610E8 */

loc_003B22B4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B22B7: ;
    edx = MEM32(edi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B22C2u); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003B22C2: ;
    eax = MEM32(edi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B22CDu); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003B22CD: ;
    ecx = MEM32(edi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B22D8u); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003B22D8: ;
    edx = MEM32(edi + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B22E3u); RECOMP_ABI_CALL(0x00561129u, sub_00561129); /* call 0x00561129 */

loc_003B22E3: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B22F8; /* je: equal / zero */

loc_003B22EA: ;
    ecx = MEM32(ebx);
    PUSH32(esp, 0);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B22F8u); RECOMP_ABI_CALL(0x00563B0Bu, sub_00563B0B); /* call 0x00563B0B */

loc_003B22F8: ;
    esi = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_003B2310; /* je: equal / zero */

loc_003B2302: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B230Eu); RECOMP_ABI_CALL(0x00560820u, sub_00560820); /* call 0x00560820 */

loc_003B230E: ;
    goto loc_003B231C;

loc_003B2310: ;
    ecx = MEM32(ebx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B231Cu); RECOMP_ABI_CALL(0x005606D4u, sub_005606D4); /* call 0x005606D4 */

loc_003B231C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B232E; /* je: equal / zero */

loc_003B2320: ;
    ecx = MEM32(ebx);
    PUSH32(esp, 0);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B232Eu); RECOMP_ABI_CALL(0x00563B24u, sub_00563B24); /* call 0x00563B24 */

loc_003B232E: ;
    ecx = MEM32(edi + 0x20);
    edx = MEM32(edi + 0x1C);
    eax = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B233Eu); RECOMP_ABI_CALL(0x005611AAu, sub_005611AA); /* call 0x005611AA */

loc_003B233E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003B2420
 * Original: 0x003B2420 - 0x003B24A2 (130 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B2420: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    ecx = edi;
    PUSH32(esp, 0x003B242Fu); RECOMP_ABI_CALL(0x005606BAu, sub_005606BA); /* call 0x005606BA */

loc_003B242F: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003B2437u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003B2437: ;
    eax = MEM32(0x906EB4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = edi;
    MEM32(0x906EB4) = eax;
    if ((_fa != 0)) goto loc_003B2461; /* jne: not equal / not zero */

loc_003B244B: ;
    eax = MEM32(0x906EB0);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B2458u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003B2458: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906EB0) = edi;

loc_003B2461: ;
    eax = MEM32(0x906EBC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = edi;
    MEM32(0x906EBC) = eax;
    if ((_fa != 0)) goto loc_003B248B; /* jne: not equal / not zero */

loc_003B2471: ;
    ecx = MEM32(0x906EB8);
    PUSH32(esp, 0xA00);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003B2482u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003B2482: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x906EB8) = edi;

loc_003B248B: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    MEM32(esi + 8) = edi;
    PUSH32(esp, 0x003B2499u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_003B2499: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003B24D0
 * Original: 0x003B24D0 - 0x003B24DA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B24D0(void)
{

loc_003B24D0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x18) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B24E0
 * Original: 0x003B24E0 - 0x003B24E8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B24E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B24E0: ;
    eax = ZX16(MEM16(ecx + 0xA));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esp += 4; return; /* ret */

}

/**
 * sub_003B24F0
 * Original: 0x003B24F0 - 0x003B24F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B24F0(void)
{

loc_003B24F0: ;
    eax = MEM32(ecx + 0x8C);
    esp += 4; return; /* ret */

}

/**
 * sub_003B2500
 * Original: 0x003B2500 - 0x003B2507 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2500(void)
{

loc_003B2500: ;
    eax = ecx + 0x90;
    esp += 4; return; /* ret */

}

/**
 * sub_003B2510
 * Original: 0x003B2510 - 0x003B251F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2510(void)
{

loc_003B2510: ;
    eax = MEM32(ecx + 0xF8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B251Eu); RECOMP_ABI_CALL(0x00025B9Fu, sub_00025B9F); /* call 0x00025B9F */

loc_003B251E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003B2530
 * Original: 0x003B2530 - 0x003B2534 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2530(void)
{

loc_003B2530: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003B2540
 * Original: 0x003B2540 - 0x003B2554 (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B2540: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003B2551u); RECOMP_ABI_CALL(0x00032E53u, sub_00032E53); /* call 0x00032E53 */

loc_003B2551: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B2560
 * Original: 0x003B2560 - 0x003B2564 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2560(void)
{

loc_003B2560: ;
    SET_LO8(eax, MEM8(ecx + 1));
    esp += 4; return; /* ret */

}

/**
 * sub_003B2570
 * Original: 0x003B2570 - 0x003B2574 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2570(void)
{

loc_003B2570: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003B2580
 * Original: 0x003B2580 - 0x003B2587 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2580(void)
{

loc_003B2580: ;
    eax = ecx + 0x88;
    esp += 4; return; /* ret */

}

/**
 * sub_003B2590
 * Original: 0x003B2590 - 0x003B2597 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2590(void)
{

loc_003B2590: ;
    eax = ecx + 0xF8;
    esp += 4; return; /* ret */

}

/**
 * sub_003B25A0
 * Original: 0x003B25A0 - 0x003B25A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B25A0(void)
{

loc_003B25A0: ;
    eax = ecx + 0x168;
    esp += 4; return; /* ret */

}

/**
 * sub_003B25B0
 * Original: 0x003B25B0 - 0x003B26D7 (295 bytes, 95 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003B25B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B25B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x87DAA0);
    edx = MEM32(0x87DAA8);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(0x87DAAC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x87DAA4);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(0x87DBE8);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(0x87DBE0);
    MEM32(esp + 0x14) = eax;
    SET_LO8(eax, MEM8(esi + 0x81));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x24) = edx;
    edx = MEM32(0x87DBE4);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(0x87DBEC);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003B2650; /* je: equal / zero */

loc_003B261B: ;
    edx = MEM32(esi + 0xE0);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    ecx = esi + 0x88;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B262Eu); RECOMP_ABI_CALL(0x00032E53u, sub_00032E53); /* call 0x00032E53 */

loc_003B262E: ;
    ecx = MEM32(esi + 0x84);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003B2650u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B264Du); } /* indirect call */
    }

loc_003B2650: ;
    SET_LO8(eax, MEM8(esi + 0xF1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B268F; /* je: equal / zero */

loc_003B265A: ;
    eax = MEM32(esi + 0x150);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi + 0xF8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B266Du); RECOMP_ABI_CALL(0x00032E53u, sub_00032E53); /* call 0x00032E53 */

loc_003B266D: ;
    ecx = MEM32(esi + 0xF4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003B268Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B268Cu); } /* indirect call */
    }

loc_003B268F: ;
    SET_LO8(eax, MEM8(esi + 0x161));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B26CE; /* je: equal / zero */

loc_003B2699: ;
    ecx = MEM32(esi + 0x1C0);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = esi + 0x168;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B26ACu); RECOMP_ABI_CALL(0x00032E53u, sub_00032E53); /* call 0x00032E53 */

loc_003B26AC: ;
    ecx = MEM32(esi + 0x164);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003B26CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B26CBu); } /* indirect call */
    }

loc_003B26CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B2720
 * Original: 0x003B2720 - 0x003B2915 (501 bytes, 139 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003B2720(void)
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

loc_003B2720: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx + 0x14);
    eax = MEM32(esi + 0xF8);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B2741u); RECOMP_ABI_CALL(0x00025B9Fu, sub_00025B9F); /* call 0x00025B9F */

loc_003B2741: ;
    edi = MEM32(esi + 0xC4);
    esi = MEM32(ebx + 0x84);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x18) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_003B27F5; /* je: equal / zero */

loc_003B275D: ;
    ecx = MEM32(esi + 0xF8);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B276Du); RECOMP_ABI_CALL(0x00025B9Fu, sub_00025B9F); /* call 0x00025B9F */

loc_003B276D: ;
    eax = MEM32(esi + 0xC4);
    esi = (uint32_t)(int32_t)SMEM16(ebx + 0x1D0);
    edx = MEM32(esp + 0x14);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
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
    esi = (uint32_t)(int32_t)SMEM16(ebx + 0x1D2);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax + 0x40;
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
    esi = (uint32_t)(int32_t)SMEM16(ebx + 0x1D4);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax + 0x80;
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
    edi = MEM32(esp + 0x18);
    esi = MEM32(edi + 0xC0);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B27D4u); RECOMP_ABI_CALL(0x00013021u, sub_00013021); /* call 0x00013021 */

loc_003B27D4: ;
    PUSH32(esp, 0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B27DDu); RECOMP_ABI_CALL(0x0002CA53u, sub_0002CA53); /* call 0x0002CA53 */

loc_003B27DD: ;
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B27E6u); RECOMP_ABI_CALL(0x00013021u, sub_00013021); /* call 0x00013021 */

loc_003B27E6: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B27F5; /* jne: not equal / not zero */

loc_003B27EC: ;
    PUSH32(esp, 1);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B27F5u); RECOMP_ABI_CALL(0x0002CA53u, sub_0002CA53); /* call 0x0002CA53 */

loc_003B27F5: ;
    edi = MEM32(ebx + 0xF4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_003B283D; /* je: equal / zero */

loc_003B2803: ;
    edx = MEM32(edi + 0xF8);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B2813u); RECOMP_ABI_CALL(0x00025B9Fu, sub_00025B9F); /* call 0x00025B9F */

loc_003B2813: ;
    esi = (uint32_t)(int32_t)SMEM16(ebx + 0x1D6);
    edx = MEM32(esp + 0x14);
    edi = MEM32(edi + 0xC4);
    eax = MEM32(ebp + 8);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
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
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B283Du); RECOMP_ABI_CALL(0x0002CA53u, sub_0002CA53); /* call 0x0002CA53 */

loc_003B283D: ;
    esi = MEM32(ebx + 0x164);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x20) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_003B290C; /* je: equal / zero */

loc_003B284F: ;
    ecx = MEM32(esi + 0xF8);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B285Fu); RECOMP_ABI_CALL(0x00025B9Fu, sub_00025B9F); /* call 0x00025B9F */

loc_003B285F: ;
    fp_push(MEMD(0x8345B8)); /* fld double */
    fp_top() = sin(fp_top()); /* fsin */
    edi = MEM32(esi + 0xC4);
    esi = (uint32_t)(int32_t)SMEM16(ebx + 0x1D8);
    ebx = MEM32(esp + 0x14);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    MEM32(esp + 0x1C) = edi;
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
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    fp_push(MEMD(0x8345B8)); /* fld double */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AA840); /* mulss */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B28ECu); RECOMP_ABI_CALL(0x005A0F9Au, sub_005A0F9A); /* call 0x005A0F9A */

loc_003B28EC: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B28FCu); RECOMP_ABI_CALL(0x0002F965u, sub_0002F965); /* call 0x0002F965 */

loc_003B28FC: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x38);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B290Cu); RECOMP_ABI_CALL(0x0002CA53u, sub_0002CA53); /* call 0x0002CA53 */

loc_003B290C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_003B29A0
 * Original: 0x003B29A0 - 0x003B29A8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B29A0(void)
{

loc_003B29A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x003B29A7u); RECOMP_ABI_CALL(0x0001C1B2u, sub_0001C1B2); /* call 0x0001C1B2 */

loc_003B29A7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003B29B0
 * Original: 0x003B29B0 - 0x003B29B8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B29B0(void)
{

loc_003B29B0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x003B29B7u); RECOMP_ABI_CALL(0x0001C1B2u, sub_0001C1B2); /* call 0x0001C1B2 */

loc_003B29B7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003B29C0
 * Original: 0x003B29C0 - 0x003B2A28 (104 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B29C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B29C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x003B29C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B29C5u); } /* indirect call */
    }

loc_003B29C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B29DA; /* je: equal / zero */

loc_003B29CC: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x003B29D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B29D0u); } /* indirect call */
    }

loc_003B29D3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003B29DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B29D7u); } /* indirect call */
    }

loc_003B29DA: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003B29E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B29DEu); } /* indirect call */
    }

loc_003B29E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B29F3; /* je: equal / zero */

loc_003B29E5: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003B29ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B29E9u); } /* indirect call */
    }

loc_003B29EC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003B29F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B29F0u); } /* indirect call */
    }

loc_003B29F3: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x003B29FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B29F7u); } /* indirect call */
    }

loc_003B29FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B2A0C; /* je: equal / zero */

loc_003B29FE: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x003B2A05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B2A02u); } /* indirect call */
    }

loc_003B2A05: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003B2A0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B2A09u); } /* indirect call */
    }

loc_003B2A0C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x003B2A13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B2A10u); } /* indirect call */
    }

loc_003B2A13: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B2A26; /* je: equal / zero */

loc_003B2A17: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003B2A1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B2A1Bu); } /* indirect call */
    }

loc_003B2A1E: ;
    edx = MEM32(eax);
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

loc_003B2A26: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003B2A50
 * Original: 0x003B2A50 - 0x003B2A7C (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B2A50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x003B2A58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B2A55u); } /* indirect call */
    }

loc_003B2A58: ;
    ecx = eax;
    PUSH32(esp, 0x003B2A5Fu); RECOMP_ABI_CALL(0x00020C71u, sub_00020C71); /* call 0x00020C71 */

loc_003B2A5F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x003B2A66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B2A63u); } /* indirect call */
    }

loc_003B2A66: ;
    ecx = eax;
    PUSH32(esp, 0x003B2A6Du); RECOMP_ABI_CALL(0x00020C71u, sub_00020C71); /* call 0x00020C71 */

loc_003B2A6D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x003B2A74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B2A71u); } /* indirect call */
    }

loc_003B2A74: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00020C71(); return; /* tail jmp 0x00020C71 */

}

/**
 * sub_003B2A90
 * Original: 0x003B2A90 - 0x003B2AF5 (101 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2A90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B2A90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 8;
    MEM8(esi) = LO8(eax);
    MEM8(esi + 1) = LO8(eax);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x003B2AA5u); RECOMP_ABI_CALL(0x0001E700u, sub_0001E700); /* call 0x0001E700 */

loc_003B2AA5: ;
    ecx = MEM32(0x87DAF0);
    eax = esi + 0x40;
    MEM32(eax) = ecx;
    edx = MEM32(0x87DAF4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x87DAF8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x87DAFC);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x87DBD0);
    eax = esi + 0x50;
    MEM32(eax) = ecx;
    edx = MEM32(0x87DBD4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x87DBD8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x87DBDC);
    MEM32(eax + 0xC) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003B2B10
 * Original: 0x003B2B10 - 0x003B2B1D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2B10(void)
{

loc_003B2B10: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 0x20) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B2B20
 * Original: 0x003B2B20 - 0x003B2B48 (40 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2B20(void)
{

loc_003B2B20: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    PUSH32(esp, 0x003B2B2Bu); RECOMP_ABI_CALL(0x0001E700u, sub_0001E700); /* call 0x0001E700 */

loc_003B2B2B: ;
    eax = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(eax));
    MEM8(esi) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 1));
    MEM8(esi + 1) = LO8(edx);
    eax = MEM32(eax + 4);
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x20) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B2B60
 * Original: 0x003B2B60 - 0x003B2B7C (28 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2B60(void)
{

loc_003B2B60: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    SET_LO8(edx, MEM8(ecx));
    MEM8(eax) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 1));
    MEM8(eax + 1) = LO8(edx);
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x20) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B2B90
 * Original: 0x003B2B90 - 0x003B2BCC (60 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2B90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B2B90: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(eax + 0xF8);
    ecx = MEM32(eax + ecx * 4 + 0xEC);
    SET_LO16(edx, MEM16(ecx + 0xA));
    eax = MEM32(eax + 0xC0);
    { uint32_t _sv=(uint32_t)(LO16(edx)), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        SET_LO16(edx, _sv << _sc);
        _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
      } }
    edx = ZX16(LO16(edx));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x8C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003B2BC8u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_003B2BC8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003B2BE0
 * Original: 0x003B2BE0 - 0x003B2BED (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2BE0(void)
{

loc_003B2BE0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x30) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B2BF0
 * Original: 0x003B2BF0 - 0x003B2C03 (19 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2BF0(void)
{

loc_003B2BF0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x84) = eax;
    MEM32(ecx + 0xA0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B2C10
 * Original: 0x003B2C10 - 0x003B2C23 (19 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2C10(void)
{

loc_003B2C10: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xF4) = eax;
    MEM32(ecx + 0x110) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B2C30
 * Original: 0x003B2C30 - 0x003B2C43 (19 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2C30(void)
{

loc_003B2C30: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x164) = eax;
    MEM32(ecx + 0x180) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B2C50
 * Original: 0x003B2C50 - 0x003B2D1D (205 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B2C50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B2C95; /* je: equal / zero */

loc_003B2C5D: ;
    ecx = MEM32(eax + 0xF8);
    ecx = MEM32(eax + ecx * 4 + 0xEC);
    SET_LO16(edx, MEM16(ecx + 0xA));
    eax = MEM32(eax + 0xC0);
    { uint32_t _sv=(uint32_t)(LO16(edx)), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        SET_LO16(edx, _sv << _sc);
        _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
      } }
    edx = ZX16(LO16(edx));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x8C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003B2C92u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_003B2C92: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B2C95: ;
    eax = MEM32(esi + 0xF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B2CD7; /* je: equal / zero */

loc_003B2C9F: ;
    ecx = MEM32(eax + 0xF8);
    ecx = MEM32(eax + ecx * 4 + 0xEC);
    SET_LO16(edx, MEM16(ecx + 0xA));
    eax = MEM32(eax + 0xC0);
    { uint32_t _sv=(uint32_t)(LO16(edx)), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        SET_LO16(edx, _sv << _sc);
        _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
      } }
    edx = ZX16(LO16(edx));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x8C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003B2CD4u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_003B2CD4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B2CD7: ;
    eax = MEM32(esi + 0x164);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B2D1B; /* je: equal / zero */

loc_003B2CE1: ;
    esi = eax;
    eax = MEM32(esi + 0xF8);
    eax = MEM32(esi + eax * 4 + 0xEC);
    SET_LO16(ecx, MEM16(eax + 0xA));
    { uint32_t _sv=(uint32_t)(LO16(ecx)), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        SET_LO16(ecx, _sv << _sc);
        _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
      } }
    edx = ZX16(LO16(ecx));
    ecx = MEM32(esi + 0xC0);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x8C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B2D18u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_003B2D18: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B2D1B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003B2D50
 * Original: 0x003B2D50 - 0x003B2D8E (62 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B2D50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 1));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(esi) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003B2D85; /* je: equal / zero */

loc_003B2D5F: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x003B2D67u); RECOMP_ABI_CALL(0x00020D02u, sub_00020D02); /* call 0x00020D02 */

loc_003B2D67: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B2D74; /* je: equal / zero */

loc_003B2D6E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003B2D74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B2D72u); } /* indirect call */
    }

loc_003B2D74: ;
    ecx = esi + 8;
    MEM8(esi + 1) = LO8(ebx);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 0x20) = ebx;
    PUSH32(esp, 0x003B2D85u); RECOMP_ABI_CALL(0x00020555u, sub_00020555); /* call 0x00020555 */

loc_003B2D85: ;
    MEM8(esi + 1) = LO8(ebx);
    MEM32(esi + 4) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003B2DA0
 * Original: 0x003B2DA0 - 0x003B2DE5 (69 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B2DA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 1));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(esi) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003B2DD5; /* je: equal / zero */

loc_003B2DAF: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x003B2DB7u); RECOMP_ABI_CALL(0x00020D02u, sub_00020D02); /* call 0x00020D02 */

loc_003B2DB7: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B2DC4; /* je: equal / zero */

loc_003B2DBE: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003B2DC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B2DC2u); } /* indirect call */
    }

loc_003B2DC4: ;
    ecx = esi + 8;
    MEM8(esi + 1) = LO8(ebx);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 0x20) = ebx;
    PUSH32(esp, 0x003B2DD5u); RECOMP_ABI_CALL(0x00020555u, sub_00020555); /* call 0x00020555 */

loc_003B2DD5: ;
    MEM8(esi + 1) = LO8(ebx);
    MEM32(esi + 4) = ebx;
    ecx = esi + 8;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00016389(); return; /* tail jmp 0x00016389 */

}

/**
 * sub_003B2E00
 * Original: 0x003B2E00 - 0x003B2EB0 (176 bytes, 65 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B2E00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 1));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    PUSH32(esp, edi);
    MEM8(esi) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003B2E36; /* je: equal / zero */

loc_003B2E10: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x003B2E18u); RECOMP_ABI_CALL(0x00020D02u, sub_00020D02); /* call 0x00020D02 */

loc_003B2E18: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B2E25; /* je: equal / zero */

loc_003B2E1F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003B2E25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B2E23u); } /* indirect call */
    }

loc_003B2E25: ;
    ecx = esi + 8;
    MEM8(esi + 1) = LO8(ebx);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 0x20) = ebx;
    PUSH32(esp, 0x003B2E36u); RECOMP_ABI_CALL(0x00020555u, sub_00020555); /* call 0x00020555 */

loc_003B2E36: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM8(esi + 1) = LO8(ebx);
    MEM32(esi + 4) = ebx;
    MEM8(esi) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_003B2EAA; /* je: equal / zero */

loc_003B2E47: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x110);
    MEM8(esi + 1) = 1;
    PUSH32(esp, 0x003B2E56u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003B2E56: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B2E66; /* je: equal / zero */

loc_003B2E5D: ;
    ecx = eax;
    PUSH32(esp, 0x003B2E64u); RECOMP_ABI_CALL(0x00029D71u, sub_00029D71); /* call 0x00029D71 */

loc_003B2E64: ;
    goto loc_003B2E68;

loc_003B2E66: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003B2E68: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = eax;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x003B2E78u); RECOMP_ABI_CALL(0x00018FB2u, sub_00018FB2); /* call 0x00018FB2 */

loc_003B2E78: ;
    eax = MEM32(esi + 4);
    edx = esi + 0x40;
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esi + 4);
    ecx = esi + 0x50;
    MEM32(edx + 0x14) = ecx;
    ecx = esi + 8;
    PUSH32(esp, 0x003B2E92u); RECOMP_ABI_CALL(0x0001E093u, sub_0001E093); /* call 0x0001E093 */

loc_003B2E92: ;
    eax = MEM32(esi + 4);
    MEM32(esi + 0x20) = eax;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B2EA3; /* je: equal / zero */

loc_003B2EA0: ;
    MEM32(esi + 0x34) = eax;

loc_003B2EA3: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x60) = ecx;

loc_003B2EAA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003B2EE0
 * Original: 0x003B2EE0 - 0x003B3035 (341 bytes, 93 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B2EE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B2EE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebp = edi + 0x10;
    MEM32(edi) = 0x8345C8;
    esi = ebp;
    MEM32(esp + 0x10) = 4;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_003B2F00: ;
    ecx = esi + 8;
    MEM8(esi) = LO8(ebx);
    MEM8(esi + 1) = LO8(ebx);
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0x003B2F10u); RECOMP_ABI_CALL(0x0001E700u, sub_0001E700); /* call 0x0001E700 */

loc_003B2F10: ;
    ecx = MEM32(0x87DAF0);
    eax = esi + 0x40;
    MEM32(eax) = ecx;
    edx = MEM32(0x87DAF4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x87DAF8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x87DAFC);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x87DBD0);
    eax = esi + 0x50;
    MEM32(eax) = ecx;
    edx = MEM32(0x87DBD4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x87DBD8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x87DBDC);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x70;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_003B2F00; /* jne: not equal / not zero */

loc_003B2F6A: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(edi + 0x1D0) = LO16(eax);
    MEM16(edi + 0x1D2) = LO16(eax);
    MEM16(edi + 0x1D4) = LO16(eax);
    MEM16(edi + 0x1D6) = LO16(eax);
    MEM16(edi + 0x1D8) = LO16(eax);
    _fa = (uint32_t)(MEM8(ebp + 1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 1), LO8(ebx) (8-bit) */
    MEM8(ebp) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003B2FBE; /* je: equal / zero */

loc_003B2F98: ;
    ecx = MEM32(ebp + 4);
    PUSH32(esp, 0x003B2FA0u); RECOMP_ABI_CALL(0x00020D02u, sub_00020D02); /* call 0x00020D02 */

loc_003B2FA0: ;
    ecx = MEM32(ebp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B2FAD; /* je: equal / zero */

loc_003B2FA7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003B2FADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B2FABu); } /* indirect call */
    }

loc_003B2FAD: ;
    ecx = ebp + 8;
    MEM8(ebp + 1) = LO8(ebx);
    MEM32(ebp + 4) = ebx;
    MEM32(ebp + 0x20) = ebx;
    PUSH32(esp, 0x003B2FBEu); RECOMP_ABI_CALL(0x00020555u, sub_00020555); /* call 0x00020555 */

loc_003B2FBE: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, 0x831890);
    ecx = esi;
    MEM8(ebp + 1) = LO8(ebx);
    MEM32(ebp + 4) = ebx;
    MEM8(ebp) = 1;
    PUSH32(esp, 0x003B2FD8u); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_003B2FD8: ;
    PUSH32(esp, 0x7DE464);
    ecx = esi;
    MEM16(edi + 0x1D0) = LO16(eax);
    PUSH32(esp, 0x003B2FEBu); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_003B2FEB: ;
    PUSH32(esp, 0x7DE46C);
    ecx = esi;
    MEM16(edi + 0x1D2) = LO16(eax);
    PUSH32(esp, 0x003B2FFEu); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_003B2FFE: ;
    PUSH32(esp, 0x7DE45C);
    ecx = esi;
    MEM16(edi + 0x1D4) = LO16(eax);
    PUSH32(esp, 0x003B3011u); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_003B3011: ;
    PUSH32(esp, 0x7DE454);
    ecx = esi;
    MEM16(edi + 0x1D6) = LO16(eax);
    PUSH32(esp, 0x003B3024u); RECOMP_ABI_CALL(0x00013D0Au, sub_00013D0A); /* call 0x00013D0A */

loc_003B3024: ;
    MEM16(edi + 0x1D8) = LO16(eax);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B3090
 * Original: 0x003B3090 - 0x003B3138 (168 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B3090: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    MEM32(ebp) = 0x8345C8;
    esi = ebp + 0x11;
    edi = 4;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003B30A7: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), LO8(ebx) (8-bit) */
    MEM8(esi + -1) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003B30D3; /* je: equal / zero */

loc_003B30AE: ;
    ecx = MEM32(esi + 3);
    PUSH32(esp, 0x003B30B6u); RECOMP_ABI_CALL(0x00020D02u, sub_00020D02); /* call 0x00020D02 */

loc_003B30B6: ;
    ecx = MEM32(esi + 3);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B30C3; /* je: equal / zero */

loc_003B30BD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003B30C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B30C1u); } /* indirect call */
    }

loc_003B30C3: ;
    ecx = esi + 7;
    MEM8(esi) = LO8(ebx);
    MEM32(esi + 3) = ebx;
    MEM32(ecx + 0x18) = ebx;
    PUSH32(esp, 0x003B30D3u); RECOMP_ABI_CALL(0x00020555u, sub_00020555); /* call 0x00020555 */

loc_003B30D3: ;
    MEM8(esi) = LO8(ebx);
    MEM32(esi + 3) = ebx;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x70;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003B30A7; /* jne: not equal / not zero */

loc_003B30DE: ;
    esi = ebp + 0x1D0;
    edi = 4;
    /* nop */

loc_003B30F0: ;
    SET_LO8(eax, MEM8(esi + -111));
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x70;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(esi) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003B3122; /* je: equal / zero */

loc_003B30FC: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x003B3104u); RECOMP_ABI_CALL(0x00020D02u, sub_00020D02); /* call 0x00020D02 */

loc_003B3104: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B3111; /* je: equal / zero */

loc_003B310B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003B3111u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B310Fu); } /* indirect call */
    }

loc_003B3111: ;
    ecx = esi + 8;
    MEM8(esi + 1) = LO8(ebx);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 0x20) = ebx;
    PUSH32(esp, 0x003B3122u); RECOMP_ABI_CALL(0x00020555u, sub_00020555); /* call 0x00020555 */

loc_003B3122: ;
    ecx = esi + 8;
    MEM8(esi + 1) = LO8(ebx);
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0x003B3130u); RECOMP_ABI_CALL(0x00016389u, sub_00016389); /* call 0x00016389 */

loc_003B3130: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003B30F0; /* jne: not equal / not zero */

loc_003B3133: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003B3170
 * Original: 0x003B3170 - 0x003B31E3 (115 bytes, 40 insns)
 * CC: cdecl, 15 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3170(void)
{

loc_003B3170: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    esi = ecx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi + 0x80;
    PUSH32(esp, 0x003B3197u); RECOMP_ABI_CALL(0x0001A73Bu, sub_0001A73B); /* call 0x0001A73B */

loc_003B3197: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi + 0xF0;
    PUSH32(esp, 0x003B31BBu); RECOMP_ABI_CALL(0x0001A73Bu, sub_0001A73B); /* call 0x0001A73B */

loc_003B31BB: ;
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi + 0x160;
    PUSH32(esp, 0x003B31DFu); RECOMP_ABI_CALL(0x0001A73Bu, sub_0001A73B); /* call 0x0001A73B */

loc_003B31DF: ;
    POP32(esp, esi);
    esp += 64; return; /* ret 60 */

}

/**
 * sub_003B3200
 * Original: 0x003B3200 - 0x003B321E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B3200: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003B3208u); RECOMP_ABI_CALL(0x0002C530u, sub_0002C530); /* call 0x0002C530 */

loc_003B3208: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B3218; /* je: equal / zero */

loc_003B320F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003B3215u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003B3215: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B3218: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B3230
 * Original: 0x003B3230 - 0x003B3234 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3230(void)
{

loc_003B3230: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_003B3240
 * Original: 0x003B3240 - 0x003B3244 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3240(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003B3240: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003B3250
 * Original: 0x003B3250 - 0x003B3268 (24 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3250(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B3250: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x90;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 0x14) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B3270
 * Original: 0x003B3270 - 0x003B3274 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3270(void)
{

loc_003B3270: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003B3280
 * Original: 0x003B3280 - 0x003B3284 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3280(void)
{

loc_003B3280: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003B3290
 * Original: 0x003B3290 - 0x003B3294 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3290(void)
{

loc_003B3290: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_003B32A0
 * Original: 0x003B32A0 - 0x003B32AB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B32A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B32A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003B32B0
 * Original: 0x003B32B0 - 0x003B32B3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B32B0(void)
{

loc_003B32B0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003B32C0
 * Original: 0x003B32C0 - 0x003B32C9 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B32C0(void)
{

loc_003B32C0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B32D0
 * Original: 0x003B32D0 - 0x003B32DA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B32D0(void)
{

loc_003B32D0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B32E0
 * Original: 0x003B32E0 - 0x003B3318 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B32E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B32E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B3300; /* je: equal / zero */

loc_003B32EB: ;
    goto loc_003B32F0;

    /* nop */

loc_003B32F0: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003B32F9u); RECOMP_ABI_CALL(0x00018C56u, sub_00018C56); /* call 0x00018C56 */

loc_003B32F9: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B32F0; /* jne: not equal / not zero */

loc_003B3300: ;
    MEM32(edi + 8) = 0;
    MEM32(edi + 0xC) = 0;
    MEM32(edi + 0x10) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003B3330
 * Original: 0x003B3330 - 0x003B336B (59 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_003B3330: ;
    ecx = MEM32(ecx + 0x14);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003B3366; /* je: equal / zero */

loc_003B3339: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);

loc_003B3344: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003B3359; /* jne: not equal / not zero */

loc_003B3349: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = ecx;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_003B3360; /* jnp: not parity */

loc_003B3359: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003B3344; /* jne: not equal / not zero */

loc_003B3360: ;
    eax = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003B3366: ;
    eax = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B3380
 * Original: 0x003B3380 - 0x003B33E4 (100 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_003B3380: ;
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm3 = XMM_SCALAR(MEMF(0x834630)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_003B33DF; /* je: equal / zero */

loc_003B3392: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);

loc_003B33A0: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003B33D2; /* jne: not equal / not zero */

loc_003B33A5: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003B33B8; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_003B33B3: ;
    xmm0 = xmm1; /* movaps */
    goto loc_003B33BF;

loc_003B33B8: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_003B33BF: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003B33D2; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_003B33C4: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = ecx;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_003B33D9; /* jnp: not parity */

loc_003B33CF: ;
    xmm3 = xmm0; /* movaps */

loc_003B33D2: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003B33A0; /* jne: not equal / not zero */

loc_003B33D9: ;
    eax = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003B33DF: ;
    eax = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B3400
 * Original: 0x003B3400 - 0x003B3404 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3400(void)
{

loc_003B3400: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_003B3410
 * Original: 0x003B3410 - 0x003B3417 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3410(void)
{

loc_003B3410: ;
    eax = MEM32(ecx + 0xC);
    MEM32(ecx + 0x14) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003B3420
 * Original: 0x003B3420 - 0x003B3452 (50 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B3420: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B3443; /* je: equal / zero */

loc_003B342D: ;
    PUSH32(esp, esi);
    edi = edi;

loc_003B3430: ;
    ecx = MEM32(edi + 4);
    esi = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B343Cu); RECOMP_ABI_CALL(0x00018C56u, sub_00018C56); /* call 0x00018C56 */

loc_003B343C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_003B3430; /* jne: not equal / not zero */

loc_003B3442: ;
    POP32(esp, esi);

loc_003B3443: ;
    MEM32(edi + 8) = ebx;
    MEM32(edi + 0xC) = ebx;
    MEM32(edi + 0x10) = ebx;
    MEM32(edi + 0x14) = ebx;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003B3460
 * Original: 0x003B3460 - 0x003B346D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3460(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B3460: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003B3470
 * Original: 0x003B3470 - 0x003B3499 (41 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B3470: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    MEM32(ecx + 4) = eax;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B3491; /* je: equal / zero */

loc_003B348A: ;
    MEM32(edx) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_003B3491: ;
    MEM32(ecx + 8) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B34B0
 * Original: 0x003B34B0 - 0x003B34F2 (66 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B34B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B34B0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B34EF; /* je: equal / zero */

loc_003B34B8: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003B34C7; /* je: equal / zero */

loc_003B34BF: ;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    goto loc_003B34CD;

loc_003B34C7: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;

loc_003B34CD: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B34DA; /* je: equal / zero */

loc_003B34D4: ;
    esi = MEM32(eax);
    MEM32(edx) = esi;
    goto loc_003B34DF;

loc_003B34DA: ;
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;

loc_003B34DF: ;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);

loc_003B34EF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B3510
 * Original: 0x003B3510 - 0x003B3555 (69 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B3510: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B3530; /* jne: not equal / not zero */

loc_003B351E: ;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    eax = MEM32(ecx);
    MEM32(ecx) = 0;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_003B3530: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B3551; /* je: equal / zero */

loc_003B3534: ;
    edi = edx;
    PUSH32(esp, ebx);

loc_003B3537: ;
    ebx = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx) = ebx;
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B3537; /* jne: not equal / not zero */

loc_003B3544: ;
    edx = MEM32(edi);
    MEM32(ecx + 8) = edx;
    MEM32(edx + 4) = 0;
    POP32(esp, ebx);

loc_003B3551: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B3570
 * Original: 0x003B3570 - 0x003B3581 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3570(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B3570: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003B3590
 * Original: 0x003B3590 - 0x003B364E (190 bytes, 78 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_003B3590: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    edx = MEM32(edi + 0x14);
    ecx = edx;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003B35CD; /* je: equal / zero */

loc_003B359F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    /* nop */

loc_003B35B0: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003B35C5; /* jne: not equal / not zero */

loc_003B35B5: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = ecx;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_003B35CC; /* jnp: not parity */

loc_003B35C5: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003B35B0; /* jne: not equal / not zero */

loc_003B35CC: ;
    POP32(esp, ebx);

loc_003B35CD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003B3604; /* jne: not equal / not zero */

loc_003B35D1: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0x003B35D9u); RECOMP_ABI_CALL(0x00015CA4u, sub_00015CA4); /* call 0x00015CA4 */

loc_003B35D9: ;
    MEM32(eax) = esi;
    ecx = MEM32(edi + 0xC);
    MEM32(eax + 4) = ecx;
    MEM32(edi + 0xC) = eax;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003B35F5; /* je: equal / zero */

loc_003B35EB: ;
    MEM32(ecx) = eax;
    MEM32(edi + 8) = MEM32(edi + 8) + 1;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003B35F5: ;
    ecx = MEM32(edi + 8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 8) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003B3604: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003B360E; /* jne: not equal / not zero */

loc_003B3608: ;
    edx = MEM32(edx + 4);
    MEM32(edi + 0x14) = edx;

loc_003B360E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003B3647; /* je: equal / zero */

loc_003B3613: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(8)) >> 32) & 1);
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003B361Eu); RECOMP_ABI_CALL(0x00037845u, sub_00037845); /* call 0x00037845 */

loc_003B361E: ;
    MEM32(esi) = 0;
    eax = MEM32(edi + 4);
    MEM32(esi + 4) = eax;
    MEM32(edi + 4) = esi;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003B363F; /* je: equal / zero */

loc_003B3634: ;
    MEM32(eax) = esi;
    MEM32(edi) = MEM32(edi) + 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003B363F: ;
    eax = MEM32(edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 8) = esi;
    MEM32(edi) = eax;

loc_003B3647: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B3680
 * Original: 0x003B3680 - 0x003B36BC (60 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B3680: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B36BA; /* je: equal / zero */

loc_003B368A: ;
    PUSH32(esp, eax);
    ecx = edi + 8;
    PUSH32(esp, 0x003B3693u); RECOMP_ABI_CALL(0x0001829Cu, sub_0001829C); /* call 0x0001829C */

loc_003B3693: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B36B3; /* je: equal / zero */

loc_003B369A: ;
    PUSH32(esp, esi);
    goto loc_003B36A0;

    /* nop */

loc_003B36A0: ;
    ecx = MEM32(edi + 4);
    esi = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B36ACu); RECOMP_ABI_CALL(0x00018C56u, sub_00018C56); /* call 0x00018C56 */

loc_003B36AC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_003B36A0; /* jne: not equal / not zero */

loc_003B36B2: ;
    POP32(esp, esi);

loc_003B36B3: ;
    MEM32(edi + 0x14) = 0;

loc_003B36BA: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003B36D0
 * Original: 0x003B36D0 - 0x003B36DD (13 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B36D0(void)
{

loc_003B36D0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B36E0
 * Original: 0x003B36E0 - 0x003B36E5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B36E0(void)
{

loc_003B36E0: ;
    SET_LO16(eax, MEM16(ecx + 0xA));
    esp += 4; return; /* ret */

}

/**
 * sub_003B36F0
 * Original: 0x003B36F0 - 0x003B36F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B36F0(void)
{

loc_003B36F0: ;
    eax = 0x91984C;
    esp += 4; return; /* ret */

}

/**
 * sub_003B3700
 * Original: 0x003B3700 - 0x003B3716 (22 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3700(void)
{

loc_003B3700: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003B3710u); RECOMP_ABI_CALL(0x0057BF6Cu, sub_0057BF6C); /* call 0x0057BF6C */

loc_003B3710: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B3720
 * Original: 0x003B3720 - 0x003B3724 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3720(void)
{

loc_003B3720: ;
    eax = ecx + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_003B3730
 * Original: 0x003B3730 - 0x003B3747 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B3730: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B3746; /* je: equal / zero */

loc_003B3738: ;
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B3743u); RECOMP_ABI_CALL(0x005737B4u, sub_005737B4); /* call 0x005737B4 */

loc_003B3743: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B3746: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003B3750
 * Original: 0x003B3750 - 0x003B37B3 (99 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3750(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B3750: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x90;
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x7C) = ebx;
    MEM32(esi + 0x80) = ebx;
    MEM32(esi + 0x84) = ebx;
    MEM32(esi + 0x88) = ebx;
    MEM32(esi + 0x8C) = ebx;
    PUSH32(esp, 0x003B37A8u); RECOMP_ABI_CALL(0x000123E2u, sub_000123E2); /* call 0x000123E2 */

loc_003B37A8: ;
    MEM8(esi + 0xE8) = LO8(ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003B37D0
 * Original: 0x003B37D0 - 0x003B3882 (178 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B37D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B37D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B37EB; /* je: equal / zero */

loc_003B37DD: ;
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B37E8u); RECOMP_ABI_CALL(0x00573946u, sub_00573946); /* call 0x00573946 */

loc_003B37E8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B37EB: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B37FB; /* je: equal / zero */

loc_003B37F2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B37F8u); RECOMP_ABI_CALL(0x0057BFF1u, sub_0057BFF1); /* call 0x0057BFF1 */

loc_003B37F8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B37FB: ;
    eax = MEM32(esi + 0x7C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003B382D; /* jle: less or equal (signed <=) */

loc_003B3805: ;
    PUSH32(esp, edi);
    edi = esi + 0x3C;
    /* nop */

loc_003B3810: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B3821; /* je: equal / zero */

loc_003B3816: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B381Cu); RECOMP_ABI_CALL(0x0057BFF1u, sub_0057BFF1); /* call 0x0057BFF1 */

loc_003B381C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ebp;

loc_003B3821: ;
    eax = MEM32(esi + 0x7C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003B3810; /* jl: less (signed <) */

loc_003B382C: ;
    POP32(esp, edi);

loc_003B382D: ;
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esi + 0x7C) = ebp;
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003B384A; /* je: equal / zero */

loc_003B383B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B3841u); RECOMP_ABI_CALL(0x0057BFF1u, sub_0057BFF1); /* call 0x0057BFF1 */

loc_003B3841: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x8C) = ebp;

loc_003B384A: ;
    ecx = esi + 0x90;
    PUSH32(esp, 0x003B3855u); RECOMP_ABI_CALL(0x00033D1Cu, sub_00033D1C); /* call 0x00033D1C */

loc_003B3855: ;
    MEM32(esi) = ebp;
    MEM32(esi + 4) = ebp;
    MEM32(esi + 8) = ebp;
    MEM32(esi + 0xC) = ebp;
    MEM32(esi + 0x10) = ebp;
    MEM32(esi + 0x14) = ebp;
    MEM32(esi + 0x18) = ebp;
    MEM32(esi + 0x1C) = ebp;
    MEM32(esi + 0x20) = ebp;
    MEM32(esi + 0x24) = ebp;
    MEM32(esi + 0x28) = ebp;
    MEM32(esi + 0x2C) = ebp;
    MEM32(esi + 0x38) = ebp;
    MEM32(esi + 0x34) = ebp;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003B38B0
 * Original: 0x003B38B0 - 0x003B38B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B38B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B38B0: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_00573960(); return; /* tail jmp 0x00573960 */

}

/**
 * sub_003B38C0
 * Original: 0x003B38C0 - 0x003B38F8 (56 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B38C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B38C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x38);
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B38F1; /* je: equal / zero */

loc_003B38CE: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B38DDu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B38DD: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 0x003B38E5u); RECOMP_ABI_CALL(0x0057C023u, sub_0057C023); /* call 0x0057C023 */

loc_003B38E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B38F1; /* je: equal / zero */

loc_003B38E9: ;
    eax = MEM32(eax + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003B38F1: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B3910
 * Original: 0x003B3910 - 0x003B391F (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003B3910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B3910: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B391C; /* je: equal / zero */

loc_003B3917: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    esp += 4; return; /* ret */

loc_003B391C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003B3930
 * Original: 0x003B3930 - 0x003B3981 (81 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B3930: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x8346FC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003B3949u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003B3949: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B3964u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B3964: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B396Eu); RECOMP_ABI_CALL(0x00572F47u, sub_00572F47); /* call 0x00572F47 */

loc_003B396E: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 4);
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003B39A0
 * Original: 0x003B39A0 - 0x003B3A09 (105 bytes, 36 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B39A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B39A0: ;
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
    if (TEST_Z(_fa, _fb)) goto loc_003B39BE; /* je: equal / zero */

loc_003B39BA: ;
    MEM32(ecx) = eax;
    goto loc_003B39C8;

loc_003B39BE: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B39C8u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B39C8: ;
    PUSH32(esp, ecx);
    eax = esp + 0x1C;
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B39D5u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B39D5: ;
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003B39E1u); RECOMP_ABI_CALL(0x00577AE4u, sub_00577AE4); /* call 0x00577AE4 */

loc_003B39E1: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003B39EAu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B39EA: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B39F9; /* je: equal / zero */

loc_003B39F1: ;
    MEM32(esp + 0x14) = 0;

loc_003B39F9: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x003B3A02u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B3A02: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003B3A30
 * Original: 0x003B3A30 - 0x003B3A9F (111 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B3A30: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003B3A47u); RECOMP_ABI_CALL(0x0057BD70u, sub_0057BD70); /* call 0x0057BD70 */

loc_003B3A47: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003B3A92; /* jle: less or equal (signed <=) */

loc_003B3A4F: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B3A62u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B3A62: ;
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003B3A81; /* jne: not equal / not zero */

loc_003B3A6F: ;
    eax = MEM32(esp + 0x10);
    ecx = 0xFFFFFF9Eu;
    MEM32(eax) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_003B3A81: ;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003B3A8Eu); RECOMP_ABI_CALL(0x0057BF6Cu, sub_0057BF6C); /* call 0x0057BF6C */

loc_003B3A8E: ;
    ecx = MEM32(esp + 4);

loc_003B3A92: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B3AC0
 * Original: 0x003B3AC0 - 0x003B3B2F (111 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B3AC0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003B3AD7u); RECOMP_ABI_CALL(0x0057BD70u, sub_0057BD70); /* call 0x0057BD70 */

loc_003B3AD7: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003B3B22; /* jle: less or equal (signed <=) */

loc_003B3ADF: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B3AF2u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B3AF2: ;
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003B3B11; /* jne: not equal / not zero */

loc_003B3AFF: ;
    eax = MEM32(esp + 0x10);
    ecx = 0xFFFFFF9Eu;
    MEM32(eax) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_003B3B11: ;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003B3B1Eu); RECOMP_ABI_CALL(0x0057BF6Cu, sub_0057BF6C); /* call 0x0057BF6C */

loc_003B3B1E: ;
    ecx = MEM32(esp + 4);

loc_003B3B22: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B3B50
 * Original: 0x003B3B50 - 0x003B3BBF (111 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B3B50: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003B3B67u); RECOMP_ABI_CALL(0x0057BD70u, sub_0057BD70); /* call 0x0057BD70 */

loc_003B3B67: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003B3BB2; /* jle: less or equal (signed <=) */

loc_003B3B6F: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B3B82u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B3B82: ;
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003B3BA1; /* jne: not equal / not zero */

loc_003B3B8F: ;
    eax = MEM32(esp + 0x10);
    ecx = 0xFFFFFF9Eu;
    MEM32(eax) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_003B3BA1: ;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003B3BAEu); RECOMP_ABI_CALL(0x0057BF6Cu, sub_0057BF6C); /* call 0x0057BF6C */

loc_003B3BAE: ;
    ecx = MEM32(esp + 4);

loc_003B3BB2: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B3BE0
 * Original: 0x003B3BE0 - 0x003B3C43 (99 bytes, 32 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B3BE0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_003B3BF5; /* jne: not equal / not zero */

loc_003B3BED: ;
    MEM32(esi) = 0xFFFFFEDAu;
    goto loc_003B3C1C;

loc_003B3BF5: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x91984C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003B3C1Cu); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_003B3C1C: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x003B3C25u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B3C25: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B3C34; /* je: equal / zero */

loc_003B3C2C: ;
    MEM32(esp + 0x10) = 0;

loc_003B3C34: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003B3C3Du); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B3C3D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003B3C60
 * Original: 0x003B3C60 - 0x003B3CD2 (114 bytes, 40 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B3C60: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003B3C78; /* jne: not equal / not zero */

loc_003B3C6C: ;
    esi = MEM32(esp + 0xC);
    MEM32(esi) = 0xFFFFFEDAu;
    goto loc_003B3CAA;

loc_003B3C78: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003B3C82u); RECOMP_ABI_CALL(0x005743F3u, sub_005743F3); /* call 0x005743F3 */

loc_003B3C82: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003B3CAAu); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_003B3CAA: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003B3CB3u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B3CB3: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B3CC2; /* je: equal / zero */

loc_003B3CBA: ;
    MEM32(esp + 0x14) = 0;

loc_003B3CC2: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x003B3CCBu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B3CCB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003B3CF0
 * Original: 0x003B3CF0 - 0x003B3D04 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B3CF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003B3CF8u); RECOMP_ABI_CALL(0x000171D5u, sub_000171D5); /* call 0x000171D5 */

loc_003B3CF8: ;
    ecx = esi + 0x90;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00037EB2(); return; /* tail jmp 0x00037EB2 */

}

/**
 * sub_003B3D10
 * Original: 0x003B3D10 - 0x003B3D2B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B3D10: ;
    ecx = MEM32(ecx + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B3D24u); RECOMP_ABI_CALL(0x0001BE97u, sub_0001BE97); /* call 0x0001BE97 */

loc_003B3D24: ;
    eax = MEM32(esp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003B3D40
 * Original: 0x003B3D40 - 0x003B3D5B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3D40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B3D40: ;
    ecx = MEM32(ecx + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B3D54u); RECOMP_ABI_CALL(0x000280BBu, sub_000280BB); /* call 0x000280BB */

loc_003B3D54: ;
    eax = MEM32(esp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003B3D70
 * Original: 0x003B3D70 - 0x003B3D8B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B3D70: ;
    ecx = MEM32(ecx + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B3D84u); RECOMP_ABI_CALL(0x00016640u, sub_00016640); /* call 0x00016640 */

loc_003B3D84: ;
    eax = MEM32(esp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003B3DA0
 * Original: 0x003B3DA0 - 0x003B3DBB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3DA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B3DA0: ;
    ecx = MEM32(ecx + 0x24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B3DB4u); RECOMP_ABI_CALL(0x00016640u, sub_00016640); /* call 0x00016640 */

loc_003B3DB4: ;
    eax = MEM32(esp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003B3DD0
 * Original: 0x003B3DD0 - 0x003B3DEB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3DD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B3DD0: ;
    ecx = MEM32(ecx + 0x28);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B3DE4u); RECOMP_ABI_CALL(0x00016640u, sub_00016640); /* call 0x00016640 */

loc_003B3DE4: ;
    eax = MEM32(esp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003B3E00
 * Original: 0x003B3E00 - 0x003B3E1B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3E00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B3E00: ;
    ecx = MEM32(ecx + 0x2C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B3E14u); RECOMP_ABI_CALL(0x00016640u, sub_00016640); /* call 0x00016640 */

loc_003B3E14: ;
    eax = MEM32(esp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003B3E30
 * Original: 0x003B3E30 - 0x003B3E95 (101 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3E30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B3E30: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = 0;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B3E4F; /* je: equal / zero */

loc_003B3E4B: ;
    MEM32(ecx) = eax;
    goto loc_003B3E59;

loc_003B3E4F: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B3E59u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B3E59: ;
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B3E66u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B3E66: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x003B3E74u); RECOMP_ABI_CALL(0x0002B455u, sub_0002B455); /* call 0x0002B455 */

loc_003B3E74: ;
    ecx = esp + 8;
    PUSH32(esp, 0x003B3E7Du); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B3E7D: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B3E8C; /* je: equal / zero */

loc_003B3E84: ;
    MEM32(esp + 0xC) = 0;

loc_003B3E8C: ;
    ecx = esp + 0xC;
    g_seh_ebp = ebp; sub_005724CD(); return; /* tail jmp 0x005724CD */

}

/**
 * sub_003B3EB0
 * Original: 0x003B3EB0 - 0x003B3F15 (101 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B3EB0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = 0;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B3ECF; /* je: equal / zero */

loc_003B3ECB: ;
    MEM32(ecx) = eax;
    goto loc_003B3ED9;

loc_003B3ECF: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B3ED9u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B3ED9: ;
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B3EE6u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B3EE6: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x003B3EF4u); RECOMP_ABI_CALL(0x0001841Du, sub_0001841D); /* call 0x0001841D */

loc_003B3EF4: ;
    ecx = esp + 8;
    PUSH32(esp, 0x003B3EFDu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B3EFD: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B3F0C; /* je: equal / zero */

loc_003B3F04: ;
    MEM32(esp + 0xC) = 0;

loc_003B3F0C: ;
    ecx = esp + 0xC;
    g_seh_ebp = ebp; sub_005724CD(); return; /* tail jmp 0x005724CD */

}

/**
 * sub_003B3F30
 * Original: 0x003B3F30 - 0x003B3F57 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3F30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B3F30: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x003B3F48u); RECOMP_ABI_CALL(0x000280BBu, sub_000280BB); /* call 0x000280BB */

loc_003B3F48: ;
    edx = MEM32(esp + 4);
    MEM32(esi + 0x8C) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003B3F60
 * Original: 0x003B3F60 - 0x003B445E (1278 bytes, 421 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B3F60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B3F60: ;
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x003B3F71u); RECOMP_ABI_CALL(0x000171D5u, sub_000171D5); /* call 0x000171D5 */

loc_003B3F71: ;
    eax = esp + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B3F7Cu); RECOMP_ABI_CALL(0x005737D9u, sub_005737D9); /* call 0x005737D9 */

loc_003B3F7C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x7FC4F0);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B3F95u); RECOMP_ABI_CALL(0x00572A41u, sub_00572A41); /* call 0x00572A41 */

loc_003B3F95: ;
    edi = MEM32(esp + 0x138);
    PUSH32(esp, 0x83470C);
    PUSH32(esp, edi);
    eax = esp + 0x38;
    PUSH32(esp, 0x7E0928);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B3FB1u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003B3FB1: ;
    ecx = MEM32(esp + 0x38);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = esi + 4;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B3FCCu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B3FCC: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B3FD6u); RECOMP_ABI_CALL(0x00572F47u, sub_00572F47); /* call 0x00572F47 */

loc_003B3FD6: ;
    PUSH32(esp, 0x83463C);
    PUSH32(esp, edi);
    ecx = esp + 0x48;
    PUSH32(esp, 0x7E0928);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003B3FEBu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003B3FEB: ;
    ebx = MEM32(0x91984C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    ecx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B4005u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003B4005: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003B4010u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B4010: ;
    ebx = MEM32(esp + 0x140);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x003B4023u); RECOMP_ABI_CALL(0x00577AE4u, sub_00577AE4); /* call 0x00577AE4 */

loc_003B4023: ;
    PUSH32(esp, 0x834648);
    PUSH32(esp, edi);
    ecx = esp + 0x38;
    PUSH32(esp, 0x7E0928);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003B4038u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003B4038: ;
    edx = MEM32(0x919850);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x38;
    ecx = esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x003B4056u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003B4056: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 0x1C);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B4065u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B4065: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x003B4071u); RECOMP_ABI_CALL(0x00577AE4u, sub_00577AE4); /* call 0x00577AE4 */

loc_003B4071: ;
    PUSH32(esp, 0x834650);
    PUSH32(esp, edi);
    ecx = esp + 0x38;
    PUSH32(esp, 0x7E0928);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003B4086u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003B4086: ;
    edx = MEM32(0x919850);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x38;
    ecx = esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x003B40A4u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003B40A4: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B40B3u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B40B3: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x003B40BFu); RECOMP_ABI_CALL(0x00577AE4u, sub_00577AE4); /* call 0x00577AE4 */

loc_003B40BF: ;
    PUSH32(esp, 0x834660);
    PUSH32(esp, edi);
    ecx = esp + 0x38;
    PUSH32(esp, 0x7E0928);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003B40D4u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003B40D4: ;
    edx = MEM32(0x919850);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = edx;
    edx = esp + 0x38;
    ecx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B40F2u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003B40F2: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B4101u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B4101: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x003B410Du); RECOMP_ABI_CALL(0x00577AE4u, sub_00577AE4); /* call 0x00577AE4 */

loc_003B410D: ;
    PUSH32(esp, 0x834690);
    PUSH32(esp, edi);
    edx = esp + 0x38;
    PUSH32(esp, 0x7E0928);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B4122u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003B4122: ;
    eax = MEM32(0x919850);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    ecx = esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x003B413Fu); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003B413F: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B414Eu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B414E: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x003B415Au); RECOMP_ABI_CALL(0x00577AE4u, sub_00577AE4); /* call 0x00577AE4 */

loc_003B415A: ;
    PUSH32(esp, 0x83467C);
    PUSH32(esp, edi);
    edx = esp + 0x38;
    PUSH32(esp, 0x7E0928);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B416Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003B416F: ;
    eax = MEM32(0x919850);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    ecx = esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x003B418Cu); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003B418C: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B419Bu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B419B: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x003B41A7u); RECOMP_ABI_CALL(0x00577AE4u, sub_00577AE4); /* call 0x00577AE4 */

loc_003B41A7: ;
    PUSH32(esp, 0x8346B8);
    PUSH32(esp, edi);
    edx = esp + 0x38;
    PUSH32(esp, 0x7E0928);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B41BCu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003B41BC: ;
    eax = MEM32(0x919850);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    ecx = esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x003B41D9u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003B41D9: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B41E8u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B41E8: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x003B41F4u); RECOMP_ABI_CALL(0x00577AE4u, sub_00577AE4); /* call 0x00577AE4 */

loc_003B41F4: ;
    PUSH32(esp, 0x8346C8);
    PUSH32(esp, edi);
    edx = esp + 0x38;
    PUSH32(esp, 0x7E0928);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B4209u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003B4209: ;
    eax = MEM32(0x9198D4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    ecx = esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x003B4226u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003B4226: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B4235u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003B4235: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x003B4241u); RECOMP_ABI_CALL(0x00577AE4u, sub_00577AE4); /* call 0x00577AE4 */

loc_003B4241: ;
    ecx = MEM32(esi + 0x10);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B4253u); RECOMP_ABI_CALL(0x0001BE97u, sub_0001BE97); /* call 0x0001BE97 */

loc_003B4253: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(esi + 0x14) = ecx;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(eax) = 0;
    PUSH32(esp, 0x9198BC);
    MEM32(eax) = 0;
    PUSH32(esp, 0x003B427Fu); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B427F: ;
    ecx = MEM32(ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003B4288u); RECOMP_ABI_CALL(0x000234BCu, sub_000234BC); /* call 0x000234BC */

loc_003B4288: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esi + 0x18;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(eax) = 0;
    PUSH32(esp, 0x919864);
    MEM32(eax) = 0;
    PUSH32(esp, 0x003B42B2u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B42B2: ;
    ecx = MEM32(ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003B42BBu); RECOMP_ABI_CALL(0x00029565u, sub_00029565); /* call 0x00029565 */

loc_003B42BB: ;
    eax = MEM32(esp + 0x150);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x7C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_003B4343; /* jle: less or equal (signed <=) */

loc_003B42CE: ;
    edx = esi + 0x3C;
    MEM32(esp + 0x10) = edx;

loc_003B42D5: ;
    ecx = MEM32(esi + 0x1C);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, 0x003B42EBu); RECOMP_ABI_CALL(0x0057BD70u, sub_0057BD70); /* call 0x0057BD70 */

loc_003B42EB: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003B432A; /* jle: less or equal (signed <=) */

loc_003B42F3: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B4306u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B4306: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003B431B; /* jne: not equal / not zero */

loc_003B4311: ;
    MEM32(esp + 0x18) = 0xFFFFFF9Eu;
    goto loc_003B432E;

loc_003B431B: ;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x003B432Au); RECOMP_ABI_CALL(0x0057BF6Cu, sub_0057BF6C); /* call 0x0057BF6C */

loc_003B432A: ;
    eax = MEM32(esp + 0x24);

loc_003B432E: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    eax = MEM32(esi + 0x7C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_003B42D5; /* jl: less (signed <) */

loc_003B4343: ;
    edx = MEM32(esp + 0x140);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = esi + 0x90;
    PUSH32(esp, 0x003B4358u); RECOMP_ABI_CALL(0x0002C69Du, sub_0002C69D); /* call 0x0002C69D */

loc_003B4358: ;
    PUSH32(esp, 0x8346A8);
    PUSH32(esp, edi);
    eax = esp + 0x38;
    PUSH32(esp, 0x7E0928);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B436Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003B436D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x919854);
    ecx = esp + 0x14;
    PUSH32(esp, 0x003B437Eu); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B437E: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x003B438Cu); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003B438C: ;
    edx = esi + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = 0;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B43A5; /* je: equal / zero */

loc_003B43A1: ;
    MEM32(ecx) = eax;
    goto loc_003B43AF;

loc_003B43A5: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B43AFu); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B43AF: ;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    ecx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B43BCu); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B43BC: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x003B43C8u); RECOMP_ABI_CALL(0x00577AE4u, sub_00577AE4); /* call 0x00577AE4 */

loc_003B43C8: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003B43D1u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B43D1: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x18), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B43E0; /* je: equal / zero */

loc_003B43D8: ;
    MEM32(esp + 0x18) = 0;

loc_003B43E0: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x003B43E9u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B43E9: ;
    ebx = MEM32(esi + 0x1C);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x003B43FDu); RECOMP_ABI_CALL(0x0057BD70u, sub_0057BD70); /* call 0x0057BD70 */

loc_003B43FD: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003B4430; /* jle: less or equal (signed <=) */

loc_003B4405: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B4418u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_003B4418: ;
    edi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B4434; /* je: equal / zero */

loc_003B4421: ;
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x003B442Eu); RECOMP_ABI_CALL(0x0057BF6Cu, sub_0057BF6C); /* call 0x0057BF6C */

loc_003B442E: ;
    goto loc_003B4434;

loc_003B4430: ;
    edi = MEM32(esp + 0x20);

loc_003B4434: ;
    MEM32(esi + 0x8C) = edi;
    edx = MEM32(edi + 0xC);
    eax = MEM32(edx + 0xC);
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(ecx, LO8(ecx) & 7);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 7 (8-bit) */
    POP32(esp, edi);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esi + 0xE8) = LO8(edx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003B45A0
 * Original: 0x003B45A0 - 0x003B4615 (117 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003B45A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003B45A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx); /* subss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003B45BD; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_003B45B8: ;
    xmm1 = xmm2; /* movaps */
    goto loc_003B45C4;

loc_003B45BD: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_003B45C4: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003B4612; /* jb: below (unsigned <) (xmm3.f[0] vs xmm1.f[0]) */

loc_003B45CF: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 4); /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003B45E3; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_003B45DE: ;
    xmm1 = xmm2; /* movaps */
    goto loc_003B45EA;

loc_003B45E3: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_003B45EA: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003B4612; /* jb: below (unsigned <) (xmm3.f[0] vs xmm1.f[0]) */

loc_003B45EF: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 8); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003B4603; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_003B45FE: ;
    xmm0 = xmm1; /* movaps */
    goto loc_003B4607;

loc_003B4603: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_003B4607: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003B4612; /* jb: below (unsigned <) (xmm3.f[0] vs xmm0.f[0]) */

loc_003B460C: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_003B4612: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003B4640
 * Original: 0x003B4640 - 0x003B46A5 (101 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003B4640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B4640: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    edx = MEM32(esp);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 8); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0xC); /* subss */
    eax = MEM32(ebp + 8);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 4);
    MEM32(ecx + 4) = edx;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = edx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = edx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003B46C0
 * Original: 0x003B46C0 - 0x003B4753 (147 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B46C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003B46C0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 8) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003B4780
 * Original: 0x003B4780 - 0x003B4815 (149 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003B4780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003B4780: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx); /* subss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003B479D; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_003B4798: ;
    xmm1 = xmm2; /* movaps */
    goto loc_003B47A4;

loc_003B479D: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_003B47A4: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003B4812; /* jb: below (unsigned <) (xmm3.f[0] vs xmm1.f[0]) */

loc_003B47AF: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 4); /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003B47C3; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_003B47BE: ;
    xmm1 = xmm2; /* movaps */
    goto loc_003B47CA;

loc_003B47C3: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_003B47CA: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003B4812; /* jb: below (unsigned <) (xmm3.f[0] vs xmm1.f[0]) */

loc_003B47CF: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 8); /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003B47E3; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_003B47DE: ;
    xmm1 = xmm2; /* movaps */
    goto loc_003B47EA;

loc_003B47E3: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_003B47EA: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003B4812; /* jb: below (unsigned <) (xmm3.f[0] vs xmm1.f[0]) */

loc_003B47EF: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0xC); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003B4803; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_003B47FE: ;
    xmm0 = xmm1; /* movaps */
    goto loc_003B4807;

loc_003B4803: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_003B4807: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003B4812; /* jb: below (unsigned <) (xmm3.f[0] vs xmm0.f[0]) */

loc_003B480C: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_003B4812: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003B4840
 * Original: 0x003B4840 - 0x003B485C (28 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B4840: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B4858; /* jne: not equal / not zero */

loc_003B484A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x003B484Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B484Cu); } /* indirect call */
    }

loc_003B484F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B4858; /* jne: not equal / not zero */

loc_003B4854: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003B4858: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003B4870
 * Original: 0x003B4870 - 0x003B488C (28 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B4870: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B4888; /* jne: not equal / not zero */

loc_003B487A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x003B487Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B487Cu); } /* indirect call */
    }

loc_003B487F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B4888; /* jne: not equal / not zero */

loc_003B4884: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003B4888: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003B48A0
 * Original: 0x003B48A0 - 0x003B48D4 (52 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B48A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B48A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B48B6; /* jne: not equal / not zero */

loc_003B48AA: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B48B3u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003B48B3: ;
    MEM32(esi + 8) = eax;

loc_003B48B6: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B48D0; /* jne: not equal / not zero */

loc_003B48C0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003B48C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B48C4u); } /* indirect call */
    }

loc_003B48C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B48D0; /* jne: not equal / not zero */

loc_003B48CC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003B48D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003B48F0
 * Original: 0x003B48F0 - 0x003B4924 (52 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B48F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B48F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B4906; /* jne: not equal / not zero */

loc_003B48FA: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B4903u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003B4903: ;
    MEM32(esi + 8) = eax;

loc_003B4906: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B4920; /* jne: not equal / not zero */

loc_003B4910: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003B4917u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B4914u); } /* indirect call */
    }

loc_003B4917: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B4920; /* jne: not equal / not zero */

loc_003B491C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003B4920: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003B4940
 * Original: 0x003B4940 - 0x003B4944 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4940(void)
{

loc_003B4940: ;
    SET_LO8(eax, MEM8(ecx + 0x18));
    esp += 4; return; /* ret */

}

/**
 * sub_003B4950
 * Original: 0x003B4950 - 0x003B4954 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4950(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003B4950: ;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003B4960
 * Original: 0x003B4960 - 0x003B4964 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4960(void)
{

loc_003B4960: ;
    eax = ecx + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_003B4970
 * Original: 0x003B4970 - 0x003B4974 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4970(void)
{

loc_003B4970: ;
    eax = ecx + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_003B4980
 * Original: 0x003B4980 - 0x003B4981 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4980(void)
{

loc_003B4980: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003B4990
 * Original: 0x003B4990 - 0x003B4997 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4990(void)
{

loc_003B4990: ;
    MEM32(ecx) = 0x834718;
    esp += 4; return; /* ret */

}

/**
 * sub_003B49A0
 * Original: 0x003B49A0 - 0x003B49A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B49A0(void)
{

loc_003B49A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003B49B0
 * Original: 0x003B49B0 - 0x003B49B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B49B0(void)
{

loc_003B49B0: ;
    SET_LO8(eax, MEM8(ecx + 0xB8));
    esp += 4; return; /* ret */

}

/**
 * sub_003B49C0
 * Original: 0x003B49C0 - 0x003B49C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B49C0(void)
{

loc_003B49C0: ;
    eax = ecx + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_003B49D0
 * Original: 0x003B49D0 - 0x003B4A19 (73 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B49D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B49D0: ;
    MEM32(ecx + 0x94) = 0;
    edx = MEM32(0x87DA6C);
    eax = ecx + 0x98;
    MEM32(eax) = edx;
    edx = MEM32(0x87DA70);
    MEM32(eax + 4) = edx;
    edx = MEM32(0x87DA74);
    MEM32(eax + 8) = edx;
    eax = MEM32(0x87DA6C);
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xA4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    edx = MEM32(0x87DA70);
    MEM32(ecx + 4) = edx;
    eax = MEM32(0x87DA74);
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003B4A30
 * Original: 0x003B4A30 - 0x003B4A37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4A30(void)
{

loc_003B4A30: ;
    SET_LO8(eax, MEM8(ecx + 0xE8));
    esp += 4; return; /* ret */

}

/**
 * sub_003B4A40
 * Original: 0x003B4A40 - 0x003B4A47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4A40(void)
{

loc_003B4A40: ;
    eax = MEM32(ecx + 0xF8);
    esp += 4; return; /* ret */

}

/**
 * sub_003B4A50
 * Original: 0x003B4A50 - 0x003B4A8F (63 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B4A50: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x34);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B4A69; /* jne: not equal / not zero */

loc_003B4A5B: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003B4A66u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003B4A66: ;
    MEM32(esi + 8) = eax;

loc_003B4A69: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B4A87; /* jne: not equal / not zero */

loc_003B4A73: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003B4A7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B4A77u); } /* indirect call */
    }

loc_003B4A7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B4A87; /* jne: not equal / not zero */

loc_003B4A7F: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00017397(); return; /* tail jmp 0x00017397 */

loc_003B4A87: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00017397(); return; /* tail jmp 0x00017397 */

}

/**
 * sub_003B4AA0
 * Original: 0x003B4AA0 - 0x003B4ACE (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B4AA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0xEC;
    edi = 3;
    /* nop */

loc_003B4AB0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B4AC5; /* je: equal / zero */

loc_003B4AB6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B4ABCu); RECOMP_ABI_CALL(0x0057BFF1u, sub_0057BFF1); /* call 0x0057BFF1 */

loc_003B4ABC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_003B4AC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003B4AB0; /* jne: not equal / not zero */

loc_003B4ACB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003B4AE0
 * Original: 0x003B4AE0 - 0x003B4B5F (127 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B4AE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC0);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x90;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003B4AFAu); RECOMP_ABI_CALL(0x000157EAu, sub_000157EA); /* call 0x000157EA */

loc_003B4AFA: ;
    eax = edi;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003B4B49; /* je: equal / zero */

loc_003B4B01: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003B4B33; /* je: equal / zero */

loc_003B4B04: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003B4B1D; /* je: equal / zero */

loc_003B4B07: ;
    eax = MEM32(esi + 0xF8);
    POP32(esp, edi);
    MEM32(esi + eax * 4 + 0xE0) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003B4B1D: ;
    ecx = MEM32(esi + 0xF8);
    POP32(esp, edi);
    MEM32(esi + ecx * 4 + 0xE0) = 3;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003B4B33: ;
    edx = MEM32(esi + 0xF8);
    POP32(esp, edi);
    MEM32(esi + edx * 4 + 0xE0) = 3;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003B4B49: ;
    eax = MEM32(esi + 0xF8);
    POP32(esp, edi);
    MEM32(esi + eax * 4 + 0xE0) = 2;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B4B80
 * Original: 0x003B4B80 - 0x003B4BFA (122 bytes, 43 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B4B80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esi + 0xC0);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(esp + 0x28));
    ebx = MEM32(eax + edi * 4 + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi + 0xC8;
    PUSH32(esp, 0x003B4BAAu); RECOMP_ABI_CALL(0x00022C92u, sub_00022C92); /* call 0x00022C92 */

loc_003B4BAA: ;
    SET_LO8(ecx, MEM8(esi + 0xB8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B4BC3; /* je: equal / zero */

loc_003B4BB4: ;
    SET_LO8(ecx, MEM8(esp + 0x20));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esp + 0x20) = LO8(edx);
    goto loc_003B4BCB;

loc_003B4BC3: ;
    SET_LO8(ecx, MEM8(esp + 0x20));
    MEM8(esp + 0x20) = LO8(ecx);

loc_003B4BCB: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC0);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x90;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003B4BEFu); RECOMP_ABI_CALL(0x00014327u, sub_00014327); /* call 0x00014327 */

loc_003B4BEF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO16(eax, 1);
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003B4C20
 * Original: 0x003B4C20 - 0x003B4C63 (67 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B4C20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x831864);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x003B4C2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B4C2Au); } /* indirect call */
    }

loc_003B4C2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x100) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_003B4C41; /* jge: greater or equal (signed >=) */

loc_003B4C37: ;
    MEM32(esi + 0x100) = 0;

loc_003B4C41: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83474C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003B4C4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B4C4Au); } /* indirect call */
    }

loc_003B4C4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x104) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_003B4C61; /* jge: greater or equal (signed >=) */

loc_003B4C57: ;
    MEM32(esi + 0x104) = 0;

loc_003B4C61: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003B4C80
 * Original: 0x003B4C80 - 0x003B4C8B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B4C80: ;
    ecx = MEM32(ecx + 0xC0);
    g_seh_ebp = ebp; sub_00013D0A(); return; /* tail jmp 0x00013D0A */

}

/**
 * sub_003B4C90
 * Original: 0x003B4C90 - 0x003B4C95 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4C90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B4C90: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x24)); return; /* indirect tail jmp */

}

/**
 * sub_003B4CA0
 * Original: 0x003B4CA0 - 0x003B4CAB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4CA0(void)
{

loc_003B4CA0: ;
    MEM32(ecx + 0xFC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003B4CB0
 * Original: 0x003B4CB0 - 0x003B4CED (61 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B4CB0: ;
    _fa = (uint32_t)(MEM32(ecx + 0xFC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xFC), 2 (32-bit) */
    eax = MEM32(ecx + 0xF0);
    if (CMP_AE(_fa, _fb)) goto loc_003B4CC5; /* jae: above or equal (unsigned >=) */

loc_003B4CBF: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    goto loc_003B4CD2;

loc_003B4CC5: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0xEC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);

loc_003B4CD2: ;
    eax = MEM32(ecx + 0xF4);
    ecx = MEM32(ecx + 0xC0);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x90;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B4CEAu); RECOMP_ABI_CALL(0x00023025u, sub_00023025); /* call 0x00023025 */

loc_003B4CEA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B4D00
 * Original: 0x003B4D00 - 0x003B4D04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4D00(void)
{

loc_003B4D00: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_003B4D10
 * Original: 0x003B4D10 - 0x003B4D54 (68 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4D10(void)
{

loc_003B4D10: ;
    eax = ecx;
    MEM32(eax + 0x40) = 0;
    edx = MEM32(0x87DA6C);
    ecx = eax + 0x44;
    MEM32(ecx) = edx;
    edx = MEM32(0x87DA70);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x87DA74);
    MEM32(ecx + 8) = edx;
    edx = MEM32(0x87DA6C);
    ecx = eax + 0x50;
    MEM32(ecx) = edx;
    edx = MEM32(0x87DA70);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x87DA74);
    MEM32(ecx + 8) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_003B4D70
 * Original: 0x003B4D70 - 0x003B4D8F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B4D70: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834718;
    if (TEST_Z(_fa, _fb)) goto loc_003B4D89; /* je: equal / zero */

loc_003B4D80: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003B4D86u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003B4D86: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B4D89: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B4DA0
 * Original: 0x003B4DA0 - 0x003B4E67 (199 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4DA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B4DA0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEM32(eax) = 0x834718;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM8(eax + 0x50) = LO8(ecx);
    MEM32(eax + 0x94) = ecx;
    PUSH32(esp, esi);
    esi = MEM32(0x87DA6C);
    edx = eax + 0x98;
    MEM32(edx) = esi;
    esi = MEM32(0x87DA70);
    MEM32(edx + 4) = esi;
    esi = MEM32(0x87DA74);
    MEM32(edx + 8) = esi;
    esi = MEM32(0x87DA6C);
    edx = eax + 0xA4;
    MEM32(edx) = esi;
    esi = MEM32(0x87DA70);
    MEM32(edx + 4) = esi;
    esi = MEM32(0x87DA74);
    MEM32(edx + 8) = esi;
    MEM8(eax + 0xB8) = LO8(ecx);
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x4C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x94) = ecx;
    edx = MEM32(0x87DA6C);
    ecx = eax + 0x98;
    MEM32(ecx) = edx;
    edx = MEM32(0x87DA70);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x87DA74);
    MEM32(ecx + 8) = edx;
    edx = MEM32(0x87DA6C);
    ecx = eax + 0xA4;
    MEM32(ecx) = edx;
    edx = MEM32(0x87DA70);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x87DA74);
    MEM32(ecx + 8) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003B4EA0
 * Original: 0x003B4EA0 - 0x003B4ED7 (55 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4EA0(void)
{

loc_003B4EA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B4EB2u); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_003B4EB2: ;
    ecx = ZX16(LO16(eax));
    eax = MEM32(esp + 0xC);
    edx = esi + ecx * 4 + 0x10;
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    eax = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B4EF0
 * Original: 0x003B4EF0 - 0x003B4F76 (134 bytes, 49 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003B4EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B4EF0: ;
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
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    edx = SX16(LO16(eax));
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xC);
    SET_LO8(edx, MEM8(edi + edx * 8));
    SET_LO8(edx, LO8(edx) & 0x70);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x70) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x70 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B4F3E; /* jne: not equal / not zero */

loc_003B4F14: ;
    PUSH32(esp, 0x70);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B4F1Cu); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_003B4F1C: ;
    edx = MEM32(ebp + 0xC);
    eax = ZX16(LO16(eax));
    ecx = esi + eax * 4 + 0x10;
    eax = MEM32(ecx);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_003B4F3E: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x70);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B4F4Bu); RECOMP_ABI_CALL(0x0057BB56u, sub_0057BB56); /* call 0x0057BB56 */

loc_003B4F4B: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    POP32(esp, edi);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B4FA0
 * Original: 0x003B4FA0 - 0x003B4FD1 (49 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4FA0(void)
{

loc_003B4FA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x70);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B4FB2u); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_003B4FB2: ;
    ecx = ZX16(LO16(eax));
    eax = MEM32(esp + 0xC);
    edx = esi + ecx * 4 + 0x10;
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B4FE0
 * Original: 0x003B4FE0 - 0x003B5047 (103 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B4FE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B4FE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x003B4FE9u); RECOMP_ABI_CALL(0x0003272Du, sub_0003272D); /* call 0x0003272D */

loc_003B4FE9: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0xC8;
    MEM32(esi) = 0x83475C;
    MEM32(esi + 0xC0) = edi;
    PUSH32(esp, 0x003B5002u); RECOMP_ABI_CALL(0x00013742u, sub_00013742); /* call 0x00013742 */

loc_003B5002: ;
    MEM32(esi + 0xFC) = edi;
    MEM32(esi + 0x100) = edi;
    MEM32(esi + 0x104) = edi;
    MEM32(esi + 0xEC) = edi;
    MEM32(esi + 0xE0) = edi;
    MEM32(esi + 0xF0) = edi;
    MEM32(esi + 0xE4) = edi;
    MEM32(esi + 0xF4) = edi;
    MEM32(esi + 0xE8) = edi;
    POP32(esp, edi);
    MEM32(esi + 0xF8) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003B5060
 * Original: 0x003B5060 - 0x003B506B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B5060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B5060: ;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00020C08(); return; /* tail jmp 0x00020C08 */

}

/**
 * sub_003B5070
 * Original: 0x003B5070 - 0x003B5091 (33 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B5070(void)
{

loc_003B5070: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83475C;
    PUSH32(esp, 0x003B507Eu); RECOMP_ABI_CALL(0x00020D02u, sub_00020D02); /* call 0x00020D02 */

loc_003B507E: ;
    ecx = esi + 0xC8;
    PUSH32(esp, 0x003B5089u); RECOMP_ABI_CALL(0x00031BFCu, sub_00031BFC); /* call 0x00031BFC */

loc_003B5089: ;
    MEM32(esi) = 0x834718;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003B50A0
 * Original: 0x003B50A0 - 0x003B5145 (165 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B50A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B50A0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi + 0xC4) = eax;
    PUSH32(esp, 0x003B50B3u); RECOMP_ABI_CALL(0x00020D02u, sub_00020D02); /* call 0x00020D02 */

loc_003B50B3: ;
    edi = MEM32(esp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x831864);
    ecx = esi;
    MEM32(esi + 0xC0) = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003B50C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B50C6u); } /* indirect call */
    }

loc_003B50C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x100) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_003B50DD; /* jge: greater or equal (signed >=) */

loc_003B50D3: ;
    MEM32(esi + 0x100) = 0;

loc_003B50DD: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83474C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x003B50E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B50E6u); } /* indirect call */
    }

loc_003B50E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x104) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_003B50FD; /* jge: greater or equal (signed >=) */

loc_003B50F3: ;
    MEM32(esi + 0x104) = 0;

loc_003B50FD: ;
    ecx = edi;
    PUSH32(esp, 0x003B5104u); RECOMP_ABI_CALL(0x000126A3u, sub_000126A3); /* call 0x000126A3 */

loc_003B5104: ;
    ecx = edi;
    MEM32(esi + 0xEC) = eax;
    PUSH32(esp, 0x003B5111u); RECOMP_ABI_CALL(0x000126A3u, sub_000126A3); /* call 0x000126A3 */

loc_003B5111: ;
    ecx = edi;
    MEM32(esi + 0xF0) = eax;
    PUSH32(esp, 0x003B511Eu); RECOMP_ABI_CALL(0x000126A3u, sub_000126A3); /* call 0x000126A3 */

loc_003B511E: ;
    ecx = MEM32(esi + 0xC0);
    PUSH32(esp, ecx);
    ecx = esi + 0xC8;
    MEM32(esi + 0xF4) = eax;
    PUSH32(esp, 0x003B5136u); RECOMP_ABI_CALL(0x0001E615u, sub_0001E615); /* call 0x0001E615 */

loc_003B5136: ;
    POP32(esp, edi);
    MEM32(esi + 0xFC) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B5170
 * Original: 0x003B5170 - 0x003B5324 (436 bytes, 164 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003B5170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003B5170: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0x100));
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = MEM32(esi + edi * 4 + 0xE0);
    ebx = MEM32(esi + edi * 4 + 0xEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0xC) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003B5205; /* jne: not equal / not zero */

loc_003B51A5: ;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003B51D4; /* je: equal / zero */

loc_003B51AC: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B51B9u); RECOMP_ABI_CALL(0x0002978Bu, sub_0002978B); /* call 0x0002978B */

loc_003B51B9: ;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B51C9u); RECOMP_ABI_CALL(0x0002BC4Du, sub_0002BC4D); /* call 0x0002BC4D */

loc_003B51C9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003B5205; /* jne: not equal / not zero */

loc_003B51D4: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003B5205; /* je: equal / zero */

loc_003B51DB: ;
    ecx = MEM32(esp + 0xC);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B51ECu); RECOMP_ABI_CALL(0x0002A140u, sub_0002A140); /* call 0x0002A140 */

loc_003B51EC: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B51FCu); RECOMP_ABI_CALL(0x00029470u, sub_00029470); /* call 0x00029470 */

loc_003B51FC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_003B5205: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = 2;
    if (CMP_NE(_fa, _fb)) goto loc_003B5282; /* jne: not equal / not zero */

loc_003B520E: ;
    eax = MEM32(esi + edi * 4 + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003B524F; /* jne: not equal / not zero */

loc_003B521A: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003B5234; /* jne: not equal / not zero */

loc_003B5221: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003B5223: ;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B522Bu); RECOMP_ABI_CALL(0x0002CA53u, sub_0002CA53); /* call 0x0002CA53 */

loc_003B522B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_003B5234: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003B522B; /* jne: not equal / not zero */

loc_003B5239: ;
    ecx = 2;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B5246u); RECOMP_ABI_CALL(0x0002CA53u, sub_0002CA53); /* call 0x0002CA53 */

loc_003B5246: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_003B524F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003B5277; /* jne: not equal / not zero */

loc_003B5254: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003B5282; /* je: equal / zero */

loc_003B525C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003B522B; /* jne: not equal / not zero */

loc_003B5261: ;
    ecx = 1;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B526Eu); RECOMP_ABI_CALL(0x0002CA53u, sub_0002CA53); /* call 0x0002CA53 */

loc_003B526E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_003B5277: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003B5223; /* jne: not equal / not zero */

loc_003B527C: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003B522B; /* je: equal / zero */

loc_003B5282: ;
    ecx = MEM32(esp + 0xC);
    edi = MEM32(esi + 0x14);
    PUSH32(esp, 8);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B5294u); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_003B5294: ;
    ecx = MEM32(edi);
    edx = ZX16(LO16(eax));
    eax = ebx + edx * 4 + 0x10;
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(edi + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(edi + 0xC);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(ebx + 0xC);
    edi = MEM32(esi + 0x10);
    PUSH32(esp, 0x70);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B52C3u); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_003B52C3: ;
    ecx = ZX16(LO16(eax));
    eax = MEM32(edi);
    edx = ebx + ecx * 4 + 0x10;
    MEM32(edx) = eax;
    ecx = MEM32(edi + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(edi + 8);
    edi = MEM32(ebp + 0xC);
    MEM32(edx + 8) = eax;
    eax = edi;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003B52F2; /* je: equal / zero */

loc_003B52E4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003B52EB; /* je: equal / zero */

loc_003B52E7: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003B52F7;

loc_003B52EB: ;
    eax = 2;
    goto loc_003B52F7;

loc_003B52F2: ;
    eax = 1;

loc_003B52F7: ;
    ecx = MEM32(esi + 0xC4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC0);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x90)) >> 32) & 1);
    ecx = ecx + 0x90;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B5311u); RECOMP_ABI_CALL(0x0002F212u, sub_0002F212); /* call 0x0002F212 */

loc_003B5311: ;
    edx = MEM32(ebp + 8);
    MEM32(esi + edx * 4 + 0xE0) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B53A0
 * Original: 0x003B53A0 - 0x003B53F6 (86 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B53A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B53A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xF8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x100));
    PUSH32(esp, edi);
    edi = MEM32(esi + ecx * 4 + 0xEC);
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, 0x70);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B53C5u); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_003B53C5: ;
    ecx = MEM32(esp + 0xC);
    edx = ZX16(LO16(eax));
    eax = edi + edx * 4 + 0x10;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 0xF8);
    POP32(esp, edi);
    MEM32(esi + edx * 4 + 0xE0) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B5410
 * Original: 0x003B5410 - 0x003B546C (92 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B5410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B5410: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xF8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x100));
    PUSH32(esp, edi);
    edi = MEM32(esi + ecx * 4 + 0xEC);
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B5435u); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_003B5435: ;
    ecx = MEM32(esp + 0xC);
    edx = ZX16(LO16(eax));
    eax = edi + edx * 4 + 0x10;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(esi + 0xF8);
    POP32(esp, edi);
    MEM32(esi + edx * 4 + 0xE0) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B5490
 * Original: 0x003B5490 - 0x003B5521 (145 bytes, 44 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B5490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B5490: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi + 0xF8);
    ebx = MEM32(esi + eax * 4 + 0xEC);
    ecx = MEM32(ebx + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edi, MEM16(esi + 0x100));
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003B54B6u); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_003B54B6: ;
    ecx = ZX16(LO16(eax));
    eax = MEM32(esp + 0x14);
    edx = ebx + ecx * 4 + 0x10;
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    eax = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = eax;
    ecx = MEM32(esi + 0xF8);
    ebx = MEM32(esi + ecx * 4 + 0xEC);
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, 0x70);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003B54EFu); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_003B54EF: ;
    ecx = MEM32(esp + 0x10);
    edx = ZX16(LO16(eax));
    eax = ebx + edx * 4 + 0x10;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 0xF8);
    POP32(esp, edi);
    MEM32(esi + edx * 4 + 0xE0) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B5550
 * Original: 0x003B5550 - 0x003B55D8 (136 bytes, 55 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B5550(void)
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

loc_003B5550: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = MEM32(edi + 0x34);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003B5571; /* jne: not equal / not zero */

loc_003B5563: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003B556Eu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003B556E: ;
    MEM32(esi + 8) = eax;

loc_003B5571: ;
    esi = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 0x13 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(eax + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B5591; /* jne: not equal / not zero */

loc_003B5588: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO16(eax, 0); /* xor self */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

loc_003B5591: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003B559Du); RECOMP_ABI_CALL(0x00021CA2u, sub_00021CA2); /* call 0x00021CA2 */

loc_003B559D: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003B55ADu); RECOMP_ABI_CALL(0x00021CA2u, sub_00021CA2); /* call 0x00021CA2 */

loc_003B55AD: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x003B55D2u); RECOMP_ABI_CALL(0x0002F712u, sub_0002F712); /* call 0x0002F712 */

loc_003B55D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003B5600
 * Original: 0x003B5600 - 0x003B5676 (118 bytes, 37 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B5600(void)
{

loc_003B5600: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    esi = ecx;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003B5617u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B5614u); } /* indirect call */
    }

loc_003B5617: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esi + 0xF8);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + edx * 4 + 0xEC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003B5633u); RECOMP_ABI_CALL(0x00028B47u, sub_00028B47); /* call 0x00028B47 */

loc_003B5633: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esi + 0xF8);
    ecx = MEM32(esi + ecx * 4 + 0xEC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003B564Bu); RECOMP_ABI_CALL(0x0002978Bu, sub_0002978B); /* call 0x0002978B */

loc_003B564B: ;
    ebx = MEM32(esp + 0x24);
    edx = MEM32(esi + 0xF8);
    ecx = MEM32(esi + edx * 4 + 0xEC);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003B5663u); RECOMP_ABI_CALL(0x0002A140u, sub_0002A140); /* call 0x0002A140 */

loc_003B5663: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(ebx + 0xC) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003B56A0
 * Original: 0x003B56A0 - 0x003B5704 (100 bytes, 29 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B56A0(void)
{

loc_003B56A0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    ecx = MEM32(esi + 0xF8);
    ecx = MEM32(esi + ecx * 4 + 0xEC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003B56C1u); RECOMP_ABI_CALL(0x00028B47u, sub_00028B47); /* call 0x00028B47 */

loc_003B56C1: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esi + 0xF8);
    ecx = MEM32(esi + eax * 4 + 0xEC);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003B56D9u); RECOMP_ABI_CALL(0x0002978Bu, sub_0002978B); /* call 0x0002978B */

loc_003B56D9: ;
    ebx = MEM32(esp + 0x1C);
    ecx = MEM32(esi + 0xF8);
    ecx = MEM32(esi + ecx * 4 + 0xEC);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003B56F1u); RECOMP_ABI_CALL(0x0002A140u, sub_0002A140); /* call 0x0002A140 */

loc_003B56F1: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(ebx + 0xC) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003B5720
 * Original: 0x003B5720 - 0x003B5768 (72 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B5720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B5720: ;
    eax = MEM32(ecx + 0xC0);
    SET_LO8(edx, MEM8(eax + 0xE8));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B5767; /* je: equal / zero */

loc_003B5730: ;
    edx = MEM32(ecx + 0xF8);
    PUSH32(esp, esi);
    esi = MEM32(ecx + edx * 4 + 0xEC);
    PUSH32(esp, edi);
    PUSH32(esp, 7);
    edi = ecx + 0x44;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003B574Eu); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_003B574E: ;
    edx = MEM32(edi);
    eax = ZX16(LO16(eax));
    ecx = esi + eax * 4 + 0x10;
    MEM32(ecx) = edx;
    eax = MEM32(edi + 4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(edi + 8);
    POP32(esp, edi);
    MEM32(ecx + 8) = edx;
    POP32(esp, esi);

loc_003B5767: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003B5780
 * Original: 0x003B5780 - 0x003B57B5 (53 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B5780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B5780: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83475C;
    PUSH32(esp, 0x003B578Eu); RECOMP_ABI_CALL(0x00020D02u, sub_00020D02); /* call 0x00020D02 */

loc_003B578E: ;
    ecx = esi + 0xC8;
    PUSH32(esp, 0x003B5799u); RECOMP_ABI_CALL(0x00031BFCu, sub_00031BFC); /* call 0x00031BFC */

loc_003B5799: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x834718;
    if (TEST_Z(_fa, _fb)) goto loc_003B57AF; /* je: equal / zero */

loc_003B57A6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003B57ACu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003B57AC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B57AF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B57D0
 * Original: 0x003B57D0 - 0x003B5838 (104 bytes, 44 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B57D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B57D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x14);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003B57F1; /* jne: not equal / not zero */

loc_003B57E3: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003B57EEu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003B57EE: ;
    MEM32(edi + 8) = eax;

loc_003B57F1: ;
    edi = MEM32(edi + 8);
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B580B; /* jne: not equal / not zero */

loc_003B57FB: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003B5802u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B57FFu); } /* indirect call */
    }

loc_003B5802: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B580B; /* jne: not equal / not zero */

loc_003B5807: ;
    edx = edi;
    goto loc_003B580D;

loc_003B580B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003B580D: ;
    SET_LO8(eax, MEM8(esi + 0x18));
    ecx = MEM32(esi + 0x24);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    MEM8(esp + 0x14) = LO8(eax);
    eax = MEM32(esi + 0x28);
    esi = MEM32(esi + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x003B5832u); RECOMP_ABI_CALL(0x00023BC9u, sub_00023BC9); /* call 0x00023BC9 */

loc_003B5832: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B5860
 * Original: 0x003B5860 - 0x003B5C37 (983 bytes, 301 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003B5860(void)
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

loc_003B5860: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC8;
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B587Du); RECOMP_ABI_CALL(0x00030BC6u, sub_00030BC6); /* call 0x00030BC6 */

loc_003B587D: ;
    ecx = MEM32(esi + 0xF8);
    edi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 1;
    MEM32(esi + ecx * 4 + 0xE0) = eax;
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), LO16(ebx) (16-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003B5992; /* jne: not equal / not zero */

loc_003B58A2: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003B58A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B58A6u); } /* indirect call */
    }

loc_003B58A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B5980; /* jne: not equal / not zero */

loc_003B58B2: ;
    edi = MEM32(edi + 0x34);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B58CA; /* jne: not equal / not zero */

loc_003B58BC: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B58C7u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003B58C7: ;
    MEM32(edi + 8) = eax;

loc_003B58CA: ;
    edi = MEM32(edi + 8);
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B58E3; /* jne: not equal / not zero */

loc_003B58D3: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003B58DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B58D7u); } /* indirect call */
    }

loc_003B58DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B58E3; /* jne: not equal / not zero */

loc_003B58DF: ;
    ecx = edi;
    goto loc_003B58E5;

loc_003B58E3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003B58E5: ;
    eax = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B58FBu); RECOMP_ABI_CALL(0x00017397u, sub_00017397); /* call 0x00017397 */

loc_003B58FB: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B59B3; /* je: equal / zero */

loc_003B5905: ;
    ebx = MEM32(edi + 0x14);
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B591D; /* jne: not equal / not zero */

loc_003B590F: ;
    ecx = ebx + 4;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B591Au); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003B591A: ;
    MEM32(ebx + 8) = eax;

loc_003B591D: ;
    ebx = MEM32(ebx + 8);
    _fa = (uint32_t)(MEM16(ebx + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B5937; /* jne: not equal / not zero */

loc_003B5927: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003B592Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B592Bu); } /* indirect call */
    }

loc_003B592E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B5937; /* jne: not equal / not zero */

loc_003B5933: ;
    edx = ebx;
    goto loc_003B5939;

loc_003B5937: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003B5939: ;
    ebx = MEM32(esp + 0x18);
    SET_LO8(eax, MEM8(edi + 0x18));
    ecx = MEM32(edi + 0x24);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x20);
    PUSH32(esp, ebx);
    MEM8(esp + 0x24) = LO8(eax);
    ebx = MEM32(esp + 0x24);
    eax = MEM32(edi + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B595Eu); RECOMP_ABI_CALL(0x00023BC9u, sub_00023BC9); /* call 0x00023BC9 */

loc_003B595E: ;
    edx = MEM32(esp + 0x18);
    ebx = MEM32(edi + 0xC);
    PUSH32(esp, edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B5971u); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003B5971: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B5978u); RECOMP_ABI_CALL(0x0001B4E2u, sub_0001B4E2); /* call 0x0001B4E2 */

loc_003B5978: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    edi = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_003B5905; /* jne: not equal / not zero */

loc_003B597E: ;
    goto loc_003B59B3;

loc_003B5980: ;
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B5992; /* jne: not equal / not zero */

loc_003B5986: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003B598Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B598Au); } /* indirect call */
    }

loc_003B598D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B5994; /* je: equal / zero */

loc_003B5992: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003B5994: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B59AFu); RECOMP_ABI_CALL(0x00023BC9u, sub_00023BC9); /* call 0x00023BC9 */

loc_003B59AF: ;
    MEM32(esp + 0x18) = eax;

loc_003B59B3: ;
    ecx = MEM32(esi + 0xF8);
    edx = MEM32(esi + ecx * 4 + 0xEC);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esi + 0xC0);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x90;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B59D7u); RECOMP_ABI_CALL(0x00016DD9u, sub_00016DD9); /* call 0x00016DD9 */

loc_003B59D7: ;
    ecx = MEM32(0x87DA6C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ebx = esi + 0x18;
    eax = ebx;
    MEM32(eax) = ecx;
    edx = MEM32(0x87DA70);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x87DA74);
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x87DBE0);
    edi = esi + 0x30;
    edx = edi;
    MEM32(edx) = eax;
    ecx = MEM32(0x87DBE4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x87DBE8);
    MEM32(edx + 8) = eax;
    ecx = MEM32(0x87DBEC);
    eax = MEM32(ebp + 0x10);
    MEM32(edx + 0xC) = ecx;
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B5A40u); RECOMP_ABI_CALL(0x000171D0u, sub_000171D0); /* call 0x000171D0 */

loc_003B5A40: ;
    fp_push(MEMF(esi + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_push(MEMF(0x87DA84)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x87DA88)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x87DA8C)); /* fmul dword ptr [0x87da8c] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebx);
    ecx = MEM32(ebx + 4);
    edx = MEM32(ebx + 8);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(edi);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(edi + 4);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(edi + 0xC);
    MEM32(esp + 0x34) = ecx;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEM32(esp + 0x3C) = eax;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(edi + 8);
    xmm0 = xmm3; /* movaps */
    xmm1 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEM32(esp + 0x38) = edx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm5 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x18); /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AA840); /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm6 = xmm1; /* movaps */
    _fca = xmm6.f[0]; _fcb = xmm5.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003B5B09; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm5.f[0]) */

loc_003B5B04: ;
    xmm4 = xmm5; /* movaps */
    goto loc_003B5B17;

loc_003B5B09: ;
    _fca = xmm3.f[0]; _fcb = xmm6.f[0]; /* comiss */
    xmm4 = xmm6; /* movaps */
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_003B5B1D; /* ja: above (unsigned >) (xmm3.f[0] vs xmm6.f[0]) */

loc_003B5B17: ;
    MEMF(esp + 0x30) = xmm4.f[0]; /* movss */

loc_003B5B1D: ;
    _fca = xmm2.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003B5B27; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm5.f[0]) */

loc_003B5B22: ;
    xmm2 = xmm5; /* movaps */
    goto loc_003B5B32;

loc_003B5B27: ;
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_003B5B38; /* ja: above (unsigned >) (xmm3.f[0] vs xmm2.f[0]) */

loc_003B5B32: ;
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */

loc_003B5B38: ;
    _fca = xmm1.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003B5B42; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm5.f[0]) */

loc_003B5B3D: ;
    xmm1 = xmm5; /* movaps */
    goto loc_003B5B4D;

loc_003B5B42: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x38) = xmm3.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_003B5B53; /* ja: above (unsigned >) (xmm3.f[0] vs xmm1.f[0]) */

loc_003B5B4D: ;
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */

loc_003B5B53: ;
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_003B5B66; /* ja: above (unsigned >) (xmm0.f[0] vs xmm5.f[0]) */

loc_003B5B58: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm5 = xmm0; /* movaps */
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_003B5B6C; /* ja: above (unsigned >) (xmm3.f[0] vs xmm0.f[0]) */

loc_003B5B66: ;
    MEMF(esp + 0x3C) = xmm5.f[0]; /* movss */

loc_003B5B6C: ;
    ecx = MEM32(esi + 0xF8);
    ebx = MEM32(esi + ecx * 4 + 0xEC);
    ecx = MEM32(ebx + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edi, MEM16(esi + 0x100));
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B5B8Du); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_003B5B8D: ;
    ecx = MEM32(esp + 0x30);
    edx = ZX16(LO16(eax));
    eax = ebx + edx * 4 + 0x10;
    edx = MEM32(esp + 0x34);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    eax = MEM32(esi + 0xF8);
    ebx = MEM32(esi + eax * 4 + 0xEC);
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, 0x70);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B5BC7u); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_003B5BC7: ;
    ecx = ZX16(LO16(eax));
    eax = MEM32(esp + 0x24);
    edx = ebx + ecx * 4 + 0x10;
    ecx = MEM32(esp + 0x28);
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    ecx = MEM32(esi + 0xC0);
    SET_LO8(eax, MEM8(ecx + 0xE8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B5C25; /* je: equal / zero */

loc_003B5BF2: ;
    edx = MEM32(esi + 0xF8);
    edi = MEM32(esi + edx * 4 + 0xEC);
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x44;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B5C0Eu); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_003B5C0E: ;
    edx = MEM32(esi);
    eax = ZX16(LO16(eax));
    ecx = edi + eax * 4 + 0x10;
    MEM32(ecx) = edx;
    eax = MEM32(esi + 4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(esi + 8);
    MEM32(ecx + 8) = edx;

loc_003B5C25: ;
    ecx = MEM32(esp + 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B5C2Eu); RECOMP_ABI_CALL(0x000338B7u, sub_000338B7); /* call 0x000338B7 */

loc_003B5C2E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_003B5D30
 * Original: 0x003B5D30 - 0x003B5E53 (291 bytes, 85 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B5D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B5D30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = esi + 0xC8;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x003B5D42u); RECOMP_ABI_CALL(0x00030BC6u, sub_00030BC6); /* call 0x00030BC6 */

loc_003B5D42: ;
    eax = MEM32(esi + 0xF8);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    MEM32(esi + eax * 4 + 0xE0) = 0;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003B5D75u); RECOMP_ABI_CALL(0x0002F712u, sub_0002F712); /* call 0x0002F712 */

loc_003B5D75: ;
    edx = MEM32(esi + 0xF8);
    ecx = MEM32(esi + 0xC0);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x90;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esi + edx * 4 + 0xEC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B5D95u); RECOMP_ABI_CALL(0x00016DD9u, sub_00016DD9); /* call 0x00016DD9 */

loc_003B5D95: ;
    ecx = MEM32(esi + 0xF8);
    edi = MEM32(esi + ecx * 4 + 0xEC);
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003B5DAEu); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_003B5DAE: ;
    ecx = MEM32(esp + 0x24);
    edx = ZX16(LO16(eax));
    eax = edi + edx * 4 + 0x10;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(esi + 0xF8);
    edi = MEM32(esi + edx * 4 + 0xEC);
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, 0x70);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003B5DE8u); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_003B5DE8: ;
    edx = MEM32(esp + 0x20);
    eax = ZX16(LO16(eax));
    ecx = edi + eax * 4 + 0x10;
    eax = MEM32(edx);
    MEM32(ecx) = eax;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(esi + 0xC0);
    SET_LO8(ecx, MEM8(eax + 0xE8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B5E46; /* je: equal / zero */

loc_003B5E13: ;
    ecx = MEM32(esi + 0xF8);
    edi = MEM32(esi + ecx * 4 + 0xEC);
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x44;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003B5E2Fu); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_003B5E2F: ;
    ecx = MEM32(esi);
    edx = ZX16(LO16(eax));
    eax = edi + edx * 4 + 0x10;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;

loc_003B5E46: ;
    ecx = ebx;
    PUSH32(esp, 0x003B5E4Du); RECOMP_ABI_CALL(0x000338B7u, sub_000338B7); /* call 0x000338B7 */

loc_003B5E4D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003B5EA0
 * Original: 0x003B5EA0 - 0x003B665A (1978 bytes, 532 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003B5EA0(void)
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

loc_003B5EA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, ebx);
    SET_LO8(ebx, LO8(eax));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(ebx, LO8(ebx) & 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, esi);
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    MEM8(esp + 0x16) = LO8(ebx);
    MEM8(esp + 0x17) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003B5ED1; /* je: equal / zero */

loc_003B5EC6: ;
    ecx = edi + 0xC8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B5ED1u); RECOMP_ABI_CALL(0x00030BC6u, sub_00030BC6); /* call 0x00030BC6 */

loc_003B5ED1: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 0x40);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    MEM32(esp + 0x3C) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_003B6642; /* jle: less or equal (signed <=) */

loc_003B5EE5: ;
    eax = MEM32(edi + 0xF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B5F2D; /* jne: not equal / not zero */

loc_003B5EF0: ;
    ecx = MEM32(edi + 0xEC);
    ebx = MEM32(edi + 0xF0);
    MEM32(edi + 0xF0) = ecx;
    ecx = MEM32(edi + 0xE0);
    MEM32(edi + 0xEC) = ebx;
    ebx = MEM32(edi + 0xE4);
    MEM32(edi + 0xE4) = ecx;
    ecx = MEM32(edi + 0xFC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0xE0) = ebx;
    MEM32(edi + 0xFC) = ecx;

loc_003B5F2D: ;
    MEM32(edi + eax * 4 + 0xE0) = esi;
    ecx = MEM32(0x87DA6C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = edi + 0x18;
    MEM32(eax) = ecx;
    ecx = MEM32(0x87DA70);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(0x87DA74);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(0x87DBE0);
    ebx = edi + 0x30;
    eax = ebx;
    MEM32(eax) = ecx;
    ecx = MEM32(0x87DBE4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(0x87DBE8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(0x87DBEC);
    MEM32(eax + 0xC) = ecx;
    SET_LO16(eax, MEM16(edi + 0x100));
    MEM16(esp + 0x28) = LO16(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    MEMF(edi + 0x40) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x24) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_003B60CC; /* jle: less or equal (signed <=) */

loc_003B5F9F: ;
    /* nop */

loc_003B5FA0: ;
    ecx = MEM32(ebp + 8);
    esi = MEM32(ecx + eax * 4);
    SET_LO8(eax, MEM8(esp + 0x16));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esi + 0x14);
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x1C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003B60A7; /* je: equal / zero */

loc_003B5FBD: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B5FD4; /* jne: not equal / not zero */

loc_003B5FC4: ;
    edx = ecx + 4;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B5FCDu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003B5FCD: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx + 8) = eax;

loc_003B5FD4: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM16(ecx + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 8), 1 (16-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003B6482; /* jne: not equal / not zero */

loc_003B5FE6: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003B5FEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B5FE8u); } /* indirect call */
    }

loc_003B5FEB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B6482; /* jne: not equal / not zero */

loc_003B5FF4: ;
    SET_LO8(eax, MEM8(esi + 0x18));
    ecx = MEM32(esi + 0x28);
    edx = MEM32(esi + 0x24);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    MEM8(esp + 0x2C) = LO8(eax);
    eax = MEM32(esp + 0x1C);
    esi = MEM32(eax + 0x34);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_003B6030; /* jne: not equal / not zero */

loc_003B6022: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B602Du); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003B602D: ;
    MEM32(esi + 8) = eax;

loc_003B6030: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B604A; /* jne: not equal / not zero */

loc_003B603A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003B6041u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B603Eu); } /* indirect call */
    }

loc_003B6041: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B604A; /* jne: not equal / not zero */

loc_003B6046: ;
    ecx = esi;
    goto loc_003B604C;

loc_003B604A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003B604C: ;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B6065u); RECOMP_ABI_CALL(0x00017397u, sub_00017397); /* call 0x00017397 */

loc_003B6065: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B60A3; /* je: equal / zero */

loc_003B606B: ;
    goto loc_003B6070;

    /* nop */

loc_003B6070: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B607Du); RECOMP_ABI_CALL(0x00034023u, sub_00034023); /* call 0x00034023 */

loc_003B607D: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, esi);
    MEM32(esp + 0x3C) = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B6094u); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003B6094: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B609Bu); RECOMP_ABI_CALL(0x0001B4E2u, sub_0001B4E2); /* call 0x0001B4E2 */

loc_003B609B: ;
    esi = MEM32(esp + 0x38);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B6070; /* jne: not equal / not zero */

loc_003B60A3: ;
    esi = MEM32(esp + 0x20);

loc_003B60A7: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B60B7; /* je: equal / zero */

loc_003B60AF: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B60B7u); RECOMP_ABI_CALL(0x0002D0C5u, sub_0002D0C5); /* call 0x0002D0C5 */

loc_003B60B7: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x3C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003B5FA0; /* jl: less (signed <) */

loc_003B60CC: ;
    ecx = MEM32(edi + 0xF8);
    edx = MEM32(edi + ecx * 4 + 0xEC);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(edi + 0xC0);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x90;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B60F0u); RECOMP_ABI_CALL(0x00016DD9u, sub_00016DD9); /* call 0x00016DD9 */

loc_003B60F0: ;
    fp_push(MEMF(edi + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    SET_LO8(eax, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_push(MEMF(0x87DA84)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x87DA88)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x87DA8C)); /* fmul dword ptr [0x87da8c] */
    MEMF(ebx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(ebx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_003B64F8; /* je: equal / zero */

loc_003B612C: ;
    esi = MEM32(ebp + 0x10);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    eax = edi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B613Eu); RECOMP_ABI_CALL(0x005A1129u, sub_005A1129); /* call 0x005A1129 */

loc_003B613E: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x60); /* addss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x64); /* addss */
    edx = MEM32(esp + 0x4C);
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x68); /* addss */
    eax = MEM32(ebp + 0x14);
    xmm4 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax + 0xC) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x50);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x54);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x44); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebx + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 8); /* mulss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 4); /* mulss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebx + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi); /* mulss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebx + 4); /* mulss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x40);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 8); /* mulss */
    esi = MEM32(ebp + 0x18);
    eax = esi;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x48);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEM32(eax + 8) = edx;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x4C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(eax + 0xC) = edx;
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4.f[0] = xmm4.f[0] / MEMF(esp + 0x38); /* divss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    MEMF(esi + 4) = xmm2.f[0]; /* movss */
    MEMF(esi + 8) = xmm3.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    xmm7 = xmm3; /* movaps */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    xmm4 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x87DA84); /* mulss */
    xmm6 = xmm5; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(0x87DA88); /* mulss */
    xmm5.f[0] = xmm5.f[0] * MEMF(0x87DA8C); /* mulss */
    MEMF(esp + 0x48) = xmm5.f[0]; /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp + 0x44) = xmm6.f[0]; /* movss */
    xmm5 = xmm1; /* movaps */
    xmm6 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x4C); /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm7.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x48); /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm6.f[0]; /* subss */
    MEMF(esp + 0x60) = xmm5.f[0]; /* movss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x4C); /* mulss */
    xmm6 = xmm3; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm6.f[0]; /* subss */
    xmm6 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x44); /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x48); /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0x64) = xmm5.f[0]; /* movss */
    ecx = MEM32(esp + 0x60);
    edx = MEM32(esp + 0x64);
    xmm5 = xmm2; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x44); /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm6 = xmm3; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x4C); /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x44); /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x4C); /* mulss */
    xmm6.f[0] = xmm6.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEM32(eax) = ecx;
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEM32(eax + 4) = edx;
    xmm6.f[0] = xmm6.f[0] + xmm7.f[0]; /* addss */
    MEMF(esp + 0x68) = xmm6.f[0]; /* movss */
    ecx = MEM32(esp + 0x68);
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x6C);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003B6498; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_003B647D: ;
    xmm0 = xmm1; /* movaps */
    goto loc_003B64A0;

loc_003B6482: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B648Fu); RECOMP_ABI_CALL(0x00034023u, sub_00034023); /* call 0x00034023 */

loc_003B648F: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + eax;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003B60A7;

loc_003B6498: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003B64A0; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_003B649D: ;
    xmm0 = xmm2; /* movaps */

loc_003B64A0: ;
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003B64B3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_003B64AE: ;
    xmm0 = xmm1; /* movaps */
    goto loc_003B64BB;

loc_003B64B3: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003B64BB; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_003B64B8: ;
    xmm0 = xmm2; /* movaps */

loc_003B64BB: ;
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003B64CF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_003B64CA: ;
    xmm0 = xmm1; /* movaps */
    goto loc_003B64D7;

loc_003B64CF: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003B64D7; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_003B64D4: ;
    xmm0 = xmm2; /* movaps */

loc_003B64D7: ;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_003B64F1; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_003B64E6: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = xmm0; /* movaps */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003B64F1; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_003B64EE: ;
    xmm1 = xmm2; /* movaps */

loc_003B64F1: ;
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    goto loc_003B6532;

loc_003B64F8: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(eax);
    ecx = MEM32(ebp + 0x14);
    esi = MEM32(ebp + 0x18);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ecx);
    edx = esi;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(ecx + 8);
    MEM32(edx + 8) = eax;
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ecx;

loc_003B6532: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003B658C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 4)) */

loc_003B653B: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi); /* subss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x60);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 4); /* subss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x64);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 8); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0xC); /* subss */
    edx = esi;
    MEM32(edx) = eax;
    MEM32(edx + 4) = ecx;
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x68);
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x6C);
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = ecx;

loc_003B658C: ;
    edx = MEM32(edi + 0xF8);
    ebx = MEM32(edi + edx * 4 + 0xEC);
    eax = MEM32(esp + 0x28);
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B65A8u); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_003B65A8: ;
    ecx = ZX16(LO16(eax));
    eax = MEM32(esi);
    edx = ebx + ecx * 4 + 0x10;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(esi + 8);
    MEM32(edx + 8) = eax;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(esp + 0x28);
    MEM32(edx + 0xC) = ecx;
    edx = MEM32(edi + 0xF8);
    esi = MEM32(edi + edx * 4 + 0xEC);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x70);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B65E1u); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_003B65E1: ;
    ecx = ZX16(LO16(eax));
    eax = MEM32(ebp + 0x14);
    edx = esi + ecx * 4 + 0x10;
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    ecx = MEM32(edi + 0xC0);
    SET_LO8(eax, MEM8(ecx + 0xE8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B663E; /* je: equal / zero */

loc_003B660B: ;
    edx = MEM32(edi + 0xF8);
    esi = MEM32(edi + edx * 4 + 0xEC);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    ebx = edi + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B6627u); RECOMP_ABI_CALL(0x0057B9F0u, sub_0057B9F0); /* call 0x0057B9F0 */

loc_003B6627: ;
    edx = MEM32(ebx);
    eax = ZX16(LO16(eax));
    ecx = esi + eax * 4 + 0x10;
    MEM32(ecx) = edx;
    eax = MEM32(ebx + 4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(ebx + 8);
    MEM32(ecx + 8) = edx;

loc_003B663E: ;
    SET_LO8(ebx, MEM8(esp + 0x16));

loc_003B6642: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B6651; /* je: equal / zero */

loc_003B6646: ;
    ecx = edi + 0xC8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003B6651u); RECOMP_ABI_CALL(0x000338B7u, sub_000338B7); /* call 0x000338B7 */

loc_003B6651: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003B6850
 * Original: 0x003B6850 - 0x003B687A (42 bytes, 16 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6850(void)
{

loc_003B6850: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = ecx + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B6877u); RECOMP_ABI_CALL(0x0002DBB0u, sub_0002DBB0); /* call 0x0002DBB0 */

loc_003B6877: ;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003B6890
 * Original: 0x003B6890 - 0x003B6894 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6890(void)
{

loc_003B6890: ;
    eax = ecx + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_003B68A0
 * Original: 0x003B68A0 - 0x003B68A6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B68A0(void)
{

loc_003B68A0: ;
    eax = 0x9198D4;
    esp += 4; return; /* ret */

}

/**
 * sub_003B68B0
 * Original: 0x003B68B0 - 0x003B68B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B68B0(void)
{

loc_003B68B0: ;
    eax = 0x9198DC;
    esp += 4; return; /* ret */

}

/**
 * sub_003B68C0
 * Original: 0x003B68C0 - 0x003B68C6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B68C0(void)
{

loc_003B68C0: ;
    eax = 0x9198D8;
    esp += 4; return; /* ret */

}

/**
 * sub_003B68D0
 * Original: 0x003B68D0 - 0x003B68D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B68D0(void)
{

loc_003B68D0: ;
    eax = 0x919888;
    esp += 4; return; /* ret */

}

/**
 * sub_003B68E0
 * Original: 0x003B68E0 - 0x003B68E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B68E0(void)
{

loc_003B68E0: ;
    eax = 0x919880;
    esp += 4; return; /* ret */

}

/**
 * sub_003B68F0
 * Original: 0x003B68F0 - 0x003B68F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B68F0(void)
{

loc_003B68F0: ;
    eax = 0x9198E0;
    esp += 4; return; /* ret */

}

/**
 * sub_003B6900
 * Original: 0x003B6900 - 0x003B6903 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6900(void)
{

loc_003B6900: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003B6910
 * Original: 0x003B6910 - 0x003B6914 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B6910: ;
    MEM32(ecx + 0x30) = MEM32(ecx + 0x30) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_003B6920
 * Original: 0x003B6920 - 0x003B6926 (6 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6920(void)
{

loc_003B6920: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(ecx + 0x10); PUSH32(esp, 0x003B6924u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B6921u); } /* indirect call */
    }

loc_003B6924: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003B6930
 * Original: 0x003B6930 - 0x003B6934 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6930(void)
{

loc_003B6930: ;
    eax = ecx + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_003B6940
 * Original: 0x003B6940 - 0x003B6976 (54 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B6940: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = ebx + 0x18;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x003B6950u); RECOMP_ABI_CALL(0x00576297u, sub_00576297); /* call 0x00576297 */

loc_003B6950: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003B6971; /* jbe: below or equal (unsigned <=) */

loc_003B6954: ;
    PUSH32(esp, 0);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003B6962u); RECOMP_ABI_CALL(0x00576137u, sub_00576137); /* call 0x00576137 */

loc_003B6962: ;
    ecx = ebx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003B696Du); RECOMP_ABI_CALL(0x00576297u, sub_00576297); /* call 0x00576297 */

loc_003B696D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003B6954; /* jb: below (unsigned <) */

loc_003B6971: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003B6990
 * Original: 0x003B6990 - 0x003B6996 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6990(void)
{

loc_003B6990: ;
    eax = 0x9198E8;
    esp += 4; return; /* ret */

}

/**
 * sub_003B69A0
 * Original: 0x003B69A0 - 0x003B69B7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B69A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B69A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    PUSH32(esp, 0x003B69ACu); RECOMP_ABI_CALL(0x0001D2A1u, sub_0001D2A1); /* call 0x0001D2A1 */

loc_003B69AC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003B69B2u); RECOMP_ABI_CALL(0x0057BFF1u, sub_0057BFF1); /* call 0x0057BFF1 */

loc_003B69B2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003B69C0
 * Original: 0x003B69C0 - 0x003B69CB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B69C0(void)
{

loc_003B69C0: ;
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B69C9u); RECOMP_ABI_CALL(0x0057CC08u, sub_0057CC08); /* call 0x0057CC08 */

loc_003B69C9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003B69D0
 * Original: 0x003B69D0 - 0x003B69D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B69D0(void)
{

loc_003B69D0: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003B69E0
 * Original: 0x003B69E0 - 0x003B69E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B69E0(void)
{

loc_003B69E0: ;
    eax = ecx + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003B69F0
 * Original: 0x003B69F0 - 0x003B69FD (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B69F0(void)
{

loc_003B69F0: ;
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B6A00
 * Original: 0x003B6A00 - 0x003B6A0D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6A00(void)
{

loc_003B6A00: ;
    eax = MEM32(ecx + 0x1C);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B6A10
 * Original: 0x003B6A10 - 0x003B6A1A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6A10(void)
{

loc_003B6A10: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B6A20
 * Original: 0x003B6A20 - 0x003B6A2C (12 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6A20(void)
{

loc_003B6A20: ;
    SET_LO16(eax, MEM16(esp + 4));
    MEM16(ecx + 0x14) = LO16(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B6A30
 * Original: 0x003B6A30 - 0x003B6A34 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6A30(void)
{

loc_003B6A30: ;
    eax = ecx + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_003B6A40
 * Original: 0x003B6A40 - 0x003B6A44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6A40(void)
{

loc_003B6A40: ;
    eax = ecx + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_003B6A50
 * Original: 0x003B6A50 - 0x003B6A5A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6A50(void)
{

loc_003B6A50: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x20) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B6A60
 * Original: 0x003B6A60 - 0x003B6A6A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6A60(void)
{

loc_003B6A60: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x24) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B6A70
 * Original: 0x003B6A70 - 0x003B6A74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6A70(void)
{

loc_003B6A70: ;
    eax = MEM32(ecx + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_003B6A80
 * Original: 0x003B6A80 - 0x003B6A84 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6A80(void)
{

loc_003B6A80: ;
    eax = ecx + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_003B6A90
 * Original: 0x003B6A90 - 0x003B6A9A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6A90(void)
{

loc_003B6A90: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x28) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B6AA0
 * Original: 0x003B6AA0 - 0x003B6AAA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6AA0(void)
{

loc_003B6AA0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x2C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B6AB0
 * Original: 0x003B6AB0 - 0x003B6AB4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6AB0(void)
{

loc_003B6AB0: ;
    eax = MEM32(ecx + 0x34);
    esp += 4; return; /* ret */

}

/**
 * sub_003B6AC0
 * Original: 0x003B6AC0 - 0x003B6B0C (76 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6AC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B6AC0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 2;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM16(eax + 0x14) = LO16(ecx);
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = edx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003B6B20
 * Original: 0x003B6B20 - 0x003B6B4E (46 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B6B20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003B6B4B; /* jbe: below or equal (unsigned <=) */

loc_003B6B2C: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_003B6B30: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(eax + ebx + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003B6B3Du); RECOMP_ABI_CALL(0x0057CC08u, sub_0057CC08); /* call 0x0057CC08 */

loc_003B6B3D: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003B6B30; /* jb: below (unsigned <) */

loc_003B6B4A: ;
    POP32(esp, ebx);

loc_003B6B4B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003B6B60
 * Original: 0x003B6B60 - 0x003B6B72 (18 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6B60(void)
{

loc_003B6B60: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x2C) = eax;
    ecx = MEM32(ecx + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(ecx + 0x10); PUSH32(esp, 0x003B6B6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B6B6Bu); } /* indirect call */
    }

loc_003B6B6E: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B6B80
 * Original: 0x003B6B80 - 0x003B6BA7 (39 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B6B80: ;
    eax = MEM32(ecx + 0x50);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x50) = eax;
    edx = eax;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x54);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    POP32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_003B6BA0; /* jbe: below or equal (unsigned <=) */

loc_003B6B96: ;
    MEM32(ecx + 0x54) = eax;
    eax = MEM32(ecx + 0x4C);
    eax = MEM32(eax + edx * 4);
    esp += 4; return; /* ret */

loc_003B6BA0: ;
    ecx = MEM32(ecx + 0x4C);
    eax = MEM32(ecx + edx * 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003B6BB0
 * Original: 0x003B6BB0 - 0x003B6BC5 (21 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6BB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B6BB0: ;
    eax = MEM32(ecx + 0x50);
    edx = MEM32(ecx + 0x4C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(edx + eax * 4) = esi;
    MEM32(ecx + 0x50) = MEM32(ecx + 0x50) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B6BD0
 * Original: 0x003B6BD0 - 0x003B6BD4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6BD0(void)
{

loc_003B6BD0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003B6BE0
 * Original: 0x003B6BE0 - 0x003B6BF5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B6BE0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B6BF4; /* je: equal / zero */

loc_003B6BE8: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003B6BF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B6BF1u); } /* indirect call */
    }

loc_003B6BF4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003B6C00
 * Original: 0x003B6C00 - 0x003B6C12 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6C00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B6C00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B6C0Eu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003B6C0E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003B6C20
 * Original: 0x003B6C20 - 0x003B6C35 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B6C20: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B6C34; /* je: equal / zero */

loc_003B6C28: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003B6C34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B6C31u); } /* indirect call */
    }

loc_003B6C34: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003B6C40
 * Original: 0x003B6C40 - 0x003B6C50 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6C40(void)
{

loc_003B6C40: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003B6C60
 * Original: 0x003B6C60 - 0x003B6C61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6C60(void)
{

loc_003B6C60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003B6C70
 * Original: 0x003B6C70 - 0x003B6C7C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6C70(void)
{

loc_003B6C70: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B6C80
 * Original: 0x003B6C80 - 0x003B6CE3 (99 bytes, 32 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B6C80: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_003B6C95; /* jne: not equal / not zero */

loc_003B6C8D: ;
    MEM32(esi) = 0xFFFFFEDAu;
    goto loc_003B6CBC;

loc_003B6C95: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x9198DC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003B6CBCu); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_003B6CBC: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x003B6CC5u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B6CC5: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B6CD4; /* je: equal / zero */

loc_003B6CCC: ;
    MEM32(esp + 0x10) = 0;

loc_003B6CD4: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003B6CDDu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B6CDD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003B6D00
 * Original: 0x003B6D00 - 0x003B6D72 (114 bytes, 40 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B6D00: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003B6D18; /* jne: not equal / not zero */

loc_003B6D0C: ;
    esi = MEM32(esp + 0xC);
    MEM32(esi) = 0xFFFFFEDAu;
    goto loc_003B6D4A;

loc_003B6D18: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003B6D22u); RECOMP_ABI_CALL(0x005743B7u, sub_005743B7); /* call 0x005743B7 */

loc_003B6D22: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003B6D4Au); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_003B6D4A: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003B6D53u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B6D53: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B6D62; /* je: equal / zero */

loc_003B6D5A: ;
    MEM32(esp + 0x14) = 0;

loc_003B6D62: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x003B6D6Bu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B6D6B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003B6D90
 * Original: 0x003B6D90 - 0x003B6DF3 (99 bytes, 32 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B6D90: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_003B6DA5; /* jne: not equal / not zero */

loc_003B6D9D: ;
    MEM32(esi) = 0xFFFFFEDAu;
    goto loc_003B6DCC;

loc_003B6DA5: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x9198D8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003B6DCCu); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_003B6DCC: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x003B6DD5u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B6DD5: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B6DE4; /* je: equal / zero */

loc_003B6DDC: ;
    MEM32(esp + 0x10) = 0;

loc_003B6DE4: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003B6DEDu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B6DED: ;
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003B6E10
 * Original: 0x003B6E10 - 0x003B6E82 (114 bytes, 40 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B6E10: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003B6E28; /* jne: not equal / not zero */

loc_003B6E1C: ;
    esi = MEM32(esp + 0xC);
    MEM32(esi) = 0xFFFFFEDAu;
    goto loc_003B6E5A;

loc_003B6E28: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003B6E32u); RECOMP_ABI_CALL(0x0057438Du, sub_0057438D); /* call 0x0057438D */

loc_003B6E32: ;
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
    PUSH32(esp, 0x003B6E5Au); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_003B6E5A: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003B6E63u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B6E63: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B6E72; /* je: equal / zero */

loc_003B6E6A: ;
    MEM32(esp + 0x14) = 0;

loc_003B6E72: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x003B6E7Bu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B6E7B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003B6EA0
 * Original: 0x003B6EA0 - 0x003B6F0B (107 bytes, 36 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B6EA0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_003B6EB5; /* jne: not equal / not zero */

loc_003B6EAD: ;
    MEM32(esi) = 0xFFFFFEDAu;
    goto loc_003B6EE4;

loc_003B6EB5: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003B6EC1; /* jne: not equal / not zero */

loc_003B6EBD: ;
    MEM32(esi) = eax;
    goto loc_003B6EE4;

loc_003B6EC1: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x18);
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x9198E8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003B6EE4u); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_003B6EE4: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x003B6EEDu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B6EED: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B6EFC; /* je: equal / zero */

loc_003B6EF4: ;
    MEM32(esp + 0x10) = 0;

loc_003B6EFC: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003B6F05u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B6F05: ;
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003B6F30
 * Original: 0x003B6F30 - 0x003B6F93 (99 bytes, 32 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B6F30: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_003B6F45; /* jne: not equal / not zero */

loc_003B6F3D: ;
    MEM32(esi) = 0xFFFFFEDAu;
    goto loc_003B6F6C;

loc_003B6F45: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x919888);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003B6F6Cu); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_003B6F6C: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x003B6F75u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B6F75: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B6F84; /* je: equal / zero */

loc_003B6F7C: ;
    MEM32(esp + 0x10) = 0;

loc_003B6F84: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003B6F8Du); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B6F8D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003B6FB0
 * Original: 0x003B6FB0 - 0x003B7013 (99 bytes, 32 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B6FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B6FB0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_003B6FC5; /* jne: not equal / not zero */

loc_003B6FBD: ;
    MEM32(esi) = 0xFFFFFEDAu;
    goto loc_003B6FEC;

loc_003B6FC5: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x9198D4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003B6FECu); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_003B6FEC: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x003B6FF5u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B6FF5: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B7004; /* je: equal / zero */

loc_003B6FFC: ;
    MEM32(esp + 0x10) = 0;

loc_003B7004: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003B700Du); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B700D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003B7030
 * Original: 0x003B7030 - 0x003B7093 (99 bytes, 32 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B7030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B7030: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_003B7045; /* jne: not equal / not zero */

loc_003B703D: ;
    MEM32(esi) = 0xFFFFFEDAu;
    goto loc_003B706C;

loc_003B7045: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x919880);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003B706Cu); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_003B706C: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x003B7075u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B7075: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B7084; /* je: equal / zero */

loc_003B707C: ;
    MEM32(esp + 0x10) = 0;

loc_003B7084: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003B708Du); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B708D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003B70B0
 * Original: 0x003B70B0 - 0x003B7113 (99 bytes, 32 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B70B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B70B0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_003B70C5; /* jne: not equal / not zero */

loc_003B70BD: ;
    MEM32(esi) = 0xFFFFFEDAu;
    goto loc_003B70EC;

loc_003B70C5: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x9198E0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003B70ECu); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_003B70EC: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x003B70F5u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B70F5: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B7104; /* je: equal / zero */

loc_003B70FC: ;
    MEM32(esp + 0x10) = 0;

loc_003B7104: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003B710Du); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B710D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003B7130
 * Original: 0x003B7130 - 0x003B71A2 (114 bytes, 40 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B7130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B7130: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003B7148; /* jne: not equal / not zero */

loc_003B713C: ;
    esi = MEM32(esp + 0xC);
    MEM32(esi) = 0xFFFFFEDAu;
    goto loc_003B717A;

loc_003B7148: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003B7152u); RECOMP_ABI_CALL(0x00574387u, sub_00574387); /* call 0x00574387 */

loc_003B7152: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003B717Au); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_003B717A: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003B7183u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B7183: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B7192; /* je: equal / zero */

loc_003B718A: ;
    MEM32(esp + 0x14) = 0;

loc_003B7192: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x003B719Bu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B719B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003B71C0
 * Original: 0x003B71C0 - 0x003B71DE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B71C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B71C0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x10) = LO8(ecx);
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003B71F0
 * Original: 0x003B71F0 - 0x003B7215 (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B71F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B71F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B7212; /* je: equal / zero */

loc_003B71FB: ;
    ecx = esi;
    PUSH32(esp, 0x003B7202u); RECOMP_ABI_CALL(0x0001D2A1u, sub_0001D2A1); /* call 0x0001D2A1 */

loc_003B7202: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003B7208u); RECOMP_ABI_CALL(0x0057BFF1u, sub_0057BFF1); /* call 0x0057BFF1 */

loc_003B7208: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x14) = 0;

loc_003B7212: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003B7220
 * Original: 0x003B7220 - 0x003B7305 (229 bytes, 86 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B7220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B7220: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_003B72CB; /* je: equal / zero */

loc_003B7235: ;
    ecx = MEM32(esi + -4);
    edi = esi + -4;
    eax = ecx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edi;
    if ((_fas < 0)) goto loc_003B72AB; /* js: sign (negative) */

loc_003B7249: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = eax + 0x14;
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, ebp);

loc_003B7252: ;
    esi = MEM32(ebx + -32);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B72A0; /* je: equal / zero */

loc_003B725C: ;
    ecx = esi;
    ebp = esi + 0x18;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x003B7268u); RECOMP_ABI_CALL(0x00576297u, sub_00576297); /* call 0x00576297 */

loc_003B7268: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003B728D; /* jbe: below or equal (unsigned <=) */

loc_003B726C: ;
    /* nop */

loc_003B7270: ;
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x003B727Eu); RECOMP_ABI_CALL(0x00576137u, sub_00576137); /* call 0x00576137 */

loc_003B727E: ;
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003B7289u); RECOMP_ABI_CALL(0x00576297u, sub_00576297); /* call 0x00576297 */

loc_003B7289: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003B7270; /* jb: below (unsigned <) */

loc_003B728D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003B7293u); RECOMP_ABI_CALL(0x0057BFF1u, sub_0057BFF1); /* call 0x0057BFF1 */

loc_003B7293: ;
    edi = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = 0;

loc_003B72A0: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003B7252; /* jne: not equal / not zero */

loc_003B72A6: ;
    SET_LO8(ebx, MEM8(esp + 0x20));
    POP32(esp, ebp);

loc_003B72AB: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B72C0; /* je: equal / zero */

loc_003B72B0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B72C0; /* je: equal / zero */

loc_003B72B4: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003B72C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B72BDu); } /* indirect call */
    }

loc_003B72C0: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003B72CB: ;
    edi = MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B72E9; /* je: equal / zero */

loc_003B72D2: ;
    ecx = edi;
    PUSH32(esp, 0x003B72D9u); RECOMP_ABI_CALL(0x0001D2A1u, sub_0001D2A1); /* call 0x0001D2A1 */

loc_003B72D9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003B72DFu); RECOMP_ABI_CALL(0x0057BFF1u, sub_0057BFF1); /* call 0x0057BFF1 */

loc_003B72DF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = 0;

loc_003B72E9: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B72FA; /* je: equal / zero */

loc_003B72EE: ;
    ecx = MEM32(0x907224);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003B72FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003B72F7u); } /* indirect call */
    }

loc_003B72FA: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003B7340
 * Original: 0x003B7340 - 0x003B7464 (292 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B7340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B7340: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B735E; /* je: equal / zero */

loc_003B734E: ;
    ecx = edi;
    PUSH32(esp, 0x003B7355u); RECOMP_ABI_CALL(0x0001D2A1u, sub_0001D2A1); /* call 0x0001D2A1 */

loc_003B7355: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003B735Bu); RECOMP_ABI_CALL(0x0057BFF1u, sub_0057BFF1); /* call 0x0057BFF1 */

loc_003B735B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B735E: ;
    edi = MEM32(esi + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B7375; /* je: equal / zero */

loc_003B7365: ;
    ecx = edi;
    PUSH32(esp, 0x003B736Cu); RECOMP_ABI_CALL(0x0001D2A1u, sub_0001D2A1); /* call 0x0001D2A1 */

loc_003B736C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003B7372u); RECOMP_ABI_CALL(0x0057BFF1u, sub_0057BFF1); /* call 0x0057BFF1 */

loc_003B7372: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B7375: ;
    edi = MEM32(esi + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B738C; /* je: equal / zero */

loc_003B737C: ;
    ecx = edi;
    PUSH32(esp, 0x003B7383u); RECOMP_ABI_CALL(0x0001D2A1u, sub_0001D2A1); /* call 0x0001D2A1 */

loc_003B7383: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003B7389u); RECOMP_ABI_CALL(0x0057BFF1u, sub_0057BFF1); /* call 0x0057BFF1 */

loc_003B7389: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003B738C: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003B73CF; /* jbe: below or equal (unsigned <=) */

loc_003B7394: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    /* nop */

loc_003B73A0: ;
    ecx = MEM32(esi + 0x34);
    MEM32(ecx + eax * 4) = ebx;
    edx = MEM32(esi + 4);
    MEM32(edx + eax * 4) = ebx;
    ecx = MEM32(esi + 8);
    MEMF(ecx + eax * 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0xC);
    MEM8(eax + edx) = LO8(ebx);
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + eax * 4) = ebx;
    edx = MEM32(esi + 0x1C);
    MEMF(edx + eax * 4) = xmm1.f[0]; /* movss */
    ecx = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003B73A0; /* jb: below (unsigned <) */

loc_003B73CF: ;
    eax = 2;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    MEM32(esi + 0x30) = ebx;
    MEM32(esi) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM16(esi + 0x14) = LO16(ebx);
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x3C) = ebx;
    PUSH32(esp, 0x003B73FEu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003B73FE: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0x003B740Au); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003B740A: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    MEM32(esi + 8) = ebx;
    PUSH32(esp, 0x003B7416u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003B7416: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    MEM32(esi + 0xC) = ebx;
    PUSH32(esp, 0x003B7422u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003B7422: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    MEM32(esi + 0x18) = ebx;
    PUSH32(esp, 0x003B742Eu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003B742E: ;
    edx = MEM32(esi + 0x34);
    PUSH32(esp, edx);
    MEM32(esi + 0x1C) = ebx;
    PUSH32(esp, 0x003B743Au); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003B743A: ;
    ecx = MEM32(esi + 0x48);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esi + 0x34) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_003B744E; /* je: equal / zero */

loc_003B7447: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x003B744Eu); RECOMP_ABI_CALL(0x0003604Eu, sub_0003604E); /* call 0x0003604E */

loc_003B744E: ;
    eax = MEM32(esi + 0x4C);
    PUSH32(esp, eax);
    MEM32(esi + 0x48) = ebx;
    PUSH32(esp, 0x003B745Au); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003B745A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x4C) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003B74B0
 * Original: 0x003B74B0 - 0x003B7516 (102 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B74B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B74B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B7508; /* je: equal / zero */

loc_003B74BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B7508; /* je: equal / zero */

loc_003B74C0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B74CC; /* je: equal / zero */

loc_003B74C9: ;
    MEM32(esi + 0x30) = MEM32(esi + 0x30) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003B74CC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, 0x003B74D7u); RECOMP_ABI_CALL(0x00578152u, sub_00578152); /* call 0x00578152 */

loc_003B74D7: ;
    ebx = MEM32(esi + 0x38);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003B74F8; /* jbe: below or equal (unsigned <=) */

loc_003B74E0: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + edi * 4);
    ecx = MEM32(edx);
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B74F3u); RECOMP_ABI_CALL(0x00576137u, sub_00576137); /* call 0x00576137 */

loc_003B74F3: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003B74E0; /* jb: below (unsigned <) */

loc_003B74F8: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(eax) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003B7508: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 0xFFFFFE9Eu;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B7530
 * Original: 0x003B7530 - 0x003B7596 (102 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B7530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B7530: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B7588; /* je: equal / zero */

loc_003B753B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B7588; /* je: equal / zero */

loc_003B7540: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B754C; /* je: equal / zero */

loc_003B7549: ;
    MEM32(esi + 0x30) = MEM32(esi + 0x30) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003B754C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, 0x003B7557u); RECOMP_ABI_CALL(0x00578152u, sub_00578152); /* call 0x00578152 */

loc_003B7557: ;
    ebx = MEM32(esi + 0x38);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003B7578; /* jbe: below or equal (unsigned <=) */

loc_003B7560: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + edi * 4);
    ecx = MEM32(edx);
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B7573u); RECOMP_ABI_CALL(0x00576137u, sub_00576137); /* call 0x00576137 */

loc_003B7573: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003B7560; /* jb: below (unsigned <) */

loc_003B7578: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(eax) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003B7588: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 0xFFFFFE9Eu;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B75B0
 * Original: 0x003B75B0 - 0x003B7616 (102 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B75B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003B75B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B7608; /* je: equal / zero */

loc_003B75BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B7608; /* je: equal / zero */

loc_003B75C0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003B75CC; /* je: equal / zero */

loc_003B75C9: ;
    MEM32(esi + 0x30) = MEM32(esi + 0x30) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003B75CC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, 0x003B75D7u); RECOMP_ABI_CALL(0x00578152u, sub_00578152); /* call 0x00578152 */

loc_003B75D7: ;
    ebx = MEM32(esi + 0x38);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003B75F8; /* jbe: below or equal (unsigned <=) */

loc_003B75E0: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + edi * 4);
    ecx = MEM32(edx);
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B75F3u); RECOMP_ABI_CALL(0x00576137u, sub_00576137); /* call 0x00576137 */

loc_003B75F3: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003B75E0; /* jb: below (unsigned <) */

loc_003B75F8: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(eax) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003B7608: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 0xFFFFFE9Eu;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003B7630
 * Original: 0x003B7630 - 0x003B7695 (101 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B7630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B7630: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = 0;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B764F; /* je: equal / zero */

loc_003B764B: ;
    MEM32(ecx) = eax;
    goto loc_003B7659;

loc_003B764F: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B7659u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B7659: ;
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B7666u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B7666: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x003B7674u); RECOMP_ABI_CALL(0x0001A24Fu, sub_0001A24F); /* call 0x0001A24F */

loc_003B7674: ;
    ecx = esp + 8;
    PUSH32(esp, 0x003B767Du); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B767D: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B768C; /* je: equal / zero */

loc_003B7684: ;
    MEM32(esp + 0xC) = 0;

loc_003B768C: ;
    ecx = esp + 0xC;
    g_seh_ebp = ebp; sub_005724CD(); return; /* tail jmp 0x005724CD */

}

/**
 * sub_003B76B0
 * Original: 0x003B76B0 - 0x003B7715 (101 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B76B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B76B0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = 0;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B76CF; /* je: equal / zero */

loc_003B76CB: ;
    MEM32(ecx) = eax;
    goto loc_003B76D9;

loc_003B76CF: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B76D9u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B76D9: ;
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B76E6u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B76E6: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x003B76F4u); RECOMP_ABI_CALL(0x0002A5EBu, sub_0002A5EB); /* call 0x0002A5EB */

loc_003B76F4: ;
    ecx = esp + 8;
    PUSH32(esp, 0x003B76FDu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B76FD: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B770C; /* je: equal / zero */

loc_003B7704: ;
    MEM32(esp + 0xC) = 0;

loc_003B770C: ;
    ecx = esp + 0xC;
    g_seh_ebp = ebp; sub_005724CD(); return; /* tail jmp 0x005724CD */

}

/**
 * sub_003B7730
 * Original: 0x003B7730 - 0x003B7795 (101 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B7730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B7730: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = 0;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B774F; /* je: equal / zero */

loc_003B774B: ;
    MEM32(ecx) = eax;
    goto loc_003B7759;

loc_003B774F: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B7759u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B7759: ;
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B7766u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B7766: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x003B7774u); RECOMP_ABI_CALL(0x00035955u, sub_00035955); /* call 0x00035955 */

loc_003B7774: ;
    ecx = esp + 8;
    PUSH32(esp, 0x003B777Du); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B777D: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B778C; /* je: equal / zero */

loc_003B7784: ;
    MEM32(esp + 0xC) = 0;

loc_003B778C: ;
    ecx = esp + 0xC;
    g_seh_ebp = ebp; sub_005724CD(); return; /* tail jmp 0x005724CD */

}

/**
 * sub_003B77B0
 * Original: 0x003B77B0 - 0x003B7815 (101 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B77B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B77B0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = 0;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B77CF; /* je: equal / zero */

loc_003B77CB: ;
    MEM32(ecx) = eax;
    goto loc_003B77D9;

loc_003B77CF: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B77D9u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B77D9: ;
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B77E6u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B77E6: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x003B77F4u); RECOMP_ABI_CALL(0x0001EF43u, sub_0001EF43); /* call 0x0001EF43 */

loc_003B77F4: ;
    ecx = esp + 8;
    PUSH32(esp, 0x003B77FDu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B77FD: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B780C; /* je: equal / zero */

loc_003B7804: ;
    MEM32(esp + 0xC) = 0;

loc_003B780C: ;
    ecx = esp + 0xC;
    g_seh_ebp = ebp; sub_005724CD(); return; /* tail jmp 0x005724CD */

}

/**
 * sub_003B7830
 * Original: 0x003B7830 - 0x003B7895 (101 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B7830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B7830: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = 0;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B784F; /* je: equal / zero */

loc_003B784B: ;
    MEM32(ecx) = eax;
    goto loc_003B7859;

loc_003B784F: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B7859u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B7859: ;
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B7866u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B7866: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x003B7874u); RECOMP_ABI_CALL(0x000214B4u, sub_000214B4); /* call 0x000214B4 */

loc_003B7874: ;
    ecx = esp + 8;
    PUSH32(esp, 0x003B787Du); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B787D: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B788C; /* je: equal / zero */

loc_003B7884: ;
    MEM32(esp + 0xC) = 0;

loc_003B788C: ;
    ecx = esp + 0xC;
    g_seh_ebp = ebp; sub_005724CD(); return; /* tail jmp 0x005724CD */

}

/**
 * sub_003B78B0
 * Original: 0x003B78B0 - 0x003B7915 (101 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B78B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B78B0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = 0;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B78CF; /* je: equal / zero */

loc_003B78CB: ;
    MEM32(ecx) = eax;
    goto loc_003B78D9;

loc_003B78CF: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B78D9u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B78D9: ;
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B78E6u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B78E6: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x003B78F4u); RECOMP_ABI_CALL(0x00034CC1u, sub_00034CC1); /* call 0x00034CC1 */

loc_003B78F4: ;
    ecx = esp + 8;
    PUSH32(esp, 0x003B78FDu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B78FD: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B790C; /* je: equal / zero */

loc_003B7904: ;
    MEM32(esp + 0xC) = 0;

loc_003B790C: ;
    ecx = esp + 0xC;
    g_seh_ebp = ebp; sub_005724CD(); return; /* tail jmp 0x005724CD */

}

/**
 * sub_003B7930
 * Original: 0x003B7930 - 0x003B7995 (101 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B7930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B7930: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = 0;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B794F; /* je: equal / zero */

loc_003B794B: ;
    MEM32(ecx) = eax;
    goto loc_003B7959;

loc_003B794F: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B7959u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B7959: ;
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B7966u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B7966: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x003B7974u); RECOMP_ABI_CALL(0x0001DCDDu, sub_0001DCDD); /* call 0x0001DCDD */

loc_003B7974: ;
    ecx = esp + 8;
    PUSH32(esp, 0x003B797Du); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B797D: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B798C; /* je: equal / zero */

loc_003B7984: ;
    MEM32(esp + 0xC) = 0;

loc_003B798C: ;
    ecx = esp + 0xC;
    g_seh_ebp = ebp; sub_005724CD(); return; /* tail jmp 0x005724CD */

}

/**
 * sub_003B79B0
 * Original: 0x003B79B0 - 0x003B7A15 (101 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003B79B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003B79B0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = 0;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B79CF; /* je: equal / zero */

loc_003B79CB: ;
    MEM32(ecx) = eax;
    goto loc_003B79D9;

loc_003B79CF: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003B79D9u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_003B79D9: ;
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003B79E6u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_003B79E6: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x003B79F4u); RECOMP_ABI_CALL(0x00036F8Fu, sub_00036F8F); /* call 0x00036F8F */

loc_003B79F4: ;
    ecx = esp + 8;
    PUSH32(esp, 0x003B79FDu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003B79FD: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003B7A0C; /* je: equal / zero */

loc_003B7A04: ;
    MEM32(esp + 0xC) = 0;

loc_003B7A0C: ;
    ecx = esp + 0xC;
    g_seh_ebp = ebp; sub_005724CD(); return; /* tail jmp 0x005724CD */

}
