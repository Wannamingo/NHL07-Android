/**
 * nhl_07_recomp - Recompiled code chunk 174
 * Functions: 250 (0x00380B00 - 0x0038C140)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00380B00
 * Original: 0x00380B00 - 0x00380B65 (101 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00380B00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x60);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00380B29; /* je: equal / zero */

loc_00380B0B: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00380B13u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00380B13: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00380B22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00380B1Fu); } /* indirect call */
    }

loc_00380B22: ;
    MEM32(esi + 0x60) = 0;

loc_00380B29: ;
    edi = MEM32(esi + 0x64);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00380B4E; /* je: equal / zero */

loc_00380B30: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00380B38u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00380B38: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00380B47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00380B44u); } /* indirect call */
    }

loc_00380B47: ;
    MEM32(esi + 0x64) = 0;

loc_00380B4E: ;
    ecx = MEM32(esi + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00380B62; /* je: equal / zero */

loc_00380B55: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00380B5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00380B59u); } /* indirect call */
    }

loc_00380B5B: ;
    MEM32(esi + 0x68) = 0;

loc_00380B62: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00380B80
 * Original: 0x00380B80 - 0x00380CD1 (337 bytes, 107 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00380B80: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xA0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ebp = ecx;
    edi = 0x7B891F;
    ecx = 1;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    SET_LO8(eax, ((_flags != 0)) ? 1 : 0); /* sete */
    MEM8(esp + 0x13) = LO8(eax);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esp + 0xA8);
    if (CMP_EQ(_fa, _fb)) goto loc_00380BD0; /* je: equal / zero */

loc_00380BB3: ;
    ecx = MEM32(eax * 4 + 0x8C6204);
    MEM32(ebp + 0x14) = ecx;
    edx = MEM32(eax * 4 + 0x8C61D4);
    MEM32(ebp + 0xC) = edx;
    eax = MEM32(eax * 4 + 0x8C61A4);
    goto loc_00380BEB;

loc_00380BD0: ;
    ecx = MEM32(eax * 4 + 0x8C6174);
    MEM32(ebp + 0x14) = ecx;
    edx = MEM32(eax * 4 + 0x8C6144);
    MEM32(ebp + 0xC) = edx;
    eax = MEM32(eax * 4 + 0x8C6114);

loc_00380BEB: ;
    ecx = esp + 0x14;
    MEM32(ebp + 0x10) = eax;
    PUSH32(esp, 0x00380BF7u); RECOMP_ABI_CALL(0x00027F94u, sub_00027F94); /* call 0x00027F94 */

loc_00380BF7: ;
    ebx = ebp + 0x20;
    ecx = 8;
    esi = 0x832A74;
    edi = ebx;
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
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, 0x1E);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    PUSH32(esp, 0x00380C15u); RECOMP_ABI_CALL(0x005CCCE0u, sub_005CCCE0); /* call 0x005CCCE0 */

loc_00380C15: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x832A68);
    ecx = esp + 0x18;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x00380C2Au); RECOMP_ABI_CALL(0x0001A312u, sub_0001A312); /* call 0x0001A312 */

loc_00380C2A: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00380C35u); RECOMP_ABI_CALL(0x0002A45Bu, sub_0002A45B); /* call 0x0002A45B */

loc_00380C35: ;
    MEM32(ebp + 0x60) = eax;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00380C49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00380C47u); } /* indirect call */
    }

loc_00380C49: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00380C7C; /* je: equal / zero */

loc_00380C4F: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x82C544);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00380C5Fu); RECOMP_ABI_CALL(0x0002C4FEu, sub_0002C4FE); /* call 0x0002C4FE */

loc_00380C5F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00380C77u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00380C77: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00380C7E;

loc_00380C7C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00380C7E: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(ebp + 0x64) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00380CC4; /* jne: not equal / not zero */

loc_00380C89: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x00380C92u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00380C92: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00380CBC; /* je: equal / zero */

loc_00380C99: ;
    ecx = MEM32(esp + 0xA8);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x00380CA9u); RECOMP_ABI_CALL(0x0002A488u, sub_0002A488); /* call 0x0002A488 */

loc_00380CA9: ;
    POP32(esp, edi);
    MEM32(ebp + 0x68) = eax;
    POP32(esp, esi);
    MEM32(eax + 0x64) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00380CBC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x68) = eax;
    MEM32(eax + 0x64) = ebp;

loc_00380CC4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00380D30
 * Original: 0x00380D30 - 0x00380F91 (609 bytes, 160 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380D30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00380D30: ;
    edx = 0x7B891F;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx) = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx + 0x20C;
    eax = edi;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + -204) = edx;
    MEM32(eax + -200) = edx;
    MEM32(eax + -196) = edx;
    MEM32(eax + -216) = ecx;
    MEM32(eax + -192) = ecx;
    MEM32(eax + -188) = ecx;
    MEM32(eax + -120) = ecx;
    MEM32(eax + -116) = ecx;
    MEM32(eax + -212) = ecx;
    MEM32(eax + -208) = ecx;
    MEM32(eax + -112) = ecx;
    MEM8(eax + -184) = LO8(ecx);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + -204) = edx;
    MEM32(eax + -200) = edx;
    MEM32(eax + -196) = edx;
    MEM32(eax + -216) = ecx;
    MEM32(eax + -192) = ecx;
    MEM32(eax + -188) = ecx;
    MEM32(eax + -120) = ecx;
    MEM32(eax + -116) = ecx;
    MEM32(eax + -212) = ecx;
    MEM32(eax + -208) = ecx;
    MEM32(eax + -112) = ecx;
    MEM8(eax + -184) = LO8(ecx);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + -204) = edx;
    MEM32(eax + -200) = edx;
    MEM32(eax + -196) = edx;
    MEM32(eax + -216) = ecx;
    MEM32(eax + -192) = ecx;
    MEM32(eax + -188) = ecx;
    MEM32(eax + -120) = ecx;
    MEM32(eax + -116) = ecx;
    MEM32(eax + -212) = ecx;
    MEM32(eax + -208) = ecx;
    MEM32(eax + -112) = ecx;
    MEM8(eax + -184) = LO8(ecx);
    MEM32(eax + -96) = edx;
    MEM32(eax + -92) = edx;
    MEM32(eax + -88) = edx;
    MEM32(eax + -108) = ecx;
    MEM32(eax + -84) = ecx;
    MEM32(eax + -80) = ecx;
    MEM32(eax + -12) = ecx;
    MEM32(eax + -8) = ecx;
    MEM32(eax + -104) = ecx;
    MEM32(eax + -100) = ecx;
    MEM32(eax + -4) = ecx;
    MEM8(eax + -76) = LO8(ecx);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + -96) = edx;
    MEM32(eax + -92) = edx;
    MEM32(eax + -88) = edx;
    MEM32(eax + -108) = ecx;
    MEM32(eax + -84) = ecx;
    MEM32(eax + -80) = ecx;
    MEM32(eax + -12) = ecx;
    MEM32(eax + -8) = ecx;
    MEM32(eax + -104) = ecx;
    MEM32(eax + -100) = ecx;
    MEM32(eax + -4) = ecx;
    MEM8(eax + -76) = LO8(ecx);
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    ebp = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + -120) = ecx;
    MEM32(eax + -116) = ecx;
    MEM32(eax + -212) = ecx;
    MEM32(eax + -208) = ecx;
    MEM32(eax + -112) = ecx;
    MEM8(eax + -184) = LO8(ecx);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + -204) = edx;
    MEM32(eax + -200) = edx;
    MEM32(eax + -196) = edx;
    MEM32(eax + -216) = ecx;
    MEM32(eax + -192) = ecx;
    MEM32(eax + -188) = ecx;
    MEM32(eax + -120) = ecx;
    MEM32(eax + -116) = ecx;
    MEM32(eax + -212) = ecx;
    MEM32(eax + -208) = ecx;
    MEM32(eax + -112) = ecx;
    MEM8(eax + -184) = LO8(ecx);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + -204) = edx;
    MEM32(eax + -200) = edx;
    MEM32(eax + -196) = edx;
    MEM32(eax + -216) = ecx;
    MEM32(eax + -192) = ecx;
    MEM32(eax + -188) = ecx;
    MEM32(eax + -120) = ecx;
    MEM32(eax + -116) = ecx;
    MEM32(eax + -212) = ecx;
    MEM32(eax + -208) = ecx;
    MEM32(eax + -112) = ecx;
    MEM8(eax + -184) = LO8(ecx);
    MEM32(eax + -96) = edx;
    MEM32(eax + -92) = edx;
    MEM32(eax + -88) = edx;
    MEM32(eax + -108) = ecx;
    MEM32(eax + -84) = ecx;
    MEM32(eax + -80) = ecx;
    MEM32(eax + -12) = ecx;
    MEM32(eax + -8) = ecx;
    MEM32(eax + -104) = ecx;
    MEM32(eax + -100) = ecx;
    MEM32(eax + -4) = ecx;
    MEM8(eax + -76) = LO8(ecx);
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x68) = ecx;
    MEM8(eax + 0x20) = LO8(ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_00380F60: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x00380F69u); RECOMP_ABI_CALL(0x00014C7Du, sub_00014C7D); /* call 0x00014C7D */

loc_00380F69: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x6C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00380F60; /* jl: less (signed <) */

loc_00380F72: ;
    eax = MEM32(0x826F20);
    SET_LO8(ecx, MEM8(0x826F24));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x901D98) = eax;
    POP32(esp, ebp);
    eax = ebx;
    MEM8(0x901D9C) = LO8(ecx);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00381030
 * Original: 0x00381030 - 0x003810A3 (115 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00381030: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0038103Bu); RECOMP_ABI_CALL(0x000183E6u, sub_000183E6); /* call 0x000183E6 */

loc_0038103B: ;
    _fb = (uint32_t)(0x6A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x6A8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0xA;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00381048: ;
    edi = MEM32(esi + -112);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x6C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038106C; /* je: equal / zero */

loc_00381052: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0038105Au); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0038105A: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00381069u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00381066u); } /* indirect call */
    }

loc_00381069: ;
    MEM32(esi + -4) = ebx;

loc_0038106C: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038108B; /* je: equal / zero */

loc_00381072: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0038107Au); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0038107A: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00381089u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00381086u); } /* indirect call */
    }

loc_00381089: ;
    MEM32(esi) = ebx;

loc_0038108B: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038109B; /* je: equal / zero */

loc_00381092: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00381098u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00381096u); } /* indirect call */
    }

loc_00381098: ;
    MEM32(esi + 4) = ebx;

loc_0038109B: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00381048; /* jne: not equal / not zero */

loc_0038109E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003810C0
 * Original: 0x003810C0 - 0x00381163 (163 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003810C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003810C0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x901E28);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx + 0xF8);
    ecx = MEM32(edx);
    eax = esp + 4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00381115u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00381115: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    ecx = MEM32(0x901E28);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx + 0xFC);
    ecx = MEM32(edx);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0038115Cu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0038115C: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00381190
 * Original: 0x00381190 - 0x00381229 (153 bytes, 31 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00381190: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    ecx = MEM32(0x901E28);
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx + 0xF8);
    ecx = MEM32(edx);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003811DBu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003811DB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    ecx = MEM32(0x901E28);
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx + 0xFC);
    ecx = MEM32(edx);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00381223u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00381223: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00381250
 * Original: 0x00381250 - 0x00381332 (226 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00381250: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038132D; /* je: equal / zero */

loc_00381261: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi); /* comiss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003812B6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi)) */

loc_003812B0: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    goto loc_003812E0;

loc_003812B6: ;
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00381304; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_003812BF: ;
    xmm0 = xmm4; /* movaps */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */

loc_003812E0: ;
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 4) = xmm4.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_00381304: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00381329u); RECOMP_ABI_CALL(0x0002AF37u, sub_0002AF37); /* call 0x0002AF37 */

loc_00381329: ;
    MEM8(esi + 0x1C) = 0;

loc_0038132D: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00381370
 * Original: 0x00381370 - 0x0038164F (735 bytes, 276 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00381370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00381370: ;
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
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003813A0; /* je: equal / zero */

loc_00381383: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003813A0; /* je: equal / zero */

loc_0038138A: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49A7C82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0x49A7C82 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003813A0; /* jne: not equal / not zero */

loc_00381396: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 4);
    edx = MEM32(edx);
    goto loc_003813A3;

loc_003813A0: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003813A3: ;
    eax = MEM32(0x901E28);
    ecx = MEM32(eax + 0x2D8);
    edi = MEM32(ecx + 0x14);
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003813C2; /* jb: below (unsigned <) */

loc_003813B8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x38) (32-bit) */
    MEM8(esp + 0x14) = 1;
    if (CMP_BE(_fa, _fb)) goto loc_003813C7; /* jbe: below or equal (unsigned <=) */

loc_003813C2: ;
    MEM8(esp + 0x14) = 0;

loc_003813C7: ;
    ecx = edx + -4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x32 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00381634; /* ja: above (unsigned >) */

loc_003813D3: ;
    ecx = ZX8(MEM8(ecx + 0x381670));
    { uint32_t _jt = MEM32(ecx * 4 + 0x381650); /* switch: 8 entries, 8 targets */
    if (_jt == 0x003813E1u) goto loc_003813E1;
    if (_jt == 0x00381464u) goto loc_00381464;
    if (_jt == 0x003814D0u) goto loc_003814D0;
    if (_jt == 0x0038153Cu) goto loc_0038153C;
    if (_jt == 0x00381598u) goto loc_00381598;
    if (_jt == 0x003815FBu) goto loc_003815FB;
    if (_jt == 0x00381619u) goto loc_00381619;
    if (_jt == 0x00381634u) goto loc_00381634;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003813E1: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381434u); RECOMP_ABI_CALL(0x005A0E12u, sub_005A0E12); /* call 0x005A0E12 */

loc_00381434: ;
    eax = MEM32(0x8E8F84);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x20);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038144Eu); RECOMP_ABI_CALL(0x00032C55u, sub_00032C55); /* call 0x00032C55 */

loc_0038144E: ;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038145Bu); RECOMP_ABI_CALL(0x0001B0F5u, sub_0001B0F5); /* call 0x0001B0F5 */

loc_0038145B: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00381464: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038146Au); RECOMP_ABI_CALL(0x00011249u, sub_00011249); /* call 0x00011249 */

loc_0038146A: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381470u); RECOMP_ABI_CALL(0x000358E2u, sub_000358E2); /* call 0x000358E2 */

loc_00381470: ;
    ebx = eax;
    eax = MEM32(esi + 0x34);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003814B0; /* jb: below (unsigned <) */

loc_0038147C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x38) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003814B0; /* ja: above (unsigned >) */

loc_00381481: ;
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038148Du); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_0038148D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381498u); RECOMP_ABI_CALL(0x00033501u, sub_00033501); /* call 0x00033501 */

loc_00381498: ;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003814A4u); RECOMP_ABI_CALL(0x00030C70u, sub_00030C70); /* call 0x00030C70 */

loc_003814A4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003814B0: ;
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003814BCu); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_003814BC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003814C7u); RECOMP_ABI_CALL(0x00033501u, sub_00033501); /* call 0x00033501 */

loc_003814C7: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003814D0: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003814D6u); RECOMP_ABI_CALL(0x00011249u, sub_00011249); /* call 0x00011249 */

loc_003814D6: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003814DCu); RECOMP_ABI_CALL(0x000358E2u, sub_000358E2); /* call 0x000358E2 */

loc_003814DC: ;
    ebx = eax;
    eax = MEM32(esi + 0x34);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0038151C; /* jb: below (unsigned <) */

loc_003814E8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x38) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0038151C; /* ja: above (unsigned >) */

loc_003814ED: ;
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003814F9u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_003814F9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381504u); RECOMP_ABI_CALL(0x00033501u, sub_00033501); /* call 0x00033501 */

loc_00381504: ;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381510u); RECOMP_ABI_CALL(0x00030C70u, sub_00030C70); /* call 0x00030C70 */

loc_00381510: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0038151C: ;
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381528u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_00381528: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381533u); RECOMP_ABI_CALL(0x00033501u, sub_00033501); /* call 0x00033501 */

loc_00381533: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0038153C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0038155D; /* jb: below (unsigned <) */

loc_00381540: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x38) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0038155D; /* ja: above (unsigned >) */

loc_00381545: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(0x901E3C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381554u); RECOMP_ABI_CALL(0x0002368Du, sub_0002368D); /* call 0x0002368D */

loc_00381554: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0038155D: ;
    eax = MEM32(0x901E3C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM8(eax + 0x1C) = 1;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00381598: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038159Eu); RECOMP_ABI_CALL(0x00011249u, sub_00011249); /* call 0x00011249 */

loc_0038159E: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003815A4u); RECOMP_ABI_CALL(0x000358E2u, sub_000358E2); /* call 0x000358E2 */

loc_003815A4: ;
    ebx = eax;
    eax = MEM32(esi + 0x34);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003815DF; /* jb: below (unsigned <) */

loc_003815B0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x38) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003815DF; /* ja: above (unsigned >) */

loc_003815B5: ;
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003815C1u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_003815C1: ;
    ecx = MEM32(ebp + 0x10);
    MEM8(eax + 0x3B) = MEM8(eax + 0x3B) & 0xFB;
    _fa = (uint32_t)(MEM8(eax + 0x3B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3A;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003815D3u); RECOMP_ABI_CALL(0x0002371Eu, sub_0002371E); /* call 0x0002371E */

loc_003815D3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003815DF: ;
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003815EBu); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_003815EB: ;
    _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3A;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 1) = MEM8(eax + 1) | 4;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003815FB: ;
    edx = MEM32(esi + 4);
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(0x901E34);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xE);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381610u); RECOMP_ABI_CALL(0x0002DB9Cu, sub_0002DB9C); /* call 0x0002DB9C */

loc_00381610: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00381619: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381628u); RECOMP_ABI_CALL(0x00037E0Du, sub_00037E0D); /* call 0x00037E0D */

loc_00381628: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00381634: ;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(0x901E34);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381646u); RECOMP_ABI_CALL(0x0002DB9Cu, sub_0002DB9C); /* call 0x0002DB9C */

loc_00381646: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00381770
 * Original: 0x00381770 - 0x00381C0A (1178 bytes, 389 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00381770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00381770: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_00381C01; /* ja: above (unsigned >) */

loc_0038178A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x381C0C); /* switch: 10 entries, 10 targets */
    if (_jt == 0x00381791u) goto loc_00381791;
    if (_jt == 0x0038180Fu) goto loc_0038180F;
    if (_jt == 0x0038184Du) goto loc_0038184D;
    if (_jt == 0x00381A80u) goto loc_00381A80;
    if (_jt == 0x00381AEEu) goto loc_00381AEE;
    if (_jt == 0x00381B4Fu) goto loc_00381B4F;
    if (_jt == 0x00381B7Fu) goto loc_00381B7F;
    if (_jt == 0x00381BD0u) goto loc_00381BD0;
    if (_jt == 0x00381BF6u) goto loc_00381BF6;
    if (_jt == 0x00381C01u) goto loc_00381C01;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00381791: ;
    ecx = MEM32(0x901E28);
    MEM8(0x902530) = 0;
    MEM32(0x8C5EE0) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003817ADu); RECOMP_ABI_CALL(0x0002EC3Bu, sub_0002EC3B); /* call 0x0002EC3B */

loc_003817AD: ;
    ecx = 0x902308;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003817B7u); RECOMP_ABI_CALL(0x0001ADB7u, sub_0001ADB7); /* call 0x0001ADB7 */

loc_003817B7: ;
    ecx = 0x901E48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003817C1u); RECOMP_ABI_CALL(0x0001ADB7u, sub_0001ADB7); /* call 0x0001ADB7 */

loc_003817C1: ;
    ecx = 0x9022A8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003817CBu); RECOMP_ABI_CALL(0x0001ADB7u, sub_0001ADB7); /* call 0x0001ADB7 */

loc_003817CB: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_003817D0: ;
    PUSH32(esp, esi);
    ecx = 0x901E48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003817DBu); RECOMP_ABI_CALL(0x00034EB0u, sub_00034EB0); /* call 0x00034EB0 */

loc_003817DB: ;
    eax = esi + 0x14;
    PUSH32(esp, eax);
    ecx = 0x9022A8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003817E9u); RECOMP_ABI_CALL(0x00034EB0u, sub_00034EB0); /* call 0x00034EB0 */

loc_003817E9: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x11 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003817D0; /* jl: less (signed <) */

loc_003817EF: ;
    ecx = MEM32(0x901E28);
    MEM32(ecx + 0x2E0) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381804u); RECOMP_ABI_CALL(0x000268D3u, sub_000268D3); /* call 0x000268D3 */

loc_00381804: ;
    SET_LO8(ebx, 1);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0038180F: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0x1B (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00381C01; /* jne: not equal / not zero */

loc_0038181D: ;
    edx = MEM32(ebp + 0x18);
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038182Bu); RECOMP_ABI_CALL(0x000236CEu, sub_000236CE); /* call 0x000236CE */

loc_0038182B: ;
    SET_LO8(eax, MEM8(0x902530));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00381BFF; /* jne: not equal / not zero */

loc_0038183B: ;
    eax = MEM32(esi);
    eax = eax ^ 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, 1);
    MEM32(esi) = eax;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0038184D: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381856u); RECOMP_ABI_CALL(0x00025802u, sub_00025802); /* call 0x00025802 */

loc_00381856: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00381C01; /* je: equal / zero */

loc_00381865: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038186Bu); RECOMP_ABI_CALL(0x00011249u, sub_00011249); /* call 0x00011249 */

loc_0038186B: ;
    edi = eax;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381873u); RECOMP_ABI_CALL(0x000358E2u, sub_000358E2); /* call 0x000358E2 */

loc_00381873: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0038189C; /* jge: greater or equal (signed >=) */

loc_0038187C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFDu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038188B; /* je: equal / zero */

loc_00381881: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFEu (32-bit) */
    ecx = 0x9022A8;
    if (CMP_EQ(_fa, _fb)) goto loc_00381890; /* je: equal / zero */

loc_0038188B: ;
    ecx = 0x901E48;

loc_00381890: ;
    PUSH32(esp, 0x902308);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038189Au); RECOMP_ABI_CALL(0x00037E99u, sub_00037E99); /* call 0x00037E99 */

loc_0038189A: ;
    esi = eax;

loc_0038189C: ;
    PUSH32(esp, esi);
    ecx = 0x902308;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003818A7u); RECOMP_ABI_CALL(0x0001D66Bu, sub_0001D66B); /* call 0x0001D66B */

loc_003818A7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003818C6; /* je: equal / zero */

loc_003818AB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    PUSH32(esp, 0x902308);
    ecx = 0x901E48;
    if (CMP_L(_fas, _fbs)) goto loc_003818BF; /* jl: less (signed <) */

loc_003818BA: ;
    ecx = 0x9022A8;

loc_003818BF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003818C4u); RECOMP_ABI_CALL(0x00037E99u, sub_00037E99); /* call 0x00037E99 */

loc_003818C4: ;
    esi = eax;

loc_003818C6: ;
    PUSH32(esp, esi);
    ecx = 0x902308;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003818D1u); RECOMP_ABI_CALL(0x00034EB0u, sub_00034EB0); /* call 0x00034EB0 */

loc_003818D1: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003818D8u); RECOMP_ABI_CALL(0x000324B7u, sub_000324B7); /* call 0x000324B7 */

loc_003818D8: ;
    ebx = MEM32(esi * 4 + 0x8E8EB8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003818E9u); RECOMP_ABI_CALL(0x0002228Du, sub_0002228D); /* call 0x0002228D */

loc_003818E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00381BFF; /* je: equal / zero */

loc_003818F1: ;
    ecx = MEM32(ebx + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = ebx + 0x48;
    MEM32(0x901DDC) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0038193F; /* jne: not equal / not zero */

loc_00381901: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x32 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00381910; /* je: equal / zero */

loc_00381906: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x43) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x43 (32-bit) */
    ecx = 0x9022A8;
    if (CMP_EQ(_fa, _fb)) goto loc_00381915; /* je: equal / zero */

loc_00381910: ;
    ecx = 0x901E48;

loc_00381915: ;
    PUSH32(esp, 0x902308);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038191Fu); RECOMP_ABI_CALL(0x00037E99u, sub_00037E99); /* call 0x00037E99 */

loc_0038191F: ;
    esi = eax;
    PUSH32(esp, esi);
    ecx = 0x902308;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038192Cu); RECOMP_ABI_CALL(0x00034EB0u, sub_00034EB0); /* call 0x00034EB0 */

loc_0038192C: ;
    eax = MEM32(esi * 4 + 0x8E8EB8);
    ecx = MEM32(eax + 0x48);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x901DDC) = ecx;

loc_0038193F: ;
    ecx = MEM32(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381946u); RECOMP_ABI_CALL(0x00029290u, sub_00029290); /* call 0x00029290 */

loc_00381946: ;
    eax = MEM32(eax + 0x34);
    edx = MEM32(ebp + 0x18);
    MEM32(edx) = eax;
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038195Eu); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_0038195E: ;
    SET_LO8(ebx, MEM8(eax + 0xC));
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x18);
    SET_LO8(ebx, ~LO8(ebx));
    PUSH32(esp, eax);
    SET_LO8(ebx, LO8(ebx) & 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381974u); RECOMP_ABI_CALL(0x0001A015u, sub_0001A015); /* call 0x0001A015 */

loc_00381974: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381982u); RECOMP_ABI_CALL(0x00035B1Cu, sub_00035B1C); /* call 0x00035B1C */

loc_00381982: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x24 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003819A7; /* je: equal / zero */

loc_0038198A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x33) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x33 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003819A7; /* je: equal / zero */

loc_0038198F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x44) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x44 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003819A7; /* je: equal / zero */

loc_00381994: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003819A7; /* je: equal / zero */

loc_00381999: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003819A7; /* je: equal / zero */

loc_0038199E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003819A7; /* je: equal / zero */

loc_003819A3: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_003819A9;

loc_003819A7: ;
    SET_LO8(ecx, 1);

loc_003819A9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    edi = MEM32(esp + 0x1C);
    if (CMP_EQ(_fa, _fb)) goto loc_003819D1; /* je: equal / zero */

loc_003819B2: ;
    edx = MEM32(edi + 8);
    SET_LO8(edx, LO8(edx) & 0xF);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003819C1; /* jne: not equal / not zero */

loc_003819BD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003819D1; /* je: equal / zero */

loc_003819C1: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003819D5; /* je: equal / zero */

loc_003819CA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00381A06; /* jne: not equal / not zero */

loc_003819CF: ;
    goto loc_003819D5;

loc_003819D1: ;
    ecx = MEM32(esp + 0x14);

loc_003819D5: ;
    edx = MEM32(edi + 8);
    SET_LO8(edx, LO8(edx) & 0xF);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003819E4; /* jne: not equal / not zero */

loc_003819E0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003819F9; /* je: equal / zero */

loc_003819E4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003819EF; /* jne: not equal / not zero */

loc_003819E8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003819F9; /* je: equal / zero */

loc_003819ED: ;
    goto loc_00381A00;

loc_003819EF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00381A00; /* jne: not equal / not zero */

loc_003819F4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00381A00; /* jne: not equal / not zero */

loc_003819F9: ;
    MEM8(0x902530) = 1;

loc_00381A00: ;
    MEM32(0x8C5EE0) = esi;

loc_00381A06: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(0x901E28);
    MEM32(edx + esi * 4 + 0x7C0) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00381A35; /* je: equal / zero */

loc_00381A17: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00381A23; /* jne: not equal / not zero */

loc_00381A1C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00381A2C; /* je: equal / zero */

loc_00381A21: ;
    goto loc_00381A35;

loc_00381A23: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00381A35; /* jne: not equal / not zero */

loc_00381A27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00381A35; /* jne: not equal / not zero */

loc_00381A2C: ;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = 1;

loc_00381A35: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(0x901DDC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381A48u); RECOMP_ABI_CALL(0x0001A17Du, sub_0001A17D); /* call 0x0001A17D */

loc_00381A48: ;
    edx = MEM32(esp + 0x24);
    ecx = MEM32(0x901E28);
    PUSH32(esp, eax);
    eax = MEM32(0x901DDC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381A5Fu); RECOMP_ABI_CALL(0x0001A7DBu, sub_0001A7DB); /* call 0x0001A7DB */

loc_00381A5F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edi + 0x3A));
    SET_LO8(ebx, 1);
    SET_LO8(eax, LO8(ebx));
    ecx = ecx & 0xFEFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x200;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(edi + 0x3A) = LO16(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00381A80: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381A89u); RECOMP_ABI_CALL(0x00025802u, sub_00025802); /* call 0x00025802 */

loc_00381A89: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00381C01; /* je: equal / zero */

loc_00381A94: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381A9Bu); RECOMP_ABI_CALL(0x00021784u, sub_00021784); /* call 0x00021784 */

loc_00381A9B: ;
    ebx = eax;
    eax = MEM32(ebx + 0xF8);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381AADu); RECOMP_ABI_CALL(0x00025B9Fu, sub_00025B9F); /* call 0x00025B9F */

loc_00381AAD: ;
    esi = MEM32(ebp + 0x10);
    eax = MEM32(ebx + 0xC4);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    edi = esp + 0x30;
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
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381AD3u); RECOMP_ABI_CALL(0x0002858Eu, sub_0002858E); /* call 0x0002858E */

loc_00381AD3: ;
    edx = MEM32(ebx + 0xF8);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381AE3u); RECOMP_ABI_CALL(0x00025B9Fu, sub_00025B9F); /* call 0x00025B9F */

loc_00381AE3: ;
    SET_LO8(ebx, 1);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00381AEE: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381AF7u); RECOMP_ABI_CALL(0x00025802u, sub_00025802); /* call 0x00025802 */

loc_00381AF7: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00381B1B; /* je: equal / zero */

loc_00381B06: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381B0Cu); RECOMP_ABI_CALL(0x000262C5u, sub_000262C5); /* call 0x000262C5 */

loc_00381B0C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00381B1B; /* je: equal / zero */

loc_00381B13: ;
    xmm0 = XMM_SCALAR(MEMF(0x832A9C)); /* movss */

loc_00381B1B: ;
    ecx = MEM32(ebp + 0x18);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    MEM32(ecx) = edx;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    MEM32(ecx + 4) = eax;
    SET_LO8(ebx, 1);
    MEM32(ecx + 8) = edx;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00381B4F: ;
    ecx = MEM32(0x901DDC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00381C01; /* je: equal / zero */

loc_00381B5D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381B62u); RECOMP_ABI_CALL(0x00029290u, sub_00029290); /* call 0x00029290 */

loc_00381B62: ;
    esi = eax + 0x110;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00381B6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00381B6Cu); } /* indirect call */
    }

loc_00381B6F: ;
    ecx = MEM32(ebp + 0x18);
    SET_LO8(ebx, 1);
    MEM32(ecx) = esi;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00381B7F: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0x1C (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00381C01; /* jne: not equal / not zero */

loc_00381B89: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381B8Fu); RECOMP_ABI_CALL(0x0001F0BAu, sub_0001F0BA); /* call 0x0001F0BA */

loc_00381B8F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00381BBA; /* jne: not equal / not zero */

loc_00381B96: ;
    ecx = MEM32(0x901DDC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00381C01; /* je: equal / zero */

loc_00381BA0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381BA5u); RECOMP_ABI_CALL(0x00029290u, sub_00029290); /* call 0x00029290 */

loc_00381BA5: ;
    edx = MEM32(ebp + 0x18);
    _fb = (uint32_t)(0x370) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x370;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);
    MEM32(edx) = eax;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00381BBA: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(0x901E24);
    SET_LO8(ebx, 1);
    MEM32(eax) = ecx;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00381BD0: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0x1C (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00381C01; /* jne: not equal / not zero */

loc_00381BDA: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381BE0u); RECOMP_ABI_CALL(0x0001F0BAu, sub_0001F0BA); /* call 0x0001F0BA */

loc_00381BE0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x37) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x37 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00381BF6; /* ja: above (unsigned >) */

loc_00381BE8: ;
    edx = ZX8(MEM8(eax + 0x381C34));
    { uint32_t _jt = MEM32(edx * 4 + 0x381C2C); /* switch: 2 entries, 2 targets */
    if (_jt == 0x00381BF6u) goto loc_00381BF6;
    if (_jt == 0x00381C01u) goto loc_00381C01;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00381BF6: ;
    eax = MEM32(ebp + 0x18);
    MEM32(eax) = 0x29D17;

loc_00381BFF: ;
    SET_LO8(ebx, 1);

loc_00381C01: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00381C0A
 * Original: 0x00381C0A - 0x00381DCE (452 bytes, 382 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381C0A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00381C0A: ;
    edi = edi;
    { uint32_t _tmp = ecx;
    ecx = eax;
    eax = _tmp; }
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ss - segment register */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    /* nop */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x18)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebp + 0x18) = MEM8(ebp + 0x18) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebp + 0x18)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    { uint64_t _t = (uint64_t)(MEM8(edx)) - (uint64_t)(0x38) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(edx) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(edx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    SET_HI8(edx, HI8(edx) + HI8(ecx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(HI8(ebx)) - (uint64_t)(MEM8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_HI8(ebx, (uint32_t)_t); }  /* sbb */
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + 0x1B)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edi + 0x1B) = MEM8(edi + 0x1B) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edi + 0x1B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00381C41; /* jg: greater (signed >) */

loc_00381C26: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    { uint32_t _rcv = RC_ROT((uint32_t)(MEM8(ebx)), (unsigned)(1), &_cf, 8, 0);
      MEM8(ebx) = _rcv; } /* rcr */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax + edi)) + (uint64_t)(ebx)) >> 32) & 1);
    MEM32(eax + edi) = MEM32(eax + edi) + ebx;
    _fa = (uint32_t)(MEM32(eax + edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(edx)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    SET_HI8(edx, HI8(edx) + HI8(edx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edi) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00381C41: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_HI8(eax, HI8(eax) + LO8(ecx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00381DB8u); RECOMP_ABI_CALL(0x00022E9Au, sub_00022E9A); /* call 0x00022E9A */

loc_00381DB8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00381DC8; /* je: equal / zero */

loc_00381DBF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00381DC5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00381DC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00381DC8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00381DE0
 * Original: 0x00381DE0 - 0x00381E17 (55 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00381DE0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00381E13; /* je: equal / zero */

loc_00381DEB: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x2DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00381DFCu); RECOMP_ABI_CALL(0x000369C7u, sub_000369C7); /* call 0x000369C7 */

loc_00381DFC: ;
    edx = MEM32(esi + 0x2DC);
    ecx = MEM32(esi + 0x2D8);
    PUSH32(esp, 0x381770);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00381E13u); RECOMP_ABI_CALL(0x00036283u, sub_00036283); /* call 0x00036283 */

loc_00381E13: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00381E30
 * Original: 0x00381E30 - 0x00381E87 (87 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381E30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00381E30: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8F0040);
    eax = MEM32(eax + 0xF4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = ecx;
    MEM8(esp + 0x1C) = LO8(ecx);
    ecx = esp;
    MEM16(esp + 0xC) = 0x50;
    MEM32(esp + 0x20) = eax;
    MEM32(esp) = 0x7B8E7C;
    PUSH32(esp, 0x00381E66u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00381E66: ;
    ecx = MEM32(0x8F0044);
    MEM8(esp + 0x1C) = 1;
    edx = MEM32(ecx + 0xF4);
    ecx = esp;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0x00381E83u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00381E83: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00381EA0
 * Original: 0x00381EA0 - 0x00381F4E (174 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00381EA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x138);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esi + 0x115) = LO8(ebx);
    MEM32(esi + 0x34) = 0x7B891F;
    if (CMP_EQ(_fa, _fb)) goto loc_00381F05; /* je: equal / zero */

loc_00381EBD: ;
    MEM8(esi + 0x764) = 1;
    MEM8(esi + 0x767) = LO8(ebx);
    MEM8(esi + 0x768) = LO8(ebx);
    eax = MEM32(0x8FC1D0);
    MEM32(eax + 0x21C) = 1;
    ecx = MEM32(esi + 0x778);
    PUSH32(esp, ecx);
    MEM8(esi + 0x116) = 1;
    MEM8(esi + 0x117) = LO8(ebx);
    PUSH32(esp, 0x00381EF8u); RECOMP_ABI_CALL(0x0002569Au, sub_0002569A); /* call 0x0002569A */

loc_00381EF8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x8F0CD8;
    PUSH32(esp, 0x00381F05u); RECOMP_ABI_CALL(0x000133B4u, sub_000133B4); /* call 0x000133B4 */

loc_00381F05: ;
    MEM8(esi + 0x88C) = LO8(ebx);
    MEM32(esi + 0xDC) = ebx;
    MEM32(esi + 0x140) = ebx;
    edx = MEM32(0x901E28);
    MEM32(edx + 0xD0) = ebx;
    eax = MEM32(0x901E28);
    MEM8(eax + 0xD4) = 1;
    ecx = MEM32(0x901E28);
    MEM8(ecx + 0x76B) = LO8(ebx);
    MEM32(esi + 0x770) = ebx;
    MEM32(esi + 0x774) = 0x3E8;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00381F80
 * Original: 0x00381F80 - 0x00381FD9 (89 bytes, 36 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00381F80: ;
    SET_LO8(eax, MEM8(ecx + 0x760));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx + 0x74C;
    if (CMP_NE(_fa, _fb)) goto loc_00381F98; /* jne: not equal / not zero */

loc_00381F91: ;
    SET_LO8(eax, MEM8(esi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00381FD5; /* je: equal / zero */

loc_00381F98: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00381FD4; /* je: equal / zero */

loc_00381FA1: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00381FADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00381FAAu); } /* indirect call */
    }

loc_00381FAD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x2C); PUSH32(esp, 0x00381FB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00381FB0u); } /* indirect call */
    }

loc_00381FB3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00381FD4; /* je: equal / zero */

loc_00381FB8: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x14), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00381FC5; /* jne: not equal / not zero */

loc_00381FBE: ;
    SET_LO8(eax, MEM8(esi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00381FD4; /* je: equal / zero */

loc_00381FC5: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00381FCDu); RECOMP_ABI_CALL(0x0003773Cu, sub_0003773C); /* call 0x0003773C */

loc_00381FCD: ;
    ecx = esi;
    PUSH32(esp, 0x00381FD4u); RECOMP_ABI_CALL(0x000336A0u, sub_000336A0); /* call 0x000336A0 */

loc_00381FD4: ;
    POP32(esp, edi);

loc_00381FD5: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00381FF0
 * Original: 0x00381FF0 - 0x003821C1 (465 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00381FF0: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(esi + 0x88C) = LO8(ebx);
    MEM8(esi + 0x118) = LO8(ebx);
    MEM32(esi + 0x120) = ebx;
    MEM8(esi + 0x119) = LO8(ebx);
    MEM8(esi + 0x11D) = LO8(ebx);
    MEM8(esi + 0x11E) = LO8(ebx);
    MEM8(esi + 0x116) = LO8(ebx);
    MEM32(esi + 0x8A0) = ebx;
    eax = MEM32(0x901E34);
    MEM32(eax) = ebx;
    ecx = MEM32(0x901E38);
    MEM32(ecx) = ebx;
    ecx = MEM32(esi + 0x140);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00382044; /* je: equal / zero */

loc_0038203F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00382044u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00382041u); } /* indirect call */
    }

loc_00382044: ;
    ecx = MEM32(0x901E30);
    PUSH32(esp, 0x0038204Fu); RECOMP_ABI_CALL(0x00014A4Du, sub_00014A4D); /* call 0x00014A4D */

loc_0038204F: ;
    ecx = esi;
    MEM8(esi + 0x88D) = LO8(ebx);
    MEM8(esi + 0x88E) = LO8(ebx);
    MEM8(esi + 0x764) = LO8(ebx);
    PUSH32(esp, 0x00382068u); RECOMP_ABI_CALL(0x000199BCu, sub_000199BC); /* call 0x000199BC */

loc_00382068: ;
    eax = MEM32(0x901E40);
    ecx = MEM32(eax + 0x1210);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x1208);
    PUSH32(esp, 0x0038207Fu); RECOMP_ABI_CALL(0x0002BA09u, sub_0002BA09); /* call 0x0002BA09 */

loc_0038207F: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x77C) = eax;
    MEM32(esi + 0x780) = eax;
    MEM32(esi + 0x784) = eax;
    _fa = (uint32_t)(MEM8(esi + 0x768)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x768), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003820B8; /* je: equal / zero */

loc_0038209D: ;
    _fa = (uint32_t)(MEM8(esi + 0x115)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x115), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003820B8; /* jne: not equal / not zero */

loc_003820A5: ;
    edx = MEM32(0x8FC1D0);
    MEM32(edx + 0x21C) = ebx;
    MEM8(esi + 0x117) = 1;

loc_003820B8: ;
    MEM32(esi + 0x778) = 0x7FFF;
    PUSH32(esp, 0x003820C7u); RECOMP_ABI_CALL(0x00026540u, sub_00026540); /* call 0x00026540 */

loc_003820C7: ;
    eax = MEM32(0x901E3C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esi;
    MEM8(eax + 0x1C) = 1;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00382100u); RECOMP_ABI_CALL(0x000175FEu, sub_000175FE); /* call 0x000175FE */

loc_00382100: ;
    _fa = (uint32_t)(MEM8(esi + 0x768)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x768), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00382123; /* je: equal / zero */

loc_00382109: ;
    _fa = (uint32_t)(MEM8(esi + 0x115)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x115), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00382123; /* jne: not equal / not zero */

loc_00382111: ;
    eax = MEM32(0x8FC1D0);
    MEM32(eax + 0x21C) = ebx;
    MEM8(esi + 0x117) = 1;

loc_00382123: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0038212Au); RECOMP_ABI_CALL(0x0001BE74u, sub_0001BE74); /* call 0x0001BE74 */

loc_0038212A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00382132u); RECOMP_ABI_CALL(0x0001BE74u, sub_0001BE74); /* call 0x0001BE74 */

loc_00382132: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0038213Au); RECOMP_ABI_CALL(0x0001BE74u, sub_0001BE74); /* call 0x0001BE74 */

loc_0038213A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00382142u); RECOMP_ABI_CALL(0x0001BE74u, sub_0001BE74); /* call 0x0001BE74 */

loc_00382142: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0038214Au); RECOMP_ABI_CALL(0x0001BE74u, sub_0001BE74); /* call 0x0001BE74 */

loc_0038214A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 5);
    PUSH32(esp, 0x00382152u); RECOMP_ABI_CALL(0x0001BE74u, sub_0001BE74); /* call 0x0001BE74 */

loc_00382152: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x00382160u); RECOMP_ABI_CALL(0x00026DB0u, sub_00026DB0); /* call 0x00026DB0 */

loc_00382160: ;
    ecx = MEM32(esi + 0x788);
    PUSH32(esp, 0x0038216Bu); RECOMP_ABI_CALL(0x0002B5E5u, sub_0002B5E5); /* call 0x0002B5E5 */

loc_0038216B: ;
    MEM8(eax + 0x45) = 1;
    ecx = MEM32(esi + 0x788);
    PUSH32(esp, 0x0038217Au); RECOMP_ABI_CALL(0x0002B5E5u, sub_0002B5E5); /* call 0x0002B5E5 */

loc_0038217A: ;
    MEM8(eax + 0x44) = 1;
    ecx = MEM32(esi + 0x788);
    PUSH32(esp, 0x00382189u); RECOMP_ABI_CALL(0x0002B5E5u, sub_0002B5E5); /* call 0x0002B5E5 */

loc_00382189: ;
    MEM8(eax + 0x46) = 1;
    ecx = MEM32(esi + 0x788);
    edx = MEM32(ecx + 0xD4);
    MEM8(edx + 0x46) = LO8(ebx);
    eax = MEM32(esi + 0x788);
    ecx = MEM32(eax + 0xD4);
    MEM8(ecx + 0x44) = LO8(ebx);
    MEM8(esi + 0x766) = LO8(ebx);
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, 1);
    PUSH32(esp, 0x003821BEu); RECOMP_ABI_CALL(0x0001B0F5u, sub_0001B0F5); /* call 0x0001B0F5 */

loc_003821BE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00382240
 * Original: 0x00382240 - 0x0038267F (1087 bytes, 281 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00382240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00382240: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x901E28);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x2D8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382262u); RECOMP_ABI_CALL(0x0002126Bu, sub_0002126B); /* call 0x0002126B */

loc_00382262: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0038230D; /* jne: not equal / not zero */

loc_00382275: ;
    xmm1 = XMM_SCALAR(MEMF(0x832AB0)); /* movss */
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x832AAC)); /* movss */
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x832AA8)); /* movss */
    eax = MEM32(esp + 0x18);
    MEM32(0x8FC4E8) = ecx;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(0x831D58)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD414)); /* movss */
    MEM32(0x8FC4EC) = edx;
    MEM32(0x8FC4F0) = eax;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(0x8FC4F4) = ecx;
    ecx = MEM32(esp + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8FC4F8) = edx;
    MEM32(0x8FC4FC) = ecx;
    MEM32(0x8FC500) = eax;
    MEMF(0x8FC504) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0038230D: ;
    edx = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(0x7AD348)); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x832AA4)); /* movss */
    ecx = MEM32(esp + 0x14);
    MEM32(0x8FC4E8) = edx;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    xmm1 = XMM_SCALAR(MEMF(0x832AA0)); /* movss */
    MEM32(0x8FC4F0) = edx;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(0x831D58)); /* movss */
    MEM32(0x8FC4F4) = edx;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    xmm1 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    MEM32(0x8FC4EC) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8FC4F8) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(0x8FC4FC) = edx;
    MEM32(0x8FC500) = ecx;
    MEMF(0x8FC504) = xmm1.f[0]; /* movss */
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    if (CMP_GE(_fas, _fbs)) ecx = edi; /* cmovge */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x901E28);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x54) = edi;
    ecx = MEM32(ecx + 0x2D8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003823FAu); RECOMP_ABI_CALL(0x00033696u, sub_00033696); /* call 0x00033696 */

loc_003823FA: ;
    ecx = MEM32(0x8FCBE0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esp + 0x44) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003825C0; /* je: equal / zero */

loc_0038240C: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003825B5; /* je: equal / zero */

loc_00382418: ;
    _fa = (uint32_t)(MEM32(0x8FC604)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8FC604), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003825B5; /* jne: not equal / not zero */

loc_00382425: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x20;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x38) = LO8(ebx);
    MEM32(esp + 0x20) = eax;
    MEM8(esp + 0x24) = 0x3B;
    MEM8(esp + 0x25) = 1;
    MEM8(esp + 0x26) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038244Bu); RECOMP_ABI_CALL(0x000168A7u, sub_000168A7); /* call 0x000168A7 */

loc_0038244B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    ecx = esp + 0x54;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038245Au); RECOMP_ABI_CALL(0x00019133u, sub_00019133); /* call 0x00019133 */

loc_0038245A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038256E; /* je: equal / zero */

loc_00382462: ;
    edx = MEM32(0x901E28);
    MEM32(esp + 0x54) = 0;
    eax = MEM32(edx + 0x2D8);
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    PUSH32(esp, esi);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00382488u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00382485u); } /* indirect call */
    }

loc_00382488: ;
    eax = MEM32(esp + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00382557; /* je: equal / zero */

loc_00382494: ;
    ecx = MEM32(esp + 0x58);
    MEM32(esp + 0x5C) = 0;
    esi = MEM32(ecx);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003824B7; /* jne: not equal / not zero */

loc_003824A9: ;
    edx = esi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003824B4u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003824B4: ;
    MEM32(esi + 8) = eax;

loc_003824B7: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 0x1C (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00382557; /* jne: not equal / not zero */

loc_003824C5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x003824CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003824C9u); } /* indirect call */
    }

loc_003824CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038250A; /* jne: not equal / not zero */

loc_003824D0: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003824D6u); RECOMP_ABI_CALL(0x00011249u, sub_00011249); /* call 0x00011249 */

loc_003824D6: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003824DCu); RECOMP_ABI_CALL(0x000358E2u, sub_000358E2); /* call 0x000358E2 */

loc_003824DC: ;
    ecx = MEM32(eax * 4 + 0x8E8EB8);
    eax = MEM32(ecx + 0x48);
    edx = MEM32(eax + 0x1C);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + ebp * 4 + 0x68) = edx;
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x3C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + 0x38));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xB) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ebx, LO8(ebx) | LO8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_00382557;

loc_0038250A: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00382511u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038250Eu); } /* indirect call */
    }

loc_00382511: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00382557; /* jne: not equal / not zero */

loc_00382516: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038251Cu); RECOMP_ABI_CALL(0x0001F0BAu, sub_0001F0BA); /* call 0x0001F0BA */

loc_0038251C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    ecx = MEM32(0x901E34);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382533u); RECOMP_ABI_CALL(0x00027C65u, sub_00027C65); /* call 0x00027C65 */

loc_00382533: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00382557; /* jle: less or equal (signed <=) */

loc_00382539: ;
    /* nop */

loc_00382540: ;
    edx = MEM32(esp + ecx * 4 + 0x80);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + edi * 4 + 0xA8) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00382540; /* jl: less (signed <) */

loc_00382557: ;
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382560u); RECOMP_ABI_CALL(0x000168A7u, sub_000168A7); /* call 0x000168A7 */

loc_00382560: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00382462; /* jne: not equal / not zero */

loc_0038256A: ;
    MEM8(esp + 0x38) = LO8(ebx);

loc_0038256E: ;
    eax = edi + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00382594; /* je: equal / zero */

loc_00382575: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, edi);
    edx = esp + 0xB4;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    eax = esp + 0x74;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382594u); RECOMP_ABI_CALL(0x0002EC04u, sub_0002EC04); /* call 0x0002EC04 */

loc_00382594: ;
    ecx = esp + 0x4C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038259Du); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_0038259D: ;
    SET_LO8(eax, MEM8(esp + 0x26));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003825C0; /* jne: not equal / not zero */

loc_003825A5: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003825C0; /* je: equal / zero */

loc_003825AD: ;
    SET_LO8(ecx, MEM8(esp + 0x24));
    MEM8(eax) = LO8(ecx);
    goto loc_003825C0;

loc_003825B5: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003825C0u); RECOMP_ABI_CALL(0x0002EC04u, sub_0002EC04); /* call 0x0002EC04 */

loc_003825C0: ;
    edx = MEM32(esp + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x2C); /* subss */
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x34);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x30); /* subss */
    MEM32(0x8FC4E8) = edx;
    edx = esp + 0x20;
    MEM32(0x8FC4EC) = eax;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x34); /* subss */
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    MEM32(0x8FC4F0) = ecx;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382622u); RECOMP_ABI_CALL(0x000257A8u, sub_000257A8); /* call 0x000257A8 */

loc_00382622: ;
    ecx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEM32(0x8FC4F4) = ecx;
    edx = MEM32(eax + 4);
    MEM32(0x8FC4F8) = edx;
    ecx = MEM32(eax + 8);
    MEM32(0x8FC4FC) = ecx;
    edx = MEM32(eax + 0xC);
    ecx = MEM32(0x8FC44C);
    MEMF(0x8FC4FC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8C6234)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x50); /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8FC500) = edx;
    MEMF(0x8FC504) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382677u); RECOMP_ABI_CALL(0x00023368u, sub_00023368); /* call 0x00023368 */

loc_00382677: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00382790
 * Original: 0x00382790 - 0x00382D57 (1479 bytes, 416 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00382790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00382790: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(0x901E28);
    SET_LO8(eax, MEM8(ecx + 0x88C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx + 0x88C;
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003827C5; /* je: equal / zero */

loc_003827B7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003827BCu); RECOMP_ABI_CALL(0x000175FEu, sub_000175FE); /* call 0x000175FE */

loc_003827BC: ;
    MEM8(esi) = 0;
    ecx = MEM32(0x901E28);

loc_003827C5: ;
    MEM32(ecx + 0x140) = ebx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = ecx;

loc_003827D1: ;
    eax = MEM32(ecx + 0x8E8F88);
    edx = MEM32(eax + 0x420);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038284D; /* je: equal / zero */

loc_003827E2: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(eax + 0x20);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    esi = eax + 0x80;
    eax = MEM32(0x8EAD9C);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    ecx = 0x10;
    edi = esp + 0x70;
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
    esi = MEM32(eax + edx * 4 + 0xC);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x78;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382838u); RECOMP_ABI_CALL(0x000155A6u, sub_000155A6); /* call 0x000155A6 */

loc_00382838: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382849u); RECOMP_ABI_CALL(0x00016695u, sub_00016695); /* call 0x00016695 */

loc_00382849: ;
    ecx = MEM32(esp + 0x10);

loc_0038284D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_003827D1; /* jl: less (signed <) */

loc_0038285D: ;
    eax = MEM32(0x901E28);
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x118;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = 0;
    MEM32(eax + 8) = 0;
    MEM8(eax + 1) = 0;
    MEM8(eax + 5) = 0;
    MEM8(eax + 6) = 0;
    ecx = MEM32(0x8E8F88);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038288Bu); RECOMP_ABI_CALL(0x00017CD4u, sub_00017CD4); /* call 0x00017CD4 */

loc_0038288B: ;
    ecx = MEM32(0x8E8F8C);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382899u); RECOMP_ABI_CALL(0x00017CD4u, sub_00017CD4); /* call 0x00017CD4 */

loc_00382899: ;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003828A6u); RECOMP_ABI_CALL(0x0001B0F5u, sub_0001B0F5); /* call 0x0001B0F5 */

loc_003828A6: ;
    eax = MEM32(0x901E3C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM8(eax + 0x1C) = 1;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x901E28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003828E3u); RECOMP_ABI_CALL(0x0001BE29u, sub_0001BE29); /* call 0x0001BE29 */

loc_003828E3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003828E8u); RECOMP_ABI_CALL(0x00026540u, sub_00026540); /* call 0x00026540 */

loc_003828E8: ;
    eax = MEM32(ebx + 0x89C);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00382903; /* jne: not equal / not zero */

loc_003828F5: ;
    MEM8(ebx + 0xA2C) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00382903: ;
    ecx = MEM32(ebx + 0x14);
    edx = MEM32(0x901E28);
    MEM32(edx + 0x34) = ecx;
    SET_LO8(eax, MEM8(ebx + 0xA2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(ebx + 0x898);
    if (CMP_EQ(_fa, _fb)) goto loc_00382A32; /* je: equal / zero */

loc_00382923: ;
    edi = MEM32(eax + 0x14);
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(edi);
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00382949; /* je: equal / zero */

loc_00382937: ;
    edx = MEM32(edi + 8);
    ecx = MEM32(0x901E28);
    PUSH32(esp, edx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382949u); RECOMP_ABI_CALL(0x00020D61u, sub_00020D61); /* call 0x00020D61 */

loc_00382949: ;
    ecx = MEM32(ebx + 0x89C);
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(0x901E28);
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0038298D; /* je: equal / zero */

loc_0038295F: ;
    esi = eax + 0x2DC;
    eax = MEM32(ecx + 4);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382971u); RECOMP_ABI_CALL(0x000369C7u, sub_000369C7); /* call 0x000369C7 */

loc_00382971: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0x381770);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x2D8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382988u); RECOMP_ABI_CALL(0x00036283u, sub_00036283); /* call 0x00036283 */

loc_00382988: ;
    eax = MEM32(0x901E28);

loc_0038298D: ;
    ecx = MEM32(esp + 0x14);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00382B78; /* jle: less or equal (signed <=) */

loc_0038299A: ;
    edx = edi + 0xC;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0xC) = ecx;
    goto loc_003829B0;

loc_003829A7: ;
    eax = MEM32(0x901E28);
    edi = MEM32(esp + 0x18);

loc_003829B0: ;
    ecx = MEM32(edx + 4);
    esi = MEM32(edx);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax + 0x144);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax + ecx * 4 + 0x148;
    ecx = ecx + 1;
    MEM32(eax + 0x144) = ecx;
    MEM32(edi) = 0;
    if ((_fa == 0)) goto loc_00382A17; /* je: equal / zero */

loc_003829D9: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00382A17; /* jle: less or equal (signed <=) */

loc_003829E1: ;
    ecx = MEM32(0x909328);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003829F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003829F2u); } /* indirect call */
    }

loc_003829F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00382A02; /* je: equal / zero */

loc_003829F9: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382A00u); RECOMP_ABI_CALL(0x00027E22u, sub_00027E22); /* call 0x00027E22 */

loc_00382A00: ;
    goto loc_00382A04;

loc_00382A02: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00382A04: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(edi) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382A13u); RECOMP_ABI_CALL(0x0002CDA5u, sub_0002CDA5); /* call 0x0002CDA5 */

loc_00382A13: ;
    edx = MEM32(esp + 0x14);

loc_00382A17: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0xC) = eax;
    if ((_fa != 0)) goto loc_003829A7; /* jne: not equal / not zero */

loc_00382A2D: ;
    goto loc_00382B78;

loc_00382A32: ;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 0x14);
    ecx = MEM32(0x901E28);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382A45u); RECOMP_ABI_CALL(0x00020D61u, sub_00020D61); /* call 0x00020D61 */

loc_00382A45: ;
    eax = MEM32(ebx + 0x89C);
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(0x901E28);
    esi = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00382A7F; /* je: equal / zero */

loc_00382A5A: ;
    edi = edx + 0x2DC;
    edx = MEM32(eax + 4);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382A6Cu); RECOMP_ABI_CALL(0x000369C7u, sub_000369C7); /* call 0x000369C7 */

loc_00382A6C: ;
    eax = MEM32(edi);
    ecx = MEM32(esi + 0x2D8);
    PUSH32(esp, 0x381770);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382A7Fu); RECOMP_ABI_CALL(0x00036283u, sub_00036283); /* call 0x00036283 */

loc_00382A7F: ;
    edi = MEM32(ebx + 0x89C);
    eax = MEM32(edi + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00382AC7; /* je: equal / zero */

loc_00382A8E: ;
    esi = MEM32(edi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00382AC7; /* je: equal / zero */

loc_00382A95: ;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00382AC4; /* je: equal / zero */

loc_00382A9A: ;
    eax = MEM32(0x901E30);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xA6C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0xA6C) (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xA68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0xA68) (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) | LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esp + 0x1F) = LO8(edx);
    if ((_fa != 0)) goto loc_00382AC4; /* jne: not equal / not zero */

loc_00382AB9: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382ABFu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00382ABF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00382AC4: ;
    MEM32(edi + 0x14) = ecx;

loc_00382AC7: ;
    MEM32(edi + 0xC) = ecx;
    _fa = (uint32_t)(MEM32(ebx + 0xA28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xA28), ecx (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00382B78; /* jle: less or equal (signed <=) */

loc_00382ADA: ;
    edx = ebx + 0x8A0;
    MEM32(esp + 0x10) = edx;

loc_00382AE4: ;
    eax = MEM32(edx);
    ecx = MEM32(eax + 4);
    esi = MEM32(eax + 0x14);
    eax = MEM32(0x901E28);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 0x144);
    edi = eax + ecx * 4 + 0x148;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(eax + 0x144) = ecx;
    MEM32(edi) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00382B51; /* je: equal / zero */

loc_00382B13: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00382B51; /* jle: less or equal (signed <=) */

loc_00382B1B: ;
    ecx = MEM32(0x909328);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00382B2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00382B2Cu); } /* indirect call */
    }

loc_00382B2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00382B3C; /* je: equal / zero */

loc_00382B33: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382B3Au); RECOMP_ABI_CALL(0x00027E22u, sub_00027E22); /* call 0x00027E22 */

loc_00382B3A: ;
    goto loc_00382B3E;

loc_00382B3C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00382B3E: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(edi) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382B4Du); RECOMP_ABI_CALL(0x0002CDA5u, sub_0002CDA5); /* call 0x0002CDA5 */

loc_00382B4D: ;
    edx = MEM32(esp + 0x10);

loc_00382B51: ;
    eax = MEM32(edx);
    MEM32(eax + 0xC) = 4;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(ebx + 0xA28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00382AE4; /* jl: less (signed <) */

loc_00382B78: ;
    ecx = MEM32(ebx + 0x898);
    MEM32(ecx + 0xC) = 4;
    ecx = MEM32(0x901E34);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382B90u); RECOMP_ABI_CALL(0x00023E71u, sub_00023E71); /* call 0x00023E71 */

loc_00382B90: ;
    ecx = MEM32(0x901E38);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382B9Bu); RECOMP_ABI_CALL(0x00023E71u, sub_00023E71); /* call 0x00023E71 */

loc_00382B9B: ;
    esi = MEM32(0x901E28);
    edx = MEM32(esi + 0x788);
    eax = MEM32(edx + 0xD4);
    _fb = (uint32_t)(0x788) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x788;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 0x44) = 1;
    ecx = MEM32(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382BBEu); RECOMP_ABI_CALL(0x0002B5E5u, sub_0002B5E5); /* call 0x0002B5E5 */

loc_00382BBE: ;
    MEM8(eax + 0x46) = 0;
    ecx = MEM32(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382BC9u); RECOMP_ABI_CALL(0x0002B5E5u, sub_0002B5E5); /* call 0x0002B5E5 */

loc_00382BC9: ;
    MEM8(eax + 0x45) = 0;
    ecx = MEM32(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382BD4u); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_00382BD4: ;
    MEM8(eax + 0x44) = 0;
    ecx = MEM32(0x901E28);
    MEM8(ecx + 0x76B) = 0;
    eax = MEM32(0x901E28);
    esi = MEM32(eax + 0x2DC);
    edx = MEM32(esi);
    edi = MEM32(eax + 0x2D8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1B);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00382C01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00382BFEu); } /* indirect call */
    }

loc_00382C01: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382C0Du); RECOMP_ABI_CALL(0x00019133u, sub_00019133); /* call 0x00019133 */

loc_00382C0D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1B);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00382C1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00382C1Cu); } /* indirect call */
    }

loc_00382C1F: ;
    edx = MEM32(ebx + 0x898);
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00382C56; /* jne: not equal / not zero */

loc_00382C2C: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382C3Bu); RECOMP_ABI_CALL(0x00019133u, sub_00019133); /* call 0x00019133 */

loc_00382C3B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x13);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00382C4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00382C4Au); } /* indirect call */
    }

loc_00382C4D: ;
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382C56u); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_00382C56: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = MEM32(esp + 0x68);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x70) = 0;
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382C8Du); RECOMP_ABI_CALL(0x000174EBu, sub_000174EB); /* call 0x000174EB */

loc_00382C8D: ;
    edx = MEM32(0x8FC1D0);
    eax = MEM32(edx + 0x20C);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382CA2u); RECOMP_ABI_CALL(0x00020A9Bu, sub_00020A9B); /* call 0x00020A9B */

loc_00382CA2: ;
    ecx = MEM32(0x901E28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382CB0u); RECOMP_ABI_CALL(0x0002E876u, sub_0002E876); /* call 0x0002E876 */

loc_00382CB0: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00382CBD; /* jne: not equal / not zero */

loc_00382CB9: ;
    PUSH32(esp, 0);
    goto loc_00382CE7;

loc_00382CBD: ;
    edx = MEM32(0x901E28);
    MEM8(edx + 0x114) = 0;
    eax = MEM32(ebx + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382CD4u); RECOMP_ABI_CALL(0x0001936Du, sub_0001936D); /* call 0x0001936D */

loc_00382CD4: ;
    ecx = MEM32(0x901E28);
    MEM8(ecx + 0x114) = 1;
    edx = MEM32(ebx + 8);
    PUSH32(esp, edx);
    ecx = edi;

loc_00382CE7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382CECu); RECOMP_ABI_CALL(0x0001936Du, sub_0001936D); /* call 0x0001936D */

loc_00382CEC: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382CF3u); RECOMP_ABI_CALL(0x0002126Bu, sub_0002126B); /* call 0x0002126B */

loc_00382CF3: ;
    esi = eax;
    eax = MEM32(ebx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00382D04; /* je: equal / zero */

loc_00382CFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00382D19; /* jne: not equal / not zero */

loc_00382D04: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00382D0D; /* jne: not equal / not zero */

loc_00382D08: ;
    MEM32(ebx + 0x10) = esi;
    goto loc_00382D19;

loc_00382D0D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382D12u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_00382D12: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    MEM32(ebx + 0x10) = edx;

loc_00382D19: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382D20u); RECOMP_ABI_CALL(0x000143B3u, sub_000143B3); /* call 0x000143B3 */

loc_00382D20: ;
    ecx = 0x8FC5D8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382D2Au); RECOMP_ABI_CALL(0x00024281u, sub_00024281); /* call 0x00024281 */

loc_00382D2A: ;
    eax = MEM32(0x901E28);
    MEM8(eax + 0xE0) = 1;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00382D47; /* jne: not equal / not zero */

loc_00382D3D: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382D44u); RECOMP_ABI_CALL(0x00019E62u, sub_00019E62); /* call 0x00019E62 */

loc_00382D44: ;
    MEM32(ebx + 0xC) = eax;

loc_00382D47: ;
    ecx = esp + 0x5C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382D50u); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_00382D50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00382ED0
 * Original: 0x00382ED0 - 0x00382FA9 (217 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00382ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00382ED0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00382ED9u); RECOMP_ABI_CALL(0x00026540u, sub_00026540); /* call 0x00026540 */

loc_00382ED9: ;
    eax = MEM32(0x901E28);
    MEM32(eax + 0x140) = 0;
    ecx = MEM32(0x901E34);
    PUSH32(esp, 0x00382EF3u); RECOMP_ABI_CALL(0x00037980u, sub_00037980); /* call 0x00037980 */

loc_00382EF3: ;
    ecx = MEM32(0x901E38);
    PUSH32(esp, 0x00382EFEu); RECOMP_ABI_CALL(0x00037980u, sub_00037980); /* call 0x00037980 */

loc_00382EFE: ;
    ecx = MEM32(0x8FC1D0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x00382F0Bu); RECOMP_ABI_CALL(0x00020028u, sub_00020028); /* call 0x00020028 */

loc_00382F0B: ;
    PUSH32(esp, 0x00382F10u); RECOMP_ABI_CALL(0x00026540u, sub_00026540); /* call 0x00026540 */

loc_00382F10: ;
    SET_LO8(eax, MEM8(esi + 0xA2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00382FA7; /* jne: not equal / not zero */

loc_00382F1F: ;
    ecx = MEM32(0x901E28);
    MEM32(ecx + 0x34) = 0x7B891F;
    ecx = MEM32(0x901E28);
    _fa = (uint32_t)(MEM8(ecx + 0x760)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x760), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00382F45; /* jne: not equal / not zero */

loc_00382F3B: ;
    SET_LO8(eax, MEM8(ecx + 0x761));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00382F4C; /* je: equal / zero */

loc_00382F45: ;
    PUSH32(esp, 0x00382F4Au); RECOMP_ABI_CALL(0x000175FEu, sub_000175FE); /* call 0x000175FE */

loc_00382F4A: ;
    goto loc_00382F53;

loc_00382F4C: ;
    MEM8(ecx + 0x88C) = 1;

loc_00382F53: ;
    ecx = MEM32(0x901E28);
    PUSH32(esp, 0x00382F5Eu); RECOMP_ABI_CALL(0x00016767u, sub_00016767); /* call 0x00016767 */

loc_00382F5E: ;
    eax = MEM32(0x901E28);
    MEM32(esp) = 0;
    ecx = MEM32(eax + 0x100);
    ecx = MEM32(ecx);
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00382F7Bu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00382F7B: ;
    ecx = 0x901D8C;
    PUSH32(esp, 0x00382F85u); RECOMP_ABI_CALL(0x0002EE39u, sub_0002EE39); /* call 0x0002EE39 */

loc_00382F85: ;
    ecx = 0x8B42A8;
    PUSH32(esp, 0x00382F8Fu); RECOMP_ABI_CALL(0x00036AE9u, sub_00036AE9); /* call 0x00036AE9 */

loc_00382F8F: ;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00382F9Cu); RECOMP_ABI_CALL(0x0001B0F5u, sub_0001B0F5); /* call 0x0001B0F5 */

loc_00382F9C: ;
    ecx = MEM32(0x901E30);
    PUSH32(esp, 0x00382FA7u); RECOMP_ABI_CALL(0x00013DAAu, sub_00013DAA); /* call 0x00013DAA */

loc_00382FA7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00382FE0
 * Original: 0x00382FE0 - 0x003830BA (218 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00382FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00382FE0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00383051; /* jne: not equal / not zero */

loc_00382FEE: ;
    PUSH32(esp, 0x00382FF3u); RECOMP_ABI_CALL(0x00028912u, sub_00028912); /* call 0x00028912 */

loc_00382FF3: ;
    ecx = eax + 0xD60;
    PUSH32(esp, 0x00382FFEu); RECOMP_ABI_CALL(0x000129FFu, sub_000129FF); /* call 0x000129FF */

loc_00382FFE: ;
    eax = MEM32(0x901E3C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEM8(eax + 0x1C) = 1;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    eax = MEM32(0x901E3C);
    MEM8(eax + 0x1C) = 1;
    MEMF(eax) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x901E3C);
    PUSH32(esp, 0x00383048u); RECOMP_ABI_CALL(0x00016D25u, sub_00016D25); /* call 0x00016D25 */

loc_00383048: ;
    MEM8(esi + 0x15) = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00383051: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003830B5; /* jne: not equal / not zero */

loc_00383056: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = MEM32(0x901E28);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx + 0x10C);
    ecx = MEM32(edx);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00383091u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00383091: ;
    ecx = MEM32(0x901E28);
    MEM32(esp + 4) = 0;
    edx = MEM32(ecx + 0x108);
    ecx = MEM32(edx);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003830B1u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003830B1: ;
    MEM8(esi + 0x15) = 1;

loc_003830B5: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003830F0
 * Original: 0x003830F0 - 0x003833D9 (745 bytes, 184 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003830F0(void)
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

loc_003830F0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003833D4; /* je: equal / zero */

loc_00383101: ;
    edx = MEM32(esi + 8);
    ecx = MEM32(esi + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, ebx);
    MEM32(esi + 8) = edx;
    SET_LO8(ebx, 1);
    if (CMP_L(_fas, _fbs)) goto loc_00383149; /* jl: less (signed <) */

loc_0038311C: ;
    MEM8(esi + 0x15) = LO8(ebx);
    eax = MEM32(0x901E3C);
    MEM8(eax + 0x1C) = LO8(ebx);
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00383149; /* jne: not equal / not zero */

loc_00383131: ;
    PUSH32(esp, 0x00383136u); RECOMP_ABI_CALL(0x00028912u, sub_00028912); /* call 0x00028912 */

loc_00383136: ;
    ecx = eax + 0xD60;
    PUSH32(esp, 0x00383141u); RECOMP_ABI_CALL(0x000129FFu, sub_000129FF); /* call 0x000129FF */

loc_00383141: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */

loc_00383149: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003833D3; /* ja: above (unsigned >) */

loc_00383158: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3833DC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0038315Fu) goto loc_0038315F;
    if (_jt == 0x003831DCu) goto loc_003831DC;
    if (_jt == 0x00383349u) goto loc_00383349;
    if (_jt == 0x0038338Fu) goto loc_0038338F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0038315F: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 8); /* cvtsi2ss */
    xmm2.f[0] = (float)(int32_t)MEM32(esi + 0x10); /* cvtsi2ss */
    ecx = MEM32(0x901E28);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx + 0x10C);
    ecx = MEM32(edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003831A1u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003831A1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x003831A8u); RECOMP_ABI_CALL(0x0001EE26u, sub_0001EE26); /* call 0x0001EE26 */

loc_003831A8: ;
    SET_LO8(eax, MEM8(esi + 0x15));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003833D3; /* je: equal / zero */

loc_003831B6: ;
    ecx = MEM32(0x901E28);
    MEM32(esp + 0xC) = 0;
    edx = MEM32(ecx + 0x108);
    ecx = MEM32(edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003831D6u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003831D6: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003831DC: ;
    PUSH32(esp, 0x003831E1u); RECOMP_ABI_CALL(0x00028912u, sub_00028912); /* call 0x00028912 */

loc_003831E1: ;
    ecx = eax + 0xD60;
    PUSH32(esp, 0x003831ECu); RECOMP_ABI_CALL(0x00012C2Fu, sub_00012C2F); /* call 0x00012C2F */

loc_003831EC: ;
    fp_push((double)SMEM32(esi + 8)); /* fild */
    eax = MEM32(0x901DEC);
    ecx = MEM32(0x901DFC);
    PUSH32(esp, eax);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00383211u); RECOMP_ABI_CALL(0x0002E664u, sub_0002E664); /* call 0x0002E664 */

loc_00383211: ;
    fp_push(MEMF(0x8C5EC4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x7A9980)); /* fsub dword ptr [0x7a9980] */
    ecx = MEM32(0x901E3C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7A9980)); /* fadd dword ptr [0x7a9980] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8C5EC8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x7A9980)); /* fsub dword ptr [0x7a9980] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7A9980)); /* fadd dword ptr [0x7a9980] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8C5ECC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x7A9980)); /* fsub dword ptr [0x7a9980] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7A9980)); /* fadd dword ptr [0x7a9980] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8C5ED0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8C5ED4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8C5ED8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00383297u); RECOMP_ABI_CALL(0x0001A4F7u, sub_0001A4F7); /* call 0x0001A4F7 */

loc_00383297: ;
    xmm3 = XMM_SCALAR(MEMF(0x83212C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEM32(esi + 0x10) = 0x3A;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003833D3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_003832B5: ;
    xmm2 = XMM_SCALAR(MEMF(0x832130)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0 = xmm1; /* movaps */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003832C8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_003832C5: ;
    xmm0 = xmm2; /* movaps */

loc_003832C8: ;
    _fca = xmm1.f[0]; _fcb = MEMF(0x832134); /* comiss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB7CC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x832AB8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB1C8); /* addss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00383337; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x832134)) */

loc_003832ED: ;
    PUSH32(esp, 0x003832F2u); RECOMP_ABI_CALL(0x00028912u, sub_00028912); /* call 0x00028912 */

loc_003832F2: ;
    ecx = eax + 0xD60;
    PUSH32(esp, 0x003832FDu); RECOMP_ABI_CALL(0x000129FFu, sub_000129FF); /* call 0x000129FF */

loc_003832FD: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x832138)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00383313; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00383310: ;
    xmm1 = xmm0; /* movaps */

loc_00383313: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(0x832134); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7F1348); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AD388); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x832AB4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_00383337: ;
    eax = MEM32(0x901E3C);
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00383349: ;
    xmm2.f[0] = (float)(int32_t)MEM32(esi + 0x10); /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x7AA820); /* mulss */
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 8); /* cvtsi2ss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] / xmm2.f[0]; /* divss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0038337D; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00383372: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */

loc_0038337D: ;
    eax = MEM32(0x901E3C);
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0038338F: ;
    xmm3.f[0] = (float)(int32_t)MEM32(esi + 0x10); /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x7AA820); /* mulss */
    xmm2.f[0] = (float)(int32_t)MEM32(esi + 8); /* cvtsi2ss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] / xmm3.f[0]; /* divss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003833C3; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_003833B4: ;
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_003833C3: ;
    eax = MEM32(0x901E3C);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);

loc_003833D3: ;
    POP32(esp, ebx);

loc_003833D4: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00383231
 * Original: 0x00383231 - 0x003833D9 (424 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00383231(void)
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

loc_00383231: ;
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7A9980)); /* fadd dword ptr [0x7a9980] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8C5EC8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x7A9980)); /* fsub dword ptr [0x7a9980] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7A9980)); /* fadd dword ptr [0x7a9980] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8C5ECC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x7A9980)); /* fsub dword ptr [0x7a9980] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7A9980)); /* fadd dword ptr [0x7a9980] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8C5ED0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8C5ED4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8C5ED8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00383297u); RECOMP_ABI_CALL(0x0001A4F7u, sub_0001A4F7); /* call 0x0001A4F7 */

loc_00383297: ;
    xmm3 = XMM_SCALAR(MEMF(0x83212C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEM32(esi + 0x10) = 0x3A;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003833D3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_003832B5: ;
    xmm2 = XMM_SCALAR(MEMF(0x832130)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0 = xmm1; /* movaps */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003832C8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_003832C5: ;
    xmm0 = xmm2; /* movaps */

loc_003832C8: ;
    _fca = xmm1.f[0]; _fcb = MEMF(0x832134); /* comiss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB7CC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x832AB8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB1C8); /* addss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00383337; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x832134)) */

loc_003832ED: ;
    PUSH32(esp, 0x003832F2u); RECOMP_ABI_CALL(0x00028912u, sub_00028912); /* call 0x00028912 */

loc_003832F2: ;
    ecx = eax + 0xD60;
    PUSH32(esp, 0x003832FDu); RECOMP_ABI_CALL(0x000129FFu, sub_000129FF); /* call 0x000129FF */

loc_003832FD: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x832138)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00383313; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00383310: ;
    xmm1 = xmm0; /* movaps */

loc_00383313: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(0x832134); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7F1348); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AD388); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x832AB4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_00383337: ;
    eax = MEM32(0x901E3C);
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */

loc_0038337D: ;
    eax = MEM32(0x901E3C);
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_003833C3: ;
    eax = MEM32(0x901E3C);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);

loc_003833D3: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00383530
 * Original: 0x00383530 - 0x0038354F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00383530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00383530: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x832224;
    if (TEST_Z(_fa, _fb)) goto loc_00383549; /* je: equal / zero */

loc_00383540: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00383546u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00383546: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00383549: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00383560
 * Original: 0x00383560 - 0x003838ED (909 bytes, 201 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00383560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00383560: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x901E28);
    SET_LO8(eax, MEM8(ecx + 0x88C));
    esi = ecx + 0x88C;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038358D; /* je: equal / zero */

loc_00383580: ;
    PUSH32(esp, 0x00383585u); RECOMP_ABI_CALL(0x000175FEu, sub_000175FE); /* call 0x000175FE */

loc_00383585: ;
    MEM8(esi) = LO8(ebx);
    ecx = MEM32(0x901E28);

loc_0038358D: ;
    eax = MEM32(ecx + 0xD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003835A4; /* jle: less or equal (signed <=) */

loc_00383597: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0xD0) = eax;
    ecx = MEM32(0x901E28);

loc_003835A4: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(ecx + 0x140) = edi;
    eax = MEM32(0x901E3C);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM8(eax + 0x1C) = 1;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003835E1u); RECOMP_ABI_CALL(0x00026540u, sub_00026540); /* call 0x00026540 */

loc_003835E1: ;
    ecx = MEM32(0x8FC1D0);
    PUSH32(esp, 0x003835ECu); RECOMP_ABI_CALL(0x0001D558u, sub_0001D558); /* call 0x0001D558 */

loc_003835EC: ;
    eax = MEM32(0x901E28);
    MEM8(eax + 0x76B) = 1;
    esi = MEM32(0x901E28);
    ecx = MEM32(esi + 0x788);
    _fb = (uint32_t)(0x788) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x788;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0038360Fu); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_0038360F: ;
    MEM8(eax + 0x44) = 1;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0xD4);
    MEM8(edx + 0x44) = LO8(ebx);
    PUSH32(esp, 0x00383623u); RECOMP_ABI_CALL(0x000220B2u, sub_000220B2); /* call 0x000220B2 */

loc_00383623: ;
    ecx = MEM32(0x901E28);
    MEM8(ecx + 0x76A) = LO8(eax);
    eax = MEM32(0x901E28);
    edx = MEM32(eax + 0x77C);
    eax = MEM32(eax + 0x780);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x0038364Cu); RECOMP_ABI_CALL(0x000224D1u, sub_000224D1); /* call 0x000224D1 */

loc_0038364C: ;
    ecx = MEM32(0x901E40);
    PUSH32(esp, 0x00383657u); RECOMP_ABI_CALL(0x000147A0u, sub_000147A0); /* call 0x000147A0 */

loc_00383657: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00383666; /* jne: not equal / not zero */

loc_0038365B: ;
    MEM8(edi + 0x2C) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00383666: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM8(edi + 0x2C) = LO8(ebx);
    ecx = MEM32(0x901E40);
    ecx = MEM32(ecx + 0x1210);
    eax = MEM32(ecx + 0xC);
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edi + 8;
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    eax = MEM32(edi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0038389A; /* ja: above (unsigned >) */

loc_0038369A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3838F0); /* switch: 5 entries, 5 targets */
    if (_jt == 0x003836A1u) goto loc_003836A1;
    if (_jt == 0x00383706u) goto loc_00383706;
    if (_jt == 0x003837A8u) goto loc_003837A8;
    if (_jt == 0x00383827u) goto loc_00383827;
    if (_jt == 0x0038387Fu) goto loc_0038387F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003836A1: ;
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(0x901E28);
    eax = MEM32(edx + 0x780);
    PUSH32(esp, eax);
    PUSH32(esp, 0x15);
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x003836E5u); RECOMP_ABI_CALL(0x000320C5u, sub_000320C5); /* call 0x000320C5 */

loc_003836E5: ;
    ecx = MEM32(0x901E28);
    _fa = (uint32_t)(MEM8(ecx + 0xD4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0xD4), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003838A7; /* je: equal / zero */

loc_003836F7: ;
    ecx = 0x8F0DE8;
    PUSH32(esp, 0x00383701u); RECOMP_ABI_CALL(0x00035D92u, sub_00035D92); /* call 0x00035D92 */

loc_00383701: ;
    goto loc_003838A7;

loc_00383706: ;
    ecx = MEM32(0x901E28);
    PUSH32(esp, 0x00383711u); RECOMP_ABI_CALL(0x00030801u, sub_00030801); /* call 0x00030801 */

loc_00383711: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038372D; /* je: equal / zero */

loc_00383715: ;
    _fa = (uint32_t)(MEM8(ecx + 0xD4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0xD4), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038372D; /* je: equal / zero */

loc_0038371D: ;
    ecx = 0x8F0DE8;
    PUSH32(esp, 0x00383727u); RECOMP_ABI_CALL(0x00029150u, sub_00029150); /* call 0x00029150 */

loc_00383727: ;
    ecx = MEM32(0x901E28);

loc_0038372D: ;
    _fa = (uint32_t)(MEM32(ecx + 0x778)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x22) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x778), 0x22 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00383885; /* jne: not equal / not zero */

loc_0038373A: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7CC)); /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B9D60)); /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD3C8)); /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD388)); /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD310)); /* movss */
    PUSH32(esp, 0x32);
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD410)); /* movss */
    PUSH32(esp, 0x10);
    ecx = 0x8FC5D8;
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003837A3u); RECOMP_ABI_CALL(0x000320C5u, sub_000320C5); /* call 0x000320C5 */

loc_003837A3: ;
    goto loc_003838A7;

loc_003837A8: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD414)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AD310)); /* movss */
    MEM32(edi + 0x34) = ebx;
    MEM32(edi + 0x48) = ebx;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD440)); /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD388)); /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    ecx = esi;
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00383800u); RECOMP_ABI_CALL(0x00020041u, sub_00020041); /* call 0x00020041 */

loc_00383800: ;
    ecx = edi;
    PUSH32(esp, 0x00383807u); RECOMP_ABI_CALL(0x0001AC6Du, sub_0001AC6D); /* call 0x0001AC6D */

loc_00383807: ;
    eax = MEM32(0x901E28);
    _fa = (uint32_t)(MEM8(eax + 0xD4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xD4), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003838A7; /* je: equal / zero */

loc_00383818: ;
    ecx = 0x8F0DE8;
    PUSH32(esp, 0x00383822u); RECOMP_ABI_CALL(0x00011ABEu, sub_00011ABE); /* call 0x00011ABE */

loc_00383822: ;
    goto loc_003838A7;

loc_00383827: ;
    _fa = (uint32_t)(MEM32(edi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x3C), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003838A7; /* jne: not equal / not zero */

loc_0038382D: ;
    eax = 1;
    MEM32(edi + 0x3C) = eax;
    MEM32(edi + 0x34) = eax;
    PUSH32(esp, ebx);
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    PUSH32(esp, 0x15);
    ecx = 0x8FC5D8;
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00383870u); RECOMP_ABI_CALL(0x00018CB5u, sub_00018CB5); /* call 0x00018CB5 */

loc_00383870: ;
    ecx = 0x8F0DE8;
    PUSH32(esp, 0x0038387Au); RECOMP_ABI_CALL(0x00032728u, sub_00032728); /* call 0x00032728 */

loc_0038387A: ;
    MEM32(edi + 0x38) = ebx;
    goto loc_003838A7;

loc_0038387F: ;
    ecx = MEM32(0x901E28);

loc_00383885: ;
    edx = MEM32(ecx + 0x780);
    PUSH32(esp, edx);
    PUSH32(esp, 0x15);
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x00383898u); RECOMP_ABI_CALL(0x000320C5u, sub_000320C5); /* call 0x000320C5 */

loc_00383898: ;
    goto loc_003838A7;

loc_0038389A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x003838A7u); RECOMP_ABI_CALL(0x00018CB5u, sub_00018CB5); /* call 0x00018CB5 */

loc_003838A7: ;
    ecx = esi;
    PUSH32(esp, 0x003838AEu); RECOMP_ABI_CALL(0x00020041u, sub_00020041); /* call 0x00020041 */

loc_003838AE: ;
    ecx = esp + 0xC;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM16(esp + 0x18) = 0x58;
    MEM32(esp + 0x28) = 0xE;
    MEM32(esp + 0xC) = 0x7C2754;
    MEM8(esp + 0x2C) = 1;
    PUSH32(esp, 0x003838DBu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_003838DB: ;
    eax = MEM32(0x901E28);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax + 0xD4) = LO8(ebx);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003839F0
 * Original: 0x003839F0 - 0x00384179 (1929 bytes, 470 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003839F0(void)
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

loc_003839F0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebp = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00384171; /* je: equal / zero */

loc_00383A05: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00383A17; /* jne: not equal / not zero */

loc_00383A0C: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00384171; /* je: equal / zero */

loc_00383A17: ;
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00384171; /* je: equal / zero */

loc_00383A22: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00384171; /* jne: not equal / not zero */

loc_00383A2E: ;
    ecx = MEM32(0x901E28);
    ecx = MEM32(ecx + 0x788);
    PUSH32(esp, 0x00383A3Fu); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_00383A3F: ;
    edx = MEM32(edi);
    ecx = MEM32(eax + 0x48);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00383A4Cu); RECOMP_ABI_CALL(0x0001A407u, sub_0001A407); /* call 0x0001A407 */

loc_00383A4C: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00383A5A; /* je: equal / zero */

loc_00383A52: ;
    eax = MEM32(ecx + 0xC);
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 8)));
    eax = eax - MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00383A5C;

loc_00383A5A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00383A5C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ebp + 8;
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    ecx = esi;
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00383A9Cu); RECOMP_ABI_CALL(0x00020041u, sub_00020041); /* call 0x00020041 */

loc_00383A9C: ;
    eax = MEM32(0x901E28);
    ecx = MEM32(eax + 0x788);
    PUSH32(esp, 0x00383AACu); RECOMP_ABI_CALL(0x00031A1Cu, sub_00031A1C); /* call 0x00031A1C */

loc_00383AAC: ;
    ecx = MEM32(0x901E28);
    ecx = MEM32(ecx + 0x788);
    PUSH32(esp, 0x00383ABDu); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_00383ABD: ;
    edx = MEM32(eax + 0x48);
    eax = MEM32(edx + 0x1C);
    ecx = 0x8FC5D8;
    MEM32(edi + 0x90) = eax;
    PUSH32(esp, 0x00383AD3u); RECOMP_ABI_CALL(0x0003820Eu, sub_0003820E); /* call 0x0003820E */

loc_00383AD3: ;
    edx = MEM32(0x901E28);
    ecx = MEM32(ebp + 0x48);
    eax = MEM32(edx + 0x77C);
    ebx = (uint32_t)(int32_t)SMEM16(edi + 0x12);
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00383AF3u); RECOMP_ABI_CALL(0x000220B2u, sub_000220B2); /* call 0x000220B2 */

loc_00383AF3: ;
    ecx = MEM32(0x901E28);
    MEM8(ecx + 0x76A) = LO8(eax);
    eax = MEM32(edi);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00383B0F; /* je: equal / zero */

loc_00383B07: ;
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(MEM32(eax + 8)));
    ecx = ecx - MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00383B11;

loc_00383B0F: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00383B11: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm1.f[0]; /* movss */
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00383CCC; /* jne: not equal / not zero */

loc_00383B58: ;
    eax = ZX8(MEM8(edi + 0x1E));
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, MEM8(edi + 0x1F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(0x901E28);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(eax + 0x76A) = LO8(ecx);
    ecx = MEM32(ebp + 0x38);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x38) = ecx;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00383B88; /* je: equal / zero */

loc_00383B80: ;
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(edi + 8)));
    eax = eax - MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00383B8A;

loc_00383B88: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00383B8A: ;
    edx = MEM32(edi + 8);
    xmm3 = XMM_SCALAR(MEMF(0x7AD410)); /* movss */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7AB868); /* subss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00383BC3; /* jne: not equal / not zero */

loc_00383BB6: ;
    MEM32(esp + 0x2C) = 0xE;
    goto loc_00383C74;

loc_00383BC3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00383C74; /* jne: not equal / not zero */

loc_00383BCC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00383BD8; /* je: equal / zero */

loc_00383BD0: ;
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(edi + 8)));
    eax = eax - MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00383BDA;

loc_00383BD8: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00383BDA: ;
    edx = MEM32(edi + 8);
    ecx = MEM32(edi + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = 0; /* logical op clears CF */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (((3) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((3) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(0x901E28);
    xmm0 = XMM_SCALAR(MEMF(0x832AF8)); /* movss */
    MEMF(0x8FC3EC) = xmm3.f[0]; /* movss */
    ecx = MEM32(eax + 0x788);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ebx = 0x32;
    MEM32(esp + 0x2C) = 0x16;
    PUSH32(esp, 0x00383C2Fu); RECOMP_ABI_CALL(0x00031A1Cu, sub_00031A1C); /* call 0x00031A1C */

loc_00383C2F: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00383C3Au); RECOMP_ABI_CALL(0x00026216u, sub_00026216); /* call 0x00026216 */

loc_00383C3A: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(0x7B8DF8)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_00383C59; /* jb: below (unsigned <) */

loc_00383C51: ;
    MEM32(esp + 0x2C) = 0xB;

loc_00383C59: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    MEM32(ebp + 0x38) = 0;

loc_00383C74: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(0x7AD378); /* subss */
    MEMF(esi + 8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7B1D9C)); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi + 0xC) = xmm4.f[0]; /* movss */
    xmm4 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AD440); /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    ecx = esi;
    MEMF(esi + 0x10) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x00383CC7u); RECOMP_ABI_CALL(0x00020041u, sub_00020041); /* call 0x00020041 */

loc_00383CC7: ;
    goto loc_00384126;

loc_00383CCC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00383D44; /* jne: not equal / not zero */

loc_00383CD1: ;
    ebx = MEM32(ebp + 0x38);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x38) = ebx;
    eax = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = (uint32_t)(int32_t)SMEM16(edi + 0x12);
    ecx = MEM32(ebx * 4 + 0x8E8EB8);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    MEM32(esp + 0x10) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00383CFF; /* jne: not equal / not zero */

loc_00383CF2: ;
    MEM32(esp + 0x2C) = 0x15;
    goto loc_00384126;

loc_00383CFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00384126; /* jne: not equal / not zero */

loc_00383D08: ;
    ebx = (uint32_t)(int32_t)SMEM16(edi + 0x14);
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD440)); /* movss */
    MEM32(esp + 0x2C) = 0x13;
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    goto loc_00384123;

loc_00383D44: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3A (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00383EC4; /* jne: not equal / not zero */

loc_00383D4D: ;
    MEM32(ebp + 0x38) = MEM32(ebp + 0x38) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = (uint32_t)(int32_t)SMEM16(edi + 0x12);
    edx = MEM32(ebx * 4 + 0x8E8EB8);
    SET_LO8(ecx, MEM8(edx + 0x30));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(edi);
    ecx = MEM32(eax + 8);
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x2C) = ecx;
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    ecx = edi;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00383D83u); RECOMP_ABI_CALL(0x00021A7Cu, sub_00021A7C); /* call 0x00021A7C */

loc_00383D83: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x2C) / fp_top()); /* fdivr dword ptr [esp + 0x2c] */
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00383D99; /* je: equal / zero */

loc_00383D91: ;
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(MEM32(eax + 8)));
    ecx = ecx - MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00383D9B;

loc_00383D99: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00383D9B: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(0x7AD378); /* subss */
    MEMF(esi + 8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AB7CC)); /* movss */
    xmm3 = xmm0; /* movaps */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(0x7DA278)); /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    MEMF(esi + 0xC) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x30), 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00383E70; /* jne: not equal / not zero */

loc_00383E08: ;
    _fa = (uint32_t)(MEM32(ebp + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x38), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00383E70; /* jne: not equal / not zero */

loc_00383E0E: ;
    edx = MEM32(edi);
    xmm0.f[0] = (float)(int32_t)MEM32(edx + 8); /* cvtsi2ss */
    ebx = (uint32_t)(int32_t)SMEM16(edi + 0x14);
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEMF(esi) = xmm1.f[0]; /* movss */
    eax = 0xC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD370)); /* movss */
    ecx = esi;
    MEM32(esp + 0x2C) = 0x14;
    MEMF(esi + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00383E6Bu); RECOMP_ABI_CALL(0x00020041u, sub_00020041); /* call 0x00020041 */

loc_00383E6B: ;
    goto loc_00384126;

loc_00383E70: ;
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x00383E77u); RECOMP_ABI_CALL(0x00016F1Eu, sub_00016F1E); /* call 0x00016F1E */

loc_00383E77: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00383E99; /* je: equal / zero */

loc_00383E7E: ;
    ecx = esi;
    MEM32(esp + 0x2C) = 0x12;
    MEM32(ebp + 0x38) = 0;
    PUSH32(esp, 0x00383E94u); RECOMP_ABI_CALL(0x00020041u, sub_00020041); /* call 0x00020041 */

loc_00383E94: ;
    goto loc_00384126;

loc_00383E99: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD378)); /* movss */
    MEMF(0x8FC3EC) = xmm0.f[0]; /* movss */
    ecx = esi;
    MEM32(esp + 0x2C) = 0x16;
    MEM32(ebp + 0x38) = 0;
    PUSH32(esp, 0x00383EBFu); RECOMP_ABI_CALL(0x00020041u, sub_00020041); /* call 0x00020041 */

loc_00383EBF: ;
    goto loc_00384126;

loc_00383EC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x26 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00384000; /* jne: not equal / not zero */

loc_00383ECD: ;
    MEM32(ebp + 0x38) = MEM32(ebp + 0x38) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = MEM32(edi);
    edx = MEM32(ebx + 8);
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x2C) = edx;
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    ecx = edi;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00383EEAu); RECOMP_ABI_CALL(0x00021A7Cu, sub_00021A7C); /* call 0x00021A7C */

loc_00383EEA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x2C) / fp_top()); /* fdivr dword ptr [esp + 0x2c] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00383EFE; /* je: equal / zero */

loc_00383EF6: ;
    eax = MEM32(ebx + 0xC);
    _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebx + 8)));
    eax = eax - MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00383F00;

loc_00383EFE: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00383F00: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x30), 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = 0x32;
    if (CMP_NE(_fa, _fb)) goto loc_00383F4E; /* jne: not equal / not zero */

loc_00383F1B: ;
    _fa = (uint32_t)(MEM32(ebp + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x38), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00383F83; /* jne: not equal / not zero */

loc_00383F21: ;
    eax = MEM32(edi);
    xmm1.f[0] = (float)(int32_t)MEM32(eax + 8); /* cvtsi2ss */
    eax = 0x10;
    ecx = (int32_t)xmm1.f[0]; /* cvttss2si */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    ebx = (uint32_t)(int32_t)SMEM16(edi + 0x14);
    MEM32(esp + 0x2C) = 0x14;
    goto loc_00383F92;

loc_00383F4E: ;
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x14);
    eax = MEM32(edx * 4 + 0x8E8EB8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    PUSH32(esp, 0x1E);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0x00383F68u); RECOMP_ABI_CALL(0x00016F1Eu, sub_00016F1E); /* call 0x00016F1E */

loc_00383F68: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00383F79; /* je: equal / zero */

loc_00383F6F: ;
    MEM32(esp + 0x2C) = 0x13;
    goto loc_00383F8B;

loc_00383F79: ;
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x00383F80u); RECOMP_ABI_CALL(0x00016F1Eu, sub_00016F1E); /* call 0x00016F1E */

loc_00383F80: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00383F83: ;
    MEM32(esp + 0x2C) = 0xB;

loc_00383F8B: ;
    MEM32(ebp + 0x38) = 0;

loc_00383F92: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x7DA278); /* subss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7B1D9C)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0xC) = xmm2.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AA820); /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x7AD378)); /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    ecx = esi;
    MEMF(esi + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00383FFBu); RECOMP_ABI_CALL(0x00020041u, sub_00020041); /* call 0x00020041 */

loc_00383FFB: ;
    goto loc_00384126;

loc_00384000: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003840A2; /* jne: not equal / not zero */

loc_00384009: ;
    ecx = MEM32(ebp + 0x38);
    xmm1 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x38) = ecx;
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm1.f[0]; /* movss */
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00384049; /* je: equal / zero */

loc_00384041: ;
    eax = MEM32(ecx + 0xC);
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 8)));
    eax = eax - MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0038404B;

loc_00384049: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0038404B: ;
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    SET_LO16(edi, MEM16(edi + 0x12));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0x14 (16-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x38), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00384086; /* jne: not equal / not zero */

loc_0038406F: ;
    ecx = esi;
    ebx = SX16(LO16(edi));
    MEM32(esp + 0x2C) = 0x13;
    PUSH32(esp, 0x00384081u); RECOMP_ABI_CALL(0x00020041u, sub_00020041); /* call 0x00020041 */

loc_00384081: ;
    goto loc_00384126;

loc_00384086: ;
    ecx = esi;
    ebx = 0x32;
    MEM32(esp + 0x2C) = 0x12;
    MEM32(ebp + 0x38) = edx;
    PUSH32(esp, 0x0038409Du); RECOMP_ABI_CALL(0x00020041u, sub_00020041); /* call 0x00020041 */

loc_0038409D: ;
    goto loc_00384126;

loc_003840A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00384110; /* jne: not equal / not zero */

loc_003840A7: ;
    _fa = (uint32_t)(MEM16(edi + 0x10)) & 0xFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x10), 0xE (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00384126; /* jne: not equal / not zero */

loc_003840AE: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7CC)); /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B9D60)); /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD3C8)); /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD388)); /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD310)); /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD410)); /* movss */
    ebx = 0x32;
    MEM32(esp + 0x2C) = 0x10;
    MEMF(esi + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    goto loc_00384126;

loc_00384110: ;
    eax = MEM32(ebp + 0x48);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx + ecx + 0x13;
    MEM32(esp + 0x2C) = ecx;

loc_00384123: ;
    MEM32(ebp + 0x38) = edx;

loc_00384126: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x00384136u); RECOMP_ABI_CALL(0x000224D1u, sub_000224D1); /* call 0x000224D1 */

loc_00384136: ;
    eax = MEM32(esp + 0x2C);
    ecx = 0x8FC5D8;
    MEM32(ebp + 0x48) = eax;
    PUSH32(esp, 0x00384147u); RECOMP_ABI_CALL(0x0003820Eu, sub_0003820E); /* call 0x0003820E */

loc_00384147: ;
    ecx = MEM32(ebp + 0x48);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x00384157u); RECOMP_ABI_CALL(0x00018CB5u, sub_00018CB5); /* call 0x00018CB5 */

loc_00384157: ;
    ecx = esi;
    PUSH32(esp, 0x0038415Eu); RECOMP_ABI_CALL(0x00020041u, sub_00020041); /* call 0x00020041 */

loc_0038415E: ;
    edx = MEM32(0x901E28);
    ecx = MEM32(edx + 0x788);
    PUSH32(esp, 0x0038416Fu); RECOMP_ABI_CALL(0x00031A1Cu, sub_00031A1C); /* call 0x00031A1C */

loc_0038416F: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00384171: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00384360
 * Original: 0x00384360 - 0x00384423 (195 bytes, 48 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00384360(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00384360: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x901E28);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x140) = ebx;
    ecx = MEM32(0x8FC1D0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0038437Fu); RECOMP_ABI_CALL(0x00020028u, sub_00020028); /* call 0x00020028 */

loc_0038437F: ;
    ecx = MEM32(0x901E28);
    MEM8(ecx + 0x76B) = LO8(ebx);
    esi = MEM32(0x901E28);
    edx = MEM32(esi + 0x788);
    eax = MEM32(edx + 0xD4);
    _fb = (uint32_t)(0x788) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x788;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 0x44) = 1;
    ecx = MEM32(esi);
    PUSH32(esp, 0x003843AEu); RECOMP_ABI_CALL(0x0002B5E5u, sub_0002B5E5); /* call 0x0002B5E5 */

loc_003843AE: ;
    MEM8(eax + 0x46) = LO8(ebx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x003843B8u); RECOMP_ABI_CALL(0x0002B5E5u, sub_0002B5E5); /* call 0x0002B5E5 */

loc_003843B8: ;
    MEM8(eax + 0x45) = LO8(ebx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x003843C2u); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_003843C2: ;
    MEM8(eax + 0x44) = LO8(ebx);
    ecx = MEM32(0x901E40);
    ecx = MEM32(ecx + 0x1208);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003843D8u); RECOMP_ABI_CALL(0x0001A407u, sub_0001A407); /* call 0x0001A407 */

loc_003843D8: ;
    edx = MEM32(0x901E28);
    ecx = MEM32(edx + 0x788);
    PUSH32(esp, 0x003843E9u); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_003843E9: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x003843F1u); RECOMP_ABI_CALL(0x000268DDu, sub_000268DD); /* call 0x000268DD */

loc_003843F1: ;
    ecx = esp + 8;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x10) = ebx;
    MEM16(esp + 0x14) = 0x58;
    MEM32(esp + 0x24) = 0xE;
    MEM32(esp + 8) = 0x7C2754;
    MEM8(esp + 0x28) = LO8(ebx);
    PUSH32(esp, 0x0038441Du); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_0038441D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00384460
 * Original: 0x00384460 - 0x003844C7 (103 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00384460(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00384460: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = 0xFFFFFFFFu;
    MEM32(eax) = 0x832AFC;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x48) = 0x15;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003844E0
 * Original: 0x003844E0 - 0x003844FF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003844E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003844E0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x832224;
    if (TEST_Z(_fa, _fb)) goto loc_003844F9; /* je: equal / zero */

loc_003844F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003844F6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003844F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003844F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00384510
 * Original: 0x00384510 - 0x00384573 (99 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00384510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00384510: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00384559; /* je: equal / zero */

loc_0038451B: ;
    ecx = MEM32(0x901E40);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x94);
    ecx = eax + ecx + 0x1C;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00384559; /* je: equal / zero */

loc_00384531: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038453F; /* jne: not equal / not zero */

loc_00384538: ;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00384559; /* je: equal / zero */

loc_0038453F: ;
    edx = MEM32(eax + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00384559; /* je: equal / zero */

loc_00384546: ;
    edx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00384559; /* jne: not equal / not zero */

loc_0038454E: ;
    SET_LO8(eax, MEM8(esi + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038455D; /* je: equal / zero */

loc_00384555: ;
    MEM8(esi + 0x50) = 0;

loc_00384559: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0038455B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0038455D: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00384565u); RECOMP_ABI_CALL(0x00018ECCu, sub_00018ECC); /* call 0x00018ECC */

loc_00384565: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_NE(_fa, _fb)) goto loc_0038455B; /* jne: not equal / not zero */

loc_0038456E: ;
    MEM8(esi + 0x50) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00384590
 * Original: 0x00384590 - 0x00384606 (118 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00384590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00384590: ;
    eax = MEM32(ecx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003845AD; /* jl: less (signed <) */

loc_00384598: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003845A2; /* jle: less or equal (signed <=) */

loc_0038459D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003845AD; /* jne: not equal / not zero */

loc_003845A2: ;
    edx = MEM32(ecx + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

loc_003845AD: ;
    edx = MEM32(0x901E40);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi;

loc_003845C0: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003845E5; /* je: equal / zero */

loc_003845C6: ;
    ebx = MEM32(eax + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003845D4; /* jne: not equal / not zero */

loc_003845CD: ;
    ebx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003845E5; /* je: equal / zero */

loc_003845D4: ;
    ebx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003845E5; /* je: equal / zero */

loc_003845DB: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003845E5; /* jne: not equal / not zero */

loc_003845E3: ;
    edi = esi;

loc_003845E5: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x94;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1F (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003845C0; /* jl: less (signed <) */

loc_003845F1: ;
    _fa = (uint32_t)(MEM32(ecx + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x34), edi (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_00384603; /* jle: less or equal (signed <=) */

loc_003845F9: ;
    eax = MEM32(ecx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00384603; /* jne: not equal / not zero */

loc_00384600: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00384603: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00384630
 * Original: 0x00384630 - 0x00384848 (536 bytes, 185 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00384630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00384630: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    edx = MEM32(edi + 0x30);
    eax = edx + -10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003847D2; /* ja: above (unsigned >) */

loc_00384644: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x384848); /* switch: 8 entries, 8 targets */
    if (_jt == 0x0038464Bu) goto loc_0038464B;
    if (_jt == 0x00384670u) goto loc_00384670;
    if (_jt == 0x003846A1u) goto loc_003846A1;
    if (_jt == 0x00384727u) goto loc_00384727;
    if (_jt == 0x00384759u) goto loc_00384759;
    if (_jt == 0x00384786u) goto loc_00384786;
    if (_jt == 0x003847B1u) goto loc_003847B1;
    if (_jt == 0x003847D2u) goto loc_003847D2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0038464B: ;
    _fa = (uint32_t)(MEM32(edi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x3C), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003847C8; /* jne: not equal / not zero */

loc_00384655: ;
    ecx = MEM32(0x901E40);
    PUSH32(esp, 0x00384660u); RECOMP_ABI_CALL(0x00015033u, sub_00015033); /* call 0x00015033 */

loc_00384660: ;
    MEM32(edi + 0x3C) = eax;
    MEM32(edi + 0x34) = eax;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000356FD(); return; /* tail jmp 0x000356FD */

loc_00384670: ;
    _fa = (uint32_t)(MEM32(edi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x3C), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003847C8; /* jne: not equal / not zero */

loc_0038467A: ;
    eax = MEM32(0x901E28);
    ecx = MEM32(eax + 0x780);
    PUSH32(esp, ecx);
    ecx = MEM32(0x901E40);
    PUSH32(esp, 0x00384691u); RECOMP_ABI_CALL(0x0002B72Fu, sub_0002B72F); /* call 0x0002B72F */

loc_00384691: ;
    MEM32(edi + 0x3C) = eax;
    MEM32(edi + 0x34) = eax;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000356FD(); return; /* tail jmp 0x000356FD */

loc_003846A1: ;
    _fa = (uint32_t)(MEM32(edi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x3C), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003847C8; /* jne: not equal / not zero */

loc_003846AB: ;
    esi = MEM32(0x901E40);
    PUSH32(esp, ebp);
    ebp = MEM32(0x901E28);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_003846C0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003846FF; /* je: equal / zero */

loc_003846C6: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003846D4; /* jne: not equal / not zero */

loc_003846CD: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003846FF; /* je: equal / zero */

loc_003846D4: ;
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003846FF; /* je: equal / zero */

loc_003846DB: ;
    edx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003846FF; /* jne: not equal / not zero */

loc_003846E3: ;
    eax = MEM32(ebp + 0x780);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003846F1u); RECOMP_ABI_CALL(0x0002299Au, sub_0002299A); /* call 0x0002299A */

loc_003846F1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003846FF; /* je: equal / zero */

loc_003846F5: ;
    eax = MEM32(esi + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00384716; /* je: equal / zero */

loc_003846FF: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x94;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x1F (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003846C0; /* jl: less (signed <) */

loc_0038470B: ;
    POP32(esp, ebp);
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000356FD(); return; /* tail jmp 0x000356FD */

loc_00384716: ;
    POP32(esp, ebp);
    MEM32(edi + 0x3C) = ebx;
    MEM32(edi + 0x34) = ebx;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000356FD(); return; /* tail jmp 0x000356FD */

loc_00384727: ;
    _fa = (uint32_t)(MEM32(edi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x3C), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003847C8; /* jne: not equal / not zero */

loc_00384731: ;
    ecx = MEM32(0x901E28);
    edx = MEM32(ecx + 0x780);
    ecx = MEM32(0x901E40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00384749u); RECOMP_ABI_CALL(0x0002B72Fu, sub_0002B72F); /* call 0x0002B72F */

loc_00384749: ;
    MEM32(edi + 0x3C) = eax;
    MEM32(edi + 0x34) = eax;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000356FD(); return; /* tail jmp 0x000356FD */

loc_00384759: ;
    _fa = (uint32_t)(MEM32(edi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x3C), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003847C8; /* jne: not equal / not zero */

loc_0038475F: ;
    eax = MEM32(0x901E28);
    ecx = MEM32(eax + 0x77C);
    PUSH32(esp, ecx);
    ecx = MEM32(0x901E40);
    PUSH32(esp, 0x00384776u); RECOMP_ABI_CALL(0x000114DDu, sub_000114DD); /* call 0x000114DD */

loc_00384776: ;
    MEM32(edi + 0x3C) = eax;
    MEM32(edi + 0x34) = eax;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000356FD(); return; /* tail jmp 0x000356FD */

loc_00384786: ;
    _fa = (uint32_t)(MEM32(edi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x3C), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003847A7; /* jne: not equal / not zero */

loc_0038478C: ;
    ecx = MEM32(0x901E40);
    PUSH32(esp, 0x00384797u); RECOMP_ABI_CALL(0x0001C022u, sub_0001C022); /* call 0x0001C022 */

loc_00384797: ;
    ecx = 0x8F0DE8;
    MEM32(edi + 0x3C) = eax;
    MEM32(edi + 0x34) = eax;
    PUSH32(esp, 0x003847A7u); RECOMP_ABI_CALL(0x00035D92u, sub_00035D92); /* call 0x00035D92 */

loc_003847A7: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000356FD(); return; /* tail jmp 0x000356FD */

loc_003847B1: ;
    _fa = (uint32_t)(MEM32(edi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x3C), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003847C8; /* jne: not equal / not zero */

loc_003847B7: ;
    ecx = MEM32(0x901E40);
    PUSH32(esp, 0x003847C2u); RECOMP_ABI_CALL(0x000120EAu, sub_000120EA); /* call 0x000120EA */

loc_003847C2: ;
    MEM32(edi + 0x3C) = eax;
    MEM32(edi + 0x34) = eax;

loc_003847C8: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000356FD(); return; /* tail jmp 0x000356FD */

loc_003847D2: ;
    esi = MEM32(edi + 0x34);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00384829; /* jge: greater or equal (signed >=) */

loc_003847DA: ;
    ecx = MEM32(0x901E40);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x94);
    ecx = eax + ecx + 0x1C;
    /* nop */

loc_003847F0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003847FA; /* je: equal / zero */

loc_003847F5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038481D; /* jne: not equal / not zero */

loc_003847FA: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038481D; /* je: equal / zero */

loc_00384800: ;
    ebx = MEM32(eax + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038480E; /* jne: not equal / not zero */

loc_00384807: ;
    ebx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038481D; /* je: equal / zero */

loc_0038480E: ;
    ebx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038481D; /* je: equal / zero */

loc_00384815: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038482F; /* je: equal / zero */

loc_0038481D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x94;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1F (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003847F0; /* jl: less (signed <) */

loc_00384829: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0038482F: ;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00384837u); RECOMP_ABI_CALL(0x00018ECCu, sub_00018ECC); /* call 0x00018ECC */

loc_00384837: ;
    eax = MEM32(edi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00384842; /* jne: not equal / not zero */

loc_0038483E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x34) = esi;

loc_00384842: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00384940
 * Original: 0x00384940 - 0x00384945 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00384940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00384940: ;
    g_seh_ebp = ebp; sub_0003380D(); return; /* tail jmp 0x0003380D */

}

/**
 * sub_00384950
 * Original: 0x00384950 - 0x00384CC6 (886 bytes, 407 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00384950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00384950: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = ZX16(MEM16(edi + 6));
    _fb = (uint32_t)(0xFFFFFF9Au) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFF9Au)) >> 32) & 1);
    eax = eax + 0xFFFFFF9Au;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x21 (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = ecx;
    if (CMP_A(_fa, _fb)) goto loc_00384CA0; /* ja: above (unsigned >) */

loc_00384969: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x384CC8); /* switch: 34 entries, 31 targets */
    if (_jt == 0x00384970u) goto loc_00384970;
    if (_jt == 0x00384984u) goto loc_00384984;
    if (_jt == 0x00384998u) goto loc_00384998;
    if (_jt == 0x003849ACu) goto loc_003849AC;
    if (_jt == 0x003849C1u) goto loc_003849C1;
    if (_jt == 0x003849D5u) goto loc_003849D5;
    if (_jt == 0x003849E9u) goto loc_003849E9;
    if (_jt == 0x003849FDu) goto loc_003849FD;
    if (_jt == 0x00384A19u) goto loc_00384A19;
    if (_jt == 0x00384A35u) goto loc_00384A35;
    if (_jt == 0x00384A4Au) goto loc_00384A4A;
    if (_jt == 0x00384A58u) goto loc_00384A58;
    if (_jt == 0x00384A80u) goto loc_00384A80;
    if (_jt == 0x00384A99u) goto loc_00384A99;
    if (_jt == 0x00384AAEu) goto loc_00384AAE;
    if (_jt == 0x00384AF4u) goto loc_00384AF4;
    if (_jt == 0x00384B08u) goto loc_00384B08;
    if (_jt == 0x00384B1Cu) goto loc_00384B1C;
    if (_jt == 0x00384B3Fu) goto loc_00384B3F;
    if (_jt == 0x00384B58u) goto loc_00384B58;
    if (_jt == 0x00384B71u) goto loc_00384B71;
    if (_jt == 0x00384B85u) goto loc_00384B85;
    if (_jt == 0x00384BA1u) goto loc_00384BA1;
    if (_jt == 0x00384BB5u) goto loc_00384BB5;
    if (_jt == 0x00384BD3u) goto loc_00384BD3;
    if (_jt == 0x00384C22u) goto loc_00384C22;
    if (_jt == 0x00384C36u) goto loc_00384C36;
    if (_jt == 0x00384C4Bu) goto loc_00384C4B;
    if (_jt == 0x00384C70u) goto loc_00384C70;
    if (_jt == 0x00384C8Cu) goto loc_00384C8C;
    if (_jt == 0x00384CA0u) goto loc_00384CA0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00384970: ;
    edx = MEM32(esi);
    PUSH32(esp, 0x00384977u); RECOMP_ABI_CALL(0x00011C6Cu, sub_00011C6C); /* call 0x00011C6C */

loc_00384977: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0038497Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038497Bu); } /* indirect call */
    }

loc_0038497E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00384984: ;
    edx = MEM32(esi);
    PUSH32(esp, 0x0038498Bu); RECOMP_ABI_CALL(0x00022F8Au, sub_00022F8A); /* call 0x00022F8A */

loc_0038498B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00384992u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038498Fu); } /* indirect call */
    }

loc_00384992: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00384998: ;
    ebx = MEM32(esi);
    PUSH32(esp, 0x0038499Fu); RECOMP_ABI_CALL(0x000154A7u, sub_000154A7); /* call 0x000154A7 */

loc_0038499F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x003849A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003849A3u); } /* indirect call */
    }

loc_003849A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003849AC: ;
    ecx = MEM32(0x901DF4);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003849BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003849B8u); } /* indirect call */
    }

loc_003849BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003849C1: ;
    eax = MEM32(0x901DE4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003849CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003849CCu); } /* indirect call */
    }

loc_003849CF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003849D5: ;
    eax = MEM32(0x901D94);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003849E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003849E0u); } /* indirect call */
    }

loc_003849E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003849E9: ;
    ebx = MEM32(esi);
    PUSH32(esp, 0x003849F0u); RECOMP_ABI_CALL(0x0002281Eu, sub_0002281E); /* call 0x0002281E */

loc_003849F0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x003849F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003849F4u); } /* indirect call */
    }

loc_003849F7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003849FD: ;
    SET_LO8(ebx, MEM8(0x901D88));
    edx = MEM32(esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00384A13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00384A10u); } /* indirect call */
    }

loc_00384A13: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00384A19: ;
    edx = MEM32(0x8C5DB4);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = MEM32(esi);
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00384A2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00384A2Cu); } /* indirect call */
    }

loc_00384A2F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00384A35: ;
    ecx = MEM32(0x901E1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00384A44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00384A41u); } /* indirect call */
    }

loc_00384A44: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00384A4A: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00384A52u); RECOMP_ABI_CALL(0x00022DFFu, sub_00022DFF); /* call 0x00022DFF */

loc_00384A52: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00384A58: ;
    _fa = (uint32_t)(MEM32(esi + 0x77C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x77C), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00384A6B; /* jne: not equal / not zero */

loc_00384A61: ;
    MEM32(esi + 0x77C) = 0;

loc_00384A6B: ;
    eax = MEM32(esi + 0x77C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00384A7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00384A77u); } /* indirect call */
    }

loc_00384A7A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00384A80: ;
    PUSH32(esp, 0x00384A85u); RECOMP_ABI_CALL(0x0001D3AFu, sub_0001D3AF); /* call 0x0001D3AF */

loc_00384A85: ;
    edx = MEM32(esi);
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = esi;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00384A93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00384A90u); } /* indirect call */
    }

loc_00384A93: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00384A99: ;
    ecx = MEM32(0x901E10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00384AA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00384AA5u); } /* indirect call */
    }

loc_00384AA8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00384AAE: ;
    PUSH32(esp, 0x00384AB3u); RECOMP_ABI_CALL(0x0001EB0Bu, sub_0001EB0B); /* call 0x0001EB0B */

loc_00384AB3: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00384ABF; /* jne: not equal / not zero */

loc_00384ABA: ;
    ebx = 3;

loc_00384ABF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00384AC8u); RECOMP_ABI_CALL(0x000247FEu, sub_000247FE); /* call 0x000247FE */

loc_00384AC8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00384AE5; /* jne: not equal / not zero */

loc_00384ACC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00384AE0; /* je: equal / zero */

loc_00384AD1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00384AE0; /* je: equal / zero */

loc_00384AD6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00384AE0; /* je: equal / zero */

loc_00384ADB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00384AE5; /* jne: not equal / not zero */

loc_00384AE0: ;
    ebx = 1;

loc_00384AE5: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00384AEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00384AEBu); } /* indirect call */
    }

loc_00384AEE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00384AF4: ;
    ebx = MEM32(esi);
    PUSH32(esp, 0x00384AFBu); RECOMP_ABI_CALL(0x000146BFu, sub_000146BF); /* call 0x000146BF */

loc_00384AFB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x00384B02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00384AFFu); } /* indirect call */
    }

loc_00384B02: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00384B08: ;
    ebx = MEM32(esi);
    PUSH32(esp, 0x00384B0Fu); RECOMP_ABI_CALL(0x0002B7E8u, sub_0002B7E8); /* call 0x0002B7E8 */

loc_00384B0F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x00384B16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00384B13u); } /* indirect call */
    }

loc_00384B16: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00384B1C: ;
    eax = MEM32(0x901E28);
    eax = MEM32(eax + 0x77C);
    ebx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00384B2Fu); RECOMP_ABI_CALL(0x000183F5u, sub_000183F5); /* call 0x000183F5 */

loc_00384B2F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x00384B39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00384B36u); } /* indirect call */
    }

loc_00384B39: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00384B3F: ;
    ebx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00384B48u); RECOMP_ABI_CALL(0x000183F5u, sub_000183F5); /* call 0x000183F5 */

loc_00384B48: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x00384B52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00384B4Fu); } /* indirect call */
    }

loc_00384B52: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00384B58: ;
    ebx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00384B61u); RECOMP_ABI_CALL(0x000183F5u, sub_000183F5); /* call 0x000183F5 */

loc_00384B61: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x00384B6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00384B68u); } /* indirect call */
    }

loc_00384B6B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00384B71: ;
    eax = MEM32(0x8C5DB8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00384B7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00384B7Cu); } /* indirect call */
    }

loc_00384B7F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00384B85: ;
    SET_LO8(ebx, MEM8(0x901DE8));
    edx = MEM32(esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00384B9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00384B98u); } /* indirect call */
    }

loc_00384B9B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00384BA1: ;
    ebx = MEM32(esi);
    PUSH32(esp, 0x00384BA8u); RECOMP_ABI_CALL(0x0001FD67u, sub_0001FD67); /* call 0x0001FD67 */

loc_00384BA8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x00384BAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00384BACu); } /* indirect call */
    }

loc_00384BAF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00384BB5: ;
    eax = MEM32(esi + 0x778);
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00384BC3u); RECOMP_ABI_CALL(0x0002C977u, sub_0002C977); /* call 0x0002C977 */

loc_00384BC3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00384BCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00384BCAu); } /* indirect call */
    }

loc_00384BCD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00384BD3: ;
    PUSH32(esp, ebp);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 1;
    goto loc_00384BE0;

    /* nop */

loc_00384BE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00384BE9u); RECOMP_ABI_CALL(0x000247FEu, sub_000247FE); /* call 0x000247FE */

loc_00384BE9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00384BFA; /* jne: not equal / not zero */

loc_00384BED: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00384BF3u); RECOMP_ABI_CALL(0x000258D9u, sub_000258D9); /* call 0x000258D9 */

loc_00384BF3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00384C10; /* jne: not equal / not zero */

loc_00384BFA: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 9 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00384BE0; /* jl: less (signed <) */

loc_00384C00: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00384C09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00384C06u); } /* indirect call */
    }

loc_00384C09: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00384C10: ;
    edx = MEM32(esi);
    ebp = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00384C1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00384C18u); } /* indirect call */
    }

loc_00384C1B: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00384C22: ;
    ebx = MEM32(esi);
    PUSH32(esp, 0x00384C29u); RECOMP_ABI_CALL(0x00027648u, sub_00027648); /* call 0x00027648 */

loc_00384C29: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x00384C30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00384C2Du); } /* indirect call */
    }

loc_00384C30: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00384C36: ;
    ecx = MEM32(0x901E04);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00384C45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00384C42u); } /* indirect call */
    }

loc_00384C45: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00384C4B: ;
    PUSH32(esp, 0x00384C50u); RECOMP_ABI_CALL(0x00030572u, sub_00030572); /* call 0x00030572 */

loc_00384C50: ;
    ebx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00384C5Bu); RECOMP_ABI_CALL(0x000247FEu, sub_000247FE); /* call 0x000247FE */

loc_00384C5B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00384C61; /* jne: not equal / not zero */

loc_00384C5F: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00384C61: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00384C6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00384C67u); } /* indirect call */
    }

loc_00384C6A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00384C70: ;
    SET_LO8(ebx, MEM8(0x901DE9));
    eax = MEM32(esi);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00384C86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00384C83u); } /* indirect call */
    }

loc_00384C86: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00384C8C: ;
    ebx = MEM32(esi);
    PUSH32(esp, 0x00384C93u); RECOMP_ABI_CALL(0x0002C6D9u, sub_0002C6D9); /* call 0x0002C6D9 */

loc_00384C93: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x00384C9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00384C97u); } /* indirect call */
    }

loc_00384C9A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00384CA0: ;
    _fa = (uint32_t)(MEM16(edi + 4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 4), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00384CC0; /* je: equal / zero */

loc_00384CA7: ;
    edi = MEM32(edi + 0xC);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(edi));
    ecx = esi;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edi + edx * 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00384CC0u); RECOMP_ABI_CALL(0x0001D071u, sub_0001D071); /* call 0x0001D071 */

loc_00384CC0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00384CC6
 * Original: 0x00384CC6 - 0x00384E50 (394 bytes, 317 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00384CC6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00384CC6: ;
    edi = edi;
    if (_flags /* jo: overflow */) (void)0; /* goto loc_00384D13 - dead code, label not in function */

loc_00384CCA: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    _fa = (uint32_t)(MEM8(ecx + 0x38)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x38), LO8(ecx) (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + -1409271735)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(eax + -1409271735) = MEM8(eax + -1409271735) + LO8(ebx);
    _fa = (uint32_t)(MEM8(eax + -1409271735)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ecx + 0x38) = ROR32(MEM32(ecx + 0x38), 0);
    RECOMP_UNIMPL("aad 0x49", 0x00384CDCu); /* TODO: aad 0x49 */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    g_seh_ebp = ebp; sub_FD38852E(); return; /* tail jmp 0xFD38852E */

    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    { uint64_t _t = (uint64_t)(MEM32(edx + 0x38)) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(edx + 0x38) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(edx + 0x38)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(0x4A00384A)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(0x4A00384A) = MEM8(0x4A00384A) + HI8(edx);
    _fa = (uint32_t)(MEM8(0x4A00384A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, eax);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    _cf = 0; /* logical op clears CF */
    MEM8(edx + 0x38) = MEM8(edx + 0x38) | 0;
    _fa = (uint32_t)(MEM8(edx + 0x38)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    { uint32_t _rc = ecx; ecx = 1;
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (LO8(eax) == MEM8(edi));
        _cf = (LO8(eax) < MEM8(edi));
        edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe scasb */
    ecx = _rc; }
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    RECOMP_UNIMPL("hlt", 0x00384D04u); /* TODO: hlt */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x38) = MEM8(ebx + 0x38) | LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx + 0x38)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + -1610598324)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax + -1610598324) = MEM8(eax + -1610598324) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax + -1610598324)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esp--;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, MEM8(0x1C00384C));
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    RECOMP_UNIMPL("aas", 0x00384D1Cu); /* TODO: aas */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, eax);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, MEM8(0x7100384C));
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    _fa = (uint32_t)(MEM32(ebx + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + 0x38), ecx (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + -1258276789)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(ecx + -1258276789) = MEM8(ecx + -1258276789) + HI8(eax);
    _fa = (uint32_t)(MEM8(ecx + -1258276789)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebx + 0x38) = ROR32(MEM32(ebx + 0x38), LO8(ecx));
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + HI8(edx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esp--;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp--;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & MEM8(eax + edi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if (_flags /* jo: overflow */) goto loc_00384D96;

loc_00384D4A: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    MEM16(eax + edi) = 0 /* seg:cs */;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

loc_00384D96: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_00384E50
 * Original: 0x00384E50 - 0x00384EBF (111 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00384E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00384E50: ;
    SET_LO8(eax, MEM8(ecx + 0x760));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx + 0x74C;
    if (CMP_NE(_fa, _fb)) goto loc_00384E6B; /* jne: not equal / not zero */

loc_00384E64: ;
    SET_LO8(eax, MEM8(esi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00384EB8; /* je: equal / zero */

loc_00384E6B: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00384E80u); RECOMP_ABI_CALL(0x00022792u, sub_00022792); /* call 0x00022792 */

loc_00384E80: ;
    edx = MEM32(eax + 4);
    MEM32(esi + 4) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esi + 8) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(esi + 0xC) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = ecx;
    SET_LO8(edx, MEM8(eax + 0x14));
    MEM8(esi + 0x14) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 0x15));
    MEM8(esi + 0x15) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 0x16));
    ecx = esi;
    MEM8(esi + 0x16) = LO8(edx);
    PUSH32(esp, 0x00384EB1u); RECOMP_ABI_CALL(0x000336A0u, sub_000336A0); /* call 0x000336A0 */

loc_00384EB1: ;
    ecx = esi;
    PUSH32(esp, 0x00384EB8u); RECOMP_ABI_CALL(0x0002D557u, sub_0002D557); /* call 0x0002D557 */

loc_00384EB8: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00384EE0
 * Original: 0x00384EE0 - 0x00384EFD (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00384EE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00384EE0: ;
    SET_LO8(eax, MEM8(ecx + 0x760));
    _fb = (uint32_t)(0x74C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00384EFC; /* jne: not equal / not zero */

loc_00384EF0: ;
    SET_LO8(eax, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00384EFC; /* jne: not equal / not zero */

loc_00384EF7: ;
    g_seh_ebp = ebp; sub_000112B7(); return; /* tail jmp 0x000112B7 */

loc_00384EFC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00384F10
 * Original: 0x00384F10 - 0x00384F65 (85 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00384F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00384F10: ;
    eax = MEM32(0x8978F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00384F5A; /* je: equal / zero */

loc_00384F19: ;
    edx = 2;
    edi = edi;

loc_00384F20: ;
    _fa = (uint32_t)(MEM16(eax + 0xC)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xC), LO16(edx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00384F38; /* je: equal / zero */

loc_00384F26: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00384F20; /* jne: not equal / not zero */

loc_00384F2D: ;
    ecx = MEM32(ecx + 0x1208);
    g_seh_ebp = ebp; sub_00023CDC(); return; /* tail jmp 0x00023CDC */

loc_00384F38: ;
    edx = MEM32(ecx + 0x1208);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(eax + 0xE);
    eax = MEM32(edx + 0x1C);
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_00384F5A; /* jge: greater or equal (signed >=) */

loc_00384F56: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 8) = MEM32(esp + 8) + eax;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00384F5A: ;
    ecx = MEM32(ecx + 0x1208);
    g_seh_ebp = ebp; sub_00023CDC(); return; /* tail jmp 0x00023CDC */

}

/**
 * sub_00384F80
 * Original: 0x00384F80 - 0x00384FE5 (101 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00384F80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00384F80: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x20) = 0x7BA310;
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0x58) = 0x7CA664;
    MEMF(eax + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x80) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x84) = xmm0.f[0]; /* movss */
    MEM16(eax + 8) = LO16(ecx);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = 0x5A;
    MEM16(eax + 0xC) = LO16(ecx);
    MEM16(eax + 0xA) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00385000
 * Original: 0x00385000 - 0x00385031 (49 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00385000(void)
{

loc_00385000: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    esi = ecx;
    MEM32(esi) = eax;
    ecx = MEM32(edi + 4);
    edx = edi + 8;
    MEM32(esi + 4) = ecx;
    PUSH32(esp, edx);
    ecx = esi + 8;
    PUSH32(esp, 0x0038501Eu); RECOMP_ABI_CALL(0x0002BEE1u, sub_0002BEE1); /* call 0x0002BEE1 */

loc_0038501E: ;
    eax = MEM32(edi + 0x90);
    MEM32(esi + 0x90) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00385040
 * Original: 0x00385040 - 0x003850FB (187 bytes, 68 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00385040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00385040: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx + 0x1C;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebp;
    MEM32(esp + 0x10) = 0x1F;
    edi = edi;

loc_00385060: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003850D2; /* je: equal / zero */

loc_00385066: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00385074; /* jne: not equal / not zero */

loc_0038506D: ;
    edx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003850D2; /* je: equal / zero */

loc_00385074: ;
    edx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003850D2; /* je: equal / zero */

loc_0038507B: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003850D2; /* jne: not equal / not zero */

loc_00385083: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebp;
    esi = 0x1F;
    /* nop */

loc_00385090: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003850BB; /* je: equal / zero */

loc_00385096: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003850A2; /* jne: not equal / not zero */

loc_0038509C: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003850BB; /* je: equal / zero */

loc_003850A2: ;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003850BB; /* je: equal / zero */

loc_003850A8: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003850BB; /* jne: not equal / not zero */

loc_003850B0: ;
    SET_LO16(ecx, MEM16(edx + 0x12));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebx + 0x12)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(ebx + 0x12) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003850BB; /* jne: not equal / not zero */

loc_003850BA: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003850BB: ;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x94;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00385090; /* jne: not equal / not zero */

loc_003850C4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003850D2; /* jle: less or equal (signed <=) */

loc_003850C8: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x12);
    eax = edi;
    MEM32(esp + 0x14) = edx;

loc_003850D2: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x94;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    if ((_fa != 0)) goto loc_00385060; /* jne: not equal / not zero */

loc_003850E7: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 8);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00385130
 * Original: 0x00385130 - 0x0038514E (30 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00385130(void)
{

loc_00385130: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 0x00385140u); RECOMP_ABI_CALL(0x0002BEE1u, sub_0002BEE1); /* call 0x0002BEE1 */

loc_00385140: ;
    MEM32(esi + 0x90) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00385160
 * Original: 0x00385160 - 0x003851D1 (113 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00385160(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00385160: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEMF(eax + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x28) = 0x7BA310;
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x54) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x58) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0x68) = ecx;
    MEM32(eax + 0x60) = 0x7CA664;
    MEMF(eax + 0x84) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x88) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x8C) = xmm0.f[0]; /* movss */
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 8) = 0x5A;
    MEM16(eax + 0x10) = LO16(ecx);
    MEM16(eax + 0x14) = LO16(edx);
    MEM16(eax + 0x12) = LO16(edx);
    MEM32(eax) = ecx;
    MEM32(eax + 0x90) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003851F0
 * Original: 0x003851F0 - 0x00385401 (529 bytes, 152 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003851F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003851F0: ;
    ecx = MEM32(0x901E28);
    SET_LO8(eax, MEM8(ecx + 0x114));
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003853A0; /* je: equal / zero */

loc_0038520A: ;
    edx = MEM32(esp + 0x3C);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x424BC7A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x424BC7A (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003852BF; /* ja: above (unsigned >) */

loc_0038521B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_003852AA; /* je: equal / zero */

loc_00385221: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x424A85C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x424A85C (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0038526E; /* ja: above (unsigned >) */

loc_00385228: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00385259; /* je: equal / zero */

loc_0038522A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A6F56) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9A6F56 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038524D; /* je: equal / zero */

loc_00385231: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A7F20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9A7F20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003853A0; /* jne: not equal / not zero */

loc_0038523C: ;
    ecx = 0x901D89;
    PUSH32(esp, 0x00385246u); RECOMP_ABI_CALL(0x00030E6Eu, sub_00030E6E); /* call 0x00030E6E */

loc_00385246: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0038524D: ;
    PUSH32(esp, 0x00385252u); RECOMP_ABI_CALL(0x0001CF1Du, sub_0001CF1D); /* call 0x0001CF1D */

loc_00385252: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00385259: ;
    eax = MEM32(edx + 4);
    PUSH32(esp, eax);
    ecx = 0x8F0CF0;
    PUSH32(esp, 0x00385267u); RECOMP_ABI_CALL(0x00012C52u, sub_00012C52); /* call 0x00012C52 */

loc_00385267: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0038526E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x424B973) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x424B973 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00385295; /* je: equal / zero */

loc_00385275: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x424BA07) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x424BA07 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003853A0; /* jne: not equal / not zero */

loc_00385280: ;
    ecx = MEM32(edx + 4);
    PUSH32(esp, ecx);
    ecx = 0x8F0CF0;
    PUSH32(esp, 0x0038528Eu); RECOMP_ABI_CALL(0x00034F82u, sub_00034F82); /* call 0x00034F82 */

loc_0038528E: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00385295: ;
    edx = MEM32(edx + 4);
    PUSH32(esp, edx);
    ecx = 0x8F0CF0;
    PUSH32(esp, 0x003852A3u); RECOMP_ABI_CALL(0x000223A0u, sub_000223A0); /* call 0x000223A0 */

loc_003852A3: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003852AA: ;
    eax = MEM32(edx + 4);
    PUSH32(esp, eax);
    ecx = 0x8F0CF0;
    PUSH32(esp, 0x003852B8u); RECOMP_ABI_CALL(0x0002F938u, sub_0002F938); /* call 0x0002F938 */

loc_003852B8: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003852BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x89A6C33) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x89A6C33 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003853EA; /* ja: above (unsigned >) */

loc_003852CA: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00385307; /* je: equal / zero */

loc_003852CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49A6DF9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x49A6DF9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003852F3; /* je: equal / zero */

loc_003852D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49A7108) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x49A7108 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003853A0; /* jne: not equal / not zero */

loc_003852DE: ;
    ecx = MEM32(edx + 4);
    PUSH32(esp, ecx);
    ecx = 0x8B42A8;
    PUSH32(esp, 0x003852ECu); RECOMP_ABI_CALL(0x000149C6u, sub_000149C6); /* call 0x000149C6 */

loc_003852EC: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003852F3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = 0x901D8C;
    PUSH32(esp, 0x00385300u); RECOMP_ABI_CALL(0x0002A0FAu, sub_0002A0FA); /* call 0x0002A0FA */

loc_00385300: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00385307: ;
    PUSH32(esp, esi);
    esi = MEM32(edx + 4);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00385314u); RECOMP_ABI_CALL(0x000358E2u, sub_000358E2); /* call 0x000358E2 */

loc_00385314: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003853A7; /* je: equal / zero */

loc_00385321: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00385364; /* je: equal / zero */

loc_00385324: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0038539F; /* jne: not equal / not zero */

loc_00385327: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038539F; /* je: equal / zero */

loc_00385330: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038539F; /* je: equal / zero */

loc_00385334: ;
    ecx = esp + 8;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x10) = ebx;
    MEM16(esp + 0x14) = 0x58;
    MEM32(esp + 0x24) = 0xB;
    MEM32(esp + 8) = 0x7C2754;
    PUSH32(esp, 0x0038535Cu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_0038535C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00385364: ;
    ecx = MEM32(esi + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x41 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = esp + 8;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x10) = ebx;
    MEM16(esp + 0x14) = 0x58;
    MEM32(esp + 0x24) = 0xA;
    MEM32(esp + 8) = 0x7C2754;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x0038539Fu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_0038539F: ;
    POP32(esp, esi);

loc_003853A0: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003853A7: ;
    edx = MEM32(esi + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3C (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x10) = ebx;
    MEM16(esp + 0x14) = 0x58;
    MEM32(esp + 0x24) = 0xA;
    MEM32(esp + 8) = 0x7C2754;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x28) = ecx;
    ecx = esp + 8;
    PUSH32(esp, 0x003853E2u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_003853E2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003853EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC9A7F87) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC9A7F87 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003853A0; /* jne: not equal / not zero */

loc_003853F1: ;
    edx = MEM32(edx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003853FAu); RECOMP_ABI_CALL(0x0001F853u, sub_0001F853); /* call 0x0001F853 */

loc_003853FA: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00385490
 * Original: 0x00385490 - 0x00385A16 (1414 bytes, 379 insns)
 * Category: game_camera
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00385490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00385490: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x832C64);
    edi = esi + 0x18;
    PUSH32(esp, ebp);
    ecx = edi;
    MEM32(esi) = 0x832208;
    PUSH32(esp, 0x003854B3u); RECOMP_ABI_CALL(0x000243B2u, sub_000243B2); /* call 0x000243B2 */

loc_003854B3: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(edi) = 0x832C58;
    MEM32(esi) = 0x832C3C;
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 0x60) = ebx;
    MEMF(esi + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x78) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x58) = 0x7BA310;
    MEMF(esi + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x88) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x94) = ebx;
    MEM32(esi + 0x98) = ebx;
    MEM32(esi + 0x90) = 0x7CA664;
    MEMF(esi + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xBC) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x38) = 0x5A;
    MEM16(esi + 0x40) = LO16(ebx);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(esi + 0x44) = LO16(edi);
    MEM16(esi + 0x42) = LO16(edi);
    MEM32(esi + 0xC0) = ebx;
    MEM32(esi + 0xC4) = ebx;
    MEM32(esi + 0xC8) = ebx;
    MEM32(esi + 0xCC) = ebx;
    MEM8(esi + 0x118) = LO8(ebx);
    MEM32(esi + 0x120) = ebx;
    MEM8(esi + 0x119) = LO8(ebx);
    MEM8(esi + 0x11D) = LO8(ebx);
    MEM8(esi + 0x11E) = LO8(ebx);
    MEM32(esi + 0x138) = ebx;
    ecx = esi + 0x890;
    MEM32(esi + 0x74C) = 0x8322B0;
    MEM32(esi + 0x758) = ebx;
    MEM32(esi + 0x75C) = ebx;
    MEM8(esi + 0x760) = LO8(ebx);
    MEM8(esi + 0x761) = LO8(ebx);
    MEM32(esi + 0x754) = ebx;
    PUSH32(esp, 0x003855A4u); RECOMP_ABI_CALL(0x000323E0u, sub_000323E0); /* call 0x000323E0 */

loc_003855A4: ;
    PUSH32(esp, 0x7DE474);
    MEM8(esi + 0x117) = LO8(ebx);
    MEM8(esi + 0x116) = LO8(ebx);
    MEM32(esi + 0x34) = 0x7B891F;
    MEM8(esi + 0x114) = 1;
    MEM32(esi + 0x140) = ebx;
    MEM32(esi + 0x898) = ebx;
    MEM32(esi + 0x89C) = ebx;
    MEM32(esi + 0x8A0) = ebx;
    MEM32(esi + 0x788) = ebp;
    MEM8(esi + 0x767) = LO8(ebx);
    MEM8(esi + 0x768) = LO8(ebx);
    MEM8(esi + 0x769) = LO8(ebx);
    MEM8(esi + 0x764) = LO8(ebx);
    MEM8(esi + 0x765) = LO8(ebx);
    MEM8(esi + 0x766) = LO8(ebx);
    MEM8(esi + 0x88D) = LO8(ebx);
    MEM8(esi + 0x76C) = LO8(ebx);
    MEM32(esi + 0x778) = 0x7FFF;
    MEM8(esi + 0xE0) = LO8(ebx);
    MEM32(esi + 0x77C) = edi;
    MEM32(esi + 0x780) = edi;
    MEM32(esi + 0x784) = edi;
    PUSH32(esp, 0x00385638u); RECOMP_ABI_CALL(0x00033B9Bu, sub_00033B9B); /* call 0x00033B9B */

loc_00385638: ;
    PUSH32(esp, 0x7DE45C);
    MEM32(esi + 0xE4) = eax;
    PUSH32(esp, 0x00385648u); RECOMP_ABI_CALL(0x00033B9Bu, sub_00033B9B); /* call 0x00033B9B */

loc_00385648: ;
    PUSH32(esp, 0x7DE454);
    MEM32(esi + 0xE8) = eax;
    PUSH32(esp, 0x00385658u); RECOMP_ABI_CALL(0x00033B9Bu, sub_00033B9B); /* call 0x00033B9B */

loc_00385658: ;
    PUSH32(esp, 0x7DE46C);
    MEM32(esi + 0xEC) = eax;
    PUSH32(esp, 0x00385668u); RECOMP_ABI_CALL(0x00033B9Bu, sub_00033B9B); /* call 0x00033B9B */

loc_00385668: ;
    PUSH32(esp, 0x7DE464);
    MEM32(esi + 0xF0) = eax;
    PUSH32(esp, 0x00385678u); RECOMP_ABI_CALL(0x00033B9Bu, sub_00033B9B); /* call 0x00033B9B */

loc_00385678: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xA70);
    MEM32(esi + 0xF4) = eax;
    PUSH32(esp, 0x00385689u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00385689: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038569E; /* je: equal / zero */

loc_00385690: ;
    ecx = eax;
    PUSH32(esp, 0x00385697u); RECOMP_ABI_CALL(0x00027251u, sub_00027251); /* call 0x00027251 */

loc_00385697: ;
    MEM32(0x901E30) = eax;
    goto loc_003856A4;

loc_0038569E: ;
    MEM32(0x901E30) = ebx;

loc_003856A4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, 0x003856ACu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003856AC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003856C0; /* je: equal / zero */

loc_003856B3: ;
    MEM32(eax) = 0x832260;
    MEM32(0x901E24) = eax;
    goto loc_003856C6;

loc_003856C0: ;
    MEM32(0x901E24) = ebx;

loc_003856C6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x003856CEu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003856CE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038570C; /* je: equal / zero */

loc_003856D5: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM32(0x901E3C) = eax;
    goto loc_00385712;

loc_0038570C: ;
    MEM32(0x901E3C) = ebx;

loc_00385712: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x644);
    PUSH32(esp, 0x0038571Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0038571D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00385737; /* je: equal / zero */

loc_00385724: ;
    PUSH32(esp, 0x7B891F);
    ecx = eax;
    PUSH32(esp, 0x00385730u); RECOMP_ABI_CALL(0x00019B6Fu, sub_00019B6F); /* call 0x00019B6F */

loc_00385730: ;
    MEM32(0x901E34) = eax;
    goto loc_0038573D;

loc_00385737: ;
    MEM32(0x901E34) = ebx;

loc_0038573D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x644);
    PUSH32(esp, 0x00385748u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00385748: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00385762; /* je: equal / zero */

loc_0038574F: ;
    PUSH32(esp, 0x832C34);
    ecx = eax;
    PUSH32(esp, 0x0038575Bu); RECOMP_ABI_CALL(0x00019B6Fu, sub_00019B6F); /* call 0x00019B6F */

loc_0038575B: ;
    MEM32(0x901E38) = eax;
    goto loc_00385768;

loc_00385762: ;
    MEM32(0x901E38) = ebx;

loc_00385768: ;
    eax = MEM32(0x8FC1D0);
    eax = MEM32(eax + 0xE8);
    SET_LO8(ecx, MEM8(eax + 0x34D));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x832C24);
    MEM8(esp + 0x1C) = LO8(ecx);
    MEM8(eax + 0x34D) = LO8(ebx);
    PUSH32(esp, 0x0038578Eu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0038578E: ;
    ecx = eax;
    PUSH32(esp, 0x00385795u); RECOMP_ABI_CALL(0x0002B801u, sub_0002B801); /* call 0x0002B801 */

loc_00385795: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x832C24);
    PUSH32(esp, 0x003857A5u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003857A5: ;
    ecx = eax;
    PUSH32(esp, 0x003857ACu); RECOMP_ABI_CALL(0x0002DBE2u, sub_0002DBE2); /* call 0x0002DBE2 */

loc_003857AC: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x832C14);
    MEM32(esi + 0x128) = eax;
    PUSH32(esp, 0x003857C2u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003857C2: ;
    ecx = eax;
    PUSH32(esp, 0x003857C9u); RECOMP_ABI_CALL(0x0002DBE2u, sub_0002DBE2); /* call 0x0002DBE2 */

loc_003857C9: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    MEM32(esi + 0x12C) = eax;
    edx = MEM32(0x8FC1D0);
    eax = MEM32(edx + 0xE8);
    MEM8(eax + 0x34D) = LO8(ecx);
    eax = MEM32(esi + 0x128);
    edx = MEM32(esi + 0x12C);
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = edx;
    eax = ZX16(MEM16(eax + 2));
    PUSH32(esp, 1);
    MEM32(esi + 0x14) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    MEM32(esi + 0x130) = 0x901EA8;
    MEM32(esi + 0x144) = ebx;
    edi = esi + 0x148;
    ecx = 0x64;
    PUSH32(esp, 0x84);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x0038582Au); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_0038582A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038583A; /* je: equal / zero */

loc_00385831: ;
    ecx = eax;
    PUSH32(esp, 0x00385838u); RECOMP_ABI_CALL(0x0001C351u, sub_0001C351); /* call 0x0001C351 */

loc_00385838: ;
    goto loc_0038583C;

loc_0038583A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0038583C: ;
    PUSH32(esp, ebx);
    ecx = eax;
    MEM32(esi + 0x2DC) = eax;
    PUSH32(esp, 0x0038584Au); RECOMP_ABI_CALL(0x00017176u, sub_00017176); /* call 0x00017176 */

loc_0038584A: ;
    ecx = MEM32(esi + 0x2DC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00385856u); RECOMP_ABI_CALL(0x00020DB1u, sub_00020DB1); /* call 0x00020DB1 */

loc_00385856: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x00385860u); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_00385860: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00385870; /* je: equal / zero */

loc_00385867: ;
    ecx = eax;
    PUSH32(esp, 0x0038586Eu); RECOMP_ABI_CALL(0x0002A4BFu, sub_0002A4BF); /* call 0x0002A4BF */

loc_0038586E: ;
    goto loc_00385872;

loc_00385870: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00385872: ;
    MEM32(esi + 0x2D8) = eax;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00385889u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00385887u); } /* indirect call */
    }

loc_00385889: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003858AA; /* je: equal / zero */

loc_0038588F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x832BDC);
    PUSH32(esp, 0x10F4A161);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003858A5u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_003858A5: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003858AC;

loc_003858AA: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003858AC: ;
    MEM32(esi + 0xF8) = edi;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003858C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003858C1u); } /* indirect call */
    }

loc_003858C3: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003858E4; /* je: equal / zero */

loc_003858C9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x832BA4);
    PUSH32(esp, 0x10F4A161);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003858DFu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_003858DF: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003858E6;

loc_003858E4: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003858E6: ;
    MEM32(esi + 0xFC) = edi;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003858FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003858FBu); } /* indirect call */
    }

loc_003858FD: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038591E; /* je: equal / zero */

loc_00385903: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x82D0AC);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00385919u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00385919: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00385920;

loc_0038591E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00385920: ;
    MEM32(esi + 0x100) = edi;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00385937u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00385935u); } /* indirect call */
    }

loc_00385937: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00385958; /* je: equal / zero */

loc_0038593D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x82C8E0);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00385953u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00385953: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0038595A;

loc_00385958: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0038595A: ;
    MEM32(esi + 0x108) = edi;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00385971u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038596Fu); } /* indirect call */
    }

loc_00385971: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00385992; /* je: equal / zero */

loc_00385977: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x832B70);
    PUSH32(esp, 0x10F4A161);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0038598Du); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0038598D: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00385994;

loc_00385992: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00385994: ;
    MEM32(esi + 0x10C) = edi;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003859ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003859A9u); } /* indirect call */
    }

loc_003859AB: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003859CC; /* je: equal / zero */

loc_003859B1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x832B38);
    PUSH32(esp, 0x40F4B4FA);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003859C7u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_003859C7: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003859CE;

loc_003859CC: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003859CE: ;
    MEM32(esi + 0x110) = edi;
    ecx = MEM32(0x901E30);
    PUSH32(esp, 0x832304);
    PUSH32(esp, 0x003859E4u); RECOMP_ABI_CALL(0x0001F137u, sub_0001F137); /* call 0x0001F137 */

loc_003859E4: ;
    ecx = MEM32(eax + 0x40);
    MEM32(esi + 0x124) = ecx;
    ecx = 0x901D8C;
    MEM32(0x901D8C) = 0xFFFFFFFFu;
    MEM32(0x901D90) = ebx;
    PUSH32(esp, 0x00385A07u); RECOMP_ABI_CALL(0x0002EE39u, sub_0002EE39); /* call 0x0002EE39 */

loc_00385A07: ;
    POP32(esp, edi);
    MEM8(esi + 0x76B) = LO8(ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00385B80
 * Original: 0x00385B80 - 0x00385B88 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00385B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00385B80: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00025640(); return; /* tail jmp 0x00025640 */

}

/**
 * sub_00385B90
 * Original: 0x00385B90 - 0x00385D89 (505 bytes, 156 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00385B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00385B90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = esi + 0x18;
    MEM32(esi) = 0x832C3C;
    MEM32(ebp) = 0x832C58;
    eax = MEM32(0x901E3C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00385BC0; /* je: equal / zero */

loc_00385BB1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00385BB7u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00385BB7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x901E3C) = ebx;

loc_00385BC0: ;
    ecx = MEM32(0x901E34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00385BE0; /* je: equal / zero */

loc_00385BCA: ;
    edi = ecx;
    PUSH32(esp, 0x00385BD1u); RECOMP_ABI_CALL(0x00022E9Au, sub_00022E9A); /* call 0x00022E9A */

loc_00385BD1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00385BD7u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00385BD7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x901E34) = ebx;

loc_00385BE0: ;
    ecx = MEM32(0x901E38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00385C00; /* je: equal / zero */

loc_00385BEA: ;
    edi = ecx;
    PUSH32(esp, 0x00385BF1u); RECOMP_ABI_CALL(0x00022E9Au, sub_00022E9A); /* call 0x00022E9A */

loc_00385BF1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00385BF7u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00385BF7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x901E38) = ebx;

loc_00385C00: ;
    ecx = esi;
    MEM32(0x901E28) = ebx;
    PUSH32(esp, 0x00385C0Du); RECOMP_ABI_CALL(0x00016767u, sub_00016767); /* call 0x00016767 */

loc_00385C0D: ;
    ecx = MEM32(esi + 0x2D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00385C1D; /* je: equal / zero */

loc_00385C17: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00385C1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00385C1Bu); } /* indirect call */
    }

loc_00385C1D: ;
    ecx = MEM32(esi + 0x2DC);
    PUSH32(esp, 0x00385C28u); RECOMP_ABI_CALL(0x00029623u, sub_00029623); /* call 0x00029623 */

loc_00385C28: ;
    ecx = MEM32(esi + 0x2DC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00385C38; /* je: equal / zero */

loc_00385C32: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00385C38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00385C36u); } /* indirect call */
    }

loc_00385C38: ;
    ecx = MEM32(0x901E24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00385C4F; /* je: equal / zero */

loc_00385C42: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00385C49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00385C46u); } /* indirect call */
    }

loc_00385C49: ;
    MEM32(0x901E24) = ebx;

loc_00385C4F: ;
    ecx = MEM32(0x901E30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00385C6F; /* je: equal / zero */

loc_00385C59: ;
    edi = ecx;
    PUSH32(esp, 0x00385C60u); RECOMP_ABI_CALL(0x00020D84u, sub_00020D84); /* call 0x00020D84 */

loc_00385C60: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00385C66u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00385C66: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x901E30) = ebx;

loc_00385C6F: ;
    ecx = esi;
    PUSH32(esp, 0x00385C76u); RECOMP_ABI_CALL(0x000199BCu, sub_000199BC); /* call 0x000199BC */

loc_00385C76: ;
    ecx = MEM32(esi + 0x128);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00385C82u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00385C82: ;
    ecx = eax;
    PUSH32(esp, 0x00385C89u); RECOMP_ABI_CALL(0x00037B2Eu, sub_00037B2E); /* call 0x00037B2E */

loc_00385C89: ;
    edx = MEM32(esi + 0x12C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00385C95u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00385C95: ;
    ecx = eax;
    PUSH32(esp, 0x00385C9Cu); RECOMP_ABI_CALL(0x00037B2Eu, sub_00037B2E); /* call 0x00037B2E */

loc_00385C9C: ;
    edi = MEM32(esi + 0xF8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00385CBD; /* je: equal / zero */

loc_00385CA6: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00385CAEu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00385CAE: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00385CBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00385CBAu); } /* indirect call */
    }

loc_00385CBD: ;
    edi = MEM32(esi + 0xFC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00385CDE; /* je: equal / zero */

loc_00385CC7: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00385CCFu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00385CCF: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00385CDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00385CDBu); } /* indirect call */
    }

loc_00385CDE: ;
    edi = MEM32(esi + 0x100);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00385CFF; /* je: equal / zero */

loc_00385CE8: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00385CF0u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00385CF0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00385CFFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00385CFCu); } /* indirect call */
    }

loc_00385CFF: ;
    edi = MEM32(esi + 0x108);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00385D20; /* je: equal / zero */

loc_00385D09: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00385D11u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00385D11: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00385D20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00385D1Du); } /* indirect call */
    }

loc_00385D20: ;
    edi = MEM32(esi + 0x10C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00385D41; /* je: equal / zero */

loc_00385D2A: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00385D32u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00385D32: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00385D41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00385D3Eu); } /* indirect call */
    }

loc_00385D41: ;
    edi = MEM32(esi + 0x110);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00385D62; /* je: equal / zero */

loc_00385D4B: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00385D53u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00385D53: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00385D62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00385D5Fu); } /* indirect call */
    }

loc_00385D62: ;
    ecx = esi + 0x890;
    PUSH32(esp, 0x00385D6Du); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00385D6D: ;
    ecx = ebp;
    MEM32(esi + 0x74C) = 0x832224;
    PUSH32(esp, 0x00385D7Eu); RECOMP_ABI_CALL(0x000323C2u, sub_000323C2); /* call 0x000323C2 */

loc_00385D7E: ;
    POP32(esp, edi);
    MEM32(esi) = 0x832208;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00385E10
 * Original: 0x00385E10 - 0x00385E2D (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00385E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00385E10: ;
    SET_LO8(eax, MEM8(ecx + 0x760));
    _fb = (uint32_t)(0x74C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00385E2C; /* jne: not equal / not zero */

loc_00385E20: ;
    SET_LO8(eax, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00385E2C; /* jne: not equal / not zero */

loc_00385E27: ;
    g_seh_ebp = ebp; sub_0002D557(); return; /* tail jmp 0x0002D557 */

loc_00385E2C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00385E40
 * Original: 0x00385E40 - 0x003862FD (1213 bytes, 354 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00385E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00385E40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x898);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00385E57; /* jle: less or equal (signed <=) */

loc_00385E50: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x898) = eax;

loc_00385E57: ;
    eax = MEM32(esi + 0x89C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00385E68; /* jle: less or equal (signed <=) */

loc_00385E61: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x89C) = eax;

loc_00385E68: ;
    eax = MEM32(esi + 0x138);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00385E77; /* je: equal / zero */

loc_00385E72: ;
    edi = MEM32(eax + 4);
    goto loc_00385E79;

loc_00385E77: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00385E79: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00385EC0; /* je: equal / zero */

loc_00385E7D: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00385E84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00385E81u); } /* indirect call */
    }

loc_00385E84: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00385EC0; /* je: equal / zero */

loc_00385E88: ;
    SET_LO8(eax, MEM8(esi + 0x760));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    ebp = esi + 0x74C;
    if (CMP_NE(_fa, _fb)) goto loc_00385E9F; /* jne: not equal / not zero */

loc_00385E98: ;
    SET_LO8(eax, MEM8(ebp + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00385EC0; /* je: equal / zero */

loc_00385E9F: ;
    eax = MEM32(esi + 0x774);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00385EADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00385EAAu); } /* indirect call */
    }

loc_00385EAD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00385EC0; /* je: equal / zero */

loc_00385EB1: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x00385EB9u); RECOMP_ABI_CALL(0x0003773Cu, sub_0003773C); /* call 0x0003773C */

loc_00385EB9: ;
    ecx = ebp;
    PUSH32(esp, 0x00385EC0u); RECOMP_ABI_CALL(0x000336A0u, sub_000336A0); /* call 0x000336A0 */

loc_00385EC0: ;
    eax = MEM32(0x901E30);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x18) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00385EE7; /* jle: less or equal (signed <=) */

loc_00385ECD: ;
    eax = MEM32(esi + 0x8A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00385EE0; /* jle: less or equal (signed <=) */

loc_00385ED7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x8A0) = eax;
    goto loc_00385EE7;

loc_00385EE0: ;
    ecx = esi;
    PUSH32(esp, 0x00385EE7u); RECOMP_ABI_CALL(0x00012F4Au, sub_00012F4A); /* call 0x00012F4A */

loc_00385EE7: ;
    edx = MEM32(0x8FC1D0);
    _fa = (uint32_t)(MEM32(edx + 0x218)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x218), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00385F0E; /* jne: not equal / not zero */

loc_00385EF6: ;
    SET_LO8(eax, MEM8(esi + 0x768));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00385F0E; /* je: equal / zero */

loc_00385F00: ;
    SET_LO8(eax, MEM8(esi + 0x764));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00385F0E; /* je: equal / zero */

loc_00385F0A: ;
    SET_LO8(ebx, 1);
    goto loc_00385F10;

loc_00385F0E: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00385F10: ;
    edx = MEM32(esi + 0x770);
    ecx = MEM32(esi + 0x778);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esi + 0x770) = edx;
    eax = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00385F40; /* jne: not equal / not zero */

loc_00385F2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00385F40; /* jge: greater or equal (signed >=) */

loc_00385F33: ;
    ecx = MEM32(0x8FC1D0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x00385F40u); RECOMP_ABI_CALL(0x00020028u, sub_00020028); /* call 0x00020028 */

loc_00385F40: ;
    eax = MEM32(0x8FC1D0);
    _fa = (uint32_t)(MEM32(eax + 0x218)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x218), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386002; /* je: equal / zero */

loc_00385F52: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00386002; /* jne: not equal / not zero */

loc_00385F5A: ;
    ecx = MEM32(esi + 0x788);
    edx = MEM32(ecx + 0xD4);
    SET_LO8(eax, MEM8(edx + 0x44));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00385F74; /* je: equal / zero */

loc_00385F6D: ;
    ecx = esi;
    PUSH32(esp, 0x00385F74u); RECOMP_ABI_CALL(0x00012F4Au, sub_00012F4A); /* call 0x00012F4A */

loc_00385F74: ;
    SET_LO8(eax, MEM8(esi + 0x760));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    ecx = esi + 0x74C;
    if (CMP_NE(_fa, _fb)) goto loc_00385F90; /* jne: not equal / not zero */

loc_00385F84: ;
    SET_LO8(eax, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00385F90; /* jne: not equal / not zero */

loc_00385F8B: ;
    PUSH32(esp, 0x00385F90u); RECOMP_ABI_CALL(0x0002D557u, sub_0002D557); /* call 0x0002D557 */

loc_00385F90: ;
    ecx = MEM32(0x901E3C);
    PUSH32(esp, 0x00385F9Bu); RECOMP_ABI_CALL(0x00016D25u, sub_00016D25); /* call 0x00016D25 */

loc_00385F9B: ;
    eax = MEM32(0x901D8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00385FAC; /* jle: less or equal (signed <=) */

loc_00385FA4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x901D8C) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */

loc_00385FAC: ;
    if (CMP_NE(_fa, _fb)) goto loc_00385FB8; /* jne: not equal / not zero */

loc_00385FAE: ;
    ecx = 0x901D8C;
    PUSH32(esp, 0x00385FB8u); RECOMP_ABI_CALL(0x0002EE39u, sub_0002EE39); /* call 0x0002EE39 */

loc_00385FB8: ;
    eax = MEM32(0x8FC1D0);
    _fa = (uint32_t)(MEM32(eax + 0x21C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x21C), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003862F8; /* je: equal / zero */

loc_00385FCA: ;
    eax = MEM32(eax + 0x218);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003862D4; /* jne: not equal / not zero */

loc_00385FD9: ;
    SET_LO8(eax, MEM8(esi + 0x117));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esi + 0x116) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_003862F8; /* je: equal / zero */

loc_00385FEE: ;
    eax = MEM32(0x8FC1D0);
    MEM32(eax + 0x21C) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00386002: ;
    eax = MEM32(esi + 0x138);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00386017; /* jne: not equal / not zero */

loc_0038600C: ;
    ecx = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00012F4A(); return; /* tail jmp 0x00012F4A */

loc_00386017: ;
    _fa = (uint32_t)(MEM32(esi + 0x778)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x778), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386029; /* je: equal / zero */

loc_0038601F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00386026u); RECOMP_ABI_CALL(0x0001EE26u, sub_0001EE26); /* call 0x0001EE26 */

loc_00386026: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00386029: ;
    SET_LO8(eax, MEM8(esi + 0x88E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00386044; /* jne: not equal / not zero */

loc_00386033: ;
    SET_LO8(eax, MEM8(esi + 0x767));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00386044; /* jne: not equal / not zero */

loc_0038603D: ;
    ecx = esi;
    PUSH32(esp, 0x00386044u); RECOMP_ABI_CALL(0x00031D2Du, sub_00031D2D); /* call 0x00031D2D */

loc_00386044: ;
    SET_LO8(eax, MEM8(esi + 0x88D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386070; /* je: equal / zero */

loc_0038604E: ;
    SET_LO8(eax, MEM8(esi + 0x767));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00386070; /* jne: not equal / not zero */

loc_00386058: ;
    eax = MEM32(0x901E30);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x18) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0038610A; /* jg: greater (signed >) */

loc_00386069: ;
    MEM8(esi + 0x88D) = 0;

loc_00386070: ;
    eax = MEM32(0x901E28);
    ebp = MEM32(esi + 0x13C);
    SET_LO8(ecx, MEM8(eax + 0x76B));
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386096; /* je: equal / zero */

loc_00386086: ;
    ecx = MEM32(eax + 0xD0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00386096; /* jle: less or equal (signed <=) */

loc_00386090: ;
    ebp = MEM32(esi + 0x13C);

loc_00386096: ;
    eax = MEM32(esi + 0x138);
    ecx = MEM32(eax);
    edx = MEM32(esi + 0x13C);
    edi = MEM32(eax + edx * 4 + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003860B2; /* jge: greater or equal (signed >=) */

loc_003860AE: ;
    ebx = MEM32(eax + ebp * 4 + 4);

loc_003860B2: ;
    SET_LO8(eax, MEM8(esi + 0x88F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038611C; /* je: equal / zero */

loc_003860BC: ;
    SET_LO8(eax, MEM8(esi + 0x767));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038611C; /* jne: not equal / not zero */

loc_003860C6: ;
    eax = MEM32(0x901E30);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x18) (32-bit) */
    edx = MEM32(edi);
    ecx = edi;
    if (CMP_G(_fas, _fbs)) goto loc_003860EA; /* jg: greater (signed >) */

loc_003860D7: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003860DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003860D7u); } /* indirect call */
    }

loc_003860DA: ;
    eax = MEM32(esi + 0x13C);
    MEM8(esi + 0x88F) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00386102;

loc_003860EA: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x003860EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003860EAu); } /* indirect call */
    }

loc_003860ED: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038610A; /* jne: not equal / not zero */

loc_003860F1: ;
    ecx = MEM32(0x901E30);
    PUSH32(esp, 0x003860FCu); RECOMP_ABI_CALL(0x00014A4Du, sub_00014A4D); /* call 0x00014A4D */

loc_003860FC: ;
    eax = MEM32(esi + 0x13C);

loc_00386102: ;
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0038610Au); RECOMP_ABI_CALL(0x0001A768u, sub_0001A768); /* call 0x0001A768 */

loc_0038610A: ;
    ecx = MEM32(0x8FC1D0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x00386117u); RECOMP_ABI_CALL(0x00020028u, sub_00020028); /* call 0x00020028 */

loc_00386117: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0038611C: ;
    SET_LO8(eax, MEM8(esi + 0x765));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386199; /* je: equal / zero */

loc_00386126: ;
    SET_LO8(eax, MEM8(esi + 0x767));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003861AC; /* jne: not equal / not zero */

loc_00386130: ;
    MEM8(esi + 0x765) = 0;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0038613Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038613Bu); } /* indirect call */
    }

loc_0038613E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00386174; /* jne: not equal / not zero */

loc_00386142: ;
    ecx = esi + 0x74C;
    PUSH32(esp, 0x0038614Du); RECOMP_ABI_CALL(0x00029FC4u, sub_00029FC4); /* call 0x00029FC4 */

loc_0038614D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00386174; /* jne: not equal / not zero */

loc_00386151: ;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00386159u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00386156u); } /* indirect call */
    }

loc_00386159: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386174; /* je: equal / zero */

loc_0038615D: ;
    PUSH32(esp, edi);
    ecx = esi + 0x74C;
    PUSH32(esp, 0x00386169u); RECOMP_ABI_CALL(0x0003773Cu, sub_0003773C); /* call 0x0003773C */

loc_00386169: ;
    ecx = esi + 0x74C;
    PUSH32(esp, 0x00386174u); RECOMP_ABI_CALL(0x000336A0u, sub_000336A0); /* call 0x000336A0 */

loc_00386174: ;
    ecx = MEM32(0x8FC1D0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x00386181u); RECOMP_ABI_CALL(0x00020028u, sub_00020028); /* call 0x00020028 */

loc_00386181: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00386189u); RECOMP_ABI_CALL(0x0001A768u, sub_0001A768); /* call 0x0001A768 */

loc_00386189: ;
    ecx = MEM32(esi + 0x788);
    edx = MEM32(ecx + 0xD4);
    MEM8(edx + 0x46) = 1;

loc_00386199: ;
    SET_LO8(eax, MEM8(esi + 0x767));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003861AC; /* jne: not equal / not zero */

loc_003861A3: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x003861ACu); RECOMP_ABI_CALL(0x0002C305u, sub_0002C305); /* call 0x0002C305 */

loc_003861AC: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003861B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003861B0u); } /* indirect call */
    }

loc_003861B3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00386260; /* jne: not equal / not zero */

loc_003861BB: ;
    SET_LO8(eax, MEM8(esi + 0x767));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00386260; /* jne: not equal / not zero */

loc_003861C9: ;
    SET_LO8(eax, MEM8(esi + 0x118));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386241; /* je: equal / zero */

loc_003861D3: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x119);
    ebp = MEM32(ecx * 4 + 0x8E8F88);
    SET_LO8(eax, MEM8(esi + 0x11D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, MEM8(esi + 0x11E));
    edi = SX8(LO8(ecx));
    if (CMP_EQ(_fa, _fb)) goto loc_003861FD; /* je: equal / zero */

loc_003861F4: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = eax;

loc_003861FD: ;
    edx = MEM32(esi + 0x120);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    MEM8(esi + 0x11E) = LO8(ecx);
    ecx = MEM32(esi + 0x118);
    edx = MEM32(esi + 0x11C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 0x120);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    ecx = ebp + 0x40;
    PUSH32(esp, 0x00386235u); RECOMP_ABI_CALL(0x00036B7Au, sub_00036B7A); /* call 0x00036B7A */

loc_00386235: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00386241; /* jl: less (signed <) */

loc_0038623A: ;
    ecx = esi;
    PUSH32(esp, 0x00386241u); RECOMP_ABI_CALL(0x00018733u, sub_00018733); /* call 0x00018733 */

loc_00386241: ;
    edx = MEM32(esi + 0x13C);
    eax = MEM32(esi + 0x138);
    ecx = MEM32(eax + edx * 4 + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0038625Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00386258u); } /* indirect call */
    }

loc_0038625B: ;
    goto loc_00385F74;

loc_00386260: ;
    _fa = (uint32_t)(MEM8(esi + 0x767)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x767), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038627D; /* jne: not equal / not zero */

loc_00386269: ;
    SET_LO8(eax, MEM8(esi + 0x765));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00386284; /* jne: not equal / not zero */

loc_00386273: ;
    SET_LO8(eax, MEM8(esi + 0x88F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00386284; /* jne: not equal / not zero */

loc_0038627D: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00386284u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00386281u); } /* indirect call */
    }

loc_00386284: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esi + 0x13C) = ebp;
    MEM32(esi + 0xDC) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00385F6D; /* je: equal / zero */

loc_00386298: ;
    SET_LO8(eax, MEM8(esi + 0x767));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00385F6D; /* jne: not equal / not zero */

loc_003862A6: ;
    eax = MEM32(0x901E30);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x18) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003862C8; /* jg: greater (signed >) */

loc_003862B3: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003862BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003862B7u); } /* indirect call */
    }

loc_003862BA: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x003862C3u); RECOMP_ABI_CALL(0x0001A768u, sub_0001A768); /* call 0x0001A768 */

loc_003862C3: ;
    goto loc_00385F74;

loc_003862C8: ;
    MEM8(esi + 0x88F) = 1;
    goto loc_00385F74;

loc_003862D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003862F8; /* jne: not equal / not zero */

loc_003862D8: ;
    MEM8(esi + 0x117) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 0x116));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003862F8; /* je: equal / zero */

loc_003862E8: ;
    ecx = MEM32(0x8FC1D0);
    MEM32(ecx + 0x21C) = 1;

loc_003862F8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00386430
 * Original: 0x00386430 - 0x003864A7 (119 bytes, 45 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00386430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00386430: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 9 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00386468; /* jl: less (signed <) */

loc_0038643D: ;
    SET_LO8(eax, MEM8(0x8C5EE5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386468; /* je: equal / zero */

loc_00386446: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x54);
    PUSH32(esp, 0x00386452u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00386452: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038648F; /* je: equal / zero */

loc_00386459: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00386466u); RECOMP_ABI_CALL(0x0002D831u, sub_0002D831); /* call 0x0002D831 */

loc_00386466: ;
    goto loc_00386491;

loc_00386468: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00386474u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00386474: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038648F; /* je: equal / zero */

loc_0038647B: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0038648Du); RECOMP_ABI_CALL(0x00022792u, sub_00022792); /* call 0x00022792 */

loc_0038648D: ;
    goto loc_00386491;

loc_0038648F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00386491: ;
    ecx = MEM32(edi + 0x138);
    edx = MEM32(ecx);
    MEM32(ecx + edx * 4 + 4) = eax;
    eax = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003864D0
 * Original: 0x003864D0 - 0x00386572 (162 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003864D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003864D0: ;
    SET_LO8(eax, MEM8(0x8C5EE4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0038656E; /* je: equal / zero */

loc_003864E0: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x003864ECu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003864EC: ;
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386556; /* je: equal / zero */

loc_003864F7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x832ABC;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x38) = 0;
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x3C) = 0xFFFFFFFFu;
    goto loc_00386558;

loc_00386556: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00386558: ;
    ecx = MEM32(esi + 0x138);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    MEM32(ecx + edi * 4 + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x134) = edx;
    POP32(esp, edi);

loc_0038656E: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003865A0
 * Original: 0x003865A0 - 0x003865C8 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003865A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003865A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xA2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003865C4; /* jne: not equal / not zero */

loc_003865AD: ;
    eax = MEM32(0x901E28);
    ecx = MEM32(eax + 0x2D8);
    PUSH32(esp, 0x003865BDu); RECOMP_ABI_CALL(0x00032AC5u, sub_00032AC5); /* call 0x00032AC5 */

loc_003865BD: ;
    ecx = esi;
    PUSH32(esp, 0x003865C4u); RECOMP_ABI_CALL(0x000143B3u, sub_000143B3); /* call 0x000143B3 */

loc_003865C4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003865E0
 * Original: 0x003865E0 - 0x003866EA (266 bytes, 65 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003865E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003865E0: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x34));
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x901E28);
    SET_LO8(eax, MEM8(ecx + 0x88C));
    PUSH32(esp, edi);
    edi = ecx + 0x88C;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0038660D; /* je: equal / zero */

loc_00386600: ;
    PUSH32(esp, 0x00386605u); RECOMP_ABI_CALL(0x000175FEu, sub_000175FE); /* call 0x000175FE */

loc_00386605: ;
    MEM8(edi) = LO8(ebx);
    ecx = MEM32(0x901E28);

loc_0038660D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(ecx + 0x140) = esi;
    eax = MEM32(0x901E3C);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM8(eax + 0x1C) = 1;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0038664Au); RECOMP_ABI_CALL(0x00026540u, sub_00026540); /* call 0x00026540 */

loc_0038664A: ;
    ecx = MEM32(0x8FC1D0);
    PUSH32(esp, 0x00386655u); RECOMP_ABI_CALL(0x0001D558u, sub_0001D558); /* call 0x0001D558 */

loc_00386655: ;
    eax = MEM32(0x901E28);
    MEM8(eax + 0x76B) = 1;
    edi = MEM32(0x901E28);
    ecx = MEM32(edi + 0x788);
    _fb = (uint32_t)(0x788) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x788)) >> 32) & 1);
    edi = edi + 0x788;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00386678u); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_00386678: ;
    MEM8(eax + 0x44) = 1;
    ecx = MEM32(edi);
    edx = MEM32(ecx + 0xD4);
    MEM8(edx + 0x44) = LO8(ebx);
    ecx = esp + 0xC;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM16(esp + 0x18) = 0x58;
    MEM32(esp + 0x28) = 0xE;
    MEM32(esp + 0xC) = 0x7C2754;
    MEM8(esp + 0x2C) = 1;
    PUSH32(esp, 0x003866B4u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_003866B4: ;
    PUSH32(esp, 0x1E);
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x48) = 0x15;
    ecx = MEM32(0x901E28);
    PUSH32(esp, 5);
    PUSH32(esp, 0x003866D0u); RECOMP_ABI_CALL(0x00037368u, sub_00037368); /* call 0x00037368 */

loc_003866D0: ;
    ecx = esi;
    MEM8(esi + 0x50) = LO8(ebx);
    PUSH32(esp, 0x003866DAu); RECOMP_ABI_CALL(0x00019755u, sub_00019755); /* call 0x00019755 */

loc_003866DA: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM8(esi + 0x2C) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x34)) >> 32) & 1);
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00386730
 * Original: 0x00386730 - 0x0038678A (90 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00386730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00386730: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00386786; /* jne: not equal / not zero */

loc_0038673A: ;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = edi;
    PUSH32(esp, 0x00386745u); RECOMP_ABI_CALL(0x0003196Du, sub_0003196D); /* call 0x0003196D */

loc_00386745: ;
    ecx = edi;
    PUSH32(esp, 0x0038674Cu); RECOMP_ABI_CALL(0x0001C2B6u, sub_0001C2B6); /* call 0x0001C2B6 */

loc_0038674C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00386782; /* je: equal / zero */

loc_00386751: ;
    ecx = MEM32(0x901E28);
    PUSH32(esp, 0x14);
    PUSH32(esp, 5);
    PUSH32(esp, 0x00386760u); RECOMP_ABI_CALL(0x00037368u, sub_00037368); /* call 0x00037368 */

loc_00386760: ;
    ecx = esi;
    PUSH32(esp, 0x00386767u); RECOMP_ABI_CALL(0x00019755u, sub_00019755); /* call 0x00019755 */

loc_00386767: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00386782; /* jne: not equal / not zero */

loc_0038676B: ;
    SET_LO8(eax, MEM8(0x901E2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386786; /* je: equal / zero */

loc_00386774: ;
    ecx = esi;
    MEM32(esi + 0x34) = 0;
    PUSH32(esp, 0x00386782u); RECOMP_ABI_CALL(0x00019755u, sub_00019755); /* call 0x00019755 */

loc_00386782: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00386786: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003867A0
 * Original: 0x003867A0 - 0x003867F6 (86 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003867A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003867A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x764));
    SET_LO8(ebx, 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003867B9; /* je: equal / zero */

loc_003867B1: ;
    _fa = (uint32_t)(MEM8(esi + 0x88D)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x88D), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003867C4; /* jne: not equal / not zero */

loc_003867B9: ;
    MEM8(esi + 0x767) = LO8(ebx);
    PUSH32(esp, 0x003867C4u); RECOMP_ABI_CALL(0x00036625u, sub_00036625); /* call 0x00036625 */

loc_003867C4: ;
    MEM8(esi + 0x768) = LO8(ebx);
    edi = 0x14;
    /* nop */

loc_003867D0: ;
    ecx = MEM32(0x901E28);
    PUSH32(esp, 0x003867DBu); RECOMP_ABI_CALL(0x00016E8Du, sub_00016E8D); /* call 0x00016E8D */

loc_003867DB: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003867D0; /* jne: not equal / not zero */

loc_003867DE: ;
    ecx = esi;
    PUSH32(esp, 0x003867E5u); RECOMP_ABI_CALL(0x00012F4Au, sub_00012F4A); /* call 0x00012F4A */

loc_003867E5: ;
    POP32(esp, edi);
    MEM8(esi + 0x769) = LO8(ebx);
    MEM8(esi + 0x768) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00386810
 * Original: 0x00386810 - 0x003868E9 (217 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00386810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00386810: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x832C84);
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0x00386827u); RECOMP_ABI_CALL(0x000235CFu, sub_000235CF); /* call 0x000235CF */

loc_00386827: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = edi + 0x1C;
    MEM32(edi) = 0x832C78;
    eax = ecx + 0x4C;
    edx = 0x1F;
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi;

loc_00386840: ;
    MEM32(eax + -32) = esi;
    MEM32(eax + -28) = esi;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + -4) = xmm0.f[0]; /* movss */
    MEM32(eax + -36) = 0x7BA310;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x1C) = esi;
    MEM32(eax + 0x14) = 0x7CA664;
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEM32(eax + -68) = 0x5A;
    MEM16(eax + -60) = LO16(esi);
    MEM16(eax + -56) = LO16(ebx);
    MEM16(eax + -58) = LO16(ebx);
    MEM32(ecx) = esi;
    MEM32(eax + 0x44) = esi;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x94;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x94;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00386840; /* jne: not equal / not zero */

loc_003868A7: ;
    ecx = MEM32(esp + 0x10);
    MEM32(edi + 0x120C) = ecx;
    MEM32(edi + 0x1210) = esi;
    PUSH32(esp, 0x003868BCu); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_003868BC: ;
    ecx = MEM32(eax + 0x48);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(edi + 0x1208) = ecx;
    MEM32(0x901E40) = edi;
    MEM32(edi + 0x1214) = ebx;
    MEMF(edi + 0x1218) = xmm0.f[0]; /* movss */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00386920
 * Original: 0x00386920 - 0x00386957 (55 bytes, 20 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00386920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00386920: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00386953; /* je: equal / zero */

loc_0038692C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386953; /* je: equal / zero */

loc_00386930: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esi + 0x1214;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0038694Du); RECOMP_ABI_CALL(0x00033317u, sub_00033317); /* call 0x00033317 */

loc_0038694D: ;
    MEM32(esi + 0x1210) = eax;

loc_00386953: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00386970
 * Original: 0x00386970 - 0x003869DA (106 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00386970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00386970: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    PUSH32(esp, ebx);
    ebx = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_003869C8; /* jge: greater or equal (signed >=) */

loc_0038697C: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x94);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x1E;
    esi = ecx + ebx + 0x20;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00386991: ;
    edx = MEM32(esi + 0x90);
    ecx = esi + 0x98;
    MEM32(esi + -4) = edx;
    eax = MEM32(esi + 0x94);
    PUSH32(esp, ecx);
    ecx = esi + 4;
    MEM32(esi) = eax;
    PUSH32(esp, 0x003869B1u); RECOMP_ABI_CALL(0x0002BEE1u, sub_0002BEE1); /* call 0x0002BEE1 */

loc_003869B1: ;
    edx = MEM32(esi + 0x120);
    MEM32(esi + 0x8C) = edx;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x94;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00386991; /* jne: not equal / not zero */

loc_003869C6: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003869C8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x1174) = eax;
    MEM32(ebx + 0x1204) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00386A00
 * Original: 0x00386A00 - 0x00386ACF (207 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00386A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00386A00: ;
    eax = MEM32(0x901E28);
    SET_LO8(ecx, MEM8(eax + 0x764));
    PUSH32(esp, ebx);
    SET_LO8(ebx, 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386A1E; /* je: equal / zero */

loc_00386A12: ;
    _fa = (uint32_t)(MEM8(eax + 0x88D)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x88D), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00386AC7; /* jne: not equal / not zero */

loc_00386A1E: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x00386A25u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00386A25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00386A2Du); RECOMP_ABI_CALL(0x00015164u, sub_00015164); /* call 0x00015164 */

loc_00386A2D: ;
    PUSH32(esp, 0x00386A32u); RECOMP_ABI_CALL(0x00031080u, sub_00031080); /* call 0x00031080 */

loc_00386A32: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386A86; /* je: equal / zero */

loc_00386A36: ;
    eax = MEM32(0x901E28);
    _fa = (uint32_t)(MEM8(eax + 0x764)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x764), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386A4B; /* je: equal / zero */

loc_00386A43: ;
    _fa = (uint32_t)(MEM8(eax + 0x88D)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x88D), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00386A67; /* jne: not equal / not zero */

loc_00386A4B: ;
    SET_LO8(ecx, MEM8(eax + 0x765));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00386A67; /* jne: not equal / not zero */

loc_00386A55: ;
    ecx = MEM32(0x8FC1D0);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x00386A62u); RECOMP_ABI_CALL(0x00020028u, sub_00020028); /* call 0x00020028 */

loc_00386A62: ;
    eax = MEM32(0x901E28);

loc_00386A67: ;
    _fa = (uint32_t)(MEM8(eax + 0x764)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x764), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386A77; /* je: equal / zero */

loc_00386A6F: ;
    _fa = (uint32_t)(MEM8(eax + 0x88D)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x88D), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00386A82; /* jne: not equal / not zero */

loc_00386A77: ;
    MEM8(eax + 0x767) = LO8(ebx);
    PUSH32(esp, 0x00386A82u); RECOMP_ABI_CALL(0x00036625u, sub_00036625); /* call 0x00036625 */

loc_00386A82: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00386A86: ;
    ecx = MEM32(0x8FC1D0);
    _fa = (uint32_t)(MEM32(ecx + 0x21C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x21C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00386ACB; /* jne: not equal / not zero */

loc_00386A95: ;
    eax = MEM32(0x901E28);
    _fa = (uint32_t)(MEM8(eax + 0x764)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x764), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386AAA; /* je: equal / zero */

loc_00386AA2: ;
    _fa = (uint32_t)(MEM8(eax + 0x88D)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x88D), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00386AC0; /* jne: not equal / not zero */

loc_00386AAA: ;
    SET_LO8(edx, MEM8(eax + 0x765));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00386AC0; /* jne: not equal / not zero */

loc_00386AB4: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x00386ABBu); RECOMP_ABI_CALL(0x00020028u, sub_00020028); /* call 0x00020028 */

loc_00386ABB: ;
    eax = MEM32(0x901E28);

loc_00386AC0: ;
    ecx = eax;
    PUSH32(esp, 0x00386AC7u); RECOMP_ABI_CALL(0x0001E430u, sub_0001E430); /* call 0x0001E430 */

loc_00386AC7: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00386ACB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00386B10
 * Original: 0x00386B10 - 0x00386B2E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00386B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00386B10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00386B18u); RECOMP_ABI_CALL(0x0001322Eu, sub_0001322E); /* call 0x0001322E */

loc_00386B18: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00386B28; /* je: equal / zero */

loc_00386B1F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00386B25u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00386B25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00386B28: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00386B40
 * Original: 0x00386B40 - 0x00386C90 (336 bytes, 93 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00386B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00386B40: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00386B4Eu); RECOMP_ABI_CALL(0x000199BCu, sub_000199BC); /* call 0x000199BC */

loc_00386B4E: ;
    ebp = MEM32(esp + 0x44);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(esi + 0xD8) = ebx;
    PUSH32(esp, 0x00386B62u); RECOMP_ABI_CALL(0x0002E5E2u, sub_0002E5E2); /* call 0x0002E5E2 */

loc_00386B62: ;
    edi = eax;
    PUSH32(esp, ebp);
    ecx = esi;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00386B6Fu); RECOMP_ABI_CALL(0x0002E5E2u, sub_0002E5E2); /* call 0x0002E5E2 */

loc_00386B6F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386C86; /* je: equal / zero */

loc_00386B77: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x204);
    PUSH32(esp, 0x00386B82u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00386B82: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386B8D; /* je: equal / zero */

loc_00386B89: ;
    MEM32(eax) = ebx;
    goto loc_00386B8F;

loc_00386B8D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00386B8F: ;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esi + 0x138) = eax;
    MEM32(esi + 0x13C) = ebx;
    MEM32(esi + 0x134) = 0x12;
    MEM8(esi + 0x88C) = LO8(ebx);
    PUSH32(esp, 0x00386BB3u); RECOMP_ABI_CALL(0x0001D071u, sub_0001D071); /* call 0x0001D071 */

loc_00386BB3: ;
    eax = MEM32(esi + 0x138);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00386BCE; /* jne: not equal / not zero */

loc_00386BBD: ;
    ecx = esi;
    PUSH32(esp, 0x00386BC4u); RECOMP_ABI_CALL(0x000199BCu, sub_000199BC); /* call 0x000199BC */

loc_00386BC4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00386BCE: ;
    eax = MEM32(esi + 0x134);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386C4F; /* je: equal / zero */

loc_00386BD9: ;
    _fa = (uint32_t)(MEM8(0x8C5EE4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8C5EE4), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386C4F; /* je: equal / zero */

loc_00386BE1: ;
    ecx = 0xFFFFFFD8u;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = ecx;
    ecx = 0x1E;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x10) = 1;
    MEM8(esp + 0x11) = 1;
    MEM8(esp + 0x12) = LO8(ebx);
    MEM8(esp + 0x13) = 1;
    MEM8(esp + 0x14) = 1;
    SET_LO8(ecx, MEM8(esp + eax + 0x10));
    MEM32(esp + 0x20) = 0x28;
    edx = MEM32(esp + eax * 4 + 0x18);
    MEM32(esp + 0x34) = 0xFFFFFFC4u;
    eax = MEM32(esp + eax * 4 + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(0x901E40);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00386C4Fu); RECOMP_ABI_CALL(0x00014F1Bu, sub_00014F1B); /* call 0x00014F1B */

loc_00386C4F: ;
    MEM8(esi + 0x767) = LO8(ebx);
    MEM8(esi + 0x768) = LO8(ebx);
    MEM8(esi + 0x769) = LO8(ebx);
    MEM8(esi + 0x764) = LO8(ebx);
    MEM8(esi + 0x765) = 1;
    MEM8(esi + 0x766) = LO8(ebx);
    MEM32(esi + 0x778) = ebp;
    MEM8(esi + 0x88E) = LO8(ebx);
    MEM8(esi + 0x88F) = LO8(ebx);

loc_00386C86: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00386CF0
 * Original: 0x00386CF0 - 0x00386D3A (74 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00386CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00386CF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x901E30);
    PUSH32(esp, 0x00386CFEu); RECOMP_ABI_CALL(0x000186C5u, sub_000186C5); /* call 0x000186C5 */

loc_00386CFE: ;
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x00386D08u); RECOMP_ABI_CALL(0x000133EBu, sub_000133EB); /* call 0x000133EB */

loc_00386D08: ;
    SET_LO8(eax, MEM8(0x902531));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386D32; /* je: equal / zero */

loc_00386D11: ;
    SET_LO8(edx, MEM8(0x896172));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(0x902531) = 0;
    eax = eax + eax + -1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00386D2Fu); RECOMP_ABI_CALL(0x00013E27u, sub_00013E27); /* call 0x00013E27 */

loc_00386D2F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00386D32: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00016E8D(); return; /* tail jmp 0x00016E8D */

}

/**
 * sub_00386D50
 * Original: 0x00386D50 - 0x00386D99 (73 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00386D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00386D50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebx + 0x1C;
    /* nop */

loc_00386D60: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386D89; /* je: equal / zero */

loc_00386D66: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00386D74; /* jne: not equal / not zero */

loc_00386D6D: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386D89; /* je: equal / zero */

loc_00386D74: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00386D89; /* jne: not equal / not zero */

loc_00386D81: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00386D89u); RECOMP_ABI_CALL(0x0001132Au, sub_0001132A); /* call 0x0001132A */

loc_00386D89: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x94;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1F (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00386D60; /* jl: less (signed <) */

loc_00386D95: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00386DB0
 * Original: 0x00386DB0 - 0x00386DF3 (67 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00386DB0(void)
{

loc_00386DB0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x94);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + esi + 0x1C);
    PUSH32(esp, edi);
    edi = eax + esi + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1208);
    PUSH32(esp, 0x00386DD5u); RECOMP_ABI_CALL(0x0002BA09u, sub_0002BA09); /* call 0x0002BA09 */

loc_00386DD5: ;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(edi) = 0;
    MEM32(edi + 0x90) = 0;
    PUSH32(esp, 0x00386DEDu); RECOMP_ABI_CALL(0x0001132Au, sub_0001132A); /* call 0x0001132A */

loc_00386DED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00386E10
 * Original: 0x00386E10 - 0x00386EF1 (225 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00386E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00386E10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x12) = 0;
    MEM32(esp + 0x14) = ecx;
    esi = edi + 0x2E;
    goto loc_00386E30;

    /* nop */

loc_00386E30: ;
    eax = MEM32(esi + -18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386ECD; /* je: equal / zero */

loc_00386E3B: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00386E4D; /* jne: not equal / not zero */

loc_00386E42: ;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386ECD; /* je: equal / zero */

loc_00386E4D: ;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00386E55u); RECOMP_ABI_CALL(0x0002B612u, sub_0002B612); /* call 0x0002B612 */

loc_00386E55: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386ECD; /* je: equal / zero */

loc_00386E5A: ;
    ebp = MEM32(esi + -10);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x94);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x24 (32-bit) */
    edx = ecx + edi + 0x24;
    SET_LO16(ecx, MEM16(esi));
    MEM8(esp + 0x13) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00386E89; /* jle: less or equal (signed <=) */

loc_00386E79: ;
    ecx = SX16(LO16(ecx));
    ecx = MEM32(ecx * 4 + 0x8E8EB8);
    ebp = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    goto loc_00386E8C;

loc_00386E89: ;
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00386E8C: ;
    ebx = MEM32(edx);
    SET_LO16(edx, MEM16(edx + 0xA));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3A (32-bit) */
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00386EAD; /* jle: less or equal (signed <=) */

loc_00386E9D: ;
    edx = SX16(LO16(edx));
    ecx = MEM32(edx * 4 + 0x8E8EB8);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    goto loc_00386EB0;

loc_00386EAD: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00386EB0: ;
    SET_LO8(edx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386ECD; /* je: equal / zero */

loc_00386EB8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386ECD; /* je: equal / zero */

loc_00386EBC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00386ECD; /* jne: not equal / not zero */

loc_00386EC0: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00386EC8u); RECOMP_ABI_CALL(0x00023C9Bu, sub_00023C9B); /* call 0x00023C9B */

loc_00386EC8: ;
    MEM8(esp + 0x12) = 1;

loc_00386ECD: ;
    ecx = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x94;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1F (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00386E30; /* jl: less (signed <) */

loc_00386EE5: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00386F30
 * Original: 0x00386F30 - 0x00386FEB (187 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00386F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00386F30: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x10) = ebx;
    ebp = 3;
    PUSH32(esp, 0x00386F4Cu); RECOMP_ABI_CALL(0x0002EA1Au, sub_0002EA1A); /* call 0x0002EA1A */

loc_00386F4C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00386FE4; /* jne: not equal / not zero */

loc_00386F54: ;
    PUSH32(esp, esi);
    esi = edi + 0x34;

loc_00386F58: ;
    eax = MEM32(esi + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386F9F; /* je: equal / zero */

loc_00386F5F: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00386F6D; /* jne: not equal / not zero */

loc_00386F66: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386F9F; /* je: equal / zero */

loc_00386F6D: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00386F7C; /* jl: less (signed <) */

loc_00386F73: ;
    if (CMP_NE(_fa, _fb)) goto loc_00386F9B; /* jne: not equal / not zero */

loc_00386F75: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00386F9B; /* je: equal / zero */

loc_00386F7C: ;
    ecx = MEM32(esp + 0x10);
    eax = esi + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00386F89u); RECOMP_ABI_CALL(0x000203EDu, sub_000203ED); /* call 0x000203ED */

loc_00386F89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00386F9B; /* jne: not equal / not zero */

loc_00386F8D: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = ebx;
    ebp = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00386F9B; /* je: equal / zero */

loc_00386F9A: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00386F9B: ;
    edi = MEM32(esp + 0x10);

loc_00386F9F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x94;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x1F (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00386F58; /* jl: less (signed <) */

loc_00386FAB: ;
    ebx = MEM32(esp + 0x14);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x94);
    edx = MEM32(ecx + edi + 0x1C);
    esi = ecx + edi + 0x1C;
    ecx = MEM32(edi + 0x1208);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00386FCBu); RECOMP_ABI_CALL(0x0002BA09u, sub_0002BA09); /* call 0x0002BA09 */

loc_00386FCB: ;
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi) = 0;
    MEM32(esi + 0x90) = 0;
    PUSH32(esp, 0x00386FE3u); RECOMP_ABI_CALL(0x0001132Au, sub_0001132A); /* call 0x0001132A */

loc_00386FE3: ;
    POP32(esp, esi);

loc_00386FE4: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00387020
 * Original: 0x00387020 - 0x0038723A (538 bytes, 185 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00387020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00387020: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    PUSH32(esp, ebp);
    ebp = ecx;
    MEM32(esp + 8) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00387233; /* je: equal / zero */

loc_00387037: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00387233; /* je: equal / zero */

loc_0038703F: ;
    eax = MEM32(ebp + 0x1208);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax + 0x1C));
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 4 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003870AD; /* jne: not equal / not zero */

loc_00387055: ;
    edx = 0x1E;
    eax = ebp + 0x1174;
    edi = 0x3A;

loc_00387065: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00387099; /* je: equal / zero */

loc_0038706B: ;
    ebx = MEM32(ecx + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00387079; /* jne: not equal / not zero */

loc_00387072: ;
    ebx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00387099; /* je: equal / zero */

loc_00387079: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 4) (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00387099; /* jne: not equal / not zero */

loc_00387087: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00387099; /* jne: not equal / not zero */

loc_0038708C: ;
    ebx = MEM32(eax + 0xC);
    ecx = SX16(LO16(esi));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003870A5; /* jl: less (signed <) */

loc_00387099: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x94;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00387065; /* jge: greater or equal (signed >=) */

loc_003870A3: ;
    goto loc_003870AD;

loc_003870A5: ;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x003870ADu); RECOMP_ABI_CALL(0x00023C9Bu, sub_00023C9B); /* call 0x00023C9B */

loc_003870AD: ;
    ecx = ebp;
    PUSH32(esp, 0x003870B4u); RECOMP_ABI_CALL(0x0001D3E6u, sub_0001D3E6); /* call 0x0001D3E6 */

loc_003870B4: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebp + 0x1C;
    /* nop */

loc_003870C0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003871E7; /* je: equal / zero */

loc_003870CA: ;
    esi = MEM32(eax + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003870DC; /* jne: not equal / not zero */

loc_003870D1: ;
    esi = MEM32(eax + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003871E7; /* je: equal / zero */

loc_003870DC: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x94;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1F (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003870C0; /* jl: less (signed <) */

loc_003870E8: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003870EA: ;
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    ecx = ebp;
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 0x003870FBu); RECOMP_ABI_CALL(0x000253CFu, sub_000253CF); /* call 0x000253CF */

loc_003870FB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00387110; /* jne: not equal / not zero */

loc_003870FF: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x00387107u); RECOMP_ABI_CALL(0x000203EDu, sub_000203ED); /* call 0x000203ED */

loc_00387107: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x12) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00387115; /* je: equal / zero */

loc_00387110: ;
    MEM8(esp + 0x12) = 1;

loc_00387115: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00387125; /* je: equal / zero */

loc_00387119: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00387230; /* je: equal / zero */

loc_00387125: ;
    edx = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x24);
    ecx = MEM32(edi + 0x1208);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x0038713Eu); RECOMP_ABI_CALL(0x0002DD86u, sub_0002DD86); /* call 0x0002DD86 */

loc_0038713E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM8(esp + 0x13) = (CMP_L(_fas, _fbs)) ? 1 : 0; /* setl */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00387158; /* je: equal / zero */

loc_00387149: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00387158; /* je: equal / zero */

loc_00387151: ;
    ecx = edi;
    PUSH32(esp, 0x00387158u); RECOMP_ABI_CALL(0x000178C4u, sub_000178C4); /* call 0x000178C4 */

loc_00387158: ;
    ecx = MEM32(esp + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0x1F;

loc_00387166: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038717B; /* je: equal / zero */

loc_0038716C: ;
    ebx = MEM32(eax + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038717A; /* jne: not equal / not zero */

loc_00387173: ;
    ebx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038717B; /* je: equal / zero */

loc_0038717A: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0038717B: ;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x94;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00387166; /* jne: not equal / not zero */

loc_00387184: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003871F2; /* je: equal / zero */

loc_0038718C: ;
    /* nop */

loc_00387190: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003871F2; /* je: equal / zero */

loc_00387198: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003871F2; /* je: equal / zero */

loc_0038719C: ;
    ebx = MEM32(esp + 0x14);
    ecx = ebx;
    PUSH32(esp, 0x003871A7u); RECOMP_ABI_CALL(0x000178C4u, sub_000178C4); /* call 0x000178C4 */

loc_003871A7: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx + 0x1C;
    /* nop */

loc_003871B0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003871EE; /* je: equal / zero */

loc_003871B6: ;
    esi = MEM32(eax + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003871C4; /* jne: not equal / not zero */

loc_003871BD: ;
    esi = MEM32(eax + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003871EE; /* je: equal / zero */

loc_003871C4: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x94;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1F (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003871B0; /* jl: less (signed <) */

loc_003871D0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003871D2: ;
    ecx = MEM32(ebx + 0x1208);
    PUSH32(esp, 0x003871DDu); RECOMP_ABI_CALL(0x0002DD86u, sub_0002DD86); /* call 0x0002DD86 */

loc_003871DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM8(esp + 0x13) = (CMP_L(_fas, _fbs)) ? 1 : 0; /* setl */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00387190;

loc_003871E7: ;
    esi = ecx;
    goto loc_003870EA;

loc_003871EE: ;
    esi = ecx;
    goto loc_003871D2;

loc_003871F2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00387230; /* je: equal / zero */

loc_003871F6: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    ecx = esi + 8;
    PUSH32(esp, 0x00387203u); RECOMP_ABI_CALL(0x0002BEE1u, sub_0002BEE1); /* call 0x0002BEE1 */

loc_00387203: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x90) = 0;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0038722Eu); RECOMP_ABI_CALL(0x00033317u, sub_00033317); /* call 0x00033317 */

loc_0038722E: ;
    MEM32(esi) = eax;

loc_00387230: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00387233: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003872C0
 * Original: 0x003872C0 - 0x00387321 (97 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003872C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003872C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebx + 0x1C;
    /* nop */

loc_003872D0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00387311; /* je: equal / zero */

loc_003872D6: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003872E4; /* jne: not equal / not zero */

loc_003872DD: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00387311; /* je: equal / zero */

loc_003872E4: ;
    eax = MEM32(esi);
    ecx = MEM32(ebx + 0x1208);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003872F2u); RECOMP_ABI_CALL(0x0002BA09u, sub_0002BA09); /* call 0x0002BA09 */

loc_003872F2: ;
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(esi) = 0;
    MEM32(esi + 0x90) = 0;
    PUSH32(esp, 0x0038730Au); RECOMP_ABI_CALL(0x0001132Au, sub_0001132A); /* call 0x0001132A */

loc_0038730A: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x94;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00387311: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x94;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1F (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003872D0; /* jl: less (signed <) */

loc_0038731D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00387340
 * Original: 0x00387340 - 0x003873BF (127 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00387340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00387340: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00387368; /* je: equal / zero */

loc_0038734D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x29 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00387368; /* jge: greater or equal (signed >=) */

loc_00387352: ;
    esi = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038736C; /* jne: not equal / not zero */

loc_0038735B: ;
    eax = MEM32(edi * 4 + 0x8E8EB8);
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    goto loc_0038736C;

loc_00387368: ;
    esi = MEM32(esp + 0x18);

loc_0038736C: ;
    eax = MEM32(0x901E28);
    ebx = MEM32(esp + 0x20);
    ebp = MEM32(esp + 0x14);
    MEM32(eax + 0x77C) = esi;
    MEM32(eax + 0x780) = edi;
    MEM32(eax + 0x784) = ebx;
    ecx = MEM32(0x901E28);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00387397u); RECOMP_ABI_CALL(0x000381AFu, sub_000381AF); /* call 0x000381AF */

loc_00387397: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003873A0u); RECOMP_ABI_CALL(0x0002186Fu, sub_0002186F); /* call 0x0002186F */

loc_003873A0: ;
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003873BE; /* je: equal / zero */

loc_003873AF: ;
    ecx = MEM32(0x901E28);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x38;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003873BEu); RECOMP_ABI_CALL(0x0002BEE1u, sub_0002BEE1); /* call 0x0002BEE1 */

loc_003873BE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003873E0
 * Original: 0x003873E0 - 0x00387445 (101 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003873E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003873E0: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00387412; /* je: equal / zero */

loc_003873E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00387412; /* je: equal / zero */

loc_003873ED: ;
    edx = MEM32(0x901E28);
    eax = MEM32(edx + 0x778);
    ecx = 0x4A;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 4);
    edx = 0x4A;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00387425; /* jle: less or equal (signed <=) */

loc_0038740F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00387412: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00387425; /* je: equal / zero */

loc_0038741B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x46 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00387425; /* je: equal / zero */

loc_00387420: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x29 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00387442; /* jne: not equal / not zero */

loc_00387425: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0038743Fu); RECOMP_ABI_CALL(0x00029AC9u, sub_00029AC9); /* call 0x00029AC9 */

loc_0038743F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00387442: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00387460
 * Original: 0x00387460 - 0x003874D0 (112 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00387460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00387460: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0x1C));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(eax + 0x1D));
    eax = MEM32(ecx * 4 + 0x8E8FA8);
    edx = MEM32(eax + 0x230);
    _fa = (uint32_t)(MEM8(edx + 6)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 6), 3 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00387488; /* jb: below (unsigned <) */

loc_00387481: ;
    eax = 0x2C;
    goto loc_0038749C;

loc_00387488: ;
    eax = MEM32(eax + 0x230);
    SET_LO8(edx, MEM8(eax + 6));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 4) (8-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFECu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x41) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x41)) >> 32) & 1);
    eax = eax + 0x41;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0038749C: ;
    edx = MEM32(0x901E28);
    _fa = (uint32_t)(MEM8(edx + 0x764)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x764), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003874CD; /* je: equal / zero */

loc_003874AB: ;
    _fa = (uint32_t)(MEM8(edx + 0x88D)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x88D), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003874CD; /* je: equal / zero */

loc_003874B4: ;
    SET_LO8(ebx, MEM8(edx + 0x769));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003874CD; /* jne: not equal / not zero */

loc_003874BE: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003874CAu); RECOMP_ABI_CALL(0x00037FD4u, sub_00037FD4); /* call 0x00037FD4 */

loc_003874CA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003874CD: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003874F0
 * Original: 0x003874F0 - 0x0038765D (365 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003874F0(void)
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

loc_003874F0: ;
    eax = MEM32(0x8978F0);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00387655; /* je: equal / zero */

loc_00387506: ;
    ecx = 0x24;
    goto loc_00387510;

    /* nop */

loc_00387510: ;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC), LO16(ecx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00387525; /* je: equal / zero */

loc_00387516: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00387510; /* jne: not equal / not zero */

loc_0038751D: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00387525: ;
    ecx = MEM32(0x901E40);
    edx = MEM32(ecx + 0x1208);
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0x1C);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0xE);
    PUSH32(esp, edi);
    edi = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x14 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00387654; /* jg: greater (signed >) */

loc_00387547: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038756F; /* je: equal / zero */

loc_0038754B: ;
    goto loc_00387550;

    /* nop */

loc_00387550: ;
    _fa = (uint32_t)(MEM16(eax + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xC), 0x26 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00387560; /* je: equal / zero */

loc_00387557: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00387550; /* jne: not equal / not zero */

loc_0038755E: ;
    goto loc_0038756F;

loc_00387560: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xE);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00387654; /* jl: less (signed <) */

loc_0038756F: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x1D);
    edx = MEM32(ecx * 4 + 0x8E8EB8);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = 0x30;
    if (CMP_NE(_fa, _fb)) goto loc_00387592; /* jne: not equal / not zero */

loc_00387587: ;
    PUSH32(esp, 0x0038758Cu); RECOMP_ABI_CALL(0x000220B2u, sub_000220B2); /* call 0x000220B2 */

loc_0038758C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003875A0; /* je: equal / zero */

loc_00387590: ;
    goto loc_003875A5;

loc_00387592: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003875A5; /* jne: not equal / not zero */

loc_00387597: ;
    PUSH32(esp, 0x0038759Cu); RECOMP_ABI_CALL(0x000220B2u, sub_000220B2); /* call 0x000220B2 */

loc_0038759C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003875A5; /* jne: not equal / not zero */

loc_003875A0: ;
    edi = 0x31;

loc_003875A5: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x1D);
    PUSH32(esp, eax);
    PUSH32(esp, 0x45160000);
    PUSH32(esp, 0x003875B4u); RECOMP_ABI_CALL(0x00021928u, sub_00021928); /* call 0x00021928 */

loc_003875B4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x003875C4u); RECOMP_ABI_CALL(0x000188A0u, sub_000188A0); /* call 0x000188A0 */

loc_003875C4: ;
    ecx = MEM32(esp + 0x98);
    SET_LO16(edx, MEM16(ecx + 0x1C));
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(esi + 0x1D));
    ecx = MEM32(0x901E40);
    MEM16(esp + 0x14) = LO16(edx);
    edx = MEM32(ecx + 0x1208);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xE);
    MEM16(esp + 0x18) = LO16(eax);
    eax = MEM32(edx + 0x1C);
    MEM32(esp + 0x10) = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    MEM32(esp + 0xC) = 0x26;
    MEM16(esp + 0x16) = LO16(edi);
    MEM32(esp + 0x1C) = 1;
    if (CMP_GE(_fas, _fbs)) goto loc_0038761B; /* jge: greater or equal (signed >=) */

loc_00387614: ;
    esi = 0xA;
    goto loc_00387627;

loc_0038761B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A (32-bit) */
    esi = 0x1A;
    if (CMP_G(_fas, _fbs)) goto loc_00387627; /* jg: greater (signed >) */

loc_00387625: ;
    esi = eax;

loc_00387627: ;
    PUSH32(esp, 0x0038762Cu); RECOMP_ABI_CALL(0x0002CAB2u, sub_0002CAB2); /* call 0x0002CAB2 */

loc_0038762C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00387654; /* jne: not equal / not zero */

loc_00387630: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AEBF0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00387654; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AEBF0)) */

loc_0038763F: ;
    ecx = MEM32(0x901E40);
    PUSH32(esp, 0xE);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, esi);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00387654u); RECOMP_ABI_CALL(0x0002A1D6u, sub_0002A1D6); /* call 0x0002A1D6 */

loc_00387654: ;
    POP32(esp, edi);

loc_00387655: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003876C0
 * Original: 0x003876C0 - 0x003878F4 (564 bytes, 163 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003876C0(void)
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

loc_003876C0: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x90));
    esp = esp - 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x9C);
    SET_LO8(ecx, MEM8(ebp + 0x1D));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 0x3F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x14) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x14 (8-bit) */
    _cf = (int)(_fa < _fb);
    eax = 1;
    if (CMP_B(_fa, _fb)) eax = ebx; /* cmovb */
    ecx = MEM32(eax * 4 + 0x8F00F8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003876EFu); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_003876EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003878EB; /* je: equal / zero */

loc_003876F7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM16(esp + 0x20) = LO16(ecx);
    MEM16(esp + 0x1E) = LO16(ecx);
    PUSH32(esp, edi);
    ecx = eax;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = ebx;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x38) = 0x7BA310;
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x74) = ebx;
    MEM32(esp + 0x78) = ebx;
    MEM32(esp + 0x70) = 0x7CA664;
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = 0x5A;
    MEM16(esp + 0x20) = LO16(ebx);
    PUSH32(esp, 0x00387776u); RECOMP_ABI_CALL(0x00029182u, sub_00029182); /* call 0x00029182 */

loc_00387776: ;
    edx = MEM32(0x901E40);
    esi = (uint32_t)(int32_t)SMEM8(ebp + 0x1E);
    MEM8(esp + 0x10) = LO8(eax);
    eax = MEM32(edx + 0x1208);
    edi = MEM32(eax + 0x1C);
    eax = MEM32(0x8978F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003877B7; /* je: equal / zero */

loc_00387796: ;
    ecx = 0x24;
    goto loc_003877A0;

    /* nop */

loc_003877A0: ;
    _fa = (uint32_t)(MEM16(eax + 0xC)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xC), LO16(ecx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003877AF; /* je: equal / zero */

loc_003877A6: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003877A0; /* jne: not equal / not zero */

loc_003877AD: ;
    goto loc_003877B7;

loc_003877AF: ;
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x1D);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xE);

loc_003877B7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x45160000);
    PUSH32(esp, 0x003877C2u); RECOMP_ABI_CALL(0x00021928u, sub_00021928); /* call 0x00021928 */

loc_003877C2: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x8C5F80);
    ecx = esp + 0x30;
    PUSH32(esp, 0x003877E4u); RECOMP_ABI_CALL(0x00018B93u, sub_00018B93); /* call 0x00018B93 */

loc_003877E4: ;
    eax = MEM32(0x901E40);
    ecx = MEM32(eax + 0x1208);
    esi = MEM32(ecx + 0x1C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(edi));
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(8)) >> 32) & 1);
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00387803; /* jge: greater or equal (signed >=) */

loc_003877FC: ;
    esi = 0xA;
    goto loc_0038780D;

loc_00387803: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1A (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0038780D; /* jle: less or equal (signed <=) */

loc_00387808: ;
    esi = 0x1A;

loc_0038780D: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1D)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x1D), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00387826; /* jne: not equal / not zero */

loc_00387813: ;
    PUSH32(esp, 0x00387818u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_00387818: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x64;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00387874; /* jge: greater or equal (signed >=) */

loc_00387826: ;
    PUSH32(esp, 0x0038782Bu); RECOMP_ABI_CALL(0x0002CAB2u, sub_0002CAB2); /* call 0x0002CAB2 */

loc_0038782B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00387874; /* jne: not equal / not zero */

loc_0038782F: ;
    PUSH32(esp, 0x00387834u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_00387834: ;
    ecx = eax;
    PUSH32(esp, 0x0038783Bu); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_0038783B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00387874; /* je: equal / zero */

loc_0038783F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA7D8); /* comiss */
    if ((_fca > _fcb)) goto loc_00387854; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7AA7D8)) */

loc_0038784E: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x10), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00387874; /* je: equal / zero */

loc_00387854: ;
    ecx = MEM32(0x901E40);
    PUSH32(esp, 0xE);
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, esi);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00387869u); RECOMP_ABI_CALL(0x0002A1D6u, sub_0002A1D6); /* call 0x0002A1D6 */

loc_00387869: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x90)) >> 32) & 1);
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00387874: ;
    PUSH32(esp, 0x00387879u); RECOMP_ABI_CALL(0x0002CAB2u, sub_0002CAB2); /* call 0x0002CAB2 */

loc_00387879: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003878E9; /* je: equal / zero */

loc_0038787D: ;
    PUSH32(esp, 0x00387882u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_00387882: ;
    ecx = eax;
    PUSH32(esp, 0x00387889u); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_00387889: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003878E9; /* je: equal / zero */

loc_0038788D: ;
    PUSH32(esp, 0x00387892u); RECOMP_ABI_CALL(0x000242D1u, sub_000242D1); /* call 0x000242D1 */

loc_00387892: ;
    edi = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    PUSH32(esp, 0x0038789Bu); RECOMP_ABI_CALL(0x000242D1u, sub_000242D1); /* call 0x000242D1 */

loc_0038789B: ;
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003878A5u); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_003878A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x901E04) = eax;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003878E9; /* je: equal / zero */

loc_003878BE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003878E9; /* je: equal / zero */

loc_003878C2: ;
    ecx = MEM32(0x901E28);
    edx = MEM32(ecx + 0x778);
    eax = 0x4A;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x41 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_003878E9; /* jg: greater (signed >) */

loc_003878DA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 9);
    PUSH32(esp, 0x003878E6u); RECOMP_ABI_CALL(0x00029AC9u, sub_00029AC9); /* call 0x00029AC9 */

loc_003878E6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003878E9: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003878EB: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x90)) >> 32) & 1);
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00387990
 * Original: 0x00387990 - 0x00387AA8 (280 bytes, 67 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00387990(void)
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

loc_00387990: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x94);
    PUSH32(esp, esi);
    ecx = 0x8C5F80;
    PUSH32(esp, 0x003879A9u); RECOMP_ABI_CALL(0x00025839u, sub_00025839); /* call 0x00025839 */

loc_003879A9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esi + 0x28;
    ecx = MEM32(eax);
    MEM32(0x8C5FA8) = ecx;
    edx = MEM32(eax + 4);
    MEM32(0x8C5FAC) = edx;
    eax = MEM32(eax + 8);
    MEM32(0x8C5FB0) = eax;
    SET_LO16(ecx, MEM16(esi + 0x34));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(0x8C5FB4) = LO16(ecx);
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x1D);
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x64) = eax;
    MEM32(esp + 0x68) = eax;
    MEM16(esp + 0x10) = LO16(eax);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x45160000);
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x30) = 0x7BA310;
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x68) = 0x7CA664;
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = 0x5A;
    MEM16(esp + 0x1C) = LO16(eax);
    MEM16(esp + 0x1A) = LO16(eax);
    PUSH32(esp, 0x00387A57u); RECOMP_ABI_CALL(0x00021928u, sub_00021928); /* call 0x00021928 */

loc_00387A57: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(esi + 0x1C));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xE0);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00387AA0; /* jne: not equal / not zero */

loc_00387A6B: ;
    edx = (int32_t)MEMF(esp + 4); /* cvttss2si */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x34);
    PUSH32(esp, edx);
    edx = ZX8(LO8(eax));
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x1D);
    PUSH32(esp, ecx);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00387A8Cu); RECOMP_ABI_CALL(0x00026257u, sub_00026257); /* call 0x00026257 */

loc_00387A8C: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xFFFFFFF6u);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x901E40);
    PUSH32(esp, 0x00387AA0u); RECOMP_ABI_CALL(0x0002A1D6u, sub_0002A1D6); /* call 0x0002A1D6 */

loc_00387AA0: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00387AF0
 * Original: 0x00387AF0 - 0x00387F70 (1152 bytes, 269 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00387AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00387AF0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x8F6A27));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 8) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_00387E11; /* je: equal / zero */

loc_00387B0B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00387E11; /* je: equal / zero */

loc_00387B13: ;
    eax = MEM32(0x8F0040);
    ecx = MEM32(0x8F0044);
    SET_LO16(eax, MEM16(eax + 0x18));
    SET_LO16(ecx, MEM16(ecx + 0x18));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(eax) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00387B2F; /* jge: greater or equal (signed >=) */

loc_00387B2B: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00387B36;

loc_00387B2F: ;
    if (CMP_LE(_fas, _fbs)) goto loc_00387B36; /* jle: less or equal (signed <=) */

loc_00387B31: ;
    ebp = 1;

loc_00387B36: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00387D6A; /* je: equal / zero */

loc_00387B44: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00387B4Au); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_00387B4A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00387B63; /* jne: not equal / not zero */

loc_00387B51: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(2)) >> 32) & 1);
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x901DF4) = edx;
    goto loc_00387B6F;

loc_00387B63: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(0x901DF4) = eax;

loc_00387B6F: ;
    PUSH32(esp, 0x00387B74u); RECOMP_ABI_CALL(0x0002C675u, sub_0002C675); /* call 0x0002C675 */

loc_00387B74: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00387B95; /* je: equal / zero */

loc_00387B78: ;
    PUSH32(esp, 0x00387B7Du); RECOMP_ABI_CALL(0x00030653u, sub_00030653); /* call 0x00030653 */

loc_00387B7D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00387B88; /* je: equal / zero */

loc_00387B81: ;
    ebx = 3;
    goto loc_00387BC7;

loc_00387B88: ;
    MEM32(0x8C5DC8) = ebx;
    ebx = 2;
    goto loc_00387BC7;

loc_00387B95: ;
    PUSH32(esp, 0x00387B9Au); RECOMP_ABI_CALL(0x00020EB0u, sub_00020EB0); /* call 0x00020EB0 */

loc_00387B9A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00387BB3; /* je: equal / zero */

loc_00387B9E: ;
    PUSH32(esp, ebp);
    MEM32(0x8C5DC8) = ebx;
    PUSH32(esp, 0x00387BAAu); RECOMP_ABI_CALL(0x0002BEE6u, sub_0002BEE6); /* call 0x0002BEE6 */

loc_00387BAA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = eax;
    goto loc_00387BC2;

loc_00387BB3: ;
    PUSH32(esp, 0x00387BB8u); RECOMP_ABI_CALL(0x00037A8Eu, sub_00037A8E); /* call 0x00037A8E */

loc_00387BB8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00387BC7; /* je: equal / zero */

loc_00387BBC: ;
    MEM32(0x8C5DC8) = ebx;

loc_00387BC2: ;
    ebx = 5;

loc_00387BC7: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00387BD4u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00387BD4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00387BDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00387BD8u); } /* indirect call */
    }

loc_00387BDB: ;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00387BE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00387BE5u); } /* indirect call */
    }

loc_00387BE7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, 1);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00387BF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00387BF1u); } /* indirect call */
    }

loc_00387BF3: ;
    SET_LO16(ecx, MEM16(0x8F6B76));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(0x8F6BD2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(0x8F6BD2) (16-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00387C0E; /* jne: not equal / not zero */

loc_00387C09: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00387C17; /* je: equal / zero */

loc_00387C0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00387C1B; /* jne: not equal / not zero */

loc_00387C13: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00387C1B; /* jne: not equal / not zero */

loc_00387C17: ;
    SET_LO8(ecx, 1);
    goto loc_00387C1D;

loc_00387C1B: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00387C1D: ;
    _fa = (uint32_t)(MEM8(0x8F6A24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8F6A24), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00387C75; /* jne: not equal / not zero */

loc_00387C26: ;
    eax = (uint32_t)(int32_t)SMEM8(0x8F6A27);
    _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFBu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00387C75; /* ja: above (unsigned >) */

loc_00387C35: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x387E54); /* switch: 12 entries, 6 targets */
    if (_jt == 0x00387C3Cu) goto loc_00387C3C;
    if (_jt == 0x00387C75u) goto loc_00387C75;
    if (_jt == 0x00387CE8u) goto loc_00387CE8;
    if (_jt == 0x00387CECu) goto loc_00387CEC;
    if (_jt == 0x00387D5Fu) goto loc_00387D5F;
    if (_jt == 0x00387D68u) goto loc_00387D68;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00387C3C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00387C75; /* je: equal / zero */

loc_00387C40: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, 0x00387C4Bu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00387C4B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00387C52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00387C4Fu); } /* indirect call */
    }

loc_00387C52: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00387C5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00387C5Au); } /* indirect call */
    }

loc_00387C5C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8C5DC8) = eax;
    ebx = 4;
    goto loc_00387D68;

loc_00387C75: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, 0x00387C80u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00387C80: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00387C87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00387C84u); } /* indirect call */
    }

loc_00387C87: ;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00387C93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00387C91u); } /* indirect call */
    }

loc_00387C93: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, 1);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00387C9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00387C9Du); } /* indirect call */
    }

loc_00387C9F: ;
    SET_LO16(ecx, MEM16(0x8F6B76));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(0x8F6BD2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(0x8F6BD2) (16-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00387CBA; /* jne: not equal / not zero */

loc_00387CB5: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00387CC3; /* je: equal / zero */

loc_00387CBA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00387CC7; /* jne: not equal / not zero */

loc_00387CBF: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00387CC7; /* jne: not equal / not zero */

loc_00387CC3: ;
    SET_LO8(ecx, 1);
    goto loc_00387CC9;

loc_00387CC7: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00387CC9: ;
    _fa = (uint32_t)(MEM8(0x8F6A24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8F6A24), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00387CEC; /* jne: not equal / not zero */

loc_00387CD2: ;
    eax = (uint32_t)(int32_t)SMEM8(0x8F6A27);
    _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFBu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00387CEC; /* ja: above (unsigned >) */

loc_00387CE1: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x387E64); /* switch: 12 entries, 6 targets */
    if (_jt == 0x00387C3Cu) goto loc_00387C3C;
    if (_jt == 0x00387C75u) goto loc_00387C75;
    if (_jt == 0x00387CE8u) goto loc_00387CE8;
    if (_jt == 0x00387CECu) goto loc_00387CEC;
    if (_jt == 0x00387D5Fu) goto loc_00387D5F;
    if (_jt == 0x00387D68u) goto loc_00387D68;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00387CE8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00387D63; /* jne: not equal / not zero */

loc_00387CEC: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, 0x00387CF7u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00387CF7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00387CFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00387CFBu); } /* indirect call */
    }

loc_00387CFE: ;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00387D0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00387D08u); } /* indirect call */
    }

loc_00387D0A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, 1);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00387D16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00387D14u); } /* indirect call */
    }

loc_00387D16: ;
    SET_LO16(ecx, MEM16(0x8F6B76));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(0x8F6BD2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(0x8F6BD2) (16-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00387D31; /* jne: not equal / not zero */

loc_00387D2C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00387D3A; /* je: equal / zero */

loc_00387D31: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00387D3E; /* jne: not equal / not zero */

loc_00387D36: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00387D3E; /* jne: not equal / not zero */

loc_00387D3A: ;
    SET_LO8(ecx, 1);
    goto loc_00387D40;

loc_00387D3E: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00387D40: ;
    _fa = (uint32_t)(MEM8(0x8F6A24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8F6A24), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00387D68; /* jne: not equal / not zero */

loc_00387D49: ;
    eax = (uint32_t)(int32_t)SMEM8(0x8F6A27);
    _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFBu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00387D68; /* ja: above (unsigned >) */

loc_00387D58: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x387E74); /* switch: 12 entries, 6 targets */
    if (_jt == 0x00387C3Cu) goto loc_00387C3C;
    if (_jt == 0x00387C75u) goto loc_00387C75;
    if (_jt == 0x00387CE8u) goto loc_00387CE8;
    if (_jt == 0x00387CECu) goto loc_00387CEC;
    if (_jt == 0x00387D5Fu) goto loc_00387D5F;
    if (_jt == 0x00387D68u) goto loc_00387D68;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00387D5F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00387D68; /* je: equal / zero */

loc_00387D63: ;
    ebx = 3;

loc_00387D68: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00387D6A: ;
    MEM32(0x8C5DBC) = 0x10;
    MEM32(0x901D94) = 0;
    PUSH32(esp, 0x00387D83u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_00387D83: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00387DC8; /* jne: not equal / not zero */

loc_00387D87: ;
    PUSH32(esp, 0x00387D8Cu); RECOMP_ABI_CALL(0x00028D22u, sub_00028D22); /* call 0x00028D22 */

loc_00387D8C: ;
    ecx = 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00387E04; /* jle: less or equal (signed <=) */

loc_00387D95: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00387DA2; /* jne: not equal / not zero */

loc_00387D9A: ;
    MEM32(0x901D94) = ecx;
    goto loc_00387DD6;

loc_00387DA2: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x901D94) = 1;
    if (CMP_GE(_fas, _fbs)) goto loc_00387DBF; /* jge: greater or equal (signed >=) */

loc_00387DB4: ;
    edx = (uint32_t)(int32_t)SMEM8(0x8C5FFC);
    MEM32(esp + 8) = edx;

loc_00387DBF: ;
    SET_LO8(eax, MEM8(0x8C5FF0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00387DD2; /* je: equal / zero */

loc_00387DC8: ;
    MEM32(0x901D94) = 3;

loc_00387DD2: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00387DD8; /* jge: greater or equal (signed >=) */

loc_00387DD6: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00387DD8: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00387DED; /* jge: greater or equal (signed >=) */

loc_00387DE0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00387DE6u); RECOMP_ABI_CALL(0x000357E8u, sub_000357E8); /* call 0x000357E8 */

loc_00387DE6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = eax;

loc_00387DED: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00387DFDu); RECOMP_ABI_CALL(0x00037FD4u, sub_00037FD4); /* call 0x00037FD4 */

loc_00387DFD: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00387E04: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00387DD2; /* jne: not equal / not zero */

loc_00387E09: ;
    MEM32(0x901D94) = ecx;
    goto loc_00387DD6;

loc_00387E11: ;
    ecx = MEM32(0x8F0650);
    eax = MEM32(ecx + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00387E39; /* je: equal / zero */

loc_00387E21: ;
    eax = MEM32(eax + 0x14);
    MEM32(0x901D94) = 0;
    MEM32(esp + 8) = eax;
    ebx = 6;
    goto loc_00387DD6;

loc_00387E39: ;
    ecx = MEM32(ecx + 0x24);
    MEM32(0x901D94) = 2;
    MEM32(esp + 8) = ecx;
    ebx = 6;
    goto loc_00387DD6;

}

/**
 * sub_00387F70
 * Original: 0x00387F70 - 0x00388020 (176 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00387F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00387F70: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(0x901E08) = eax;
    MEM32(0x901E0C) = eax;
    PUSH32(esp, 0x00387F83u); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_00387F83: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = 7;
    if (CMP_EQ(_fa, _fb)) goto loc_00387FE4; /* je: equal / zero */

loc_00387F8F: ;
    edx = MEM32(esp + 8);
    eax = MEM32(edx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00387FA5; /* je: equal / zero */

loc_00387F9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM8(esp + 8) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00387FAA; /* jne: not equal / not zero */

loc_00387FA5: ;
    MEM8(esp + 8) = 1;

loc_00387FAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = MEM32(edx + 0x1C);
    PUSH32(esp, ebx);
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00387FCF; /* jne: not equal / not zero */

loc_00387FBF: ;
    SET_LO8(edx, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00387FDE; /* jne: not equal / not zero */

loc_00387FC7: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00387FDE; /* jne: not equal / not zero */

loc_00387FCB: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00387FDE; /* jne: not equal / not zero */

loc_00387FCF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00387FE3; /* jne: not equal / not zero */

loc_00387FD6: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00387FDE; /* jne: not equal / not zero */

loc_00387FDA: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00387FE3; /* je: equal / zero */

loc_00387FDE: ;
    esi = 8;

loc_00387FE3: ;
    POP32(esp, ebx);

loc_00387FE4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00387FF2u); RECOMP_ABI_CALL(0x00037FD4u, sub_00037FD4); /* call 0x00037FD4 */

loc_00387FF2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00388020
 * Original: 0x00388020 - 0x00388113 (243 bytes, 63 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00388020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00388020: ;
    edx = (uint32_t)(int32_t)SMEM16(0x8C6238);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0038810B; /* jle: less or equal (signed <=) */

loc_0038803A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x94);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, ebx);
    goto loc_00388050;

    /* nop */
    /* nop */

loc_00388050: ;
    ebx = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x8C623A);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038806B; /* je: equal / zero */

loc_0038805C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00388050; /* jl: less (signed <) */

loc_00388061: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0038806B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x1C);
    MEM16(esp + 0x1C) = LO16(eax);
    MEM16(esp + 0x1A) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x1D);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    MEM32(esp + 0x3C) = edi;
    MEM32(esp + 0x40) = edi;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x38) = 0x7BA310;
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x74) = edi;
    MEM32(esp + 0x78) = edi;
    MEM32(esp + 0x70) = 0x7CA664;
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = 0x5A;
    MEM16(esp + 0x20) = LO16(edi);
    PUSH32(esp, 0x003880F5u); RECOMP_ABI_CALL(0x0002D6DDu, sub_0002D6DD); /* call 0x0002D6DD */

loc_003880F5: ;
    ecx = MEM32(0x901E40);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0xFFFFFFF4u);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00388109u); RECOMP_ABI_CALL(0x0002A1D6u, sub_0002A1D6); /* call 0x0002A1D6 */

loc_00388109: ;
    POP32(esp, ebx);
    POP32(esp, esi);

loc_0038810B: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00388150
 * Original: 0x00388150 - 0x0038820E (190 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00388150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00388150: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x1C);
    eax = ZX8(MEM8(eax + 0x1D));
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_003881E0; /* je: equal / zero */

loc_0038816D: ;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00388186; /* je: equal / zero */

loc_00388172: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00388204; /* jne: not equal / not zero */

loc_00388179: ;
    MEM32(0x901E00) = esi;
    edi = 0x21;
    goto loc_003881F5;

loc_00388186: ;
    ecx = esp + 0xC;
    MEM32(0x901E00) = esi;
    edi = 0x22;
    PUSH32(esp, 0x0038819Au); RECOMP_ABI_CALL(0x000188A0u, sub_000188A0); /* call 0x000188A0 */

loc_0038819A: ;
    ecx = MEM32(0x901E40);
    eax = MEM32(ecx + 0x1208);
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0xFFFFFFF4u);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 6;
    MEM16(esp + 0x20) = 0xE;
    MEM16(esp + 0x22) = LO16(esi);
    MEM16(esp + 0x24) = 0;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x28) = 2;
    PUSH32(esp, 0x003881DEu); RECOMP_ABI_CALL(0x0002A1D6u, sub_0002A1D6); /* call 0x0002A1D6 */

loc_003881DE: ;
    goto loc_003881F5;

loc_003881E0: ;
    ecx = MEM32(0x8E9380);
    edx = MEM32(ecx + 0x10);
    ebx = (uint32_t)(int32_t)SMEM8(edx + 0x132);
    edi = 0xA;

loc_003881F5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00388201u); RECOMP_ABI_CALL(0x00037FD4u, sub_00037FD4); /* call 0x00037FD4 */

loc_00388201: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00388204: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00388240
 * Original: 0x00388240 - 0x003887A9 (1385 bytes, 375 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00388240(void)
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

loc_00388240: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x2C));
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x30);
    ecx = MEM32(0x901E40);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0x1C);
    PUSH32(esp, esi);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = ebp;
    esi = 0x7FFF;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x00388272u); RECOMP_ABI_CALL(0x0001C022u, sub_0001C022); /* call 0x0001C022 */

loc_00388272: ;
    ecx = MEM32(0x8E8F84);
    edx = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    MEM32(esp + 0x28) = eax;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00388296; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_0038828F: ;
    ebx = 1;
    goto loc_00388298;

loc_00388296: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00388298: ;
    PUSH32(esp, 0x0038829Du); RECOMP_ABI_CALL(0x0001D3AFu, sub_0001D3AF); /* call 0x0001D3AF */

loc_0038829D: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003882A9; /* jne: not equal / not zero */

loc_003882A4: ;
    edi = 1;

loc_003882A9: ;
    ecx = MEM32(edi * 4 + 0x8F0040);
    edx = MEM32(ecx + 8);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x39);
    ecx = MEM32(0x901E40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003882C3u); RECOMP_ABI_CALL(0x0002B72Fu, sub_0002B72F); /* call 0x0002B72F */

loc_003882C3: ;
    MEM32(esp + 0x24) = eax;
    MEM16(esp + 0x2C) = 6;
    MEM16(esp + 0x2E) = 0xE;
    MEM16(esp + 0x30) = 0xF;
    MEM16(esp + 0x32) = 0xB;
    MEM16(esp + 0x34) = 0x10;
    MEM16(esp + 0x36) = 4;
    MEM16(esp + 0x38) = 2;
    PUSH32(esp, 0x003882FDu); RECOMP_ABI_CALL(0x0002CAB2u, sub_0002CAB2); /* call 0x0002CAB2 */

loc_003882FD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0038835F; /* je: equal / zero */

loc_00388301: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0038835F; /* jne: not equal / not zero */

loc_00388306: ;
    ecx = MEM32(0x901E28);
    _fa = (uint32_t)(MEM32(ecx + 0x778)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x778), 9 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003887A1; /* je: equal / zero */

loc_00388319: ;
    PUSH32(esp, 0x0038831Eu); RECOMP_ABI_CALL(0x000242D1u, sub_000242D1); /* call 0x000242D1 */

loc_0038831E: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x0038832Bu); RECOMP_ABI_CALL(0x000242D1u, sub_000242D1); /* call 0x000242D1 */

loc_0038832B: ;
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00388335u); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_00388335: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(0x901E04) = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 9);
    PUSH32(esp, 0x00388354u); RECOMP_ABI_CALL(0x00037FD4u, sub_00037FD4); /* call 0x00037FD4 */

loc_00388354: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0038835F: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00388361: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + eax * 2 + 0x2E);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00388598; /* je: equal / zero */

loc_0038836E: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00388361; /* jl: less (signed <) */

loc_00388374: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00388598; /* je: equal / zero */

loc_00388381: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00388598; /* je: equal / zero */

loc_00388389: ;
    PUSH32(esp, 0x0038838Eu); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_0038838E: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x64;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x32 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(esp + 0x10) = (CMP_L(_fas, _fbs)) ? 1 : 0; /* setl */
    PUSH32(esp, 0x003883A4u); RECOMP_ABI_CALL(0x00028D22u, sub_00028D22); /* call 0x00028D22 */

loc_003883A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00388517; /* jne: not equal / not zero */

loc_003883AC: ;
    SET_LO8(eax, MEM8(0x901DF0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003883CF; /* je: equal / zero */

loc_003883B5: ;
    SET_LO8(eax, MEM8(0x901DD8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003883EE; /* jne: not equal / not zero */

loc_003883BE: ;
    esi = 0x27;
    MEM8(0x901DD8) = 1;
    goto loc_003886E2;

loc_003883CF: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x003883D6u); RECOMP_ABI_CALL(0x00016F1Eu, sub_00016F1E); /* call 0x00016F1E */

loc_003883D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003883EE; /* je: equal / zero */

loc_003883DD: ;
    esi = 0x26;
    MEM8(0x901DF0) = 1;
    MEM8(esp + 0x10) = 0;

loc_003883EE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 9 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00388517; /* jne: not equal / not zero */

loc_003883F7: ;
    PUSH32(esp, 0x003883FCu); RECOMP_ABI_CALL(0x0001354Eu, sub_0001354E); /* call 0x0001354E */

loc_003883FC: ;
    edi = eax;
    edx = MEM32(edi * 4 + 0x8F0040);
    eax = MEM32(edx + 8);
    ebx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    eax = MEM32(0x901E14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00388517; /* jne: not equal / not zero */

loc_00388419: ;
    PUSH32(esp, 0x0038841Eu); RECOMP_ABI_CALL(0x00028D22u, sub_00028D22); /* call 0x00028D22 */

loc_0038841E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00388517; /* jne: not equal / not zero */

loc_00388427: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00388517; /* jne: not equal / not zero */

loc_00388430: ;
    ecx = MEM32(edi * 4 + 0x8F0040);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x132);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00388444u); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_00388444: ;
    ebp = MEM32(ebx * 4 + 0x8E8FA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(ebp + 0x230);
    SET_LO8(ecx, MEM8(eax + 6));
    MEM8(esp + 0x11) = (CMP_NE(_fa, _fb)) ? 1 : 0; /* setne */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = ZX16(MEM16(eax));
    MEM8(esp + 0x12) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((5) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(edi * 4 + 0x8F0040);
    ecx = MEM32(eax);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x18);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x18);
    MEM8(esp + 0x13) = (CMP_G(_fas, _fbs)) ? 1 : 0; /* setg */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003884A1; /* jle: less or equal (signed <=) */

loc_00388498: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esp + 0x40) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_003884A6; /* je: equal / zero */

loc_003884A1: ;
    MEM8(esp + 0x40) = 0;

loc_003884A6: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x896160);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((5) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00388513; /* jge: greater or equal (signed >=) */

loc_003884C5: ;
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x003884CCu); RECOMP_ABI_CALL(0x00016F1Eu, sub_00016F1E); /* call 0x00016F1E */

loc_003884CC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00388513; /* jne: not equal / not zero */

loc_003884D3: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00388513; /* je: equal / zero */

loc_003884DB: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00388513; /* je: equal / zero */

loc_003884E3: ;
    SET_LO8(eax, MEM8(esp + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00388513; /* je: equal / zero */

loc_003884EB: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00388513; /* je: equal / zero */

loc_003884F3: ;
    ecx = MEM32(ebp + 0x230);
    _fa = (uint32_t)(MEM16(ecx + 2)) & 0xFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 2), 0xA (16-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = edi;
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(0x43) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x43)) >> 32) & 1);
    esi = esi + 0x43;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ebx;
    MEM32(0x901E14) = ebx;

loc_00388513: ;
    ebp = MEM32(esp + 0x20);

loc_00388517: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0038858C; /* je: equal / zero */

loc_0038851F: ;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = 0x8F1958;
    MEM32(esp + 0x48) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0038853Bu); RECOMP_ABI_CALL(0x00014543u, sub_00014543); /* call 0x00014543 */

loc_0038853B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(esp + 0x40);
    MEM32(esp + 0x18) = ecx;
    if (CMP_A(_fa, _fb)) goto loc_0038858C; /* ja: above (unsigned >) */

loc_00388548: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3887AC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0038854Fu) goto loc_0038854F;
    if (_jt == 0x00388559u) goto loc_00388559;
    if (_jt == 0x0038856Cu) goto loc_0038856C;
    if (_jt == 0x00388576u) goto loc_00388576;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0038854F: ;
    esi = 0x2A;
    goto loc_003886E2;

loc_00388559: ;
    PUSH32(esp, 0x0038855Eu); RECOMP_ABI_CALL(0x000154A7u, sub_000154A7); /* call 0x000154A7 */

loc_0038855E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0038858C; /* jne: not equal / not zero */

loc_00388562: ;
    esi = 0x29;
    goto loc_003886E2;

loc_0038856C: ;
    esi = 0x2B;
    goto loc_003886E2;

loc_00388576: ;
    PUSH32(esp, 0x0038857Bu); RECOMP_ABI_CALL(0x00028D22u, sub_00028D22); /* call 0x00028D22 */

loc_0038857B: ;
    esi = eax;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x25) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x25)) >> 32) & 1);
    esi = esi + 0x25;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003886E2;

loc_0038858C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x7FFF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003886E2; /* jne: not equal / not zero */

loc_00388598: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003885B1; /* jne: not equal / not zero */

loc_0038859D: ;
    edx = MEM32(0x901E00);
    MEM32(esp + 0x14) = edx;
    esi = 0x21;
    goto loc_003886E2;

loc_003885B1: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003885E1; /* jne: not equal / not zero */

loc_003885B6: ;
    eax = MEM32(0x8E9380);
    ecx = MEM32(eax + 0x10);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x132);
    eax = (uint32_t)(int32_t)SMEM8(edx + eax + 0x16);
    esi = 0x3A;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x003885D8u); RECOMP_ABI_CALL(0x000371BAu, sub_000371BA); /* call 0x000371BA */

loc_003885D8: ;
    MEM32(esp + 0x1C) = eax;
    goto loc_003886E2;

loc_003885E1: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0038860F; /* jne: not equal / not zero */

loc_003885E6: ;
    ecx = MEM32(0x8E9380);
    eax = (uint32_t)(int32_t)SMEM8(ecx);
    edx = MEM32(eax * 4 + 0x8F0040);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(edx + 0x1C);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    esi = 0x3B;
    MEM32(esp + 0x14) = ecx;
    goto loc_003886E2;

loc_0038860F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00388639; /* jne: not equal / not zero */

loc_00388614: ;
    edx = MEM32(0x8E9380);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0xB);
    ecx = MEM32(0x8F004C);
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x18) = eax;
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x39);
    esi = 0x3C;
    goto loc_003886DE;

loc_00388639: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003886D4; /* je: equal / zero */

loc_00388642: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003886D4; /* je: equal / zero */

loc_0038864B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xB (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00388663; /* jne: not equal / not zero */

loc_00388650: ;
    esi = 0x36;
    PUSH32(esp, 0x0038865Au); RECOMP_ABI_CALL(0x0001354Eu, sub_0001354E); /* call 0x0001354E */

loc_0038865A: ;
    MEM32(esp + 0x18) = eax;
    goto loc_003886E2;

loc_00388663: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 9 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0038869A; /* jne: not equal / not zero */

loc_00388668: ;
    esi = 0x3D;
    PUSH32(esp, 0x00388672u); RECOMP_ABI_CALL(0x0001354Eu, sub_0001354E); /* call 0x0001354E */

loc_00388672: ;
    ecx = MEM32(eax * 4 + 0x8F0040);
    edx = MEM32(ecx + 8);
    ecx = MEM32(0x901E40);
    MEM32(esp + 0x18) = eax;
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x39);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x00388694u); RECOMP_ABI_CALL(0x0002B72Fu, sub_0002B72F); /* call 0x0002B72F */

loc_00388694: ;
    MEM32(esp + 0x24) = eax;
    goto loc_003886E2;

loc_0038869A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003886C1; /* jne: not equal / not zero */

loc_0038869F: ;
    esi = 0x35;

loc_003886A4: ;
    PUSH32(esp, 0x003886A9u); RECOMP_ABI_CALL(0x0001354Eu, sub_0001354E); /* call 0x0001354E */

loc_003886A9: ;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(eax * 4 + 0x8F0040);
    ecx = MEM32(eax + 8);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x39);
    MEM32(esp + 0x14) = edx;
    goto loc_003886E2;

loc_003886C1: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x13 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003886CD; /* jne: not equal / not zero */

loc_003886C6: ;
    esi = 0x29;
    goto loc_003886A4;

loc_003886CD: ;
    esi = 0x3E;
    goto loc_003886D9;

loc_003886D4: ;
    esi = 0x37;

loc_003886D9: ;
    PUSH32(esp, 0x003886DEu); RECOMP_ABI_CALL(0x000371BAu, sub_000371BA); /* call 0x000371BA */

loc_003886DE: ;
    MEM32(esp + 0x14) = eax;

loc_003886E2: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003886F9u); RECOMP_ABI_CALL(0x00037FD4u, sub_00037FD4); /* call 0x00037FD4 */

loc_003886F9: ;
    eax = MEM32(esp + 0x38);
    _cf = 0; /* logical op clears CF */
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00388732; /* je: equal / zero */

loc_00388707: ;
    ecx = MEM32(0x901E40);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x94);
    eax = eax + ecx + 0x24;
    MEM32(esp + 0x18) = edx;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    MEM32(esp + 0x14) = edx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xC);
    esi = 0x39;
    MEM32(esp + 0x1C) = eax;
    goto loc_00388787;

loc_00388732: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00388787; /* je: equal / zero */

loc_0038873A: ;
    ecx = MEM32(0x901E40);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x94);
    eax = eax + ecx + 0x24;
    SET_LO16(ecx, MEM16(eax + 0xA));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = 0x38;
    if (CMP_LE(_fas, _fbs)) goto loc_00388766; /* jle: less or equal (signed <=) */

loc_00388758: ;
    edx = SX16(LO16(ecx));
    ecx = MEM32(edx * 4 + 0x8E8EB8);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x30);

loc_00388766: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xC);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xC);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0x00388784u); RECOMP_ABI_CALL(0x0001998Au, sub_0001998A); /* call 0x0001998A */

loc_00388784: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00388787: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0038879Eu); RECOMP_ABI_CALL(0x00037FD4u, sub_00037FD4); /* call 0x00037FD4 */

loc_0038879E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003887A1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00388920
 * Original: 0x00388920 - 0x00388960 (64 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00388920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00388920: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x1C);
    edx = MEM32(edx + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(eax * 4 + 0x8E8EB8);
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 1 (32-bit) */
    ecx = 0x16;
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00388943; /* jne: not equal / not zero */

loc_0038893E: ;
    ecx = 0x17;

loc_00388943: ;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0038894Fu); RECOMP_ABI_CALL(0x00037FD4u, sub_00037FD4); /* call 0x00037FD4 */

loc_0038894F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00388960
 * Original: 0x00388960 - 0x003889D2 (114 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00388960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00388960: ;
    ecx = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x1C);
    SET_LO8(edx, MEM8(ecx + 0x22));
    PUSH32(esp, ebx);
    ebx = MEM32(eax * 4 + 0x8E8EB8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 3 (8-bit) */
    esi = 0x18;
    if (CMP_NE(_fa, _fb)) goto loc_0038898A; /* jne: not equal / not zero */

loc_00388981: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x1D);
    edi = 1;

loc_0038898A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038899C; /* jne: not equal / not zero */

loc_0038898F: ;
    _fa = (uint32_t)(MEM8(ecx + 0x20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x20), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038899C; /* je: equal / zero */

loc_00388995: ;
    esi = 0x1C;
    goto loc_003889B8;

loc_0038899C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003889AE; /* jne: not equal / not zero */

loc_003889A1: ;
    _fa = (uint32_t)(MEM8(ecx + 0x21)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x21), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003889AE; /* je: equal / zero */

loc_003889A7: ;
    esi = 0x1C;
    goto loc_003889B8;

loc_003889AE: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003889B8; /* je: equal / zero */

loc_003889B3: ;
    esi = 0x1A;

loc_003889B8: ;
    _fa = (uint32_t)(MEM32(ebx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x28), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003889BF; /* jne: not equal / not zero */

loc_003889BE: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003889BF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003889CBu); RECOMP_ABI_CALL(0x00037FD4u, sub_00037FD4); /* call 0x00037FD4 */

loc_003889CB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003889F0
 * Original: 0x003889F0 - 0x00388E07 (1047 bytes, 293 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003889F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003889F0: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x8C));
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x9C);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = 0x8C5FB8;
    PUSH32(esp, 0x00388A0Cu); RECOMP_ABI_CALL(0x0002A3ACu, sub_0002A3AC); /* call 0x0002A3AC */

loc_00388A0C: ;
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x44);
    eax = MEM32(ebx * 4 + 0x8E8FA8);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x45);
    MEM32(esp + 0x10) = eax;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    ebp = MEM32(eax * 4 + 0x8F0040);
    eax = MEM32(ebp);
    edx = MEM32(eax + 0x10);
    eax = (uint32_t)(int32_t)SMEM16(edx + 2);
    edx = (uint32_t)(int32_t)SMEM8(ebp + 0x132);
    MEM32(0x8C5DB4) = ecx;
    ecx = MEM32(ebp + 0x10);
    edi = (uint32_t)(int32_t)SMEM16(ecx + 2);
    PUSH32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(eax));
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x00388A50u); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_00388A50: ;
    SET_LO8(ecx, MEM8(esi + 0x3E));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00388AB5; /* je: equal / zero */

loc_00388A5F: ;
    SET_LO8(eax, MEM8(esi + 0x31));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00388AAB; /* je: equal / zero */

loc_00388A66: ;
    SET_LO8(edx, MEM8(esi + 0x32));
    ecx = MEM32(0x8E8F84);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(0x901DF8) = LO8(eax);
    eax = MEM32(ecx + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00388A98; /* jl: less (signed <) */

loc_00388A83: ;
    eax = MEM32(eax * 4 + 0x8E8EB8);
    ebx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    edi = 0x10;
    goto loc_00388B61;

loc_00388A98: ;
    eax = MEM32(0x8E9394);
    ebx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    edi = 0x10;
    goto loc_00388B61;

loc_00388AAB: ;
    edi = 0xD;
    goto loc_00388B61;

loc_00388AB5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFEu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00388AC8; /* jge: greater or equal (signed >=) */

loc_00388ABA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00388AC8; /* je: equal / zero */

loc_00388ABE: ;
    edi = 0xF;
    goto loc_00388B61;

loc_00388AC8: ;
    SET_LO8(eax, MEM8(esi + 0x31));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00388AE5; /* je: equal / zero */

loc_00388ACF: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x32);
    PUSH32(esp, edx);
    edi = 0x11;
    PUSH32(esp, 0x00388ADEu); RECOMP_ABI_CALL(0x00037CBEu, sub_00037CBE); /* call 0x00037CBE */

loc_00388ADE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    goto loc_00388B61;

loc_00388AE5: ;
    SET_LO8(eax, MEM8(esi + 0x33));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00388B04; /* je: equal / zero */

loc_00388AEC: ;
    PUSH32(esp, 0xFFFFFFFFu);
    edi = 0x12;
    MEM8(0x901DE8) = 0;
    PUSH32(esp, 0x00388AFFu); RECOMP_ABI_CALL(0x0001ADD0u, sub_0001ADD0); /* call 0x0001ADD0 */

loc_00388AFF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00388B61;

loc_00388B04: ;
    SET_LO8(eax, MEM8(ebp + 0x132));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, MEM8(esi + 0x45));
    if (CMP_NE(_fa, _fb)) goto loc_00388B3A; /* jne: not equal / not zero */

loc_00388B11: ;
    edx = MEM32(0x901E14);
    ecx = SX8(LO8(eax));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00388B33; /* jne: not equal / not zero */

loc_00388B1E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00388B33; /* jle: less or equal (signed <=) */

loc_00388B22: ;
    MEM32(0x901E14) = 0xFFFFFFFFu;
    edi = 0x45;
    goto loc_00388B61;

loc_00388B33: ;
    edi = 0xE;
    goto loc_00388B61;

loc_00388B3A: ;
    ecx = MEM32(0x901E14);
    edx = SX8(LO8(eax));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00388B5C; /* jne: not equal / not zero */

loc_00388B47: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00388B5C; /* jle: less or equal (signed <=) */

loc_00388B4B: ;
    MEM32(0x901E14) = 0xFFFFFFFFu;
    edi = 0x45;
    goto loc_00388B61;

loc_00388B5C: ;
    edi = 0x13;

loc_00388B61: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x28);
    edx = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00388B76; /* jne: not equal / not zero */

loc_00388B71: ;
    edi = 0xB;

loc_00388B76: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x41);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x40);
    if (CMP_NE(_fa, _fb)) goto loc_00388B96; /* jne: not equal / not zero */

loc_00388B83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00388B96; /* jne: not equal / not zero */

loc_00388B87: ;
    MEM32(0x901E1C) = 2;
    goto loc_00388C2F;

loc_00388B96: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00388BAA; /* jne: not equal / not zero */

loc_00388B9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00388BAA; /* jne: not equal / not zero */

loc_00388B9F: ;
    MEM32(0x901E1C) = edx;
    goto loc_00388C2F;

loc_00388BAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00388BBB; /* jne: not equal / not zero */

loc_00388BAF: ;
    MEM32(0x901E1C) = 3;
    goto loc_00388C2F;

loc_00388BBB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00388BCB; /* jne: not equal / not zero */

loc_00388BBF: ;
    MEM32(0x901E1C) = 0;
    goto loc_00388C2F;

loc_00388BCB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00388BDC; /* jne: not equal / not zero */

loc_00388BD0: ;
    MEM32(0x901E1C) = 6;
    goto loc_00388C2F;

loc_00388BDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00388BED; /* jne: not equal / not zero */

loc_00388BE1: ;
    MEM32(0x901E1C) = 4;
    goto loc_00388C2F;

loc_00388BED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00388BFE; /* jne: not equal / not zero */

loc_00388BF2: ;
    MEM32(0x901E1C) = 9;
    goto loc_00388C2F;

loc_00388BFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00388C0F; /* jne: not equal / not zero */

loc_00388C03: ;
    MEM32(0x901E1C) = 8;
    goto loc_00388C2F;

loc_00388C0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00388C20; /* jne: not equal / not zero */

loc_00388C14: ;
    MEM32(0x901E1C) = 5;
    goto loc_00388C2F;

loc_00388C20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00388C2F; /* jne: not equal / not zero */

loc_00388C25: ;
    MEM32(0x901E1C) = 7;

loc_00388C2F: ;
    PUSH32(esp, 0x00388C34u); RECOMP_ABI_CALL(0x0002CAB2u, sub_0002CAB2); /* call 0x0002CAB2 */

loc_00388C34: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00388CB6; /* je: equal / zero */

loc_00388C38: ;
    PUSH32(esp, 0x00388C3Du); RECOMP_ABI_CALL(0x000242D1u, sub_000242D1); /* call 0x000242D1 */

loc_00388C3D: ;
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    PUSH32(esp, 0x00388C46u); RECOMP_ABI_CALL(0x000242D1u, sub_000242D1); /* call 0x000242D1 */

loc_00388C46: ;
    ecx = MEM32(esp + 0x10);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    edi = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00388C58u); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_00388C58: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(3)) >> 32) & 1);
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x901E04) = eax;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00388DFC; /* je: equal / zero */

loc_00388C77: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00388DFC; /* je: equal / zero */

loc_00388C7F: ;
    ecx = MEM32(0x901E28);
    edx = MEM32(ecx + 0x778);
    eax = 0x4A;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x41 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00388DFC; /* jg: greater (signed >) */

loc_00388C9B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 9);
    PUSH32(esp, 0x00388CA8u); RECOMP_ABI_CALL(0x00029AC9u, sub_00029AC9); /* call 0x00029AC9 */

loc_00388CA8: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x8C)) >> 32) & 1);
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00388CB6: ;
    SET_LO8(eax, MEM8(esi + 0x31));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00388CDB; /* jne: not equal / not zero */

loc_00388CBD: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x44);
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x132);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00388CCFu); RECOMP_ABI_CALL(0x000198D6u, sub_000198D6); /* call 0x000198D6 */

loc_00388CCF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00388CDB; /* je: equal / zero */

loc_00388CD6: ;
    edi = 0xC;

loc_00388CDB: ;
    ecx = MEM32(0x8F0044);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x18);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x74) = eax;
    MEM16(esp + 0x1C) = LO16(eax);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(esp + 0x20) = LO16(eax);
    MEM16(esp + 0x1E) = LO16(eax);
    eax = MEM32(0x8F0040);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x18);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x45);
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x3F);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esp + 0x28;
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x48) = 0x7BA310;
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x80) = 0x7CA664;
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x28) = 0x5A;
    PUSH32(esp, 0x00388D7Fu); RECOMP_ABI_CALL(0x00024DA8u, sub_00024DA8); /* call 0x00024DA8 */

loc_00388D7F: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0xFFFFFFECu);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x901E40);
    PUSH32(esp, 0x00388D93u); RECOMP_ABI_CALL(0x0002A1D6u, sub_0002A1D6); /* call 0x0002A1D6 */

loc_00388D93: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00388DC3; /* je: equal / zero */

loc_00388D9C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00388DC3; /* je: equal / zero */

loc_00388DA0: ;
    eax = MEM32(esi + 0x5C);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x3F);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00388DB5u); RECOMP_ABI_CALL(0x00037FD4u, sub_00037FD4); /* call 0x00037FD4 */

loc_00388DB5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x8C)) >> 32) & 1);
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00388DC3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(esi + 0x5C);
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x3F);
    if (CMP_EQ(_fa, _fb)) goto loc_00388DEA; /* je: equal / zero */

loc_00388DCE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00388DEA; /* je: equal / zero */

loc_00388DD2: ;
    esi = MEM32(0x901E28);
    edi = MEM32(esi + 0x778);
    eax = 0x4A;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00388DFC; /* jg: greater (signed >) */

loc_00388DEA: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x46);
    PUSH32(esp, 0x00388DF9u); RECOMP_ABI_CALL(0x00029AC9u, sub_00029AC9); /* call 0x00029AC9 */

loc_00388DF9: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00388DFC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x8C)) >> 32) & 1);
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00388F10
 * Original: 0x00388F10 - 0x0038901A (266 bytes, 77 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00388F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00388F10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ecx = 0x8C5F28;
    PUSH32(esp, 0x00388F22u); RECOMP_ABI_CALL(0x0001B0FFu, sub_0001B0FF); /* call 0x0001B0FF */

loc_00388F22: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edi + 0x1C));
    eax = 8;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFDu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x14 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00388F91; /* ja: above (unsigned >) */

loc_00388F3B: ;
    ecx = ZX8(MEM8(ecx + 0x38904C));
    { uint32_t _jt = MEM32(ecx * 4 + 0x38901C); /* switch: 12 entries, 12 targets */
    if (_jt == 0x00388F49u) goto loc_00388F49;
    if (_jt == 0x00388F50u) goto loc_00388F50;
    if (_jt == 0x00388F57u) goto loc_00388F57;
    if (_jt == 0x00388F5Eu) goto loc_00388F5E;
    if (_jt == 0x00388F65u) goto loc_00388F65;
    if (_jt == 0x00388F6Cu) goto loc_00388F6C;
    if (_jt == 0x00388F73u) goto loc_00388F73;
    if (_jt == 0x00388F7Au) goto loc_00388F7A;
    if (_jt == 0x00388F81u) goto loc_00388F81;
    if (_jt == 0x00388F88u) goto loc_00388F88;
    if (_jt == 0x00388F8Cu) goto loc_00388F8C;
    if (_jt == 0x00388F91u) goto loc_00388F91;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00388F49: ;
    eax = 1;
    goto loc_00388F91;

loc_00388F50: ;
    eax = 9;
    goto loc_00388F91;

loc_00388F57: ;
    eax = 8;
    goto loc_00388F91;

loc_00388F5E: ;
    eax = 2;
    goto loc_00388F91;

loc_00388F65: ;
    eax = 6;
    goto loc_00388F91;

loc_00388F6C: ;
    eax = 0xA;
    goto loc_00388F91;

loc_00388F73: ;
    eax = 7;
    goto loc_00388F91;

loc_00388F7A: ;
    eax = 4;
    goto loc_00388F91;

loc_00388F81: ;
    eax = 5;
    goto loc_00388F91;

loc_00388F88: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00388F91;

loc_00388F8C: ;
    eax = 3;

loc_00388F91: ;
    MEM32(0x8C5DB8) = eax;
    esi = (uint32_t)(int32_t)SMEM8(edi + 0x44);
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    ebx = (uint32_t)(int32_t)SMEM8(edi + 0x45);
    MEM32(0x8C5DB0) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0038900C; /* je: equal / zero */

loc_00388FAD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038900C; /* je: equal / zero */

loc_00388FB1: ;
    eax = MEM32(0x901E28);
    edi = MEM32(eax + 0x778);
    edx = 0x4A;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2C (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0038900C; /* jg: greater (signed >) */

loc_00388FC8: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00388FE0; /* je: equal / zero */

loc_00388FD0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x29 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00388FE0; /* jge: greater or equal (signed >=) */

loc_00388FD5: ;
    ecx = MEM32(esi * 4 + 0x8E8EB8);
    edi = (uint32_t)(int32_t)SMEM8(ecx + 0x30);

loc_00388FE0: ;
    MEM32(eax + 0x77C) = edi;
    MEM32(eax + 0x780) = esi;
    MEM32(eax + 0x784) = ebx;
    ecx = MEM32(0x901E28);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x00388FFFu); RECOMP_ABI_CALL(0x000381AFu, sub_000381AF); /* call 0x000381AF */

loc_00388FFF: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00389009u); RECOMP_ABI_CALL(0x0002186Fu, sub_0002186F); /* call 0x0002186F */

loc_00389009: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0038900C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x8C5DB0) = 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0038901A
 * Original: 0x0038901A - 0x003890FF (229 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038901A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038901A: ;
    edi = edi;
    MEM8(edi + -1891041224) = LO8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    POP32(esp, esi);

}

/**
 * sub_00389110
 * Original: 0x00389110 - 0x0038914E (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00389110: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx + 0x1D));
    edx = MEM32(ecx + 0x40);
    ecx = ZX16(MEM16(ecx + 0x1C));
    PUSH32(esp, esi);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esi = ecx;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(LO8(ecx)), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        SET_LO8(ecx, _sv >> _sc);
        _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    MEM32(0x901E10) = esi;
    POP32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x20)) >> 32) & 1);
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0038914Au); RECOMP_ABI_CALL(0x00037FD4u, sub_00037FD4); /* call 0x00037FD4 */

loc_0038914A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00389160
 * Original: 0x00389160 - 0x003891E2 (130 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00389160: ;
    ecx = MEM32(0x901E28);
    SET_LO8(edx, MEM8(ecx + 0x764));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003891E1; /* je: equal / zero */

loc_00389172: ;
    _fa = (uint32_t)(MEM8(ecx + 0x88D)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x88D), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003891E1; /* je: equal / zero */

loc_0038917A: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003891DC; /* je: equal / zero */

loc_00389183: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003891DC; /* je: equal / zero */

loc_00389187: ;
    edx = MEM32(ecx + 0x778);
    eax = 0x4A;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003891DC; /* jg: greater (signed >) */

loc_00389199: ;
    eax = ecx;
    MEM32(ecx + 0x77C) = 0xFFFFFFFFu;
    MEM32(eax + 0x780) = 0xFFFFFFFFu;
    MEM32(eax + 0x784) = 0xFFFFFFFFu;
    ecx = MEM32(0x901E28);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x003891C6u); RECOMP_ABI_CALL(0x000381AFu, sub_000381AF); /* call 0x000381AF */

loc_003891C6: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x003891D3u); RECOMP_ABI_CALL(0x0002186Fu, sub_0002186F); /* call 0x0002186F */

loc_003891D3: ;
    ecx = MEM32(0x901E28);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003891DC: ;
    g_seh_ebp = ebp; sub_0002EF29(); return; /* tail jmp 0x0002EF29 */

loc_003891E1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00389210
 * Original: 0x00389210 - 0x00389254 (68 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00389210: ;
    eax = MEM32(0x901E28);
    MEM32(0x901E18) = 1;
    _fa = (uint32_t)(MEM32(eax + 0x778)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x778), 0x12 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389253; /* jne: not equal / not zero */

loc_00389228: ;
    PUSH32(esp, 0x0038922Du); RECOMP_ABI_CALL(0x00015218u, sub_00015218); /* call 0x00015218 */

loc_0038922D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    eax = ecx;
    ecx = MEM32(0x901E28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x77C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x77C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389253; /* je: equal / zero */

loc_00389245: ;
    PUSH32(esp, 0x12);
    MEM8(0x901DE8) = 1;
    PUSH32(esp, 0x00389253u); RECOMP_ABI_CALL(0x000381AFu, sub_000381AF); /* call 0x000381AF */

loc_00389253: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00389270
 * Original: 0x00389270 - 0x003894B6 (582 bytes, 184 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00389270: ;
    ecx = MEM32(0x8F9CCC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x8C5DC4) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0038928Au); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0038928A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00389291u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038928Eu); } /* indirect call */
    }

loc_00389291: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x19);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0038929Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038929Au); } /* indirect call */
    }

loc_0038929C: ;
    MEM32(0x901DE4) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = 0x8F1950;
    MEM32(0x901E14) = edi;
    PUSH32(esp, 0x003892BBu); RECOMP_ABI_CALL(0x00023E30u, sub_00023E30); /* call 0x00023E30 */

loc_003892BB: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00389458; /* je: equal / zero */

loc_003892C8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00389458; /* je: equal / zero */

loc_003892D0: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003892DCu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_003892DC: ;
    esi = eax;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003892E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003892E2u); } /* indirect call */
    }

loc_003892E5: ;
    ebx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003892F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003892F7u); } /* indirect call */
    }

loc_003892F9: ;
    MEM32(0x901E20) = eax;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00389305u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00389302u); } /* indirect call */
    }

loc_00389305: ;
    ebx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x17);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00389319u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00389317u); } /* indirect call */
    }

loc_00389319: ;
    ecx = MEM32(0x901E20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x8C5DC8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00389385; /* jne: not equal / not zero */

loc_00389328: ;
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0xC) = edx;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00389337u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00389334u); } /* indirect call */
    }

loc_00389337: ;
    ebx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0038934Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00389349u); } /* indirect call */
    }

loc_0038934B: ;
    MEM32(0x901E20) = eax;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00389357u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00389354u); } /* indirect call */
    }

loc_00389357: ;
    ebx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x17);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0038936Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00389369u); } /* indirect call */
    }

loc_0038936B: ;
    ecx = MEM32(0x901E20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x8C5DC8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00389385; /* jne: not equal / not zero */

loc_0038937A: ;
    MEM32(0x8C5DC8) = edi;
    goto loc_0038940B;

loc_00389385: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00389396; /* jne: not equal / not zero */

loc_0038938A: ;
    MEM32(0x8C5DC4) = 0x29;
    goto loc_0038940B;

loc_00389396: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0038940B; /* je: equal / zero */

loc_0038939A: ;
    ecx = 3;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM16(esp + 0x1C) = LO16(ecx);
    MEM16(esp + 0x1E) = 1;
    MEM16(esp + 0x20) = 2;
    MEM16(esp + 0x22) = LO16(ecx);
    PUSH32(esp, 0x003893C2u); RECOMP_ABI_CALL(0x0001F371u, sub_0001F371); /* call 0x0001F371 */

loc_003893C2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0038940B; /* jne: not equal / not zero */

loc_003893C9: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003893D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003893CDu); } /* indirect call */
    }

loc_003893D0: ;
    ebx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003893E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003893E2u); } /* indirect call */
    }

loc_003893E4: ;
    esi = MEM32(esp + 0xC);
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x778);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x8F5BE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x8F5BE4)) >> 32) & 1);
    ecx = ecx + 0x8F5BE4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003893F8: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00389432; /* je: equal / zero */

loc_003893FC: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x54)) >> 32) & 1);
    ecx = ecx + 0x54;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x14 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003893F8; /* jl: less (signed <) */

loc_00389405: ;
    MEM32(0x901E20) = edi;

loc_0038940B: ;
    esi = 0x2F;
    PUSH32(esp, 0x00389415u); RECOMP_ABI_CALL(0x0001A970u, sub_0001A970); /* call 0x0001A970 */

loc_00389415: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0038945D; /* je: equal / zero */

loc_0038941A: ;
    PUSH32(esp, 0x0038941Fu); RECOMP_ABI_CALL(0x000278DCu, sub_000278DC); /* call 0x000278DC */

loc_0038941F: ;
    ecx = eax;
    PUSH32(esp, 0x00389426u); RECOMP_ABI_CALL(0x00028CCDu, sub_00028CCD); /* call 0x00028CCD */

loc_00389426: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0038945D; /* ja: above (unsigned >) */

loc_0038942B: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3894B8); /* switch: 5 entries, 3 targets */
    if (_jt == 0x00389443u) goto loc_00389443;
    if (_jt == 0x0038944Au) goto loc_0038944A;
    if (_jt == 0x00389451u) goto loc_00389451;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00389432: ;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edx)) >> 32) & 1);
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8C5DC4) = esi;
    goto loc_0038940B;

loc_00389443: ;
    esi = 0x31;
    goto loc_0038945D;

loc_0038944A: ;
    esi = 0x34;
    goto loc_0038945D;

loc_00389451: ;
    esi = 0x32;
    goto loc_0038945D;

loc_00389458: ;
    esi = 0x30;

loc_0038945D: ;
    ecx = MEM32(0x8C5DC4);
    eax = MEM32(0x901E28);
    PUSH32(esp, edi);
    MEM32(eax + 0x77C) = edi;
    MEM32(eax + 0x780) = ecx;
    MEM32(eax + 0x784) = edi;
    edx = MEM32(0x8C5DC4);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00389489u); RECOMP_ABI_CALL(0x0002186Fu, sub_0002186F); /* call 0x0002186F */

loc_00389489: ;
    ecx = MEM32(0x901E28);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00389498u); RECOMP_ABI_CALL(0x000381AFu, sub_000381AF); /* call 0x000381AF */

loc_00389498: ;
    ecx = MEM32(0x901E28);
    PUSH32(esp, 0x003894A3u); RECOMP_ABI_CALL(0x00031D2Du, sub_00031D2D); /* call 0x00031D2D */

loc_003894A3: ;
    ecx = MEM32(0x8FC1D0);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x003894B0u); RECOMP_ABI_CALL(0x00020028u, sub_00020028); /* call 0x00020028 */

loc_003894B0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003894B6
 * Original: 0x003894B6 - 0x00389570 (186 bytes, 180 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003894B6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003894B6: ;
    edi = edi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _tmp = esp;
    esp = eax;
    eax = _tmp; }
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _tmp = esp;
    esp = eax;
    eax = _tmp; }
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _tmp = esp;
    esp = eax;
    eax = _tmp; }
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _tmp = esp;
    esp = eax;
    eax = _tmp; }
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, ecx);
    { uint32_t _tmp = esp;
    esp = eax;
    eax = _tmp; }
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(eax) (8-bit) */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_00389570
 * Original: 0x00389570 - 0x00389612 (162 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00389570: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389611; /* je: equal / zero */

loc_0038957D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389611; /* je: equal / zero */

loc_00389585: ;
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ebx);
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    PUSH32(esp, esi);
    esi = 0x31;
    if (CMP_EQ(_fa, _fb)) goto loc_003895AA; /* je: equal / zero */

loc_0038959C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003895AA; /* je: equal / zero */

loc_003895A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003895AA; /* je: equal / zero */

loc_003895A6: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_003895AC;

loc_003895AA: ;
    SET_LO8(ebx, 1);

loc_003895AC: ;
    PUSH32(esp, 0x003895B1u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_003895B1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003895BC; /* je: equal / zero */

loc_003895B5: ;
    esi = 0x33;
    goto loc_003895CF;

loc_003895BC: ;
    PUSH32(esp, 0x003895C1u); RECOMP_ABI_CALL(0x00028D22u, sub_00028D22); /* call 0x00028D22 */

loc_003895C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003895CF; /* jne: not equal / not zero */

loc_003895C6: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003895CF; /* je: equal / zero */

loc_003895CA: ;
    esi = 0x32;

loc_003895CF: ;
    eax = MEM32(0x901E28);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x77C) = ecx;
    MEM32(eax + 0x780) = ecx;
    MEM32(eax + 0x784) = 0;
    ecx = MEM32(0x901E28);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003895F9u); RECOMP_ABI_CALL(0x000381AFu, sub_000381AF); /* call 0x000381AF */

loc_003895F9: ;
    ecx = MEM32(0x901E28);
    PUSH32(esp, 0x00389604u); RECOMP_ABI_CALL(0x00031D2Du, sub_00031D2D); /* call 0x00031D2D */

loc_00389604: ;
    ecx = MEM32(0x901E28);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0002EF29(); return; /* tail jmp 0x0002EF29 */

loc_00389611: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00389640
 * Original: 0x00389640 - 0x0038968E (78 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00389640: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00389648u); RECOMP_ABI_CALL(0x00031954u, sub_00031954); /* call 0x00031954 */

loc_00389648: ;
    eax = MEM32(0x901E28);
    ecx = MEM32(eax + 0xD0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038966F; /* jne: not equal / not zero */

loc_00389657: ;
    esi = MEM32(esi + 0x30);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389664; /* je: equal / zero */

loc_0038965F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038966F; /* jne: not equal / not zero */

loc_00389664: ;
    ecx = MEM32(0x901E40);
    PUSH32(esp, 0x0038966Fu); RECOMP_ABI_CALL(0x00028E67u, sub_00028E67); /* call 0x00028E67 */

loc_0038966F: ;
    ecx = MEM32(0x901E28);
    ecx = MEM32(ecx + 0x788);
    PUSH32(esp, 0x00389680u); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_00389680: ;
    ecx = MEM32(eax + 0x48);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0038968Cu); RECOMP_ABI_CALL(0x0001A407u, sub_0001A407); /* call 0x0001A407 */

loc_0038968C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003896B0
 * Original: 0x003896B0 - 0x003896D0 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003896B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003896B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x832C78;
    PUSH32(esp, 0x003896BEu); RECOMP_ABI_CALL(0x00028E67u, sub_00028E67); /* call 0x00028E67 */

loc_003896BE: ;
    ecx = esi;
    MEM32(0x901E40) = 0;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0001B4CE(); return; /* tail jmp 0x0001B4CE */

}

/**
 * sub_003896E0
 * Original: 0x003896E0 - 0x00389715 (53 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003896E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003896E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x832C78;
    PUSH32(esp, 0x003896EEu); RECOMP_ABI_CALL(0x00028E67u, sub_00028E67); /* call 0x00028E67 */

loc_003896EE: ;
    ecx = esi;
    MEM32(0x901E40) = 0;
    PUSH32(esp, 0x003896FFu); RECOMP_ABI_CALL(0x0001B4CEu, sub_0001B4CE); /* call 0x0001B4CE */

loc_003896FF: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0038970F; /* je: equal / zero */

loc_00389706: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0038970Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0038970C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0038970F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00389730
 * Original: 0x00389730 - 0x00389737 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389730(void)
{

loc_00389730: ;
    MEM32(ecx) = 0x832CAC;
    esp += 4; return; /* ret */

}

/**
 * sub_00389740
 * Original: 0x00389740 - 0x00389744 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389740(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00389740: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00389750
 * Original: 0x00389750 - 0x00389757 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389750(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00389750: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0xC)); /* fsub dword ptr [ecx + 0xc] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00389760
 * Original: 0x00389760 - 0x0038977F (31 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389760(void)
{

loc_00389760: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x44) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x2C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00389790
 * Original: 0x00389790 - 0x003897C9 (57 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389790(void)
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

loc_00389790: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x2C); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(ecx + 0x2C)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(ecx + 0x30) / fp_top()); /* fdivr dword ptr [ecx + 0x30] */
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
 * sub_003897E0
 * Original: 0x003897E0 - 0x0038980C (44 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003897E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003897E0: ;
    MEM32(0x902534) = 0;
    eax = ecx + 0x84C;
    edx = 0xB;

loc_003897F5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = 0x832CAC;
    if ((_fa != 0)) goto loc_003897F5; /* jne: not equal / not zero */

loc_00389801: ;
    MEM32(ecx + 0x75C) = 0x832CAC;
    esp += 4; return; /* ret */

}

/**
 * sub_00389820
 * Original: 0x00389820 - 0x0038982D (13 bytes, 3 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389820(void)
{

loc_00389820: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x854) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00389830
 * Original: 0x00389830 - 0x0038985D (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00389830: ;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0x718;
    esi = ecx + 0x84;
    /* nop */

loc_00389840: ;
    MEM32(edx) = eax;
    MEM8(esi) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x70;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00389840; /* jl: less (signed <) */

loc_00389851: ;
    MEM32(ecx + 0x758) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00389870
 * Original: 0x00389870 - 0x00389893 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00389870: ;
    edx = MEM32(ecx + 0x758);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00389892; /* jge: greater or equal (signed >=) */

loc_0038987D: ;
    eax = MEM32(ecx + edx * 4 + 0x718);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + ecx + 0x18;
    MEM32(ecx + 0x758) = edx;

loc_00389892: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003898A0
 * Original: 0x003898A0 - 0x003898D9 (57 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003898A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003898A0: ;
    edx = MEM32(ecx + 0x758);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = edx;
    MEM32(ecx + 0x758) = edx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((6) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + edi * 4 + 0x718) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003898F0
 * Original: 0x003898F0 - 0x003898F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003898F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003898F0: ;
    fp_push(MEMF(ecx + 0x76C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00389900
 * Original: 0x00389900 - 0x00389907 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389900(void)
{

loc_00389900: ;
    eax = MEM32(ecx + 0x850);
    esp += 4; return; /* ret */

}

/**
 * sub_00389910
 * Original: 0x00389910 - 0x00389939 (41 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389910(void)
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

loc_00389910: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00389916: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0038992C; /* jne: not equal / not zero */

loc_0038991B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00389916; /* jl: less (signed <) */

loc_00389923: ;
    fp_push(MEMF(ecx + 0x76C)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_0038992C: ;
    eax = eax + eax * 4 + 0x1E0;
    fp_push(MEMF(ecx + eax * 4)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00389950
 * Original: 0x00389950 - 0x00389989 (57 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389950(void)
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

loc_00389950: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00389956: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00389972; /* jne: not equal / not zero */

loc_0038995B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00389956; /* jl: less (signed <) */

loc_00389963: ;
    fp_push(MEMF(ecx + 0x76C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x768)); /* fsub dword ptr [ecx + 0x768] */
    esp += 8; return; /* ret 4 */

loc_00389972: ;
    eax = eax + eax * 4;
    fp_push(MEMF(ecx + eax * 4 + 0x780)); /* fld float */
    eax = ecx + eax * 4 + 0x770;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0xC)); /* fsub dword ptr [eax + 0xc] */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003899A0
 * Original: 0x003899A0 - 0x003899A3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003899A0(void)
{

loc_003899A0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003899B0
 * Original: 0x003899B0 - 0x003899B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003899B0(void)
{

loc_003899B0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003899C0
 * Original: 0x003899C0 - 0x003899C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003899C0(void)
{

loc_003899C0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003899D0
 * Original: 0x003899D0 - 0x003899D9 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003899D0(void)
{

loc_003899D0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003899E0
 * Original: 0x003899E0 - 0x003899EA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003899E0(void)
{

loc_003899E0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003899F0
 * Original: 0x003899F0 - 0x003899FB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003899F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003899F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00389A00
 * Original: 0x00389A00 - 0x00389A1F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00389A00: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x832CAC;
    if (TEST_Z(_fa, _fb)) goto loc_00389A19; /* je: equal / zero */

loc_00389A10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00389A16u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00389A16: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00389A19: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00389A30
 * Original: 0x00389A30 - 0x00389ABC (140 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00389A30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = esi + 0x770;
    PUSH32(esp, edi);
    edi = ebp;
    ebx = 0xB;

loc_00389A43: ;
    ecx = edi;
    PUSH32(esp, 0x00389A4Au); RECOMP_ABI_CALL(0x00022576u, sub_00022576); /* call 0x00022576 */

loc_00389A4A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00389A43; /* jne: not equal / not zero */

loc_00389A50: ;
    edi = esi + 0x75C;
    ecx = edi;
    PUSH32(esp, 0x00389A5Du); RECOMP_ABI_CALL(0x00022576u, sub_00022576); /* call 0x00022576 */

loc_00389A5D: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389A73; /* je: equal / zero */

loc_00389A64: ;
    ecx = MEM32(esi + 0x76C);
    MEM32(eax + 0x28) = ecx;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389A64; /* jne: not equal / not zero */

loc_00389A73: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389A8F; /* je: equal / zero */

loc_00389A7A: ;
    /* nop */

loc_00389A80: ;
    edx = MEM32(esi + 0x76C);
    MEM32(eax + 0x28) = edx;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389A80; /* jne: not equal / not zero */

loc_00389A8F: ;
    ecx = edi;
    PUSH32(esp, 0x00389A96u); RECOMP_ABI_CALL(0x0003213Du, sub_0003213D); /* call 0x0003213D */

loc_00389A96: ;
    ebx = MEM32(esi + 0x850);
    esi = ebp;
    edi = 0xB;

loc_00389AA3: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00389AAF; /* je: equal / zero */

loc_00389AA8: ;
    ecx = esi;
    PUSH32(esp, 0x00389AAFu); RECOMP_ABI_CALL(0x0003213Du, sub_0003213D); /* call 0x0003213D */

loc_00389AAF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((1) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00389AA3; /* jne: not equal / not zero */

loc_00389AB7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00389AE0
 * Original: 0x00389AE0 - 0x00389AFB (27 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00389AE0: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389AED; /* je: equal / zero */

loc_00389AE7: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389AE7; /* jne: not equal / not zero */

loc_00389AED: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389AFA; /* je: equal / zero */

loc_00389AF4: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389AF4; /* jne: not equal / not zero */

loc_00389AFA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00389B10
 * Original: 0x00389B10 - 0x00389B94 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00389B10: ;
    eax = MEM32(ecx + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389B3D; /* je: equal / zero */

loc_00389B1C: ;
    /* nop */

loc_00389B20: ;
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x2C) = edx;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389B20; /* jne: not equal / not zero */

loc_00389B3D: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389B6D; /* je: equal / zero */

loc_00389B44: ;
    goto loc_00389B50;

    /* nop */
    /* nop */

loc_00389B50: ;
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x2C) = edx;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389B50; /* jne: not equal / not zero */

loc_00389B6D: ;
    MEMF(ecx + 0x860) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x864) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x868) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x86C) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x85C) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00389BC0
 * Original: 0x00389BC0 - 0x00389C81 (193 bytes, 56 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00389BC0(void)
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

loc_00389BC0: ;
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389C08; /* je: equal / zero */

loc_00389BCA: ;
    /* nop */

loc_00389BD0: ;
    edx = MEM32(eax + 0x2C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389C02; /* je: equal / zero */

loc_00389BD7: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_00389C02: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389BD0; /* jne: not equal / not zero */

loc_00389C08: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389C48; /* je: equal / zero */

loc_00389C0F: ;
    /* nop */

loc_00389C10: ;
    edx = MEM32(eax + 0x2C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389C42; /* je: equal / zero */

loc_00389C17: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_00389C42: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389C10; /* jne: not equal / not zero */

loc_00389C48: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x860)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x85C); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x86C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_00389CC0
 * Original: 0x00389CC0 - 0x00389CD0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389CC0(void)
{

loc_00389CC0: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00389CE0
 * Original: 0x00389CE0 - 0x00389CED (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389CE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00389CE0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00389CF0
 * Original: 0x00389CF0 - 0x00389D19 (41 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00389CF0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = 0;
    edx = MEM32(ecx + 4);
    MEM32(eax) = edx;
    MEM32(ecx + 4) = eax;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389D11; /* je: equal / zero */

loc_00389D09: ;
    MEM32(edx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_00389D11: ;
    MEM32(ecx + 8) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00389D30
 * Original: 0x00389D30 - 0x00389D59 (41 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00389D30: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax) = 0;
    MEM32(ecx + 8) = eax;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389D51; /* je: equal / zero */

loc_00389D4A: ;
    MEM32(edx) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_00389D51: ;
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00389D70
 * Original: 0x00389D70 - 0x00389DD3 (99 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00389D70: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389DA2; /* jne: not equal / not zero */

loc_00389D7B: ;
    eax = MEM32(esp + 8);
    MEM32(eax + 4) = esi;
    edx = MEM32(ecx + 4);
    MEM32(eax) = edx;
    MEM32(ecx + 4) = eax;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389D99; /* je: equal / zero */

loc_00389D90: ;
    MEM32(edx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00389D99: ;
    MEM32(ecx + 8) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00389DA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00389DBF; /* jne: not equal / not zero */

loc_00389DAD: ;
    MEM32(edx + 4) = esi;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00389DBF: ;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    esi = MEM32(eax + 4);
    MEM32(esi) = edx;
    MEM32(eax + 4) = edx;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00389DF0
 * Original: 0x00389DF0 - 0x00389E32 (66 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00389DF0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389E2F; /* je: equal / zero */

loc_00389DF8: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00389E06; /* je: equal / zero */

loc_00389E00: ;
    esi = MEM32(eax);
    MEM32(edx) = esi;
    goto loc_00389E0B;

loc_00389E06: ;
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;

loc_00389E0B: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389E19; /* je: equal / zero */

loc_00389E11: ;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    goto loc_00389E1F;

loc_00389E19: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;

loc_00389E1F: ;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);

loc_00389E2F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00389E50
 * Original: 0x00389E50 - 0x00389E60 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389E50(void)
{

loc_00389E50: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00389E70
 * Original: 0x00389E70 - 0x00389EEF (127 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00389E70: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x6C) = 0;
    SET_LO8(edx, MEM8(ecx + 0x84C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389EEC; /* jne: not equal / not zero */

loc_00389E82: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00389E91; /* je: equal / zero */

loc_00389E8B: ;
    esi = MEM32(eax);
    MEM32(edx) = esi;
    goto loc_00389E96;

loc_00389E91: ;
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;

loc_00389E96: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389EA4; /* je: equal / zero */

loc_00389E9C: ;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    goto loc_00389EAA;

loc_00389EA4: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;

loc_00389EAA: ;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    edx = MEM32(ecx);
    edi = MEM32(ecx + 0x758);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx) = edx;
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((6) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ecx + 0x758) = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + edi * 4 + 0x718) = eax;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00389EEC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00389F10
 * Original: 0x00389F10 - 0x00389F1F (15 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389F10(void)
{

loc_00389F10: ;
    MEM8(ecx + 0x84D) = 0;
    PUSH32(esp, 0x00389F1Cu); RECOMP_ABI_CALL(0x00025D7Au, sub_00025D7A); /* call 0x00025D7A */

loc_00389F1C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00389F30
 * Original: 0x00389F30 - 0x00389F3C (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00389F30: ;
    MEM8(ecx + 0x84D) = 1;
    g_seh_ebp = ebp; sub_00020A91(); return; /* tail jmp 0x00020A91 */

}

/**
 * sub_00389F40
 * Original: 0x00389F40 - 0x00389FB4 (116 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00389F40: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    eax = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00389F5D; /* je: equal / zero */

loc_00389F4F: ;
    edi = MEM32(edx + 0x1C);

loc_00389F52: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0x1C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00389F7F; /* jl: less (signed <) */

loc_00389F57: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00389F52; /* jne: not equal / not zero */

loc_00389F5D: ;
    eax = MEM32(ecx + 8);
    MEM32(edx + 4) = eax;
    MEM32(edx) = 0;
    MEM32(ecx + 8) = edx;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00389F8F; /* je: equal / zero */

loc_00389F73: ;
    MEM32(eax) = edx;
    eax = MEM32(ecx);
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

loc_00389F7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(edx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00389F9C; /* jne: not equal / not zero */

loc_00389F85: ;
    MEM32(edx + 4) = 0;
    MEM32(eax + 4) = edx;

loc_00389F8F: ;
    eax = MEM32(ecx);
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ecx + 4) = edx;
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

loc_00389F9C: ;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    esi = MEM32(eax + 4);
    MEM32(esi) = edx;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx);
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00389FE0
 * Original: 0x00389FE0 - 0x0038A094 (180 bytes, 58 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389FE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00389FE0: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    PUSH32(esp, edi);
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x10) = ebx;
    eax = esi + 0x18;
    ecx = 0x10;

loc_0038A001: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0038A001; /* jne: not equal / not zero */

loc_0038A00C: ;
    ecx = esi + 0x75C;
    MEM32(esi + 0x758) = ebx;
    PUSH32(esp, 0x0038A01Du); RECOMP_ABI_CALL(0x0002B7B1u, sub_0002B7B1); /* call 0x0002B7B1 */

loc_0038A01D: ;
    edi = esi + 0x770;
    ebp = 0xB;

loc_0038A028: ;
    ecx = edi;
    PUSH32(esp, 0x0038A02Fu); RECOMP_ABI_CALL(0x0002B7B1u, sub_0002B7B1); /* call 0x0002B7B1 */

loc_0038A02F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0038A028; /* jne: not equal / not zero */

loc_0038A035: ;
    eax = MEM32(esp + 0x14);
    ecx = esi;
    MEM8(esi + 0x84C) = LO8(ebx);
    MEM8(esi + 0x84D) = LO8(ebx);
    MEM32(esi + 0x850) = eax;
    MEM32(esi + 0x854) = eax;
    MEM32(esi + 0x858) = ebx;
    PUSH32(esp, 0x0038A05Eu); RECOMP_ABI_CALL(0x0001A63Cu, sub_0001A63C); /* call 0x0001A63C */

loc_0038A05E: ;
    PUSH32(esp, 0x700);
    eax = esi + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(0x902534) = esi;
    PUSH32(esp, 0x0038A073u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0038A073: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x718;
    edi = edi;

loc_0038A080: ;
    MEM32(ecx) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0038A080; /* jl: less (signed <) */

loc_0038A08B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038A0D0
 * Original: 0x0038A0D0 - 0x0038A1CA (250 bytes, 101 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A0D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038A0D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi + 0x850) = ebx;
    MEM32(esi + 0x854) = ebx;
    edi = esi + 0x770;
    ebp = 0xB;

loc_0038A0F1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    ecx = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0038A0FF; /* je: equal / zero */

loc_0038A0F8: ;
    PUSH32(esp, 0x0038A0FDu); RECOMP_ABI_CALL(0x0003213Du, sub_0003213D); /* call 0x0003213D */

loc_0038A0FD: ;
    goto loc_0038A104;

loc_0038A0FF: ;
    PUSH32(esp, 0x0038A104u); RECOMP_ABI_CALL(0x0001207Cu, sub_0001207C); /* call 0x0001207C */

loc_0038A104: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((1) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0038A0F1; /* jne: not equal / not zero */

loc_0038A10C: ;
    edx = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    eax = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0038A171; /* je: equal / zero */

loc_0038A117: ;
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x24), ebp (32-bit) */
    ecx = MEM32(edx);
    edx = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0038A169; /* jne: not equal / not zero */

loc_0038A124: ;
    edi = MEM32(eax + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A12F; /* je: equal / zero */

loc_0038A12B: ;
    MEM32(edi) = ecx;
    goto loc_0038A132;

loc_0038A12F: ;
    MEM32(esi + 4) = ecx;

loc_0038A132: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A140; /* je: equal / zero */

loc_0038A138: ;
    edi = MEM32(eax + 4);
    MEM32(ecx + 4) = edi;
    goto loc_0038A146;

loc_0038A140: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 8) = ecx;

loc_0038A146: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ebx;
    ecx = MEM32(esi + 0x10);
    MEM32(eax) = ecx;
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A163; /* je: equal / zero */

loc_0038A15E: ;
    MEM32(ecx + 4) = eax;
    goto loc_0038A166;

loc_0038A163: ;
    MEM32(esi + 0x14) = eax;

loc_0038A166: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0038A169: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    eax = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0038A117; /* jne: not equal / not zero */

loc_0038A16F: ;
    goto loc_0038A175;

loc_0038A171: ;
    ebp = MEM32(esp + 0x14);

loc_0038A175: ;
    edi = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    eax = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0038A1C3; /* je: equal / zero */

loc_0038A17E: ;
    edi = edi;

loc_0038A180: ;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x24), ebp (32-bit) */
    edi = MEM32(edi);
    if (TEST_Z(_fa, _fb)) goto loc_0038A1BD; /* je: equal / zero */

loc_0038A187: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A192; /* je: equal / zero */

loc_0038A18E: ;
    MEM32(ecx) = edi;
    goto loc_0038A195;

loc_0038A192: ;
    MEM32(esi + 0x10) = edi;

loc_0038A195: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A1A3; /* je: equal / zero */

loc_0038A19B: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    goto loc_0038A1A9;

loc_0038A1A3: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x14) = ecx;

loc_0038A1A9: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax) = ebx;
    edx = MEM32(esi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0xC) = edx;
    PUSH32(esp, 0x0038A1BDu); RECOMP_ABI_CALL(0x00023462u, sub_00023462); /* call 0x00023462 */

loc_0038A1BD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0038A180; /* jne: not equal / not zero */

loc_0038A1C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038A210
 * Original: 0x0038A210 - 0x0038A2B7 (167 bytes, 55 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038A210: ;
    eax = MEM32(ecx + 0x758);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0038A233; /* jge: greater or equal (signed >=) */

loc_0038A21E: ;
    edx = MEM32(ecx + eax * 4 + 0x718);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = edx + ecx + 0x18;
    MEM32(ecx + 0x758) = eax;

loc_0038A233: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = esi + 0x48;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0038A240: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(edi + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038A240; /* jne: not equal / not zero */

loc_0038A24A: ;
    eax = MEM32(esp + 0x14);
    edi = MEM32(esp + 0xC);
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(esp + 0x18);
    edx = 1;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 8) = edx;
    MEM32(esi + 0x24) = eax;
    MEM8(esi + 0x6C) = LO8(edx);
    _fa = (uint32_t)(MEM32(ecx + 0x850)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 0x850), eax (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0038A288; /* je: equal / zero */

loc_0038A273: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0038A279u); RECOMP_ABI_CALL(0x00023462u, sub_00023462); /* call 0x00023462 */

loc_0038A279: ;
    eax = MEM32(ecx + 0x76C);
    MEM32(esi + 0x28) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0038A288: ;
    MEM32(esi + 4) = 0;
    edx = MEM32(ecx + 0x10);
    MEM32(esi) = edx;
    MEM32(ecx + 0x10) = esi;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A2A2; /* je: equal / zero */

loc_0038A29D: ;
    MEM32(eax + 4) = esi;
    goto loc_0038A2A5;

loc_0038A2A2: ;
    MEM32(ecx + 0x14) = esi;

loc_0038A2A5: ;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ecx + 0x76C);
    MEM32(esi + 0x28) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0038A2E0
 * Original: 0x0038A2E0 - 0x0038A648 (872 bytes, 245 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A2E0(void)
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

loc_0038A2E0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x858);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x84C) = 1;
    MEM32(esi + 0x858) = eax;
    eax = MEM32(0x90253C);
    PUSH32(esp, edi);
    ecx = esi + 0x75C;
    MEM32(0x902540) = eax;
    PUSH32(esp, 0x0038A312u); RECOMP_ABI_CALL(0x000358D3u, sub_000358D3); /* call 0x000358D3 */

loc_0038A312: ;
    edi = esi + 0x770;
    ebx = 0xB;
    /* nop */

loc_0038A320: ;
    ecx = edi;
    PUSH32(esp, 0x0038A327u); RECOMP_ABI_CALL(0x000358D3u, sub_000358D3); /* call 0x000358D3 */

loc_0038A327: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0038A320; /* jne: not equal / not zero */

loc_0038A32D: ;
    SET_LO8(eax, MEM8(0x902544));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x76C)); /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A360; /* je: equal / zero */

loc_0038A344: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x902550); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AB868); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0038A360; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AB868)) */

loc_0038A358: ;
    MEMF(0x902550) = xmm2.f[0]; /* movss */

loc_0038A360: ;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    edi = MEM32(esi + 4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A4BF; /* je: equal / zero */

loc_0038A371: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(edi);
    MEM32(esp + 0x1C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0038A4B3; /* je: equal / zero */

loc_0038A382: ;
    SET_LO8(eax, MEM8(edi + 0x6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A4B3; /* je: equal / zero */

loc_0038A38D: ;
    eax = MEM32(esi + 0x850);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x28); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A3C2; /* je: equal / zero */

loc_0038A3A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A3C2; /* je: equal / zero */

loc_0038A3AD: ;
    xmm1 = XMM_SCALAR(MEMF(0x832CB0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0038A3D8; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0038A3BA: ;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    goto loc_0038A3D8;

loc_0038A3C2: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0038A3D8; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0038A3CA: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_0038A3D8: ;
    MEMF(edi + 0x28) = xmm2.f[0]; /* movss */
    SET_LO8(eax, MEM8(esi + 0x84D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038A3FD; /* jne: not equal / not zero */

loc_0038A3E7: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edi + 0x20); PUSH32(esp, 0x0038A3F5u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0038A3F2u); } /* indirect call */
    }

loc_0038A3F5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0038A4AD;

loc_0038A3FD: ;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ebx = eax;
    { uint32_t _icall_target = MEM32(edi + 0x20); PUSH32(esp, 0x0038A40Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0038A40Cu); } /* indirect call */
    }

loc_0038A40F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    ebp = eax;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0038A42A; /* jge: greater or equal (signed >=) */

loc_0038A424: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_0038A42A: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0038A433u); RECOMP_ABI_CALL(0x0059E895u, sub_0059E895); /* call 0x0059E895 */

loc_0038A433: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0038A445; /* jge: greater or equal (signed >=) */

loc_0038A43F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_0038A445: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x10) / fp_top()); /* fdivr dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ecx = MEM32(esp + 0x10);
    fp_push(MEMF(edi + 0x34)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    MEM32(edi + 0x3C) = ecx;
    xmm1 = xmm0; /* movaps */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_0038A46F; /* ja: above (unsigned >) */

loc_0038A46A: ;
    xmm1 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */

loc_0038A46F: ;
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x38); /* comiss */
    MEMF(edi + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    if ((_fca > _fcb)) goto loc_0038A482; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edi + 0x38)) */

loc_0038A47D: ;
    xmm1 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */

loc_0038A482: ;
    eax = MEM32(edi + 0x2C);
    MEMF(edi + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(edi + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edi + 0x44); /* addss */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(edi + 0x44) = xmm1.f[0]; /* movss */
    MEM32(edi + 0x2C) = eax;

loc_0038A4AD: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */

loc_0038A4B3: ;
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038A371; /* jne: not equal / not zero */

loc_0038A4BF: ;
    SET_LO8(eax, MEM8(esi + 0x84D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A5A6; /* je: equal / zero */

loc_0038A4CD: ;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x20) = ebp;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0038A4E3; /* jge: greater or equal (signed >=) */

loc_0038A4DD: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_0038A4E3: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0038A4ECu); RECOMP_ABI_CALL(0x0059E895u, sub_0059E895); /* call 0x0059E895 */

loc_0038A4EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0038A4FE; /* jge: greater or equal (signed >=) */

loc_0038A4F8: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_0038A4FE: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x1C) / fp_top()); /* fdivr dword ptr [esp + 0x1c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x868)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0038A52C; /* jbe: below or equal (unsigned <=) */

loc_0038A516: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A52C; /* je: equal / zero */

loc_0038A51D: ;
    /* nop */

loc_0038A520: ;
    edx = MEM32(eax + 0x3C);
    MEM32(eax + 0x40) = edx;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038A520; /* jne: not equal / not zero */

loc_0038A52C: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x864)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = xmm0; /* movaps */
    if ((_fca > _fcb)) goto loc_0038A54A; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0038A542: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x864)); /* movss */

loc_0038A54A: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x868); /* comiss */
    MEMF(esi + 0x864) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    if ((_fca > _fcb)) goto loc_0038A566; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esi + 0x868)) */

loc_0038A55E: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x868)); /* movss */

loc_0038A566: ;
    eax = MEM32(esi + 0x85C);
    MEMF(esi + 0x868) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x860)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esi + 0x860) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x86C); /* addss */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(esi + 0x86C) = xmm1.f[0]; /* movss */
    MEM32(esi + 0x85C) = eax;

loc_0038A5A6: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A623; /* je: equal / zero */

loc_0038A5AD: ;
    /* nop */

loc_0038A5B0: ;
    SET_LO8(edx, MEM8(eax + 0x6C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    ecx = MEM32(eax);
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0038A61D; /* jne: not equal / not zero */

loc_0038A5BB: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A5C6; /* je: equal / zero */

loc_0038A5C2: ;
    MEM32(edx) = ecx;
    goto loc_0038A5C9;

loc_0038A5C6: ;
    MEM32(esi + 4) = ecx;

loc_0038A5C9: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A5D7; /* je: equal / zero */

loc_0038A5CF: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    goto loc_0038A5DD;

loc_0038A5D7: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 8) = ecx;

loc_0038A5DD: ;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    ebp = MEM32(esi);
    edi = MEM32(esi + 0x758);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((6) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ebp;
    MEM32(esi + 0x758) = edi;
    MEM32(esi + edi * 4 + 0x718) = eax;

loc_0038A61D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    eax = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0038A5B0; /* jne: not equal / not zero */

loc_0038A623: ;
    eax = MEM32(esi + 0x854);
    _fa = (uint32_t)(MEM32(esi + 0x850)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x850), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A639; /* je: equal / zero */

loc_0038A631: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0038A639u); RECOMP_ABI_CALL(0x0002E3ADu, sub_0002E3AD); /* call 0x0002E3AD */

loc_0038A639: ;
    POP32(esp, edi);
    MEM8(esi + 0x84C) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038A730
 * Original: 0x0038A730 - 0x0038A76B (59 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038A730: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A769; /* je: equal / zero */

loc_0038A73A: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0038A75C; /* jle: less or equal (signed <=) */

loc_0038A744: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A754; /* je: equal / zero */

loc_0038A74E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0038A754u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038A752u); } /* indirect call */
    }

loc_0038A754: ;
    eax = MEM32(esi + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0038A744; /* jl: less (signed <) */

loc_0038A75C: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0038A765u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0038A765: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_0038A769: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0038A780
 * Original: 0x0038A780 - 0x0038A795 (21 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A780(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038A780: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(edx + eax * 4) = esi;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038A7A0
 * Original: 0x0038A7A0 - 0x0038A82D (141 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A7A0(void)
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

loc_0038A7A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0038A829; /* jge: greater or equal (signed >=) */

loc_0038A7AD: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038A7DA; /* jne: not equal / not zero */

loc_0038A7B7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x14) = eax;
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038A7D6; /* jne: not equal / not zero */

loc_0038A7C1: ;
    PUSH32(esp, ebx);

loc_0038A7C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0038A7D5; /* jge: greater or equal (signed >=) */

loc_0038A7C6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x14) = eax;
    ebx = MEM32(esi + 8);
    edi = eax;
    _fa = (uint32_t)(MEM32(ebx + edi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + edi * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A7C2; /* je: equal / zero */

loc_0038A7D5: ;
    POP32(esp, ebx);

loc_0038A7D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A828; /* je: equal / zero */

loc_0038A7DA: ;
    eax = MEM32(ecx + eax * 4);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0038A7E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038A7E6u); } /* indirect call */
    }

loc_0038A7E9: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + edx * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0038A7F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038A7F4u); } /* indirect call */
    }

loc_0038A7F7: ;
    fp_push(MEMF(0x7A9980)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_0038A828; /* jb: below (unsigned <) */

loc_0038A805: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 8);
    ecx = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A818; /* je: equal / zero */

loc_0038A812: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0038A818u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038A816u); } /* indirect call */
    }

loc_0038A818: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 8);
    MEM32(ecx + eax * 4) = 0;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0038A828: ;
    POP32(esp, edi);

loc_0038A829: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038A850
 * Original: 0x0038A850 - 0x0038A85C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A850(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0038A850: ;
    eax = MEM32(ecx + 0x14);
    _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 0xC)));
    eax = eax - MEM32(ecx + 0xC);
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
 * sub_0038A860
 * Original: 0x0038A860 - 0x0038A8D2 (114 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A860(void)
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

loc_0038A860: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0038A877; /* jl: less (signed <) */

loc_0038A86D: ;
    fp_push(MEMF(0x7AB8B0)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0038A877: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A898; /* je: equal / zero */

loc_0038A883: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_0038A898: ;
    eax = MEM32(ecx + 0x14);
    edx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(edx + eax * 4);
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0038A8CA; /* je: equal / zero */

loc_0038A8B5: ;
    ecx = edx;
    ecx = MEM32(ecx + eax * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0038A8BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038A8BCu); } /* indirect call */
    }

loc_0038A8BF: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0038A8CA: ;
    fp_push(MEMF(esp + 4)); /* fld float */
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
 * sub_0038A8F0
 * Original: 0x0038A8F0 - 0x0038A90B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038A8F0: ;
    ecx = MEM32(0x902554);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A900; /* je: equal / zero */

loc_0038A8FA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0038A900u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038A8FEu); } /* indirect call */
    }

loc_0038A900: ;
    MEM32(0x902554) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0038A920
 * Original: 0x0038A920 - 0x0038A926 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A920(void)
{

loc_0038A920: ;
    eax = MEM32(0x902554);
    esp += 4; return; /* ret */

}

/**
 * sub_0038A930
 * Original: 0x0038A930 - 0x0038A933 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A930(void)
{

loc_0038A930: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0038A940
 * Original: 0x0038A940 - 0x0038A944 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A940(void)
{

loc_0038A940: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0038A950
 * Original: 0x0038A950 - 0x0038A954 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A950(void)
{

loc_0038A950: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0038A960
 * Original: 0x0038A960 - 0x0038A969 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A960(void)
{

loc_0038A960: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038A970
 * Original: 0x0038A970 - 0x0038A97A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A970(void)
{

loc_0038A970: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038A980
 * Original: 0x0038A980 - 0x0038A98B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038A980: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0038A990
 * Original: 0x0038A990 - 0x0038A9B9 (41 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038A990: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax) = 0;
    MEM32(ecx + 8) = eax;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038A9B1; /* je: equal / zero */

loc_0038A9AA: ;
    MEM32(edx) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_0038A9B1: ;
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038A9D0
 * Original: 0x0038A9D0 - 0x0038AA84 (180 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A9D0(void)
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

loc_0038A9D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0038AA7B; /* je: equal / zero */

loc_0038A9ED: ;
    /* nop */

loc_0038A9F0: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0038AA02; /* jl: less (signed <) */

loc_0038A9F8: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB8B0)); /* movss */
    goto loc_0038AA60;

loc_0038AA02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0038AA25; /* je: equal / zero */

loc_0038AA0F: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_0038AA25: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 0 (32-bit) */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0038AA5D; /* je: equal / zero */

loc_0038AA3F: ;
    edx = eax;
    eax = ecx;
    ecx = MEM32(eax + edx * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0038AA4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038AA48u); } /* indirect call */
    }

loc_0038AA4B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_0038AA5D: ;
    xmm0 = xmm1; /* movaps */

loc_0038AA60: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0038AA71; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0038AA6B: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_0038AA71: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038A9F0; /* jne: not equal / not zero */

loc_0038AA7B: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    POP32(esp, esi);
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
 * sub_0038AAC0
 * Original: 0x0038AAC0 - 0x0038AAD0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AAC0(void)
{

loc_0038AAC0: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0038AAE0
 * Original: 0x0038AAE0 - 0x0038AAED (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AAE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038AAE0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0038AAF0
 * Original: 0x0038AAF0 - 0x0038AB19 (41 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038AAF0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax) = 0;
    MEM32(ecx + 8) = eax;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038AB11; /* je: equal / zero */

loc_0038AB0A: ;
    MEM32(edx) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_0038AB11: ;
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038AB30
 * Original: 0x0038AB30 - 0x0038AB72 (66 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038AB30: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038AB6F; /* je: equal / zero */

loc_0038AB38: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0038AB46; /* je: equal / zero */

loc_0038AB40: ;
    esi = MEM32(eax);
    MEM32(edx) = esi;
    goto loc_0038AB4B;

loc_0038AB46: ;
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;

loc_0038AB4B: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038AB59; /* je: equal / zero */

loc_0038AB51: ;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    goto loc_0038AB5F;

loc_0038AB59: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;

loc_0038AB5F: ;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);

loc_0038AB6F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038AB90
 * Original: 0x0038AB90 - 0x0038ABE0 (80 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038AB90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi) = ecx;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0038ABDA; /* je: equal / zero */

loc_0038ABAE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = eax * 4;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0038ABBEu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0038ABBE: ;
    ecx = ebx;
    edx = ecx;
    edi = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esi + 8) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0038ABDA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038AC00
 * Original: 0x0038AC00 - 0x0038AC2B (43 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038AC00: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 4) = edx;
    MEM32(eax) = 0;
    MEM32(ecx + 0x24) = eax;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038AC22; /* je: equal / zero */

loc_0038AC1A: ;
    MEM32(edx) = eax;
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_0038AC22: ;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038AC40
 * Original: 0x0038AC40 - 0x0038ACFA (186 bytes, 67 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AC40(void)
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

loc_0038AC40: ;
    eax = MEM32(0x902554);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038ACF6; /* je: equal / zero */

loc_0038AC51: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);

loc_0038AC56: ;
    ecx = edi;
    PUSH32(esp, 0x0038AC5Du); RECOMP_ABI_CALL(0x00024EEDu, sub_00024EED); /* call 0x00024EED */

loc_0038AC5D: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0038AC68u); RECOMP_ABI_CALL(0x00026568u, sub_00026568); /* call 0x00026568 */

loc_0038AC68: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038AC56; /* jne: not equal / not zero */

loc_0038AC6E: ;
    eax = MEM32(0x902554);
    esi = MEM32(eax + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038ACDE; /* je: equal / zero */

loc_0038AC7A: ;
    /* nop */

loc_0038AC80: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0xC) (32-bit) */
    edx = MEM32(esi);
    edi = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0038ACD8; /* jne: not equal / not zero */

loc_0038AC8C: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038AC9A; /* je: equal / zero */

loc_0038AC96: ;
    MEM32(ecx) = edx;
    goto loc_0038AC9D;

loc_0038AC9A: ;
    MEM32(eax + 4) = edx;

loc_0038AC9D: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038ACAB; /* je: equal / zero */

loc_0038ACA3: ;
    edx = MEM32(esi + 4);
    MEM32(ecx + 4) = edx;
    goto loc_0038ACB1;

loc_0038ACAB: ;
    ecx = MEM32(esi + 4);
    MEM32(eax + 8) = ecx;

loc_0038ACB1: ;
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0;
    edx = MEM32(eax);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = esi;
    MEM32(eax) = edx;
    PUSH32(esp, 0x0038ACCAu); RECOMP_ABI_CALL(0x000153EEu, sub_000153EE); /* call 0x000153EE */

loc_0038ACCA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0038ACD0u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0038ACD0: ;
    eax = MEM32(0x902554);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0038ACD8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0038AC80; /* jne: not equal / not zero */

loc_0038ACDE: ;
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0038ACF6; /* jne: not equal / not zero */

loc_0038ACE6: ;
    PUSH32(esp, 0x0038ACEBu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0038ACEB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2F);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0038ACF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038ACF3u); } /* indirect call */
    }

loc_0038ACF6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038AD30
 * Original: 0x0038AD30 - 0x0038AD65 (53 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AD30(void)
{

loc_0038AD30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x832CC0);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0038AD44u); RECOMP_ABI_CALL(0x000243B2u, sub_000243B2); /* call 0x000243B2 */

loc_0038AD44: ;
    MEM32(esi) = 0x832CB4;
    MEM32(esi + 0x1C) = 0;
    MEM32(esi + 0x24) = 0;
    MEM32(esi + 0x20) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038AD80
 * Original: 0x0038AD80 - 0x0038ADCE (78 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AD80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038AD80: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038ADCD; /* je: equal / zero */

loc_0038AD87: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0038AD95; /* je: equal / zero */

loc_0038AD8F: ;
    esi = MEM32(eax);
    MEM32(edx) = esi;
    goto loc_0038AD9A;

loc_0038AD95: ;
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;

loc_0038AD9A: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038ADB7; /* je: equal / zero */

loc_0038ADA0: ;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0038ADB7: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);

loc_0038ADCD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0038ADF0
 * Original: 0x0038ADF0 - 0x0038AE38 (72 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038ADF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038ADF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x0038ADFCu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0038ADFC: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038AE2F; /* je: equal / zero */

loc_0038AE05: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x832CC0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0038AE17u); RECOMP_ABI_CALL(0x000243B2u, sub_000243B2); /* call 0x000243B2 */

loc_0038AE17: ;
    MEM32(esi) = 0x832CB4;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x20) = edi;
    POP32(esp, edi);
    MEM32(0x902554) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0038AE2F: ;
    MEM32(0x902554) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0038AE50
 * Original: 0x0038AE50 - 0x0038AEF5 (165 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AE50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038AE50: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx) = 0x832CB4;
    if (CMP_EQ(_fa, _fb)) goto loc_0038AEED; /* je: equal / zero */

loc_0038AE64: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0038AE66: ;
    esi = MEM32(ebx + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038AEE0; /* je: equal / zero */

loc_0038AE6D: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038AE7A; /* je: equal / zero */

loc_0038AE74: ;
    ecx = MEM32(esi);
    MEM32(eax) = ecx;
    goto loc_0038AE7F;

loc_0038AE7A: ;
    edx = MEM32(esi);
    MEM32(ebx + 0x20) = edx;

loc_0038AE7F: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038AE8D; /* je: equal / zero */

loc_0038AE85: ;
    ecx = MEM32(esi + 4);
    MEM32(eax + 4) = ecx;
    goto loc_0038AE93;

loc_0038AE8D: ;
    edx = MEM32(esi + 4);
    MEM32(ebx + 0x24) = edx;

loc_0038AE93: ;
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0;
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) - 1;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038AED7; /* je: equal / zero */

loc_0038AEAA: ;
    eax = MEM32(esi + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0038AECB; /* jle: less or equal (signed <=) */

loc_0038AEB3: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038AEC3; /* je: equal / zero */

loc_0038AEBD: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0038AEC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038AEC1u); } /* indirect call */
    }

loc_0038AEC3: ;
    eax = MEM32(esi + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0038AEB3; /* jl: less (signed <) */

loc_0038AECB: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0038AED4u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0038AED4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0038AED7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0038AEDDu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0038AEDD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0038AEE0: ;
    eax = MEM32(ebx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038AE66; /* jne: not equal / not zero */

loc_0038AEEB: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0038AEED: ;
    ecx = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000323C2(); return; /* tail jmp 0x000323C2 */

}

/**
 * sub_0038AF20
 * Original: 0x0038AF20 - 0x0038AF3E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038AF20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0038AF28u); RECOMP_ABI_CALL(0x0001E0BBu, sub_0001E0BB); /* call 0x0001E0BB */

loc_0038AF28: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0038AF38; /* je: equal / zero */

loc_0038AF2F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0038AF35u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0038AF35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0038AF38: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038AF50
 * Original: 0x0038AF50 - 0x0038AF67 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AF50(void)
{

loc_0038AF50: ;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx + 8) = eax;
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    MEM8(ecx + 4) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0038AF70
 * Original: 0x0038AF70 - 0x0038AF75 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AF70(void)
{

loc_0038AF70: ;
    MEM8(ecx + 4) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0038AF80
 * Original: 0x0038AF80 - 0x0038AF8A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AF80(void)
{

loc_0038AF80: ;
    MEM8(ecx + 4) = 0;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0038AF90
 * Original: 0x0038AF90 - 0x0038AFF2 (98 bytes, 35 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0038AF90(void)
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

loc_0038AF90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    if (CMP_NE(_fa, _fb)) goto loc_0038AFA5; /* jne: not equal / not zero */

loc_0038AFA1: ;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    edi = eax;

loc_0038AFA5: ;
    eax = MEM32(esi + 0x10);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esi + 8);
    ecx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 8) = ecx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0038AFC4; /* jge: greater or equal (signed >=) */

loc_0038AFBE: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_0038AFC4: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0038AFCDu); RECOMP_ABI_CALL(0x0059E895u, sub_0059E895); /* call 0x0059E895 */

loc_0038AFCD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0038AFDF; /* jge: greater or equal (signed >=) */

loc_0038AFD9: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_0038AFDF: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 8) / fp_top()); /* fdivr dword ptr [esp + 8] */
    MEM32(esi + 8) = edi;
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x10)); /* fadd dword ptr [esi + 0x10] */
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_0038B010
 * Original: 0x0038B010 - 0x0038B01E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B010(void)
{

loc_0038B010: ;
    MEM32(ecx) = 0x832CAC;
    PUSH32(esp, 0x0038B01Bu); RECOMP_ABI_CALL(0x00022576u, sub_00022576); /* call 0x00022576 */

loc_0038B01B: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0038B030
 * Original: 0x0038B030 - 0x0038B03C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B030(void)
{

loc_0038B030: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0038B03Au); RECOMP_ABI_CALL(0x0059D40Fu, sub_0059D40F); /* call 0x0059D40F */

loc_0038B03A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0038B040
 * Original: 0x0038B040 - 0x0038B043 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B040(void)
{

loc_0038B040: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0038B050
 * Original: 0x0038B050 - 0x0038B061 (17 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B050(void)
{

loc_0038B050: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 4);
    MEM32(ecx + 4) = eax;
    MEM32(edx) = eax;
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038B070
 * Original: 0x0038B070 - 0x0038B075 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B070(void)
{

loc_0038B070: ;
    eax = MEM32(esp + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0038B080
 * Original: 0x0038B080 - 0x0038B08C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B080(void)
{

loc_0038B080: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0038B08Au); RECOMP_ABI_CALL(0x0059D40Fu, sub_0059D40F); /* call 0x0059D40F */

loc_0038B08A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0038B090
 * Original: 0x0038B090 - 0x0038B0A6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038B090: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0038B0A2u); RECOMP_ABI_CALL(0x0059D322u, sub_0059D322); /* call 0x0059D322 */

loc_0038B0A2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0038B0B0
 * Original: 0x0038B0B0 - 0x0038B0BC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B0B0(void)
{

loc_0038B0B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0038B0BAu); RECOMP_ABI_CALL(0x0059D40Fu, sub_0059D40F); /* call 0x0059D40F */

loc_0038B0BA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0038B0C0
 * Original: 0x0038B0C0 - 0x0038B0C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B0C0(void)
{

loc_0038B0C0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0038B0D0
 * Original: 0x0038B0D0 - 0x0038B0D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B0D0(void)
{

loc_0038B0D0: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_0038B0E0
 * Original: 0x0038B0E0 - 0x0038B0E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B0E0(void)
{

loc_0038B0E0: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_0038B0F0
 * Original: 0x0038B0F0 - 0x0038B0F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B0F0(void)
{

loc_0038B0F0: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_0038B100
 * Original: 0x0038B100 - 0x0038B104 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B100(void)
{

loc_0038B100: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0038B110
 * Original: 0x0038B110 - 0x0038B11C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B110(void)
{

loc_0038B110: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038B120
 * Original: 0x0038B120 - 0x0038B129 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B120(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038B120: ;
    eax = MEM32(ecx + 0xC);
    eax = eax & 0x3FFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0038B130
 * Original: 0x0038B130 - 0x0038B147 (23 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038B130: ;
    eax = MEM32(ecx + 0xC);
    eax = eax ^ MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(ecx + 0xC);
    eax = eax & 0x3FFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0xC) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038B150
 * Original: 0x0038B150 - 0x0038B153 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B150(void)
{

loc_0038B150: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0038B160
 * Original: 0x0038B160 - 0x0038B165 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038B160: ;
    g_seh_ebp = ebp; sub_0059C9B1(); return; /* tail jmp 0x0059C9B1 */

}

/**
 * sub_0038B170
 * Original: 0x0038B170 - 0x0038B17C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0038B170: ;
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 0x14)));
    eax = eax - MEM32(ecx + 0x14);
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
 * sub_0038B180
 * Original: 0x0038B180 - 0x0038B18F (15 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0038B180: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038B1A0
 * Original: 0x0038B1A0 - 0x0038B1DA (58 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B1A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038B1A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    MEM32(esi + 4) = eax;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE8);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x832F54);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0038B1CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038B1C7u); } /* indirect call */
    }

loc_0038B1CA: ;
    MEM32(esi) = eax;
    POP32(esp, edi);
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0038B1F0
 * Original: 0x0038B1F0 - 0x0038B233 (67 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038B1F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0038B217; /* jbe: below or equal (unsigned <=) */

loc_0038B1FD: ;
    /* nop */

loc_0038B200: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038B20F; /* je: equal / zero */

loc_0038B209: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0038B20Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038B20Du); } /* indirect call */
    }

loc_0038B20F: ;
    eax = MEM32(esi + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0038B200; /* jb: below (unsigned <) */

loc_0038B217: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE8);
    eax = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0038B22Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038B227u); } /* indirect call */
    }

loc_0038B22A: ;
    POP32(esp, edi);
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0038B250
 * Original: 0x0038B250 - 0x0038B27A (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B250(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038B250: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(eax + 0xC);
    ecx = ecx & 0x3FFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x832F68;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038B290
 * Original: 0x0038B290 - 0x0038B299 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038B290: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0038B2A0
 * Original: 0x0038B2A0 - 0x0038B2A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B2A0(void)
{

loc_0038B2A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0038B2B0
 * Original: 0x0038B2B0 - 0x0038B2BA (10 bytes, 3 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B2B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038B2B0: ;
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0038B2C0
 * Original: 0x0038B2C0 - 0x0038B2C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B2C0(void)
{

loc_0038B2C0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0038B2D0
 * Original: 0x0038B2D0 - 0x0038B2F8 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B2D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038B2D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038B2EF; /* je: equal / zero */

loc_0038B2DD: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0038B2EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038B2ECu); } /* indirect call */
    }

loc_0038B2EF: ;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0038B310
 * Original: 0x0038B310 - 0x0038B352 (66 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038B310: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(esp + 0xC));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0038B324; /* jne: not equal / not zero */

loc_0038B31F: ;
    eax = 0x100;

loc_0038B324: ;
    edi = MEM32(esp + 0xC);
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE8);
    edx = MEM32(ecx);
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    eax = eax & 0x3FFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x832F8C);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0038B34Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038B347u); } /* indirect call */
    }

loc_0038B34A: ;
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0038B370
 * Original: 0x0038B370 - 0x0038B39C (44 bytes, 19 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038B370: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0038B396; /* jle: less or equal (signed <=) */

loc_0038B379: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0038B38Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038B38Au); } /* indirect call */
    }

loc_0038B38D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0038B393u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0038B393: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0038B396: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0038B3B0
 * Original: 0x0038B3B0 - 0x0038B3EA (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B3B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038B3B0: ;
    edx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0038B3C0; /* jle: less or equal (signed <=) */

loc_0038B3BB: ;
    edx = 1;

loc_0038B3C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0038B3E8; /* jbe: below or equal (unsigned <=) */

loc_0038B3CB: ;
    PUSH32(esp, edi);
    /* nop */

loc_0038B3D0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0038B3E7; /* jae: above or equal (unsigned >=) */

loc_0038B3D5: ;
    edi = edx + edx * 2;
    edi = ecx + edi * 4;
    _fb = (uint32_t)(MEM32(edi * 4 + 0x832ED0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edi * 4 + 0x832ED0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0038B3D0; /* jb: below (unsigned <) */

loc_0038B3E7: ;
    POP32(esp, edi);

loc_0038B3E8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0038B400
 * Original: 0x0038B400 - 0x0038B47E (126 bytes, 47 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038B400: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_0038B414; /* jae: above or equal (unsigned >=) */

loc_0038B40F: ;
    ebx = 1;

loc_0038B414: ;
    edx = MEM32(esp + 0x14);
    eax = edx;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x76C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x76C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0038B430; /* jae: above or equal (unsigned >=) */

loc_0038B429: ;
    edx = 0x76C;
    goto loc_0038B43D;

loc_0038B430: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x81E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x81E (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0038B43D; /* jb: below (unsigned <) */

loc_0038B438: ;
    edx = 0x81D;

loc_0038B43D: ;
    _fb = (uint32_t)(0x76C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(0x76C));
    edx = edx - 0x76C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    esi = edx;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x16D);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edx)) >> 32) & 1);
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edi + 0x16D;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp) = esi;
    if (CMP_B(_fa, _fb)) goto loc_0038B470; /* jb: below (unsigned <) */

loc_0038B46A: ;
    ebx = edi + 0x16C;

loc_0038B470: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebx)) >> 32) & 1);
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ebp) = esi;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0038B4A0
 * Original: 0x0038B4A0 - 0x0038B4B3 (19 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B4A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038B4A0: ;
    eax = MEM32(ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 7;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0038B4C0
 * Original: 0x0038B4C0 - 0x0038B543 (131 bytes, 48 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B4C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038B4C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x76C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x76C (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_0038B4D8; /* jae: above or equal (unsigned >=) */

loc_0038B4D1: ;
    eax = 0x76C;
    goto loc_0038B4E4;

loc_0038B4D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x81E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x81E (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0038B4E4; /* jb: below (unsigned <) */

loc_0038B4DF: ;
    eax = 0x81D;

loc_0038B4E4: ;
    ebx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0038B4F2; /* jb: below (unsigned <) */

loc_0038B4ED: ;
    ebx = 0xB;

loc_0038B4F2: ;
    edi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x76C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x76C));
    eax = eax - 0x76C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ecx + ecx * 2;
    edx = ebx + edx * 4;
    edx = MEM32(edx * 4 + 0x832ED0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0038B519; /* jb: below (unsigned <) */

loc_0038B516: ;
    edi = edx + -1;

loc_0038B519: ;
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x16D);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ecx));
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    MEM32(ebp) = esi;
    PUSH32(esp, 0x0038B532u); RECOMP_ABI_CALL(0x000129B4u, sub_000129B4); /* call 0x000129B4 */

loc_0038B532: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0038B570
 * Original: 0x0038B570 - 0x0038B66A (250 bytes, 92 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038B570: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    ebp = ecx;
    MEM32(esp + 0x10) = 0x76C;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0038B59B; /* jne: not equal / not zero */

loc_0038B597: ;
    esi = esp + 0x10;

loc_0038B59B: ;
    edi = MEM32(esp + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0038B5A7; /* jne: not equal / not zero */

loc_0038B5A3: ;
    edi = esp + 0x14;

loc_0038B5A7: ;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x2C), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0038B5B5; /* jne: not equal / not zero */

loc_0038B5AD: ;
    ecx = esp + 0x18;
    MEM32(esp + 0x2C) = ecx;

loc_0038B5B5: ;
    ebx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0038B5C1; /* jne: not equal / not zero */

loc_0038B5BD: ;
    ebx = esp + 0x1C;

loc_0038B5C1: ;
    edx = MEM32(ebp);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = 0x166DB073;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = edx;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = edx;
    MEM32(esi) = edx;
    ebp = MEM32(ebp);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x16D);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(ecx));
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(edx));
    ebp = ebp - edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax + ebp;
    edx = eax + 0x16D;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebx) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_0038B60D; /* jb: below (unsigned <) */

loc_0038B5FD: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebx) = ecx;
    eax = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0038B60D: ;
    ebp = MEM32(esi);
    edx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x76C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x76C)) >> 32) & 1);
    ebp = ebp + 0x76C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ebp;
    MEM32(edi) = 0;
    ecx = MEM32(ebx);
    MEM32(edx) = ecx;
    esi = MEM32(edi);
    eax = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi * 4 + 0x832ED0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi * 4 + 0x832ED0) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0038B660; /* jb: below (unsigned <) */

loc_0038B638: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0038B660; /* jae: above or equal (unsigned >=) */

loc_0038B63F: ;
    esi = MEM32(edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ecx * 4 + 0x832ED0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ecx));
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx) = esi;
    ecx = MEM32(edi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi) = ecx;
    esi = MEM32(edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx * 4 + 0x832ED0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx * 4 + 0x832ED0) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0038B638; /* jae: above or equal (unsigned >=) */

loc_0038B660: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0038B6B0
 * Original: 0x0038B6B0 - 0x0038B6CB (27 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0038B6B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038B6B0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0038B6C6; /* jb: below (unsigned <) */

loc_0038B6B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0038B6C6; /* jae: above or equal (unsigned >=) */

loc_0038B6BE: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_0038B6C6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038B6E0
 * Original: 0x0038B6E0 - 0x0038B6EB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038B6E0: ;
    edx = MEM32(ecx + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_0038B6F0
 * Original: 0x0038B6F0 - 0x0038B6F3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B6F0(void)
{

loc_0038B6F0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038B700
 * Original: 0x0038B700 - 0x0038B71B (27 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B700(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038B700: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0x18));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0x18)); }
    ecx = MEM32(ecx + 0x30);
    eax = eax + eax * 8;
    eax = MEM32(ecx + eax * 4 + 0x10);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038B730
 * Original: 0x0038B730 - 0x0038B733 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B730(void)
{

loc_0038B730: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0038B740
 * Original: 0x0038B740 - 0x0038B77C (60 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038B740: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + edx * 4 + 0x334);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038B779; /* je: equal / zero */

loc_0038B751: ;
    MEM32(eax + edx * 4 + 0x334) = 0;
    edx = MEM32(eax + 0x340);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax + 0x340) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0038B779; /* je: equal / zero */

loc_0038B76D: ;
    eax = MEM32(ecx);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

loc_0038B779: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038B790
 * Original: 0x0038B790 - 0x0038B7B2 (34 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B790(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038B790: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = eax & 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0038B7AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0038B7ACu); } /* indirect call */
    }

loc_0038B7AF: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0038B7C0
 * Original: 0x0038B7C0 - 0x0038B7DC (28 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038B7C0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x340);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_0038B7D9; /* jge: greater or equal (signed >=) */

loc_0038B7D2: ;
    eax = MEM32(ecx + edx * 4 + 0x334);

loc_0038B7D9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038B7F0
 * Original: 0x0038B7F0 - 0x0038B7FE (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B7F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038B7F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0038B7F7u); RECOMP_ABI_CALL(0x0059D536u, sub_0059D536); /* call 0x0059D536 */

loc_0038B7F7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038B810
 * Original: 0x0038B810 - 0x0038B811 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B810(void)
{

loc_0038B810: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0038B820
 * Original: 0x0038B820 - 0x0038B825 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038B820: ;
    g_seh_ebp = ebp; sub_0059D832(); return; /* tail jmp 0x0059D832 */

}

/**
 * sub_0038B830
 * Original: 0x0038B830 - 0x0038B88A (90 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0038B830: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1C));
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esp + 4;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0038B841u); RECOMP_ABI_CALL(0x0059D854u, sub_0059D854); /* call 0x0059D854 */

loc_0038B841: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0038B881; /* je: equal / zero */

loc_0038B848: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_0038B850: ;
    esi = MEM32(esp + 0xC);
    edi = 0x832FA4;
    ecx = 6;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_0038B869; /* je: equal / zero */

loc_0038B864: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0038B869: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0038B86E; /* jne: not equal / not zero */

loc_0038B86D: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0038B86E: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0038B878u); RECOMP_ABI_CALL(0x0059D8C8u, sub_0059D8C8); /* call 0x0059D8C8 */

loc_0038B878: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0038B850; /* jne: not equal / not zero */

loc_0038B87F: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0038B881: ;
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038B8A0
 * Original: 0x0038B8A0 - 0x0038B8A3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B8A0(void)
{

loc_0038B8A0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038B8B0
 * Original: 0x0038B8B0 - 0x0038B8B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B8B0(void)
{

loc_0038B8B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0038B8C0
 * Original: 0x0038B8C0 - 0x0038B8C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B8C0(void)
{

loc_0038B8C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0038B8D0
 * Original: 0x0038B8D0 - 0x0038B8D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B8D0(void)
{

loc_0038B8D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0038B8E0
 * Original: 0x0038B8E0 - 0x0038B909 (41 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B8E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038B8E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 8) = eax;
    eax = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0038B8F8u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0038B8F8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    MEM32(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038B920
 * Original: 0x0038B920 - 0x0038B943 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038B920: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038B941; /* je: equal / zero */

loc_0038B92A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0038B930u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0038B930: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;

loc_0038B941: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0038B950
 * Original: 0x0038B950 - 0x0038B9E2 (146 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038B950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_0038B950: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    eax = eax + eax * 2;
    MEMF(edx + eax * 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 4);
    eax = eax + eax * 2;
    MEMF(edx + eax * 4 + 4) = xmm1.f[0]; /* movss */
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0038B991; /* jne: not equal / not zero */

loc_0038B980: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0xC) = eax;
    esp += 12; return; /* ret 8 */

loc_0038B991: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0038B9A0; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0038B99B: ;
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */

loc_0038B9A0: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0038B9AB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x14)) */

loc_0038B9A6: ;
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */

loc_0038B9AB: ;
    edx = MEM32(ecx + 4);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    eax = eax + eax * 2;
    xmm0 = XMM_SCALAR(MEMF(edx + eax * 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + eax * 4 + -12); /* subss */
    edx = edx + eax * 4;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0038B9D7; /* jnp: not parity */

loc_0038B9CB: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */

loc_0038B9D7: ;
    MEMF(edx + -4) = xmm1.f[0]; /* movss */
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0038BA10
 * Original: 0x0038BA10 - 0x0038BA14 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038BA10(void)
{

loc_0038BA10: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0038BA20
 * Original: 0x0038BA20 - 0x0038BA24 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038BA20(void)
{

loc_0038BA20: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0038BA30
 * Original: 0x0038BA30 - 0x0038BA43 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038BA30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038BA30: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038BA3D; /* jne: not equal / not zero */

loc_0038BA36: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

loc_0038BA3D: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x10);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esp += 4; return; /* ret */

}

/**
 * sub_0038BA50
 * Original: 0x0038BA50 - 0x0038BA55 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038BA50(void)
{

loc_0038BA50: ;
    SET_LO16(eax, MEM16(ecx + 0x10));
    esp += 4; return; /* ret */

}

/**
 * sub_0038BA60
 * Original: 0x0038BA60 - 0x0038BA64 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038BA60(void)
{

loc_0038BA60: ;
    SET_LO8(eax, MEM8(ecx + 0x10));
    esp += 4; return; /* ret */

}

/**
 * sub_0038BA70
 * Original: 0x0038BA70 - 0x0038BA74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038BA70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0038BA70: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038BA80
 * Original: 0x0038BA80 - 0x0038BA9D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0038BA80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038BA80: ;
    eax = MEM32(ecx + 0x110);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038BA9A; /* je: equal / zero */

loc_0038BA8A: ;
    eax = MEM32(ecx + 0x114);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038BA9A; /* je: equal / zero */

loc_0038BA94: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0038BA9A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0038BAB0
 * Original: 0x0038BAB0 - 0x0038BABA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038BAB0(void)
{

loc_0038BAB0: ;
    eax = MEM32(ecx + 0x114);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0038BAC0
 * Original: 0x0038BAC0 - 0x0038BACD (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038BAC0(void)
{

loc_0038BAC0: ;
    eax = MEM32(ecx + 0x110);
    eax = MEM32(eax + 0x118);
    esp += 4; return; /* ret */

}

/**
 * sub_0038BAD0
 * Original: 0x0038BAD0 - 0x0038BAD4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038BAD0(void)
{

loc_0038BAD0: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0038BAE0
 * Original: 0x0038BAE0 - 0x0038BAE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038BAE0(void)
{

loc_0038BAE0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0038BAF0
 * Original: 0x0038BAF0 - 0x0038BB0C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038BAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038BAF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038BB0A; /* je: equal / zero */

loc_0038BAFA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0038BB00u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0038BB00: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = 0;

loc_0038BB0A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0038BB20
 * Original: 0x0038BB20 - 0x0038BB50 (48 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038BB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038BB20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038BB3A; /* je: equal / zero */

loc_0038BB2A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0038BB30u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0038BB30: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = 0;

loc_0038BB3A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0038BB4A; /* je: equal / zero */

loc_0038BB41: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0038BB47u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0038BB47: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0038BB4A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038BB60
 * Original: 0x0038BB60 - 0x0038BB7A (26 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038BB60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0038BB60: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038BB80
 * Original: 0x0038BB80 - 0x0038BBBF (63 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038BB80(void)
{

loc_0038BB80: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0xC) = xmm1.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038BBD0
 * Original: 0x0038BBD0 - 0x0038BD88 (440 bytes, 119 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038BBD0(void)
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

loc_0038BBD0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm5 = xmm0; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm7 = xmm6; /* movaps */
    PUSH32(esp, esi);
    esi = ecx;
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 8); /* addss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 8); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 4); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 4); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi); /* addss */
    xmm7.f[0] = xmm7.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi); /* addss */
    xmm3 = xmm6; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 8); /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 4); /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi); /* addss */
    xmm6 = xmm4; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esi + 8); /* addss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esi + 4); /* addss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 8); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 4); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi); /* addss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esi); /* addss */
    MEMF(esp + 4) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x7AB82C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x7ABE28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7C0B1C); /* mulss */
    PUSH32(esp, edi);
    edi = eax + 1;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_0038BD0A; /* jle: less or equal (signed <=) */

loc_0038BCFE: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_0038BD0A: ;
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7B1DA4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_0038BD35; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0038BD2E: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */

loc_0038BD35: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0038BCFE; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0038BD40: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(esp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    ebx = MEM32(esp + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0038BD67u); RECOMP_ABI_CALL(0x0002BC20u, sub_0002BC20); /* call 0x0002BC20 */

loc_0038BD67: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0038BD7Au); RECOMP_ABI_CALL(0x0002BC20u, sub_0002BC20); /* call 0x0002BC20 */

loc_0038BD7A: ;
    POP32(esp, ebp);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038BE00
 * Original: 0x0038BE00 - 0x0038BE01 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038BE00(void)
{

loc_0038BE00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0038BE10
 * Original: 0x0038BE10 - 0x0038BE1B (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038BE10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038BE10: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x61 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0038BE1A; /* jl: less (signed <) */

loc_0038BE14: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x7A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x7A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0038BE1A; /* jg: greater (signed >) */

loc_0038BE18: ;
    _fb = (uint32_t)(0xE0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0xE0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_0038BE1A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0038BE20
 * Original: 0x0038BE20 - 0x0038BE4F (47 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038BE20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038BE20: ;
    edx = MEM32(esp + 4);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038BE4E; /* je: equal / zero */

loc_0038BE2B: ;
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038BE4E; /* je: equal / zero */

loc_0038BE31: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x21);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x61 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0038BE41; /* jl: less (signed <) */

loc_0038BE39: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x7A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x7A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0038BE41; /* jg: greater (signed >) */

loc_0038BE3E: ;
    _fb = (uint32_t)(0xE0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 0xE0);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_0038BE41: ;
    ecx = ZX8(LO8(ecx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(edx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038BE31; /* jne: not equal / not zero */

loc_0038BE4E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0038BE60
 * Original: 0x0038BE60 - 0x0038BE90 (48 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038BE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038BE60: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0038BE8F; /* je: equal / zero */

loc_0038BE6C: ;
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038BE8F; /* je: equal / zero */

loc_0038BE72: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x21);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x61 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0038BE82; /* jl: less (signed <) */

loc_0038BE7A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x7A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x7A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0038BE82; /* jg: greater (signed >) */

loc_0038BE7F: ;
    _fb = (uint32_t)(0xE0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 0xE0);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_0038BE82: ;
    ecx = ZX8(LO8(ecx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(edx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038BE72; /* jne: not equal / not zero */

loc_0038BE8F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0038BEA0
 * Original: 0x0038BEA0 - 0x0038BEF4 (84 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038BEA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038BEA0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0038BEAFu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_0038BEAF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    edi = esp + 0x10;
    ebp = 4;
    /* nop */

loc_0038BEC0: ;
    SET_LO8(ebx, MEM8(edi));
    esi = SX8(LO8(ebx));
    PUSH32(esp, esi);
    PUSH32(esp, 0x832FB0);
    PUSH32(esp, 0x0038BED0u); RECOMP_ABI_CALL(0x005CC3B0u, sub_005CC3B0); /* call 0x005CC3B0 */

loc_0038BED0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038BEDB; /* je: equal / zero */

loc_0038BED7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038BEE6; /* jne: not equal / not zero */

loc_0038BEDB: ;
    esi = esi & 0x3F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ecx, MEM8(esi + 0x832FB0));
    MEM8(edi) = LO8(ecx);

loc_0038BEE6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0038BEC0; /* jne: not equal / not zero */

loc_0038BEEA: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0038BF10
 * Original: 0x0038BF10 - 0x0038BF74 (100 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0038BF10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038BF10: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038BF21; /* jne: not equal / not zero */

loc_0038BF19: ;
    eax = MEM32(esp + 4);
    eax = ZX8(MEM8(eax));
    esp += 4; return; /* ret */

loc_0038BF21: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038BF34; /* jne: not equal / not zero */

loc_0038BF26: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax));
    SET_LO8(ecx, MEM8(eax + 1));
    eax = ecx;
    esp += 4; return; /* ret */

loc_0038BF34: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038BF4E; /* jne: not equal / not zero */

loc_0038BF39: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(eax));
    SET_LO8(edx, MEM8(eax + 1));
    eax = ZX8(MEM8(eax + 2));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_0038BF4E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038BF71; /* jne: not equal / not zero */

loc_0038BF53: ;
    eax = MEM32(esp + 4);
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
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_0038BF71: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0038BF90
 * Original: 0x0038BF90 - 0x0038BFD2 (66 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038BF90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0038BF90: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0038BFCA; /* jle: less or equal (signed <=) */

loc_0038BFA1: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    goto loc_0038BFB0;

    /* nop */
    /* nop */

loc_0038BFB0: ;
    eax = ZX8(MEM8(ecx + ebp));
    { uint32_t _c = (uint32_t)(8) & 31u; if (_c && _c < 32u) { edi = (edi << _c) | (esi >> (32 - _c)); _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shld result */ } }  /* shld */
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    esi = eax;
    edi = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0038BFB0; /* jl: less (signed <) */

loc_0038BFC9: ;
    POP32(esp, ebp);

loc_0038BFCA: ;
    edx = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0038BFF0
 * Original: 0x0038BFF0 - 0x0038BFFB (11 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038BFF0(void)
{

loc_0038BFF0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038C000
 * Original: 0x0038C000 - 0x0038C041 (65 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038C000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038C000: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    edx = eax + 1;
    /* nop */

loc_0038C010: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038C010; /* jne: not equal / not zero */

loc_0038C017: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0038C022u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0038C022: ;
    MEM32(edi) = eax;
    ecx = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_0038C030: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0038C030; /* jne: not equal / not zero */

loc_0038C03A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038C060
 * Original: 0x0038C060 - 0x0038C07A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038C060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038C060: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038C078; /* je: equal / zero */

loc_0038C069: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0038C06Fu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0038C06F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_0038C078: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0038C080
 * Original: 0x0038C080 - 0x0038C095 (21 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038C080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038C080: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0038C08Fu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_0038C08F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038C0A0
 * Original: 0x0038C0A0 - 0x0038C0B2 (18 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038C0A0(void)
{

loc_0038C0A0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0038C0C0
 * Original: 0x0038C0C0 - 0x0038C0C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038C0C0(void)
{

loc_0038C0C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0038C0D0
 * Original: 0x0038C0D0 - 0x0038C0D5 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038C0D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038C0D0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038C0E0
 * Original: 0x0038C0E0 - 0x0038C0FF (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038C0E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038C0E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0038C0FD; /* je: equal / zero */

loc_0038C0EB: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0038C0F3u); RECOMP_ABI_CALL(0x00598CBFu, sub_00598CBF); /* call 0x00598CBF */

loc_0038C0F3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0xFFFFFFFFu;

loc_0038C0FD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0038C110
 * Original: 0x0038C110 - 0x0038C11C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038C110(void)
{

loc_0038C110: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 2;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0038C120
 * Original: 0x0038C120 - 0x0038C139 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038C120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038C120: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(edx));
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0038C140
 * Original: 0x0038C140 - 0x0038C148 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038C140(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0038C140: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFECu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}
