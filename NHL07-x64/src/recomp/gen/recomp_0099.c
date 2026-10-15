/**
 * nhl_07_recomp - Recompiled code chunk 99
 * Functions: 250 (0x000F6060 - 0x000FC5D0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000F6060
 * Original: 0x000F6060 - 0x000F607A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000F6060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6060: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000F6069u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000F6069: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6077; /* je: equal / zero */

loc_000F6070: ;
    MEM32(eax) = 0x7CF940;
    esp += 4; return; /* ret */

loc_000F6077: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F6080
 * Original: 0x000F6080 - 0x000F609A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000F6080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6080: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000F6089u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000F6089: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6097; /* je: equal / zero */

loc_000F6090: ;
    MEM32(eax) = 0x7CF950;
    esp += 4; return; /* ret */

loc_000F6097: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F60A0
 * Original: 0x000F60A0 - 0x000F60BA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000F60A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F60A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000F60A9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000F60A9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F60B7; /* je: equal / zero */

loc_000F60B0: ;
    MEM32(eax) = 0x7CF960;
    esp += 4; return; /* ret */

loc_000F60B7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F60C0
 * Original: 0x000F60C0 - 0x000F60E9 (41 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000F60C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F60C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x000F60C9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000F60C9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F60E6; /* je: equal / zero */

loc_000F60D0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(eax) = 0x7CFADC;
    MEM32(eax + 4) = 0;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000F60E6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F6100
 * Original: 0x000F6100 - 0x000F611A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000F6100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6100: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000F6109u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000F6109: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6117; /* je: equal / zero */

loc_000F6110: ;
    MEM32(eax) = 0x7CF970;
    esp += 4; return; /* ret */

loc_000F6117: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F6120
 * Original: 0x000F6120 - 0x000F613A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000F6120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6120: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000F6129u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000F6129: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6137; /* je: equal / zero */

loc_000F6130: ;
    MEM32(eax) = 0x7CF980;
    esp += 4; return; /* ret */

loc_000F6137: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F6140
 * Original: 0x000F6140 - 0x000F615A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000F6140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6140: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000F6149u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000F6149: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6157; /* je: equal / zero */

loc_000F6150: ;
    MEM32(eax) = 0x7CF990;
    esp += 4; return; /* ret */

loc_000F6157: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F6160
 * Original: 0x000F6160 - 0x000F617A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000F6160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6160: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000F6169u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000F6169: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6177; /* je: equal / zero */

loc_000F6170: ;
    MEM32(eax) = 0x7CF9A0;
    esp += 4; return; /* ret */

loc_000F6177: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F6180
 * Original: 0x000F6180 - 0x000F61A1 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000F6180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6180: ;
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x000F6189u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000F6189: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F619E; /* je: equal / zero */

loc_000F6190: ;
    MEM32(eax) = 0x7CFAF0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

loc_000F619E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F61B0
 * Original: 0x000F61B0 - 0x000F61DA (42 bytes, 14 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F61B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F61B0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 8) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = edx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F61F0
 * Original: 0x000F61F0 - 0x000F621A (42 bytes, 14 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F61F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F61F0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 8) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = edx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F6230
 * Original: 0x000F6230 - 0x000F625A (42 bytes, 14 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6230(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6230: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 8) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = edx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F6270
 * Original: 0x000F6270 - 0x000F6281 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000F6270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6270: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F627E; /* je: equal / zero */

loc_000F6277: ;
    eax = MEM32(ecx + 0x14);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

loc_000F627E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F6290
 * Original: 0x000F6290 - 0x000F62B9 (41 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6290: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax) = 0;
    MEM32(ecx + 8) = eax;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F62B1; /* je: equal / zero */

loc_000F62AA: ;
    MEM32(edx) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_000F62B1: ;
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F62D0
 * Original: 0x000F62D0 - 0x000F6324 (84 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F62D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F62D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6322; /* je: equal / zero */

loc_000F62DA: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F62E7; /* je: equal / zero */

loc_000F62E1: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    goto loc_000F62EC;

loc_000F62E7: ;
    ecx = MEM32(eax);
    MEM32(esi + 4) = ecx;

loc_000F62EC: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F62FA; /* je: equal / zero */

loc_000F62F2: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    goto loc_000F6300;

loc_000F62FA: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 8) = ecx;

loc_000F6300: ;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    ecx = MEM32(esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    MEM32(esi) = ecx;
    PUSH32(esp, 0x000F6318u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000F6318: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F62DA; /* jne: not equal / not zero */

loc_000F6322: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F6340
 * Original: 0x000F6340 - 0x000F6351 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000F6340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6340: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F634E; /* je: equal / zero */

loc_000F6347: ;
    eax = MEM32(ecx + 0x14);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

loc_000F634E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F6360
 * Original: 0x000F6360 - 0x000F6389 (41 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6360: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax) = 0;
    MEM32(ecx + 8) = eax;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6381; /* je: equal / zero */

loc_000F637A: ;
    MEM32(edx) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_000F6381: ;
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F63A0
 * Original: 0x000F63A0 - 0x000F63F4 (84 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F63A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F63A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F63F2; /* je: equal / zero */

loc_000F63AA: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F63B7; /* je: equal / zero */

loc_000F63B1: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    goto loc_000F63BC;

loc_000F63B7: ;
    ecx = MEM32(eax);
    MEM32(esi + 4) = ecx;

loc_000F63BC: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F63CA; /* je: equal / zero */

loc_000F63C2: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    goto loc_000F63D0;

loc_000F63CA: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 8) = ecx;

loc_000F63D0: ;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    ecx = MEM32(esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    MEM32(esi) = ecx;
    PUSH32(esp, 0x000F63E8u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000F63E8: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F63AA; /* jne: not equal / not zero */

loc_000F63F2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F6410
 * Original: 0x000F6410 - 0x000F6421 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000F6410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6410: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F641E; /* je: equal / zero */

loc_000F6417: ;
    eax = MEM32(ecx + 0x14);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

loc_000F641E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F6430
 * Original: 0x000F6430 - 0x000F6459 (41 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6430: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    MEM32(eax) = 0;
    MEM32(ecx + 8) = eax;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6451; /* je: equal / zero */

loc_000F644A: ;
    MEM32(edx) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_000F6451: ;
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F6470
 * Original: 0x000F6470 - 0x000F64C4 (84 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6470: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F64C2; /* je: equal / zero */

loc_000F647A: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6487; /* je: equal / zero */

loc_000F6481: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    goto loc_000F648C;

loc_000F6487: ;
    ecx = MEM32(eax);
    MEM32(esi + 4) = ecx;

loc_000F648C: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F649A; /* je: equal / zero */

loc_000F6492: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    goto loc_000F64A0;

loc_000F649A: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 8) = ecx;

loc_000F64A0: ;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    ecx = MEM32(esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    MEM32(esi) = ecx;
    PUSH32(esp, 0x000F64B8u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000F64B8: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F647A; /* jne: not equal / not zero */

loc_000F64C2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F64E0
 * Original: 0x000F64E0 - 0x000F6502 (34 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F64E0(void)
{

loc_000F64E0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    edx = MEM32(ecx);
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F6510
 * Original: 0x000F6510 - 0x000F6532 (34 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6510(void)
{

loc_000F6510: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    edx = MEM32(ecx);
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F6540
 * Original: 0x000F6540 - 0x000F6562 (34 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6540(void)
{

loc_000F6540: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    edx = MEM32(ecx);
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F6570
 * Original: 0x000F6570 - 0x000F6592 (34 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6570(void)
{

loc_000F6570: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    edx = MEM32(ecx);
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F65A0
 * Original: 0x000F65A0 - 0x000F65C2 (34 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F65A0(void)
{

loc_000F65A0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    edx = MEM32(ecx);
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F65D0
 * Original: 0x000F65D0 - 0x000F65F2 (34 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F65D0(void)
{

loc_000F65D0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    edx = MEM32(ecx);
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F6600
 * Original: 0x000F6600 - 0x000F6619 (25 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6600(void)
{

loc_000F6600: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F6620
 * Original: 0x000F6620 - 0x000F6639 (25 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6620(void)
{

loc_000F6620: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F6640
 * Original: 0x000F6640 - 0x000F6659 (25 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6640(void)
{

loc_000F6640: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F6660
 * Original: 0x000F6660 - 0x000F677D (285 bytes, 126 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F6660: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ecx = MEM32(ebx);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 4);
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_000F6693; /* jge: greater or equal (signed >=) */

loc_000F667C: ;
    eax = MEM32(esp + 0x20);
    MEM8(eax) = 0;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F668F: ;
    ebx = MEM32(esp + 0x14);

loc_000F6693: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = eax;
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ebp)) >> ((((1) & 31u)) - 1)) & 1);
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = ebp;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(esi));
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edi;
    if ((_fas < 0)) goto loc_000F66BD; /* js: sign (negative) */

loc_000F66A8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F66CF; /* je: equal / zero */

loc_000F66AC: ;
    /* nop */

loc_000F66B0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000F66CF; /* jle: less or equal (signed <=) */

loc_000F66B4: ;
    esi = MEM32(esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000F66B0; /* jne: not equal / not zero */

loc_000F66BB: ;
    goto loc_000F66CF;

loc_000F66BD: ;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F66CF; /* je: equal / zero */

loc_000F66C3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000F66CF; /* jle: less or equal (signed <=) */

loc_000F66C7: ;
    esi = MEM32(esi + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000F66C3; /* jne: not equal / not zero */

loc_000F66CF: ;
    edi = esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6740; /* je: equal / zero */

loc_000F66D5: ;
    edx = MEM32(esp + 0x1C);
    esi = MEM32(edx);
    edx = MEM32(edi + 8);
    edi = edi;

loc_000F66E0: ;
    SET_LO8(eax, MEM8(edx));
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F6704; /* jne: not equal / not zero */

loc_000F66E8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6700; /* je: equal / zero */

loc_000F66EC: ;
    SET_LO8(eax, MEM8(edx + 1));
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F6704; /* jne: not equal / not zero */

loc_000F66F6: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(2)) >> 32) & 1);
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000F66E0; /* jne: not equal / not zero */

loc_000F6700: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F6709;

loc_000F6704: ;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_000F6709: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(esp + 0x24);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F676A; /* je: equal / zero */

loc_000F6713: ;
    if (CMP_GE(_fas, _fbs)) goto loc_000F671E; /* jge: greater or equal (signed >=) */

loc_000F6715: ;
    edx = ebp + 1;
    MEM32(esp + 0x10) = edx;
    goto loc_000F6721;

loc_000F671E: ;
    ecx = ebp + -1;

loc_000F6721: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_000F668F; /* jle: less or equal (signed <=) */

loc_000F672D: ;
    eax = MEM32(esp + 0x20);
    MEM8(eax) = 0;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6740: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    MEM8(eax) = 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_000F675D; /* jge: greater or equal (signed >=) */

loc_000F6750: ;
    eax = MEM32(ebx + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F675D: ;
    eax = MEM32(ebx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F676A: ;
    edx = MEM32(esp + 0x20);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(edx) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F67D0
 * Original: 0x000F67D0 - 0x000F67FE (46 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F67D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F67D0: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F67F8; /* je: equal / zero */

loc_000F67D6: ;
    eax = esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F67E9u); RECOMP_ABI_CALL(0x0002CEB8u, sub_0002CEB8); /* call 0x0002CEB8 */

loc_000F67E9: ;
    SET_LO8(ecx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F67F8; /* je: equal / zero */

loc_000F67F1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F67F8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F6810
 * Original: 0x000F6810 - 0x000F692D (285 bytes, 126 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F6810: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ecx = MEM32(ebx);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 4);
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_000F6843; /* jge: greater or equal (signed >=) */

loc_000F682C: ;
    eax = MEM32(esp + 0x20);
    MEM8(eax) = 0;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F683F: ;
    ebx = MEM32(esp + 0x14);

loc_000F6843: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = eax;
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ebp)) >> ((((1) & 31u)) - 1)) & 1);
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = ebp;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(esi));
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edi;
    if ((_fas < 0)) goto loc_000F686D; /* js: sign (negative) */

loc_000F6858: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F687F; /* je: equal / zero */

loc_000F685C: ;
    /* nop */

loc_000F6860: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000F687F; /* jle: less or equal (signed <=) */

loc_000F6864: ;
    esi = MEM32(esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000F6860; /* jne: not equal / not zero */

loc_000F686B: ;
    goto loc_000F687F;

loc_000F686D: ;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F687F; /* je: equal / zero */

loc_000F6873: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000F687F; /* jle: less or equal (signed <=) */

loc_000F6877: ;
    esi = MEM32(esi + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000F6873; /* jne: not equal / not zero */

loc_000F687F: ;
    edi = esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F68F0; /* je: equal / zero */

loc_000F6885: ;
    edx = MEM32(esp + 0x1C);
    esi = MEM32(edx);
    edx = MEM32(edi + 8);
    edi = edi;

loc_000F6890: ;
    SET_LO8(eax, MEM8(edx));
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F68B4; /* jne: not equal / not zero */

loc_000F6898: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F68B0; /* je: equal / zero */

loc_000F689C: ;
    SET_LO8(eax, MEM8(edx + 1));
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F68B4; /* jne: not equal / not zero */

loc_000F68A6: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(2)) >> 32) & 1);
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000F6890; /* jne: not equal / not zero */

loc_000F68B0: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F68B9;

loc_000F68B4: ;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_000F68B9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(esp + 0x24);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F691A; /* je: equal / zero */

loc_000F68C3: ;
    if (CMP_GE(_fas, _fbs)) goto loc_000F68CE; /* jge: greater or equal (signed >=) */

loc_000F68C5: ;
    edx = ebp + 1;
    MEM32(esp + 0x10) = edx;
    goto loc_000F68D1;

loc_000F68CE: ;
    ecx = ebp + -1;

loc_000F68D1: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_000F683F; /* jle: less or equal (signed <=) */

loc_000F68DD: ;
    eax = MEM32(esp + 0x20);
    MEM8(eax) = 0;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F68F0: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    MEM8(eax) = 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_000F690D; /* jge: greater or equal (signed >=) */

loc_000F6900: ;
    eax = MEM32(ebx + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F690D: ;
    eax = MEM32(ebx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F691A: ;
    edx = MEM32(esp + 0x20);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(edx) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F6980
 * Original: 0x000F6980 - 0x000F69AE (46 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6980: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F69A8; /* je: equal / zero */

loc_000F6986: ;
    eax = esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F6999u); RECOMP_ABI_CALL(0x0001B64Au, sub_0001B64A); /* call 0x0001B64A */

loc_000F6999: ;
    SET_LO8(ecx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F69A8; /* je: equal / zero */

loc_000F69A1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F69A8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F69C0
 * Original: 0x000F69C0 - 0x000F6ADD (285 bytes, 126 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F69C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F69C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ecx = MEM32(ebx);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 4);
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_000F69F3; /* jge: greater or equal (signed >=) */

loc_000F69DC: ;
    eax = MEM32(esp + 0x20);
    MEM8(eax) = 0;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F69EF: ;
    ebx = MEM32(esp + 0x14);

loc_000F69F3: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = eax;
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ebp)) >> ((((1) & 31u)) - 1)) & 1);
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = ebp;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(esi));
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edi;
    if ((_fas < 0)) goto loc_000F6A1D; /* js: sign (negative) */

loc_000F6A08: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6A2F; /* je: equal / zero */

loc_000F6A0C: ;
    /* nop */

loc_000F6A10: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000F6A2F; /* jle: less or equal (signed <=) */

loc_000F6A14: ;
    esi = MEM32(esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000F6A10; /* jne: not equal / not zero */

loc_000F6A1B: ;
    goto loc_000F6A2F;

loc_000F6A1D: ;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6A2F; /* je: equal / zero */

loc_000F6A23: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000F6A2F; /* jle: less or equal (signed <=) */

loc_000F6A27: ;
    esi = MEM32(esi + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000F6A23; /* jne: not equal / not zero */

loc_000F6A2F: ;
    edi = esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6AA0; /* je: equal / zero */

loc_000F6A35: ;
    edx = MEM32(esp + 0x1C);
    esi = MEM32(edx);
    edx = MEM32(edi + 8);
    edi = edi;

loc_000F6A40: ;
    SET_LO8(eax, MEM8(edx));
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F6A64; /* jne: not equal / not zero */

loc_000F6A48: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6A60; /* je: equal / zero */

loc_000F6A4C: ;
    SET_LO8(eax, MEM8(edx + 1));
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F6A64; /* jne: not equal / not zero */

loc_000F6A56: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(2)) >> 32) & 1);
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000F6A40; /* jne: not equal / not zero */

loc_000F6A60: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F6A69;

loc_000F6A64: ;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_000F6A69: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(esp + 0x24);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F6ACA; /* je: equal / zero */

loc_000F6A73: ;
    if (CMP_GE(_fas, _fbs)) goto loc_000F6A7E; /* jge: greater or equal (signed >=) */

loc_000F6A75: ;
    edx = ebp + 1;
    MEM32(esp + 0x10) = edx;
    goto loc_000F6A81;

loc_000F6A7E: ;
    ecx = ebp + -1;

loc_000F6A81: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_000F69EF; /* jle: less or equal (signed <=) */

loc_000F6A8D: ;
    eax = MEM32(esp + 0x20);
    MEM8(eax) = 0;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6AA0: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    MEM8(eax) = 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_000F6ABD; /* jge: greater or equal (signed >=) */

loc_000F6AB0: ;
    eax = MEM32(ebx + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6ABD: ;
    eax = MEM32(ebx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6ACA: ;
    edx = MEM32(esp + 0x20);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(edx) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F6B30
 * Original: 0x000F6B30 - 0x000F6B5E (46 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6B30: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6B58; /* je: equal / zero */

loc_000F6B36: ;
    eax = esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F6B49u); RECOMP_ABI_CALL(0x0001D04Eu, sub_0001D04E); /* call 0x0001D04E */

loc_000F6B49: ;
    SET_LO8(ecx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6B58; /* je: equal / zero */

loc_000F6B51: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F6B58: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F6B70
 * Original: 0x000F6B70 - 0x000F6C8D (285 bytes, 126 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F6B70: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ecx = MEM32(ebx);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 4);
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_000F6BA3; /* jge: greater or equal (signed >=) */

loc_000F6B8C: ;
    eax = MEM32(esp + 0x20);
    MEM8(eax) = 0;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6B9F: ;
    ebx = MEM32(esp + 0x14);

loc_000F6BA3: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = eax;
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ebp)) >> ((((1) & 31u)) - 1)) & 1);
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = ebp;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(esi));
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edi;
    if ((_fas < 0)) goto loc_000F6BCD; /* js: sign (negative) */

loc_000F6BB8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6BDF; /* je: equal / zero */

loc_000F6BBC: ;
    /* nop */

loc_000F6BC0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000F6BDF; /* jle: less or equal (signed <=) */

loc_000F6BC4: ;
    esi = MEM32(esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000F6BC0; /* jne: not equal / not zero */

loc_000F6BCB: ;
    goto loc_000F6BDF;

loc_000F6BCD: ;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6BDF; /* je: equal / zero */

loc_000F6BD3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000F6BDF; /* jle: less or equal (signed <=) */

loc_000F6BD7: ;
    esi = MEM32(esi + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000F6BD3; /* jne: not equal / not zero */

loc_000F6BDF: ;
    edi = esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6C50; /* je: equal / zero */

loc_000F6BE5: ;
    edx = MEM32(esp + 0x1C);
    esi = MEM32(edx);
    edx = MEM32(edi + 8);
    edi = edi;

loc_000F6BF0: ;
    SET_LO8(eax, MEM8(edx));
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F6C14; /* jne: not equal / not zero */

loc_000F6BF8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6C10; /* je: equal / zero */

loc_000F6BFC: ;
    SET_LO8(eax, MEM8(edx + 1));
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F6C14; /* jne: not equal / not zero */

loc_000F6C06: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(2)) >> 32) & 1);
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000F6BF0; /* jne: not equal / not zero */

loc_000F6C10: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F6C19;

loc_000F6C14: ;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_000F6C19: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(esp + 0x24);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F6C7A; /* je: equal / zero */

loc_000F6C23: ;
    if (CMP_GE(_fas, _fbs)) goto loc_000F6C2E; /* jge: greater or equal (signed >=) */

loc_000F6C25: ;
    edx = ebp + 1;
    MEM32(esp + 0x10) = edx;
    goto loc_000F6C31;

loc_000F6C2E: ;
    ecx = ebp + -1;

loc_000F6C31: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_000F6B9F; /* jle: less or equal (signed <=) */

loc_000F6C3D: ;
    eax = MEM32(esp + 0x20);
    MEM8(eax) = 0;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6C50: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    MEM8(eax) = 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_000F6C6D; /* jge: greater or equal (signed >=) */

loc_000F6C60: ;
    eax = MEM32(ebx + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6C6D: ;
    eax = MEM32(ebx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6C7A: ;
    edx = MEM32(esp + 0x20);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(edx) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F6CE0
 * Original: 0x000F6CE0 - 0x000F6D0E (46 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6CE0: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6D08; /* je: equal / zero */

loc_000F6CE6: ;
    eax = esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F6CF9u); RECOMP_ABI_CALL(0x00029231u, sub_00029231); /* call 0x00029231 */

loc_000F6CF9: ;
    SET_LO8(ecx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6D08; /* je: equal / zero */

loc_000F6D01: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F6D08: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F6D20
 * Original: 0x000F6D20 - 0x000F6E3D (285 bytes, 126 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F6D20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ecx = MEM32(ebx);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 4);
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_000F6D53; /* jge: greater or equal (signed >=) */

loc_000F6D3C: ;
    eax = MEM32(esp + 0x20);
    MEM8(eax) = 0;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6D4F: ;
    ebx = MEM32(esp + 0x14);

loc_000F6D53: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = eax;
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ebp)) >> ((((1) & 31u)) - 1)) & 1);
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = ebp;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(esi));
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edi;
    if ((_fas < 0)) goto loc_000F6D7D; /* js: sign (negative) */

loc_000F6D68: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6D8F; /* je: equal / zero */

loc_000F6D6C: ;
    /* nop */

loc_000F6D70: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000F6D8F; /* jle: less or equal (signed <=) */

loc_000F6D74: ;
    esi = MEM32(esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000F6D70; /* jne: not equal / not zero */

loc_000F6D7B: ;
    goto loc_000F6D8F;

loc_000F6D7D: ;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6D8F; /* je: equal / zero */

loc_000F6D83: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000F6D8F; /* jle: less or equal (signed <=) */

loc_000F6D87: ;
    esi = MEM32(esi + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000F6D83; /* jne: not equal / not zero */

loc_000F6D8F: ;
    edi = esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6E00; /* je: equal / zero */

loc_000F6D95: ;
    edx = MEM32(esp + 0x1C);
    esi = MEM32(edx);
    edx = MEM32(edi + 8);
    edi = edi;

loc_000F6DA0: ;
    SET_LO8(eax, MEM8(edx));
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F6DC4; /* jne: not equal / not zero */

loc_000F6DA8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6DC0; /* je: equal / zero */

loc_000F6DAC: ;
    SET_LO8(eax, MEM8(edx + 1));
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F6DC4; /* jne: not equal / not zero */

loc_000F6DB6: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(2)) >> 32) & 1);
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000F6DA0; /* jne: not equal / not zero */

loc_000F6DC0: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F6DC9;

loc_000F6DC4: ;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_000F6DC9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(esp + 0x24);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F6E2A; /* je: equal / zero */

loc_000F6DD3: ;
    if (CMP_GE(_fas, _fbs)) goto loc_000F6DDE; /* jge: greater or equal (signed >=) */

loc_000F6DD5: ;
    edx = ebp + 1;
    MEM32(esp + 0x10) = edx;
    goto loc_000F6DE1;

loc_000F6DDE: ;
    ecx = ebp + -1;

loc_000F6DE1: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_000F6D4F; /* jle: less or equal (signed <=) */

loc_000F6DED: ;
    eax = MEM32(esp + 0x20);
    MEM8(eax) = 0;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6E00: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    MEM8(eax) = 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_000F6E1D; /* jge: greater or equal (signed >=) */

loc_000F6E10: ;
    eax = MEM32(ebx + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6E1D: ;
    eax = MEM32(ebx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6E2A: ;
    edx = MEM32(esp + 0x20);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(edx) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F6E90
 * Original: 0x000F6E90 - 0x000F6EBE (46 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F6E90: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6EB8; /* je: equal / zero */

loc_000F6E96: ;
    eax = esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F6EA9u); RECOMP_ABI_CALL(0x0001CD51u, sub_0001CD51); /* call 0x0001CD51 */

loc_000F6EA9: ;
    SET_LO8(ecx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6EB8; /* je: equal / zero */

loc_000F6EB1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F6EB8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F6ED0
 * Original: 0x000F6ED0 - 0x000F6FED (285 bytes, 126 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6ED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F6ED0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ecx = MEM32(ebx);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 4);
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_000F6F03; /* jge: greater or equal (signed >=) */

loc_000F6EEC: ;
    eax = MEM32(esp + 0x20);
    MEM8(eax) = 0;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6EFF: ;
    ebx = MEM32(esp + 0x14);

loc_000F6F03: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = eax;
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ebp)) >> ((((1) & 31u)) - 1)) & 1);
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = ebp;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(esi));
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edi;
    if ((_fas < 0)) goto loc_000F6F2D; /* js: sign (negative) */

loc_000F6F18: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6F3F; /* je: equal / zero */

loc_000F6F1C: ;
    /* nop */

loc_000F6F20: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000F6F3F; /* jle: less or equal (signed <=) */

loc_000F6F24: ;
    esi = MEM32(esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000F6F20; /* jne: not equal / not zero */

loc_000F6F2B: ;
    goto loc_000F6F3F;

loc_000F6F2D: ;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6F3F; /* je: equal / zero */

loc_000F6F33: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000F6F3F; /* jle: less or equal (signed <=) */

loc_000F6F37: ;
    esi = MEM32(esi + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000F6F33; /* jne: not equal / not zero */

loc_000F6F3F: ;
    edi = esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6FB0; /* je: equal / zero */

loc_000F6F45: ;
    edx = MEM32(esp + 0x1C);
    esi = MEM32(edx);
    edx = MEM32(edi + 8);
    edi = edi;

loc_000F6F50: ;
    SET_LO8(eax, MEM8(edx));
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F6F74; /* jne: not equal / not zero */

loc_000F6F58: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F6F70; /* je: equal / zero */

loc_000F6F5C: ;
    SET_LO8(eax, MEM8(edx + 1));
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F6F74; /* jne: not equal / not zero */

loc_000F6F66: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(2)) >> 32) & 1);
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000F6F50; /* jne: not equal / not zero */

loc_000F6F70: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F6F79;

loc_000F6F74: ;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_000F6F79: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(esp + 0x24);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F6FDA; /* je: equal / zero */

loc_000F6F83: ;
    if (CMP_GE(_fas, _fbs)) goto loc_000F6F8E; /* jge: greater or equal (signed >=) */

loc_000F6F85: ;
    edx = ebp + 1;
    MEM32(esp + 0x10) = edx;
    goto loc_000F6F91;

loc_000F6F8E: ;
    ecx = ebp + -1;

loc_000F6F91: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_000F6EFF; /* jle: less or equal (signed <=) */

loc_000F6F9D: ;
    eax = MEM32(esp + 0x20);
    MEM8(eax) = 0;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6FB0: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    MEM8(eax) = 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_000F6FCD; /* jge: greater or equal (signed >=) */

loc_000F6FC0: ;
    eax = MEM32(ebx + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6FCD: ;
    eax = MEM32(ebx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000F6FDA: ;
    edx = MEM32(esp + 0x20);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(edx) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F7040
 * Original: 0x000F7040 - 0x000F706E (46 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7040: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7068; /* je: equal / zero */

loc_000F7046: ;
    eax = esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F7059u); RECOMP_ABI_CALL(0x000225D0u, sub_000225D0); /* call 0x000225D0 */

loc_000F7059: ;
    SET_LO8(ecx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7068; /* je: equal / zero */

loc_000F7061: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F7068: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F7080
 * Original: 0x000F7080 - 0x000F70CE (78 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7080: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F70CD; /* je: equal / zero */

loc_000F7087: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000F7095; /* je: equal / zero */

loc_000F708F: ;
    esi = MEM32(eax);
    MEM32(edx) = esi;
    goto loc_000F709A;

loc_000F7095: ;
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;

loc_000F709A: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F70B7; /* je: equal / zero */

loc_000F70A0: ;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F70B7: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);

loc_000F70CD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F70F0
 * Original: 0x000F70F0 - 0x000F713E (78 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F70F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F70F0: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F713D; /* je: equal / zero */

loc_000F70F7: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000F7105; /* je: equal / zero */

loc_000F70FF: ;
    esi = MEM32(eax);
    MEM32(edx) = esi;
    goto loc_000F710A;

loc_000F7105: ;
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;

loc_000F710A: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7127; /* je: equal / zero */

loc_000F7110: ;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F7127: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);

loc_000F713D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F7160
 * Original: 0x000F7160 - 0x000F71AE (78 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7160: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F71AD; /* je: equal / zero */

loc_000F7167: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000F7175; /* je: equal / zero */

loc_000F716F: ;
    esi = MEM32(eax);
    MEM32(edx) = esi;
    goto loc_000F717A;

loc_000F7175: ;
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;

loc_000F717A: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7197; /* je: equal / zero */

loc_000F7180: ;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F7197: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);

loc_000F71AD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F71D0
 * Original: 0x000F71D0 - 0x000F71DD (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F71D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F71D0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000F71E0
 * Original: 0x000F71E0 - 0x000F71ED (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F71E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F71E0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000F71F0
 * Original: 0x000F71F0 - 0x000F71FD (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F71F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F71F0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000F7200
 * Original: 0x000F7200 - 0x000F720D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7200(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7200: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000F7210
 * Original: 0x000F7210 - 0x000F721D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7210: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000F7220
 * Original: 0x000F7220 - 0x000F722D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7220(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7220: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000F7230
 * Original: 0x000F7230 - 0x000F72A5 (117 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F7230: ;
    PUSH32(esp, 0x000F7235u); RECOMP_ABI_CALL(0x00022D50u, sub_00022D50); /* call 0x00022D50 */

loc_000F7235: ;
    PUSH32(esp, 0x000F723Au); RECOMP_ABI_CALL(0x0001251Du, sub_0001251D); /* call 0x0001251D */

loc_000F723A: ;
    PUSH32(esp, 0x000F723Fu); RECOMP_ABI_CALL(0x000F2D10u, sub_000F2D10); /* call 0x000F2D10 */

loc_000F723F: ;
    PUSH32(esp, 0x000F7244u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_000F7244: ;
    ecx = eax;
    PUSH32(esp, 0x000F724Bu); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_000F724B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7254; /* je: equal / zero */

loc_000F724F: ;
    PUSH32(esp, 0x000F7254u); RECOMP_ABI_CALL(0x00020181u, sub_00020181); /* call 0x00020181 */

loc_000F7254: ;
    _fa = (uint32_t)(MEM16(0x896166)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896166), 0xFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7280; /* je: equal / zero */

loc_000F725F: ;
    SET_LO8(eax, MEM8(0x896177));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F7280; /* jne: not equal / not zero */

loc_000F7268: ;
    eax = MEM32(0x895AB0);
    eax = MEM32(eax);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F7280; /* jne: not equal / not zero */

loc_000F727B: ;
    PUSH32(esp, 0x000F7280u); RECOMP_ABI_CALL(0x00018607u, sub_00018607); /* call 0x00018607 */

loc_000F7280: ;
    edx = MEM32(0x8F0040);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F728Cu); RECOMP_ABI_CALL(0x000F5980u, sub_000F5980); /* call 0x000F5980 */

loc_000F728C: ;
    eax = MEM32(0x8F0044);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F7297u); RECOMP_ABI_CALL(0x000F5980u, sub_000F5980); /* call 0x000F5980 */

loc_000F7297: ;
    ecx = MEM32(0x8E9248);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0001186B(); return; /* tail jmp 0x0001186B */

}

/**
 * sub_000F72D0
 * Original: 0x000F72D0 - 0x000F734E (126 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F72D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F72D0: ;
    SET_LO16(eax, MEM16(0x896166));
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 3 (16-bit) */
    SET_LO8(edx, 1);
    if (CMP_GE(_fas, _fbs)) goto loc_000F72F5; /* jge: greater or equal (signed >=) */

loc_000F72E1: ;
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 3 (16-bit) */
    MEM16(0x896166) = LO16(eax);
    if (CMP_NE(_fa, _fb)) goto loc_000F72F5; /* jne: not equal / not zero */

loc_000F72EF: ;
    MEM8(0x8F6F50) = LO8(edx);

loc_000F72F5: ;
    MEM16(0x896168) = MEM16(0x896168) + 1;
    _fa = (uint32_t)(MEM16(0x896168)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F731B; /* je: equal / zero */

loc_000F7303: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 3 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F7315; /* jne: not equal / not zero */

loc_000F7309: ;
    _fa = (uint32_t)(MEM32(0x8F6A68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x700000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(0x8F6A68), 0x700000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F731B; /* jne: not equal / not zero */

loc_000F7315: ;
    MEM8(0x896172) = MEM8(0x896172) ^ LO8(edx);
    _fa = (uint32_t)(MEM8(0x896172)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000F731B: ;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = ecx;
    ecx = esp;
    MEM32(esp) = 0x7ABE10;
    MEM16(esp + 0xC) = 0x45;
    PUSH32(esp, 0x000F7339u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000F7339: ;
    PUSH32(esp, 0x000F733Eu); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_000F733E: ;
    ecx = eax;
    PUSH32(esp, 0x000F7345u); RECOMP_ABI_CALL(0x00028B29u, sub_00028B29); /* call 0x00028B29 */

loc_000F7345: ;
    PUSH32(esp, 0x000F734Au); RECOMP_ABI_CALL(0x000308C9u, sub_000308C9); /* call 0x000308C9 */

loc_000F734A: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F7370
 * Original: 0x000F7370 - 0x000F7378 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F7370: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002E6BE(); return; /* tail jmp 0x0002E6BE */

}

/**
 * sub_000F7380
 * Original: 0x000F7380 - 0x000F7388 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F7380: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00036409(); return; /* tail jmp 0x00036409 */

}

/**
 * sub_000F7390
 * Original: 0x000F7390 - 0x000F7398 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F7390: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000126D5(); return; /* tail jmp 0x000126D5 */

}

/**
 * sub_000F73A0
 * Original: 0x000F73A0 - 0x000F73A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F73A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F73A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000181B1(); return; /* tail jmp 0x000181B1 */

}

/**
 * sub_000F73B0
 * Original: 0x000F73B0 - 0x000F73B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F73B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F73B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00037F8E(); return; /* tail jmp 0x00037F8E */

}

/**
 * sub_000F73C0
 * Original: 0x000F73C0 - 0x000F73C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F73C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F73C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00027E40(); return; /* tail jmp 0x00027E40 */

}

/**
 * sub_000F73D0
 * Original: 0x000F73D0 - 0x000F73D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F73D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F73D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002E632(); return; /* tail jmp 0x0002E632 */

}

/**
 * sub_000F73E0
 * Original: 0x000F73E0 - 0x000F744C (108 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F73E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F73E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_000F73F2; /* jne: not equal / not zero */

loc_000F73EF: ;
    MEM32(esi + 0x18) = edi;

loc_000F73F2: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x000F73FEu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000F73FE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7417; /* je: equal / zero */

loc_000F7405: ;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = edi;
    goto loc_000F7419;

loc_000F7417: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F7419: ;
    ecx = MEM32(esi + 0x14);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0;
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F743D; /* je: equal / zero */

loc_000F742F: ;
    MEM32(ecx) = eax;
    eax = MEM32(esi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000F743D: ;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F7470
 * Original: 0x000F7470 - 0x000F7478 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F7470: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002B7C0(); return; /* tail jmp 0x0002B7C0 */

}

/**
 * sub_000F7480
 * Original: 0x000F7480 - 0x000F74EC (108 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7480: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_000F7492; /* jne: not equal / not zero */

loc_000F748F: ;
    MEM32(esi + 0x18) = edi;

loc_000F7492: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x000F749Eu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000F749E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F74B7; /* je: equal / zero */

loc_000F74A5: ;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = edi;
    goto loc_000F74B9;

loc_000F74B7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F74B9: ;
    ecx = MEM32(esi + 0x14);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0;
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F74DD; /* je: equal / zero */

loc_000F74CF: ;
    MEM32(ecx) = eax;
    eax = MEM32(esi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000F74DD: ;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F7510
 * Original: 0x000F7510 - 0x000F7518 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F7510: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002714D(); return; /* tail jmp 0x0002714D */

}

/**
 * sub_000F7520
 * Original: 0x000F7520 - 0x000F758C (108 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7520: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_000F7532; /* jne: not equal / not zero */

loc_000F752F: ;
    MEM32(esi + 0x18) = edi;

loc_000F7532: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x000F753Eu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000F753E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7557; /* je: equal / zero */

loc_000F7545: ;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = edi;
    goto loc_000F7559;

loc_000F7557: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F7559: ;
    ecx = MEM32(esi + 0x14);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0;
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F757D; /* je: equal / zero */

loc_000F756F: ;
    MEM32(ecx) = eax;
    eax = MEM32(esi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000F757D: ;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F75B0
 * Original: 0x000F75B0 - 0x000F760C (92 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F75B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F75B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_000F75DD; /* je: equal / zero */

loc_000F75BE: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000F75D0u); RECOMP_ABI_CALL(0x00019ACFu, sub_00019ACF); /* call 0x00019ACF */

loc_000F75D0: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F75DD; /* je: equal / zero */

loc_000F75D8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F7606; /* jne: not equal / not zero */

loc_000F75DD: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi + 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_000F7604; /* je: equal / zero */

loc_000F75E7: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F75F7u); RECOMP_ABI_CALL(0x00019ACFu, sub_00019ACF); /* call 0x00019ACF */

loc_000F75F7: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7604; /* je: equal / zero */

loc_000F75FF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F7606; /* jne: not equal / not zero */

loc_000F7604: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F7606: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F7630
 * Original: 0x000F7630 - 0x000F768C (92 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7630: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_000F765D; /* je: equal / zero */

loc_000F763E: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000F7650u); RECOMP_ABI_CALL(0x00013BD4u, sub_00013BD4); /* call 0x00013BD4 */

loc_000F7650: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F765D; /* je: equal / zero */

loc_000F7658: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F7686; /* jne: not equal / not zero */

loc_000F765D: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi + 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_000F7684; /* je: equal / zero */

loc_000F7667: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F7677u); RECOMP_ABI_CALL(0x00013BD4u, sub_00013BD4); /* call 0x00013BD4 */

loc_000F7677: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7684; /* je: equal / zero */

loc_000F767F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F7686; /* jne: not equal / not zero */

loc_000F7684: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F7686: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F76B0
 * Original: 0x000F76B0 - 0x000F770C (92 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F76B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F76B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_000F76DD; /* je: equal / zero */

loc_000F76BE: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000F76D0u); RECOMP_ABI_CALL(0x000357DEu, sub_000357DE); /* call 0x000357DE */

loc_000F76D0: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F76DD; /* je: equal / zero */

loc_000F76D8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F7706; /* jne: not equal / not zero */

loc_000F76DD: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi + 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_000F7704; /* je: equal / zero */

loc_000F76E7: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F76F7u); RECOMP_ABI_CALL(0x000357DEu, sub_000357DE); /* call 0x000357DE */

loc_000F76F7: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7704; /* je: equal / zero */

loc_000F76FF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F7706; /* jne: not equal / not zero */

loc_000F7704: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F7706: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F7730
 * Original: 0x000F7730 - 0x000F778C (92 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7730: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_000F775D; /* je: equal / zero */

loc_000F773E: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000F7750u); RECOMP_ABI_CALL(0x0002CEB8u, sub_0002CEB8); /* call 0x0002CEB8 */

loc_000F7750: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F775D; /* je: equal / zero */

loc_000F7758: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F7786; /* jne: not equal / not zero */

loc_000F775D: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi + 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_000F7784; /* je: equal / zero */

loc_000F7767: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F7777u); RECOMP_ABI_CALL(0x0002CEB8u, sub_0002CEB8); /* call 0x0002CEB8 */

loc_000F7777: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7784; /* je: equal / zero */

loc_000F777F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F7786; /* jne: not equal / not zero */

loc_000F7784: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F7786: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F77B0
 * Original: 0x000F77B0 - 0x000F7814 (100 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F77B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F77B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi + 0xC;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_000F77E0; /* je: equal / zero */

loc_000F77C3: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F77D3u); RECOMP_ABI_CALL(0x0002CEB8u, sub_0002CEB8); /* call 0x0002CEB8 */

loc_000F77D3: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F77E0; /* je: equal / zero */

loc_000F77DB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F780C; /* jne: not equal / not zero */

loc_000F77E0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7804; /* je: equal / zero */

loc_000F77E5: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000F77F7u); RECOMP_ABI_CALL(0x0002CEB8u, sub_0002CEB8); /* call 0x0002CEB8 */

loc_000F77F7: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7804; /* je: equal / zero */

loc_000F77FF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F780C; /* jne: not equal / not zero */

loc_000F7804: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F780C: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F7830
 * Original: 0x000F7830 - 0x000F78AA (122 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7830: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F7866; /* jne: not equal / not zero */

loc_000F7839: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 8);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0;
    MEM32(esi + 8) = eax;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F785C; /* je: equal / zero */

loc_000F7853: ;
    MEM32(ecx) = eax;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F785C: ;
    MEM32(esi + 4) = eax;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F7866: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000F7880u); RECOMP_ABI_CALL(0x0002CEB8u, sub_0002CEB8); /* call 0x0002CEB8 */

loc_000F7880: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F78A4; /* jne: not equal / not zero */

loc_000F7888: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    ecx = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_000F789F; /* jge: greater or equal (signed >=) */

loc_000F7894: ;
    PUSH32(esp, 0x000F7899u); RECOMP_ABI_CALL(0x000270F3u, sub_000270F3); /* call 0x000270F3 */

loc_000F7899: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F789F: ;
    PUSH32(esp, 0x000F78A4u); RECOMP_ABI_CALL(0x00034771u, sub_00034771); /* call 0x00034771 */

loc_000F78A4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F78D0
 * Original: 0x000F78D0 - 0x000F792C (92 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F78D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F78D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_000F78FD; /* je: equal / zero */

loc_000F78DE: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000F78F0u); RECOMP_ABI_CALL(0x000331D7u, sub_000331D7); /* call 0x000331D7 */

loc_000F78F0: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F78FD; /* je: equal / zero */

loc_000F78F8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F7926; /* jne: not equal / not zero */

loc_000F78FD: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi + 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_000F7924; /* je: equal / zero */

loc_000F7907: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F7917u); RECOMP_ABI_CALL(0x000331D7u, sub_000331D7); /* call 0x000331D7 */

loc_000F7917: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7924; /* je: equal / zero */

loc_000F791F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F7926; /* jne: not equal / not zero */

loc_000F7924: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F7926: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F7950
 * Original: 0x000F7950 - 0x000F79AC (92 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7950: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_000F797D; /* je: equal / zero */

loc_000F795E: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000F7970u); RECOMP_ABI_CALL(0x0001B64Au, sub_0001B64A); /* call 0x0001B64A */

loc_000F7970: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F797D; /* je: equal / zero */

loc_000F7978: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F79A6; /* jne: not equal / not zero */

loc_000F797D: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi + 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_000F79A4; /* je: equal / zero */

loc_000F7987: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F7997u); RECOMP_ABI_CALL(0x0001B64Au, sub_0001B64A); /* call 0x0001B64A */

loc_000F7997: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F79A4; /* je: equal / zero */

loc_000F799F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F79A6; /* jne: not equal / not zero */

loc_000F79A4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F79A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F79D0
 * Original: 0x000F79D0 - 0x000F7A34 (100 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F79D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F79D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi + 0xC;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_000F7A00; /* je: equal / zero */

loc_000F79E3: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F79F3u); RECOMP_ABI_CALL(0x0001B64Au, sub_0001B64A); /* call 0x0001B64A */

loc_000F79F3: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7A00; /* je: equal / zero */

loc_000F79FB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F7A2C; /* jne: not equal / not zero */

loc_000F7A00: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7A24; /* je: equal / zero */

loc_000F7A05: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000F7A17u); RECOMP_ABI_CALL(0x0001B64Au, sub_0001B64A); /* call 0x0001B64A */

loc_000F7A17: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7A24; /* je: equal / zero */

loc_000F7A1F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F7A2C; /* jne: not equal / not zero */

loc_000F7A24: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F7A2C: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F7A50
 * Original: 0x000F7A50 - 0x000F7ACA (122 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7A50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F7A86; /* jne: not equal / not zero */

loc_000F7A59: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 8);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0;
    MEM32(esi + 8) = eax;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7A7C; /* je: equal / zero */

loc_000F7A73: ;
    MEM32(ecx) = eax;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F7A7C: ;
    MEM32(esi + 4) = eax;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F7A86: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000F7AA0u); RECOMP_ABI_CALL(0x0001B64Au, sub_0001B64A); /* call 0x0001B64A */

loc_000F7AA0: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F7AC4; /* jne: not equal / not zero */

loc_000F7AA8: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    ecx = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_000F7ABF; /* jge: greater or equal (signed >=) */

loc_000F7AB4: ;
    PUSH32(esp, 0x000F7AB9u); RECOMP_ABI_CALL(0x0003408Cu, sub_0003408C); /* call 0x0003408C */

loc_000F7AB9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F7ABF: ;
    PUSH32(esp, 0x000F7AC4u); RECOMP_ABI_CALL(0x00031DCDu, sub_00031DCD); /* call 0x00031DCD */

loc_000F7AC4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F7AF0
 * Original: 0x000F7AF0 - 0x000F7B4C (92 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7AF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_000F7B1D; /* je: equal / zero */

loc_000F7AFE: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000F7B10u); RECOMP_ABI_CALL(0x0002EAF1u, sub_0002EAF1); /* call 0x0002EAF1 */

loc_000F7B10: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7B1D; /* je: equal / zero */

loc_000F7B18: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F7B46; /* jne: not equal / not zero */

loc_000F7B1D: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi + 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_000F7B44; /* je: equal / zero */

loc_000F7B27: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F7B37u); RECOMP_ABI_CALL(0x0002EAF1u, sub_0002EAF1); /* call 0x0002EAF1 */

loc_000F7B37: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7B44; /* je: equal / zero */

loc_000F7B3F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F7B46; /* jne: not equal / not zero */

loc_000F7B44: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F7B46: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F7B70
 * Original: 0x000F7B70 - 0x000F7BCC (92 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7B70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_000F7B9D; /* je: equal / zero */

loc_000F7B7E: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000F7B90u); RECOMP_ABI_CALL(0x0002E00Bu, sub_0002E00B); /* call 0x0002E00B */

loc_000F7B90: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7B9D; /* je: equal / zero */

loc_000F7B98: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F7BC6; /* jne: not equal / not zero */

loc_000F7B9D: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi + 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_000F7BC4; /* je: equal / zero */

loc_000F7BA7: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F7BB7u); RECOMP_ABI_CALL(0x0002E00Bu, sub_0002E00B); /* call 0x0002E00B */

loc_000F7BB7: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7BC4; /* je: equal / zero */

loc_000F7BBF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F7BC6; /* jne: not equal / not zero */

loc_000F7BC4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F7BC6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F7BF0
 * Original: 0x000F7BF0 - 0x000F7C4C (92 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7BF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_000F7C1D; /* je: equal / zero */

loc_000F7BFE: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000F7C10u); RECOMP_ABI_CALL(0x0001D04Eu, sub_0001D04E); /* call 0x0001D04E */

loc_000F7C10: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7C1D; /* je: equal / zero */

loc_000F7C18: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F7C46; /* jne: not equal / not zero */

loc_000F7C1D: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi + 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_000F7C44; /* je: equal / zero */

loc_000F7C27: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F7C37u); RECOMP_ABI_CALL(0x0001D04Eu, sub_0001D04E); /* call 0x0001D04E */

loc_000F7C37: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7C44; /* je: equal / zero */

loc_000F7C3F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F7C46; /* jne: not equal / not zero */

loc_000F7C44: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F7C46: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F7C70
 * Original: 0x000F7C70 - 0x000F7CD4 (100 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7C70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi + 0xC;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_000F7CA0; /* je: equal / zero */

loc_000F7C83: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F7C93u); RECOMP_ABI_CALL(0x0001D04Eu, sub_0001D04E); /* call 0x0001D04E */

loc_000F7C93: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7CA0; /* je: equal / zero */

loc_000F7C9B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F7CCC; /* jne: not equal / not zero */

loc_000F7CA0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7CC4; /* je: equal / zero */

loc_000F7CA5: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000F7CB7u); RECOMP_ABI_CALL(0x0001D04Eu, sub_0001D04E); /* call 0x0001D04E */

loc_000F7CB7: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7CC4; /* je: equal / zero */

loc_000F7CBF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F7CCC; /* jne: not equal / not zero */

loc_000F7CC4: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F7CCC: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F7CF0
 * Original: 0x000F7CF0 - 0x000F7D6A (122 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7CF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F7D26; /* jne: not equal / not zero */

loc_000F7CF9: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 8);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0;
    MEM32(esi + 8) = eax;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7D1C; /* je: equal / zero */

loc_000F7D13: ;
    MEM32(ecx) = eax;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F7D1C: ;
    MEM32(esi + 4) = eax;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F7D26: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000F7D40u); RECOMP_ABI_CALL(0x0001D04Eu, sub_0001D04E); /* call 0x0001D04E */

loc_000F7D40: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F7D64; /* jne: not equal / not zero */

loc_000F7D48: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    ecx = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_000F7D5F; /* jge: greater or equal (signed >=) */

loc_000F7D54: ;
    PUSH32(esp, 0x000F7D59u); RECOMP_ABI_CALL(0x00026F13u, sub_00026F13); /* call 0x00026F13 */

loc_000F7D59: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F7D5F: ;
    PUSH32(esp, 0x000F7D64u); RECOMP_ABI_CALL(0x0002D133u, sub_0002D133); /* call 0x0002D133 */

loc_000F7D64: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F7D90
 * Original: 0x000F7D90 - 0x000F7DF4 (100 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7D90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi + 0xC;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_000F7DC0; /* je: equal / zero */

loc_000F7DA3: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F7DB3u); RECOMP_ABI_CALL(0x00029231u, sub_00029231); /* call 0x00029231 */

loc_000F7DB3: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7DC0; /* je: equal / zero */

loc_000F7DBB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F7DEC; /* jne: not equal / not zero */

loc_000F7DC0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7DE4; /* je: equal / zero */

loc_000F7DC5: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000F7DD7u); RECOMP_ABI_CALL(0x00029231u, sub_00029231); /* call 0x00029231 */

loc_000F7DD7: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7DE4; /* je: equal / zero */

loc_000F7DDF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F7DEC; /* jne: not equal / not zero */

loc_000F7DE4: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F7DEC: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F7E10
 * Original: 0x000F7E10 - 0x000F7E8A (122 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7E10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F7E46; /* jne: not equal / not zero */

loc_000F7E19: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 8);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0;
    MEM32(esi + 8) = eax;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7E3C; /* je: equal / zero */

loc_000F7E33: ;
    MEM32(ecx) = eax;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F7E3C: ;
    MEM32(esi + 4) = eax;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F7E46: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000F7E60u); RECOMP_ABI_CALL(0x00029231u, sub_00029231); /* call 0x00029231 */

loc_000F7E60: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F7E84; /* jne: not equal / not zero */

loc_000F7E68: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    ecx = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_000F7E7F; /* jge: greater or equal (signed >=) */

loc_000F7E74: ;
    PUSH32(esp, 0x000F7E79u); RECOMP_ABI_CALL(0x000321E7u, sub_000321E7); /* call 0x000321E7 */

loc_000F7E79: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F7E7F: ;
    PUSH32(esp, 0x000F7E84u); RECOMP_ABI_CALL(0x00034C35u, sub_00034C35); /* call 0x00034C35 */

loc_000F7E84: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F7EB0
 * Original: 0x000F7EB0 - 0x000F7F14 (100 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7EB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi + 0xC;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_000F7EE0; /* je: equal / zero */

loc_000F7EC3: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F7ED3u); RECOMP_ABI_CALL(0x0001CD51u, sub_0001CD51); /* call 0x0001CD51 */

loc_000F7ED3: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7EE0; /* je: equal / zero */

loc_000F7EDB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F7F0C; /* jne: not equal / not zero */

loc_000F7EE0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7F04; /* je: equal / zero */

loc_000F7EE5: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000F7EF7u); RECOMP_ABI_CALL(0x0001CD51u, sub_0001CD51); /* call 0x0001CD51 */

loc_000F7EF7: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7F04; /* je: equal / zero */

loc_000F7EFF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F7F0C; /* jne: not equal / not zero */

loc_000F7F04: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F7F0C: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F7F30
 * Original: 0x000F7F30 - 0x000F7FAA (122 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7F30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F7F66; /* jne: not equal / not zero */

loc_000F7F39: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 8);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0;
    MEM32(esi + 8) = eax;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F7F5C; /* je: equal / zero */

loc_000F7F53: ;
    MEM32(ecx) = eax;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F7F5C: ;
    MEM32(esi + 4) = eax;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F7F66: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000F7F80u); RECOMP_ABI_CALL(0x0001CD51u, sub_0001CD51); /* call 0x0001CD51 */

loc_000F7F80: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F7FA4; /* jne: not equal / not zero */

loc_000F7F88: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    ecx = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_000F7F9F; /* jge: greater or equal (signed >=) */

loc_000F7F94: ;
    PUSH32(esp, 0x000F7F99u); RECOMP_ABI_CALL(0x000380B0u, sub_000380B0); /* call 0x000380B0 */

loc_000F7F99: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F7F9F: ;
    PUSH32(esp, 0x000F7FA4u); RECOMP_ABI_CALL(0x00022206u, sub_00022206); /* call 0x00022206 */

loc_000F7FA4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F7FD0
 * Original: 0x000F7FD0 - 0x000F8034 (100 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F7FD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi + 0xC;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_000F8000; /* je: equal / zero */

loc_000F7FE3: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F7FF3u); RECOMP_ABI_CALL(0x000225D0u, sub_000225D0); /* call 0x000225D0 */

loc_000F7FF3: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8000; /* je: equal / zero */

loc_000F7FFB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F802C; /* jne: not equal / not zero */

loc_000F8000: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8024; /* je: equal / zero */

loc_000F8005: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000F8017u); RECOMP_ABI_CALL(0x000225D0u, sub_000225D0); /* call 0x000225D0 */

loc_000F8017: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8024; /* je: equal / zero */

loc_000F801F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_000F802C; /* jne: not equal / not zero */

loc_000F8024: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F802C: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8050
 * Original: 0x000F8050 - 0x000F80CA (122 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8050: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8086; /* jne: not equal / not zero */

loc_000F8059: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 8);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0;
    MEM32(esi + 8) = eax;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F807C; /* je: equal / zero */

loc_000F8073: ;
    MEM32(ecx) = eax;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F807C: ;
    MEM32(esi + 4) = eax;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F8086: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000F80A0u); RECOMP_ABI_CALL(0x000225D0u, sub_000225D0); /* call 0x000225D0 */

loc_000F80A0: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F80C4; /* jne: not equal / not zero */

loc_000F80A8: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    ecx = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_000F80BF; /* jge: greater or equal (signed >=) */

loc_000F80B4: ;
    PUSH32(esp, 0x000F80B9u); RECOMP_ABI_CALL(0x0002F357u, sub_0002F357); /* call 0x0002F357 */

loc_000F80B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F80BF: ;
    PUSH32(esp, 0x000F80C4u); RECOMP_ABI_CALL(0x000287DCu, sub_000287DC); /* call 0x000287DC */

loc_000F80C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F80F0
 * Original: 0x000F80F0 - 0x000F8107 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F80F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F80F0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000F80FCu); RECOMP_ABI_CALL(0x0001C7B6u, sub_0001C7B6); /* call 0x0001C7B6 */

loc_000F80FC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F8102u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000F8102: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F8110
 * Original: 0x000F8110 - 0x000F8127 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8110(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8110: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000F811Cu); RECOMP_ABI_CALL(0x00036080u, sub_00036080); /* call 0x00036080 */

loc_000F811C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F8122u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000F8122: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F8130
 * Original: 0x000F8130 - 0x000F8147 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8130: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000F813Cu); RECOMP_ABI_CALL(0x000364DBu, sub_000364DB); /* call 0x000364DB */

loc_000F813C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F8142u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000F8142: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F8150
 * Original: 0x000F8150 - 0x000F8166 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8150(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8150: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000F8170
 * Original: 0x000F8170 - 0x000F8186 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8170: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000F8190
 * Original: 0x000F8190 - 0x000F81A6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8190: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000F81B0
 * Original: 0x000F81B0 - 0x000F81C6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F81B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F81B0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000F81D0
 * Original: 0x000F81D0 - 0x000F81E6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F81D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F81D0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000F81F0
 * Original: 0x000F81F0 - 0x000F8206 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F81F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F81F0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000F8210
 * Original: 0x000F8210 - 0x000F8218 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F8210: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002E6BE(); return; /* tail jmp 0x0002E6BE */

}

/**
 * sub_000F8220
 * Original: 0x000F8220 - 0x000F8228 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F8220: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00036409(); return; /* tail jmp 0x00036409 */

}

/**
 * sub_000F8230
 * Original: 0x000F8230 - 0x000F8238 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F8230: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000126D5(); return; /* tail jmp 0x000126D5 */

}

/**
 * sub_000F8240
 * Original: 0x000F8240 - 0x000F8248 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F8240: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000181B1(); return; /* tail jmp 0x000181B1 */

}

/**
 * sub_000F8250
 * Original: 0x000F8250 - 0x000F8258 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F8250: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00037F8E(); return; /* tail jmp 0x00037F8E */

}

/**
 * sub_000F8260
 * Original: 0x000F8260 - 0x000F8268 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F8260: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00027E40(); return; /* tail jmp 0x00027E40 */

}

/**
 * sub_000F8270
 * Original: 0x000F8270 - 0x000F82D4 (100 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8270: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x000F827Eu); RECOMP_ABI_CALL(0x0001F28Bu, sub_0001F28B); /* call 0x0001F28B */

loc_000F827E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F82CD; /* je: equal / zero */

loc_000F8282: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000F828Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000F828B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F82BB; /* je: equal / zero */

loc_000F8292: ;
    edx = MEM32(esp + 0x10);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    ecx = MEM32(esi);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, 0x000F82B4u); RECOMP_ABI_CALL(0x0001BF91u, sub_0001BF91); /* call 0x0001BF91 */

loc_000F82B4: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000F82BB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    PUSH32(esp, 0x000F82C6u); RECOMP_ABI_CALL(0x0001BF91u, sub_0001BF91); /* call 0x0001BF91 */

loc_000F82C6: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000F82CD: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F82F0
 * Original: 0x000F82F0 - 0x000F830E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F82F0(void)
{

loc_000F82F0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x2E731);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF604;
    PUSH32(esp, 0x000F830Cu); RECOMP_ABI_CALL(0x0002CC01u, sub_0002CC01); /* call 0x0002CC01 */

loc_000F830C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F8320
 * Original: 0x000F8320 - 0x000F833E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8320(void)
{

loc_000F8320: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x2E04C);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF66C;
    PUSH32(esp, 0x000F833Cu); RECOMP_ABI_CALL(0x0002CC01u, sub_0002CC01); /* call 0x0002CC01 */

loc_000F833C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F8350
 * Original: 0x000F8350 - 0x000F836E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8350(void)
{

loc_000F8350: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x30EC8);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF6BC;
    PUSH32(esp, 0x000F836Cu); RECOMP_ABI_CALL(0x0002CC01u, sub_0002CC01); /* call 0x0002CC01 */

loc_000F836C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F8380
 * Original: 0x000F8380 - 0x000F839E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8380(void)
{

loc_000F8380: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x2353E);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF7AC;
    PUSH32(esp, 0x000F839Cu); RECOMP_ABI_CALL(0x0002CC01u, sub_0002CC01); /* call 0x0002CC01 */

loc_000F839C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F83B0
 * Original: 0x000F83B0 - 0x000F83CE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F83B0(void)
{

loc_000F83B0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x28DD6);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF7D0;
    PUSH32(esp, 0x000F83CCu); RECOMP_ABI_CALL(0x0002CC01u, sub_0002CC01); /* call 0x0002CC01 */

loc_000F83CC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F83E0
 * Original: 0x000F83E0 - 0x000F83FE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F83E0(void)
{

loc_000F83E0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x11E33);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF6E0;
    PUSH32(esp, 0x000F83FCu); RECOMP_ABI_CALL(0x0002CC01u, sub_0002CC01); /* call 0x0002CC01 */

loc_000F83FC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F8410
 * Original: 0x000F8410 - 0x000F842E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8410(void)
{

loc_000F8410: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x223E1);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF700;
    PUSH32(esp, 0x000F842Cu); RECOMP_ABI_CALL(0x0002CC01u, sub_0002CC01); /* call 0x0002CC01 */

loc_000F842C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F8440
 * Original: 0x000F8440 - 0x000F845E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8440(void)
{

loc_000F8440: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x1ED1D);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF750;
    PUSH32(esp, 0x000F845Cu); RECOMP_ABI_CALL(0x0002CC01u, sub_0002CC01); /* call 0x0002CC01 */

loc_000F845C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F8470
 * Original: 0x000F8470 - 0x000F88E4 (1140 bytes, 371 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F8470: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x78);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x32);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F8488u); RECOMP_ABI_CALL(0x00012900u, sub_00012900); /* call 0x00012900 */

loc_000F8488: ;
    edx = esp + 0x24;
    PUSH32(esp, 0x7CFB84);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    MEM8(esp + 0x27) = LO8(ebx);
    PUSH32(esp, 0x000F849Du); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_000F849D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = esp + 0x18;
    if (CMP_NE(_fa, _fb)) goto loc_000F850F; /* jne: not equal / not zero */

loc_000F84A8: ;
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7CFB7C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F84BDu); RECOMP_ABI_CALL(0x0003454Bu, sub_0003454B); /* call 0x0003454B */

loc_000F84BD: ;
    esi = MEM32(esp + 0x94);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8508; /* je: equal / zero */

loc_000F84CC: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esi);
    edx = esp + 0x18;
    MEM32(esp + 0x14) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F84E5; /* je: equal / zero */

loc_000F84DD: ;
    eax = MEM32(esi + 0x14);
    edi = MEM32(eax + 8);
    goto loc_000F84E7;

loc_000F84E5: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F84E7: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F84F1u); RECOMP_ABI_CALL(0x000268F6u, sub_000268F6); /* call 0x000268F6 */

loc_000F84F1: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F84F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F84F1u); } /* indirect call */
    }

loc_000F84F3: ;
    ebp = eax;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8505; /* je: equal / zero */

loc_000F84FC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F8502u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000F8502: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F8505: ;
    MEM32(edi + 4) = ebp;

loc_000F8508: ;
    SET_LO8(ebx, 1);
    goto loc_000F8821;

loc_000F850F: ;
    PUSH32(esp, 0x7CFB78);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F851Au); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_000F851A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esp + 0x18;
    if (CMP_NE(_fa, _fb)) goto loc_000F858D; /* jne: not equal / not zero */

loc_000F8525: ;
    edx = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7CFB7C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F853Au); RECOMP_ABI_CALL(0x0003454Bu, sub_0003454B); /* call 0x0003454B */

loc_000F853A: ;
    esi = MEM32(esp + 0x94);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8586; /* je: equal / zero */

loc_000F8549: ;
    ecx = MEM32(esi + 4);
    eax = esp + 0x18;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8563; /* je: equal / zero */

loc_000F855B: ;
    edx = MEM32(esi + 0x14);
    edi = MEM32(edx + 8);
    goto loc_000F8565;

loc_000F8563: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F8565: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F856Fu); RECOMP_ABI_CALL(0x0002B504u, sub_0002B504); /* call 0x0002B504 */

loc_000F856F: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F8571u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F856Fu); } /* indirect call */
    }

loc_000F8571: ;
    ebp = eax;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8583; /* je: equal / zero */

loc_000F857A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F8580u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000F8580: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F8583: ;
    MEM32(edi + 8) = ebp;

loc_000F8586: ;
    SET_LO8(ebx, 1);
    goto loc_000F8821;

loc_000F858D: ;
    PUSH32(esp, 0x7CFB74);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F8598u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_000F8598: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F85FE; /* jne: not equal / not zero */

loc_000F859F: ;
    eax = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7CFB7C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F85B8u); RECOMP_ABI_CALL(0x0003454Bu, sub_0003454B); /* call 0x0003454B */

loc_000F85B8: ;
    esi = MEM32(esp + 0x94);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F85F7; /* je: equal / zero */

loc_000F85C7: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esp + 0x18;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esi + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_000F85E1; /* je: equal / zero */

loc_000F85D9: ;
    edx = MEM32(esi + 0x14);
    edi = MEM32(edx + 8);
    goto loc_000F85E3;

loc_000F85E1: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F85E3: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F85EDu); RECOMP_ABI_CALL(0x00025799u, sub_00025799); /* call 0x00025799 */

loc_000F85ED: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F85EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F85EDu); } /* indirect call */
    }

loc_000F85EF: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000F85F7u); RECOMP_ABI_CALL(0x0002650Eu, sub_0002650E); /* call 0x0002650E */

loc_000F85F7: ;
    SET_LO8(ebx, 1);
    goto loc_000F8821;

loc_000F85FE: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x7CFB6C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F860Du); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_000F860D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F86AA; /* jne: not equal / not zero */

loc_000F8618: ;
    eax = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7CFB64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F8631u); RECOMP_ABI_CALL(0x0003454Bu, sub_0003454B); /* call 0x0003454B */

loc_000F8631: ;
    esi = MEM32(esp + 0x94);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F86A0; /* je: equal / zero */

loc_000F8640: ;
    edx = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7CFB5C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F8659u); RECOMP_ABI_CALL(0x0003454Bu, sub_0003454B); /* call 0x0003454B */

loc_000F8659: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F86A0; /* je: equal / zero */

loc_000F8661: ;
    eax = esp + 0x18;
    PUSH32(esp, 0x7CFB54);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F8670u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_000F8670: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F868D; /* je: equal / zero */

loc_000F8677: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x7CFB50);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F8686u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_000F8686: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F86A0; /* jne: not equal / not zero */

loc_000F868D: ;
    ecx = esi;
    PUSH32(esp, 0x000F8694u); RECOMP_ABI_CALL(0x0002E9C0u, sub_0002E9C0); /* call 0x0002E9C0 */

loc_000F8694: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx);
    eax = esp + 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000F86A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F869Eu); } /* indirect call */
    }

loc_000F86A0: ;
    MEM8(esp + 0x13) = 1;
    goto loc_000F8821;

loc_000F86AA: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x7CFB4C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F86B9u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_000F86B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F88D5; /* jne: not equal / not zero */

loc_000F86C4: ;
    esi = MEM32(esp + 0x84);
    eax = MEM32(esi + 0x1C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8712; /* je: equal / zero */

loc_000F86D4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000F86DCu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000F86DC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F86FA; /* je: equal / zero */

loc_000F86E3: ;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edi;
    MEM32(eax) = 0x7CF5E8;
    edi = eax;

loc_000F86FA: ;
    ecx = esi;
    PUSH32(esp, 0x000F8701u); RECOMP_ABI_CALL(0x0002E9C0u, sub_0002E9C0); /* call 0x0002E9C0 */

loc_000F8701: ;
    edx = MEM32(eax + 0x14);
    MEM32(edi + 0x10) = edx;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(eax + 0x14) = edi;
    PUSH32(esp, 0x000F8712u); RECOMP_ABI_CALL(0x0002D33Bu, sub_0002D33B); /* call 0x0002D33B */

loc_000F8712: ;
    edi = MEM32(esi + 0x1C);
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7CFB84);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    MEM32(esi + 0x1C) = edi;
    PUSH32(esp, 0x000F8732u); RECOMP_ABI_CALL(0x0003454Bu, sub_0003454B); /* call 0x0003454B */

loc_000F8732: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F875F; /* je: equal / zero */

loc_000F873A: ;
    ecx = MEM32(esi);
    eax = esp + 0x14;
    edx = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x000F874Eu); RECOMP_ABI_CALL(0x000268F6u, sub_000268F6); /* call 0x000268F6 */

loc_000F874E: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F8750u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F874Eu); } /* indirect call */
    }

loc_000F8750: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000F8758u); RECOMP_ABI_CALL(0x0002E9C0u, sub_0002E9C0); /* call 0x0002E9C0 */

loc_000F8758: ;
    ecx = eax;
    PUSH32(esp, 0x000F875Fu); RECOMP_ABI_CALL(0x000159FCu, sub_000159FC); /* call 0x000159FC */

loc_000F875F: ;
    edx = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7CFB40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F8778u); RECOMP_ABI_CALL(0x0003454Bu, sub_0003454B); /* call 0x0003454B */

loc_000F8778: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8793; /* je: equal / zero */

loc_000F8780: ;
    ecx = esi;
    PUSH32(esp, 0x000F8787u); RECOMP_ABI_CALL(0x0002E9C0u, sub_0002E9C0); /* call 0x0002E9C0 */

loc_000F8787: ;
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx);
    edx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F8793u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8791u); } /* indirect call */
    }

loc_000F8793: ;
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7CFB78);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F87ACu); RECOMP_ABI_CALL(0x0003454Bu, sub_0003454B); /* call 0x0003454B */

loc_000F87AC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F87DA; /* je: equal / zero */

loc_000F87B4: ;
    ecx = MEM32(esi + 4);
    eax = esp + 0x14;
    edx = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x000F87C9u); RECOMP_ABI_CALL(0x0002B504u, sub_0002B504); /* call 0x0002B504 */

loc_000F87C9: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F87CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F87C9u); } /* indirect call */
    }

loc_000F87CB: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000F87D3u); RECOMP_ABI_CALL(0x0002E9C0u, sub_0002E9C0); /* call 0x0002E9C0 */

loc_000F87D3: ;
    ecx = eax;
    PUSH32(esp, 0x000F87DAu); RECOMP_ABI_CALL(0x000238A4u, sub_000238A4); /* call 0x000238A4 */

loc_000F87DA: ;
    edx = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7CFB74);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F87F3u); RECOMP_ABI_CALL(0x0003454Bu, sub_0003454B); /* call 0x0003454B */

loc_000F87F3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8821; /* je: equal / zero */

loc_000F87FB: ;
    ecx = MEM32(esi + 8);
    edx = esp + 0x14;
    eax = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000F8810u); RECOMP_ABI_CALL(0x00025799u, sub_00025799); /* call 0x00025799 */

loc_000F8810: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F8812u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8810u); } /* indirect call */
    }

loc_000F8812: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000F881Au); RECOMP_ABI_CALL(0x0002E9C0u, sub_0002E9C0); /* call 0x0002E9C0 */

loc_000F881A: ;
    ecx = eax;
    PUSH32(esp, 0x000F8821u); RECOMP_ABI_CALL(0x0002650Eu, sub_0002650E); /* call 0x0002650E */

loc_000F8821: ;
    eax = MEM32(esp + 0x88);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F882Eu); RECOMP_ABI_CALL(0x000152EAu, sub_000152EA); /* call 0x000152EA */

loc_000F882E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F88DC; /* jne: not equal / not zero */

loc_000F8839: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8859; /* jne: not equal / not zero */

loc_000F883D: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8859; /* jne: not equal / not zero */

loc_000F8845: ;
    edi = MEM32(esi + 0x14);
    ecx = esi + 0xC;
    PUSH32(esp, 0x000F8850u); RECOMP_ABI_CALL(0x0001C7B6u, sub_0001C7B6); /* call 0x0001C7B6 */

loc_000F8850: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F8856u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000F8856: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F8859: ;
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F8866u); RECOMP_ABI_CALL(0x0002B40Au, sub_0002B40A); /* call 0x0002B40A */

loc_000F8866: ;
    edx = esp + 0x8C;
    PUSH32(esp, edx);
    MEM32(esp + 0x90) = eax;
    PUSH32(esp, 0x000F887Au); RECOMP_ABI_CALL(0x000130DFu, sub_000130DF); /* call 0x000130DF */

loc_000F887A: ;
    SET_LO8(edx, MEM8(esp + 0x1B));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F888C; /* je: equal / zero */

loc_000F8887: ;
    ecx = 1;

loc_000F888C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F88BA; /* jge: greater or equal (signed >=) */

loc_000F8890: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = esi + 0xC;
    ebx = eax;

loc_000F8897: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F88B7; /* je: equal / zero */

loc_000F889D: ;
    edi = MEM32(esi + 0x14);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F88B7; /* je: equal / zero */

loc_000F88A7: ;
    ecx = ebp;
    PUSH32(esp, 0x000F88AEu); RECOMP_ABI_CALL(0x0001C7B6u, sub_0001C7B6); /* call 0x0001C7B6 */

loc_000F88AE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F88B4u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000F88B4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F88B7: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000F8897; /* jne: not equal / not zero */

loc_000F88BA: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F88CB; /* je: equal / zero */

loc_000F88C1: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F88D5; /* jne: not equal / not zero */

loc_000F88CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000F88D5: ;
    eax = MEM32(esp + 0x88);

loc_000F88DC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F8A10
 * Original: 0x000F8A10 - 0x000F8A74 (100 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8A10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x000F8A1Eu); RECOMP_ABI_CALL(0x0001EEA8u, sub_0001EEA8); /* call 0x0001EEA8 */

loc_000F8A1E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8A6D; /* je: equal / zero */

loc_000F8A22: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000F8A2Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000F8A2B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8A5B; /* je: equal / zero */

loc_000F8A32: ;
    edx = MEM32(esp + 0x10);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    ecx = MEM32(esi);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, 0x000F8A54u); RECOMP_ABI_CALL(0x00018571u, sub_00018571); /* call 0x00018571 */

loc_000F8A54: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000F8A5B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    PUSH32(esp, 0x000F8A66u); RECOMP_ABI_CALL(0x00018571u, sub_00018571); /* call 0x00018571 */

loc_000F8A66: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000F8A6D: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F8A90
 * Original: 0x000F8A90 - 0x000F8AF4 (100 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8A90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x000F8A9Eu); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_000F8A9E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8AED; /* je: equal / zero */

loc_000F8AA2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000F8AABu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000F8AAB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8ADB; /* je: equal / zero */

loc_000F8AB2: ;
    edx = MEM32(esp + 0x10);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    ecx = MEM32(esi);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, 0x000F8AD4u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_000F8AD4: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000F8ADB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    PUSH32(esp, 0x000F8AE6u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_000F8AE6: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000F8AED: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F8B10
 * Original: 0x000F8B10 - 0x000F8B74 (100 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8B10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x000F8B1Eu); RECOMP_ABI_CALL(0x0003202Au, sub_0003202A); /* call 0x0003202A */

loc_000F8B1E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8B6D; /* je: equal / zero */

loc_000F8B22: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000F8B2Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000F8B2B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8B5B; /* je: equal / zero */

loc_000F8B32: ;
    edx = MEM32(esp + 0x10);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    ecx = MEM32(esi);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, 0x000F8B54u); RECOMP_ABI_CALL(0x000344E2u, sub_000344E2); /* call 0x000344E2 */

loc_000F8B54: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000F8B5B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    PUSH32(esp, 0x000F8B66u); RECOMP_ABI_CALL(0x000344E2u, sub_000344E2); /* call 0x000344E2 */

loc_000F8B66: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000F8B6D: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F8B90
 * Original: 0x000F8B90 - 0x000F9004 (1140 bytes, 371 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F8B90: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x78);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x32);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F8BA8u); RECOMP_ABI_CALL(0x00012900u, sub_00012900); /* call 0x00012900 */

loc_000F8BA8: ;
    edx = esp + 0x24;
    PUSH32(esp, 0x7CFB84);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    MEM8(esp + 0x27) = LO8(ebx);
    PUSH32(esp, 0x000F8BBDu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_000F8BBD: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = esp + 0x18;
    if (CMP_NE(_fa, _fb)) goto loc_000F8C2F; /* jne: not equal / not zero */

loc_000F8BC8: ;
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7CFB7C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F8BDDu); RECOMP_ABI_CALL(0x00032FD4u, sub_00032FD4); /* call 0x00032FD4 */

loc_000F8BDD: ;
    esi = MEM32(esp + 0x94);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8C28; /* je: equal / zero */

loc_000F8BEC: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esi);
    edx = esp + 0x18;
    MEM32(esp + 0x14) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F8C05; /* je: equal / zero */

loc_000F8BFD: ;
    eax = MEM32(esi + 0x14);
    edi = MEM32(eax + 8);
    goto loc_000F8C07;

loc_000F8C05: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F8C07: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F8C11u); RECOMP_ABI_CALL(0x0002B2DEu, sub_0002B2DE); /* call 0x0002B2DE */

loc_000F8C11: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F8C13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8C11u); } /* indirect call */
    }

loc_000F8C13: ;
    ebp = eax;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8C25; /* je: equal / zero */

loc_000F8C1C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F8C22u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000F8C22: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F8C25: ;
    MEM32(edi + 4) = ebp;

loc_000F8C28: ;
    SET_LO8(ebx, 1);
    goto loc_000F8F41;

loc_000F8C2F: ;
    PUSH32(esp, 0x7CFB78);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F8C3Au); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_000F8C3A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esp + 0x18;
    if (CMP_NE(_fa, _fb)) goto loc_000F8CAD; /* jne: not equal / not zero */

loc_000F8C45: ;
    edx = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7CFB7C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F8C5Au); RECOMP_ABI_CALL(0x00032FD4u, sub_00032FD4); /* call 0x00032FD4 */

loc_000F8C5A: ;
    esi = MEM32(esp + 0x94);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8CA6; /* je: equal / zero */

loc_000F8C69: ;
    ecx = MEM32(esi + 4);
    eax = esp + 0x18;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8C83; /* je: equal / zero */

loc_000F8C7B: ;
    edx = MEM32(esi + 0x14);
    edi = MEM32(edx + 8);
    goto loc_000F8C85;

loc_000F8C83: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F8C85: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F8C8Fu); RECOMP_ABI_CALL(0x00011D3Eu, sub_00011D3E); /* call 0x00011D3E */

loc_000F8C8F: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F8C91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8C8Fu); } /* indirect call */
    }

loc_000F8C91: ;
    ebp = eax;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8CA3; /* je: equal / zero */

loc_000F8C9A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F8CA0u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000F8CA0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F8CA3: ;
    MEM32(edi + 8) = ebp;

loc_000F8CA6: ;
    SET_LO8(ebx, 1);
    goto loc_000F8F41;

loc_000F8CAD: ;
    PUSH32(esp, 0x7CFB74);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F8CB8u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_000F8CB8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8D1E; /* jne: not equal / not zero */

loc_000F8CBF: ;
    eax = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7CFB7C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F8CD8u); RECOMP_ABI_CALL(0x00032FD4u, sub_00032FD4); /* call 0x00032FD4 */

loc_000F8CD8: ;
    esi = MEM32(esp + 0x94);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8D17; /* je: equal / zero */

loc_000F8CE7: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esp + 0x18;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esi + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_000F8D01; /* je: equal / zero */

loc_000F8CF9: ;
    edx = MEM32(esi + 0x14);
    edi = MEM32(edx + 8);
    goto loc_000F8D03;

loc_000F8D01: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F8D03: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F8D0Du); RECOMP_ABI_CALL(0x000156FFu, sub_000156FF); /* call 0x000156FF */

loc_000F8D0D: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F8D0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8D0Du); } /* indirect call */
    }

loc_000F8D0F: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000F8D17u); RECOMP_ABI_CALL(0x00020848u, sub_00020848); /* call 0x00020848 */

loc_000F8D17: ;
    SET_LO8(ebx, 1);
    goto loc_000F8F41;

loc_000F8D1E: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x7CFB6C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F8D2Du); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_000F8D2D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8DCA; /* jne: not equal / not zero */

loc_000F8D38: ;
    eax = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7CFB64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F8D51u); RECOMP_ABI_CALL(0x00032FD4u, sub_00032FD4); /* call 0x00032FD4 */

loc_000F8D51: ;
    esi = MEM32(esp + 0x94);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8DC0; /* je: equal / zero */

loc_000F8D60: ;
    edx = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7CFB5C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F8D79u); RECOMP_ABI_CALL(0x00032FD4u, sub_00032FD4); /* call 0x00032FD4 */

loc_000F8D79: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8DC0; /* je: equal / zero */

loc_000F8D81: ;
    eax = esp + 0x18;
    PUSH32(esp, 0x7CFB54);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F8D90u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_000F8D90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8DAD; /* je: equal / zero */

loc_000F8D97: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x7CFB50);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F8DA6u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_000F8DA6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8DC0; /* jne: not equal / not zero */

loc_000F8DAD: ;
    ecx = esi;
    PUSH32(esp, 0x000F8DB4u); RECOMP_ABI_CALL(0x0001CE87u, sub_0001CE87); /* call 0x0001CE87 */

loc_000F8DB4: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx);
    eax = esp + 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000F8DC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8DBEu); } /* indirect call */
    }

loc_000F8DC0: ;
    MEM8(esp + 0x13) = 1;
    goto loc_000F8F41;

loc_000F8DCA: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x7CFB4C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F8DD9u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_000F8DD9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8FF5; /* jne: not equal / not zero */

loc_000F8DE4: ;
    esi = MEM32(esp + 0x84);
    eax = MEM32(esi + 0x1C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8E32; /* je: equal / zero */

loc_000F8DF4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000F8DFCu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000F8DFC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8E1A; /* je: equal / zero */

loc_000F8E03: ;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edi;
    MEM32(eax) = 0x7CF5EC;
    edi = eax;

loc_000F8E1A: ;
    ecx = esi;
    PUSH32(esp, 0x000F8E21u); RECOMP_ABI_CALL(0x0001CE87u, sub_0001CE87); /* call 0x0001CE87 */

loc_000F8E21: ;
    edx = MEM32(eax + 0x14);
    MEM32(edi + 0x10) = edx;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(eax + 0x14) = edi;
    PUSH32(esp, 0x000F8E32u); RECOMP_ABI_CALL(0x0002AF87u, sub_0002AF87); /* call 0x0002AF87 */

loc_000F8E32: ;
    edi = MEM32(esi + 0x1C);
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7CFB84);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    MEM32(esi + 0x1C) = edi;
    PUSH32(esp, 0x000F8E52u); RECOMP_ABI_CALL(0x00032FD4u, sub_00032FD4); /* call 0x00032FD4 */

loc_000F8E52: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8E7F; /* je: equal / zero */

loc_000F8E5A: ;
    ecx = MEM32(esi);
    eax = esp + 0x14;
    edx = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x000F8E6Eu); RECOMP_ABI_CALL(0x0002B2DEu, sub_0002B2DE); /* call 0x0002B2DE */

loc_000F8E6E: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F8E70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8E6Eu); } /* indirect call */
    }

loc_000F8E70: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000F8E78u); RECOMP_ABI_CALL(0x0001CE87u, sub_0001CE87); /* call 0x0001CE87 */

loc_000F8E78: ;
    ecx = eax;
    PUSH32(esp, 0x000F8E7Fu); RECOMP_ABI_CALL(0x0003063Au, sub_0003063A); /* call 0x0003063A */

loc_000F8E7F: ;
    edx = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7CFB40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F8E98u); RECOMP_ABI_CALL(0x00032FD4u, sub_00032FD4); /* call 0x00032FD4 */

loc_000F8E98: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8EB3; /* je: equal / zero */

loc_000F8EA0: ;
    ecx = esi;
    PUSH32(esp, 0x000F8EA7u); RECOMP_ABI_CALL(0x0001CE87u, sub_0001CE87); /* call 0x0001CE87 */

loc_000F8EA7: ;
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx);
    edx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F8EB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8EB1u); } /* indirect call */
    }

loc_000F8EB3: ;
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7CFB78);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F8ECCu); RECOMP_ABI_CALL(0x00032FD4u, sub_00032FD4); /* call 0x00032FD4 */

loc_000F8ECC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8EFA; /* je: equal / zero */

loc_000F8ED4: ;
    ecx = MEM32(esi + 4);
    eax = esp + 0x14;
    edx = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x000F8EE9u); RECOMP_ABI_CALL(0x00011D3Eu, sub_00011D3E); /* call 0x00011D3E */

loc_000F8EE9: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F8EEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8EE9u); } /* indirect call */
    }

loc_000F8EEB: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000F8EF3u); RECOMP_ABI_CALL(0x0001CE87u, sub_0001CE87); /* call 0x0001CE87 */

loc_000F8EF3: ;
    ecx = eax;
    PUSH32(esp, 0x000F8EFAu); RECOMP_ABI_CALL(0x00014E0Du, sub_00014E0D); /* call 0x00014E0D */

loc_000F8EFA: ;
    edx = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7CFB74);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F8F13u); RECOMP_ABI_CALL(0x00032FD4u, sub_00032FD4); /* call 0x00032FD4 */

loc_000F8F13: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8F41; /* je: equal / zero */

loc_000F8F1B: ;
    ecx = MEM32(esi + 8);
    edx = esp + 0x14;
    eax = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000F8F30u); RECOMP_ABI_CALL(0x000156FFu, sub_000156FF); /* call 0x000156FF */

loc_000F8F30: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F8F32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F8F30u); } /* indirect call */
    }

loc_000F8F32: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000F8F3Au); RECOMP_ABI_CALL(0x0001CE87u, sub_0001CE87); /* call 0x0001CE87 */

loc_000F8F3A: ;
    ecx = eax;
    PUSH32(esp, 0x000F8F41u); RECOMP_ABI_CALL(0x00020848u, sub_00020848); /* call 0x00020848 */

loc_000F8F41: ;
    eax = MEM32(esp + 0x88);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F8F4Eu); RECOMP_ABI_CALL(0x000152EAu, sub_000152EA); /* call 0x000152EA */

loc_000F8F4E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8FFC; /* jne: not equal / not zero */

loc_000F8F59: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8F79; /* jne: not equal / not zero */

loc_000F8F5D: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8F79; /* jne: not equal / not zero */

loc_000F8F65: ;
    edi = MEM32(esi + 0x14);
    ecx = esi + 0xC;
    PUSH32(esp, 0x000F8F70u); RECOMP_ABI_CALL(0x00036080u, sub_00036080); /* call 0x00036080 */

loc_000F8F70: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F8F76u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000F8F76: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F8F79: ;
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F8F86u); RECOMP_ABI_CALL(0x0002B40Au, sub_0002B40A); /* call 0x0002B40A */

loc_000F8F86: ;
    edx = esp + 0x8C;
    PUSH32(esp, edx);
    MEM32(esp + 0x90) = eax;
    PUSH32(esp, 0x000F8F9Au); RECOMP_ABI_CALL(0x000130DFu, sub_000130DF); /* call 0x000130DF */

loc_000F8F9A: ;
    SET_LO8(edx, MEM8(esp + 0x1B));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8FAC; /* je: equal / zero */

loc_000F8FA7: ;
    ecx = 1;

loc_000F8FAC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F8FDA; /* jge: greater or equal (signed >=) */

loc_000F8FB0: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = esi + 0xC;
    ebx = eax;

loc_000F8FB7: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8FD7; /* je: equal / zero */

loc_000F8FBD: ;
    edi = MEM32(esi + 0x14);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8FD7; /* je: equal / zero */

loc_000F8FC7: ;
    ecx = ebp;
    PUSH32(esp, 0x000F8FCEu); RECOMP_ABI_CALL(0x00036080u, sub_00036080); /* call 0x00036080 */

loc_000F8FCE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F8FD4u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000F8FD4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F8FD7: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000F8FB7; /* jne: not equal / not zero */

loc_000F8FDA: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F8FEB; /* je: equal / zero */

loc_000F8FE1: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8FF5; /* jne: not equal / not zero */

loc_000F8FEB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000F8FF5: ;
    eax = MEM32(esp + 0x88);

loc_000F8FFC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F9130
 * Original: 0x000F9130 - 0x000F9194 (100 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9130: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x000F913Eu); RECOMP_ABI_CALL(0x0002067Cu, sub_0002067C); /* call 0x0002067C */

loc_000F913E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F918D; /* je: equal / zero */

loc_000F9142: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000F914Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000F914B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F917B; /* je: equal / zero */

loc_000F9152: ;
    edx = MEM32(esp + 0x10);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    ecx = MEM32(esi);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, 0x000F9174u); RECOMP_ABI_CALL(0x00021469u, sub_00021469); /* call 0x00021469 */

loc_000F9174: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000F917B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    PUSH32(esp, 0x000F9186u); RECOMP_ABI_CALL(0x00021469u, sub_00021469); /* call 0x00021469 */

loc_000F9186: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000F918D: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F91B0
 * Original: 0x000F91B0 - 0x000F9214 (100 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F91B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F91B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x000F91BEu); RECOMP_ABI_CALL(0x0002F70Du, sub_0002F70D); /* call 0x0002F70D */

loc_000F91BE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F920D; /* je: equal / zero */

loc_000F91C2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000F91CBu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000F91CB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F91FB; /* je: equal / zero */

loc_000F91D2: ;
    edx = MEM32(esp + 0x10);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    ecx = MEM32(esi);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, 0x000F91F4u); RECOMP_ABI_CALL(0x0002F9D3u, sub_0002F9D3); /* call 0x0002F9D3 */

loc_000F91F4: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000F91FB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    PUSH32(esp, 0x000F9206u); RECOMP_ABI_CALL(0x0002F9D3u, sub_0002F9D3); /* call 0x0002F9D3 */

loc_000F9206: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000F920D: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F9230
 * Original: 0x000F9230 - 0x000F96A4 (1140 bytes, 371 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F9230: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x78);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x32);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F9248u); RECOMP_ABI_CALL(0x00012900u, sub_00012900); /* call 0x00012900 */

loc_000F9248: ;
    edx = esp + 0x24;
    PUSH32(esp, 0x7CFB84);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    MEM8(esp + 0x27) = LO8(ebx);
    PUSH32(esp, 0x000F925Du); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_000F925D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = esp + 0x18;
    if (CMP_NE(_fa, _fb)) goto loc_000F92CF; /* jne: not equal / not zero */

loc_000F9268: ;
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7CFB7C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F927Du); RECOMP_ABI_CALL(0x00017482u, sub_00017482); /* call 0x00017482 */

loc_000F927D: ;
    esi = MEM32(esp + 0x94);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F92C8; /* je: equal / zero */

loc_000F928C: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esi);
    edx = esp + 0x18;
    MEM32(esp + 0x14) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F92A5; /* je: equal / zero */

loc_000F929D: ;
    eax = MEM32(esi + 0x14);
    edi = MEM32(eax + 8);
    goto loc_000F92A7;

loc_000F92A5: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F92A7: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F92B1u); RECOMP_ABI_CALL(0x0001C932u, sub_0001C932); /* call 0x0001C932 */

loc_000F92B1: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F92B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F92B1u); } /* indirect call */
    }

loc_000F92B3: ;
    ebp = eax;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F92C5; /* je: equal / zero */

loc_000F92BC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F92C2u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000F92C2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F92C5: ;
    MEM32(edi + 4) = ebp;

loc_000F92C8: ;
    SET_LO8(ebx, 1);
    goto loc_000F95E1;

loc_000F92CF: ;
    PUSH32(esp, 0x7CFB78);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F92DAu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_000F92DA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esp + 0x18;
    if (CMP_NE(_fa, _fb)) goto loc_000F934D; /* jne: not equal / not zero */

loc_000F92E5: ;
    edx = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7CFB7C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F92FAu); RECOMP_ABI_CALL(0x00017482u, sub_00017482); /* call 0x00017482 */

loc_000F92FA: ;
    esi = MEM32(esp + 0x94);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9346; /* je: equal / zero */

loc_000F9309: ;
    ecx = MEM32(esi + 4);
    eax = esp + 0x18;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9323; /* je: equal / zero */

loc_000F931B: ;
    edx = MEM32(esi + 0x14);
    edi = MEM32(edx + 8);
    goto loc_000F9325;

loc_000F9323: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F9325: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F932Fu); RECOMP_ABI_CALL(0x00033835u, sub_00033835); /* call 0x00033835 */

loc_000F932F: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F9331u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F932Fu); } /* indirect call */
    }

loc_000F9331: ;
    ebp = eax;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9343; /* je: equal / zero */

loc_000F933A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F9340u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000F9340: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F9343: ;
    MEM32(edi + 8) = ebp;

loc_000F9346: ;
    SET_LO8(ebx, 1);
    goto loc_000F95E1;

loc_000F934D: ;
    PUSH32(esp, 0x7CFB74);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F9358u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_000F9358: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F93BE; /* jne: not equal / not zero */

loc_000F935F: ;
    eax = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7CFB7C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F9378u); RECOMP_ABI_CALL(0x00017482u, sub_00017482); /* call 0x00017482 */

loc_000F9378: ;
    esi = MEM32(esp + 0x94);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F93B7; /* je: equal / zero */

loc_000F9387: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esp + 0x18;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esi + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_000F93A1; /* je: equal / zero */

loc_000F9399: ;
    edx = MEM32(esi + 0x14);
    edi = MEM32(edx + 8);
    goto loc_000F93A3;

loc_000F93A1: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F93A3: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F93ADu); RECOMP_ABI_CALL(0x0001B906u, sub_0001B906); /* call 0x0001B906 */

loc_000F93AD: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F93AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F93ADu); } /* indirect call */
    }

loc_000F93AF: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000F93B7u); RECOMP_ABI_CALL(0x0002F1CCu, sub_0002F1CC); /* call 0x0002F1CC */

loc_000F93B7: ;
    SET_LO8(ebx, 1);
    goto loc_000F95E1;

loc_000F93BE: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x7CFB6C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F93CDu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_000F93CD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F946A; /* jne: not equal / not zero */

loc_000F93D8: ;
    eax = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7CFB64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F93F1u); RECOMP_ABI_CALL(0x00017482u, sub_00017482); /* call 0x00017482 */

loc_000F93F1: ;
    esi = MEM32(esp + 0x94);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9460; /* je: equal / zero */

loc_000F9400: ;
    edx = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7CFB5C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F9419u); RECOMP_ABI_CALL(0x00017482u, sub_00017482); /* call 0x00017482 */

loc_000F9419: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9460; /* je: equal / zero */

loc_000F9421: ;
    eax = esp + 0x18;
    PUSH32(esp, 0x7CFB54);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F9430u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_000F9430: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F944D; /* je: equal / zero */

loc_000F9437: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x7CFB50);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F9446u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_000F9446: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9460; /* jne: not equal / not zero */

loc_000F944D: ;
    ecx = esi;
    PUSH32(esp, 0x000F9454u); RECOMP_ABI_CALL(0x000203D4u, sub_000203D4); /* call 0x000203D4 */

loc_000F9454: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx);
    eax = esp + 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000F9460u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F945Eu); } /* indirect call */
    }

loc_000F9460: ;
    MEM8(esp + 0x13) = 1;
    goto loc_000F95E1;

loc_000F946A: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x7CFB4C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F9479u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_000F9479: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9695; /* jne: not equal / not zero */

loc_000F9484: ;
    esi = MEM32(esp + 0x84);
    eax = MEM32(esi + 0x1C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F94D2; /* je: equal / zero */

loc_000F9494: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000F949Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000F949C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F94BA; /* je: equal / zero */

loc_000F94A3: ;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edi;
    MEM32(eax) = 0x7CF5F0;
    edi = eax;

loc_000F94BA: ;
    ecx = esi;
    PUSH32(esp, 0x000F94C1u); RECOMP_ABI_CALL(0x000203D4u, sub_000203D4); /* call 0x000203D4 */

loc_000F94C1: ;
    edx = MEM32(eax + 0x14);
    MEM32(edi + 0x10) = edx;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(eax + 0x14) = edi;
    PUSH32(esp, 0x000F94D2u); RECOMP_ABI_CALL(0x000298A8u, sub_000298A8); /* call 0x000298A8 */

loc_000F94D2: ;
    edi = MEM32(esi + 0x1C);
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7CFB84);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    MEM32(esi + 0x1C) = edi;
    PUSH32(esp, 0x000F94F2u); RECOMP_ABI_CALL(0x00017482u, sub_00017482); /* call 0x00017482 */

loc_000F94F2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F951F; /* je: equal / zero */

loc_000F94FA: ;
    ecx = MEM32(esi);
    eax = esp + 0x14;
    edx = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x000F950Eu); RECOMP_ABI_CALL(0x0001C932u, sub_0001C932); /* call 0x0001C932 */

loc_000F950E: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F9510u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F950Eu); } /* indirect call */
    }

loc_000F9510: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000F9518u); RECOMP_ABI_CALL(0x000203D4u, sub_000203D4); /* call 0x000203D4 */

loc_000F9518: ;
    ecx = eax;
    PUSH32(esp, 0x000F951Fu); RECOMP_ABI_CALL(0x00031EEFu, sub_00031EEF); /* call 0x00031EEF */

loc_000F951F: ;
    edx = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7CFB40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F9538u); RECOMP_ABI_CALL(0x00017482u, sub_00017482); /* call 0x00017482 */

loc_000F9538: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9553; /* je: equal / zero */

loc_000F9540: ;
    ecx = esi;
    PUSH32(esp, 0x000F9547u); RECOMP_ABI_CALL(0x000203D4u, sub_000203D4); /* call 0x000203D4 */

loc_000F9547: ;
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx);
    edx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F9553u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9551u); } /* indirect call */
    }

loc_000F9553: ;
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7CFB78);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F956Cu); RECOMP_ABI_CALL(0x00017482u, sub_00017482); /* call 0x00017482 */

loc_000F956C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F959A; /* je: equal / zero */

loc_000F9574: ;
    ecx = MEM32(esi + 4);
    eax = esp + 0x14;
    edx = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x000F9589u); RECOMP_ABI_CALL(0x00033835u, sub_00033835); /* call 0x00033835 */

loc_000F9589: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F958Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F9589u); } /* indirect call */
    }

loc_000F958B: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000F9593u); RECOMP_ABI_CALL(0x000203D4u, sub_000203D4); /* call 0x000203D4 */

loc_000F9593: ;
    ecx = eax;
    PUSH32(esp, 0x000F959Au); RECOMP_ABI_CALL(0x0001F367u, sub_0001F367); /* call 0x0001F367 */

loc_000F959A: ;
    edx = MEM32(esp + 0x88);
    PUSH32(esp, 0x32);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7CFB74);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F95B3u); RECOMP_ABI_CALL(0x00017482u, sub_00017482); /* call 0x00017482 */

loc_000F95B3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F95E1; /* je: equal / zero */

loc_000F95BB: ;
    ecx = MEM32(esi + 8);
    edx = esp + 0x14;
    eax = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000F95D0u); RECOMP_ABI_CALL(0x0001B906u, sub_0001B906); /* call 0x0001B906 */

loc_000F95D0: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F95D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F95D0u); } /* indirect call */
    }

loc_000F95D2: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000F95DAu); RECOMP_ABI_CALL(0x000203D4u, sub_000203D4); /* call 0x000203D4 */

loc_000F95DA: ;
    ecx = eax;
    PUSH32(esp, 0x000F95E1u); RECOMP_ABI_CALL(0x0002F1CCu, sub_0002F1CC); /* call 0x0002F1CC */

loc_000F95E1: ;
    eax = MEM32(esp + 0x88);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F95EEu); RECOMP_ABI_CALL(0x000152EAu, sub_000152EA); /* call 0x000152EA */

loc_000F95EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F969C; /* jne: not equal / not zero */

loc_000F95F9: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9619; /* jne: not equal / not zero */

loc_000F95FD: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9619; /* jne: not equal / not zero */

loc_000F9605: ;
    edi = MEM32(esi + 0x14);
    ecx = esi + 0xC;
    PUSH32(esp, 0x000F9610u); RECOMP_ABI_CALL(0x000364DBu, sub_000364DB); /* call 0x000364DB */

loc_000F9610: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F9616u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000F9616: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F9619: ;
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F9626u); RECOMP_ABI_CALL(0x0002B40Au, sub_0002B40A); /* call 0x0002B40A */

loc_000F9626: ;
    edx = esp + 0x8C;
    PUSH32(esp, edx);
    MEM32(esp + 0x90) = eax;
    PUSH32(esp, 0x000F963Au); RECOMP_ABI_CALL(0x000130DFu, sub_000130DF); /* call 0x000130DF */

loc_000F963A: ;
    SET_LO8(edx, MEM8(esp + 0x1B));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F964C; /* je: equal / zero */

loc_000F9647: ;
    ecx = 1;

loc_000F964C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F967A; /* jge: greater or equal (signed >=) */

loc_000F9650: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = esi + 0xC;
    ebx = eax;

loc_000F9657: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9677; /* je: equal / zero */

loc_000F965D: ;
    edi = MEM32(esi + 0x14);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9677; /* je: equal / zero */

loc_000F9667: ;
    ecx = ebp;
    PUSH32(esp, 0x000F966Eu); RECOMP_ABI_CALL(0x000364DBu, sub_000364DB); /* call 0x000364DB */

loc_000F966E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F9674u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000F9674: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F9677: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000F9657; /* jne: not equal / not zero */

loc_000F967A: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F968B; /* je: equal / zero */

loc_000F9681: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9695; /* jne: not equal / not zero */

loc_000F968B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000F9695: ;
    eax = MEM32(esp + 0x88);

loc_000F969C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F97D0
 * Original: 0x000F97D0 - 0x000F9834 (100 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F97D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F97D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x000F97DEu); RECOMP_ABI_CALL(0x0001AB5Au, sub_0001AB5A); /* call 0x0001AB5A */

loc_000F97DE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F982D; /* je: equal / zero */

loc_000F97E2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000F97EBu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000F97EB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F981B; /* je: equal / zero */

loc_000F97F2: ;
    edx = MEM32(esp + 0x10);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    ecx = MEM32(esi);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, 0x000F9814u); RECOMP_ABI_CALL(0x0002C521u, sub_0002C521); /* call 0x0002C521 */

loc_000F9814: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000F981B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    PUSH32(esp, 0x000F9826u); RECOMP_ABI_CALL(0x0002C521u, sub_0002C521); /* call 0x0002C521 */

loc_000F9826: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000F982D: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F9850
 * Original: 0x000F9850 - 0x000F98B4 (100 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9850: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x000F985Eu); RECOMP_ABI_CALL(0x00012897u, sub_00012897); /* call 0x00012897 */

loc_000F985E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F98AD; /* je: equal / zero */

loc_000F9862: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000F986Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000F986B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F989B; /* je: equal / zero */

loc_000F9872: ;
    edx = MEM32(esp + 0x10);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    ecx = MEM32(esi);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, 0x000F9894u); RECOMP_ABI_CALL(0x00020A7Du, sub_00020A7D); /* call 0x00020A7D */

loc_000F9894: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000F989B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    PUSH32(esp, 0x000F98A6u); RECOMP_ABI_CALL(0x00020A7Du, sub_00020A7D); /* call 0x00020A7D */

loc_000F98A6: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000F98AD: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F98D0
 * Original: 0x000F98D0 - 0x000F9934 (100 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F98D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F98D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x000F98DEu); RECOMP_ABI_CALL(0x00016488u, sub_00016488); /* call 0x00016488 */

loc_000F98DE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F992D; /* je: equal / zero */

loc_000F98E2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000F98EBu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000F98EB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F991B; /* je: equal / zero */

loc_000F98F2: ;
    edx = MEM32(esp + 0x10);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    ecx = MEM32(esi);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, 0x000F9914u); RECOMP_ABI_CALL(0x0002E3A3u, sub_0002E3A3); /* call 0x0002E3A3 */

loc_000F9914: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000F991B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    PUSH32(esp, 0x000F9926u); RECOMP_ABI_CALL(0x0002E3A3u, sub_0002E3A3); /* call 0x0002E3A3 */

loc_000F9926: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000F992D: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F9950
 * Original: 0x000F9950 - 0x000F99B4 (100 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9950: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x000F995Eu); RECOMP_ABI_CALL(0x0002339Au, sub_0002339A); /* call 0x0002339A */

loc_000F995E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F99AD; /* je: equal / zero */

loc_000F9962: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000F996Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000F996B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F999B; /* je: equal / zero */

loc_000F9972: ;
    edx = MEM32(esp + 0x10);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    ecx = MEM32(esi);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, 0x000F9994u); RECOMP_ABI_CALL(0x000307E3u, sub_000307E3); /* call 0x000307E3 */

loc_000F9994: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000F999B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    PUSH32(esp, 0x000F99A6u); RECOMP_ABI_CALL(0x000307E3u, sub_000307E3); /* call 0x000307E3 */

loc_000F99A6: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000F99AD: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F99D0
 * Original: 0x000F99D0 - 0x000F99E6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F99D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F99D0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000F99F0
 * Original: 0x000F99F0 - 0x000F9A06 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F99F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F99F0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000F9A10
 * Original: 0x000F9A10 - 0x000F9A26 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9A10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9A10: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000F9A30
 * Original: 0x000F9A30 - 0x000F9A46 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9A30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9A30: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000F9A50
 * Original: 0x000F9A50 - 0x000F9A66 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9A50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9A50: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000F9A70
 * Original: 0x000F9A70 - 0x000F9A86 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9A70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9A70: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000F9A90
 * Original: 0x000F9A90 - 0x000F9B25 (149 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9A90: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    MEM32(esi) = 0x7CFB88;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x28) = edi;
    PUSH32(esp, 0x000F9AE4u); RECOMP_ABI_CALL(0x0002D33Bu, sub_0002D33B); /* call 0x0002D33B */

loc_000F9AE4: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, 0x7CFB4C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F9AF3u); RECOMP_ABI_CALL(0x000288EFu, sub_000288EF); /* call 0x000288EF */

loc_000F9AF3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9B12; /* je: equal / zero */

loc_000F9AFA: ;
    /* nop */

loc_000F9B00: ;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F9B0Bu); RECOMP_ABI_CALL(0x00023133u, sub_00023133); /* call 0x00023133 */

loc_000F9B0B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9B00; /* jne: not equal / not zero */

loc_000F9B12: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x000F9B1Bu); RECOMP_ABI_CALL(0x0002E632u, sub_0002E632); /* call 0x0002E632 */

loc_000F9B1B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000F9B50
 * Original: 0x000F9B50 - 0x000F9B6E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9B50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000F9B58u); RECOMP_ABI_CALL(0x00029B05u, sub_00029B05); /* call 0x00029B05 */

loc_000F9B58: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9B68; /* je: equal / zero */

loc_000F9B5F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F9B65u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000F9B65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F9B68: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9B80
 * Original: 0x000F9B80 - 0x000F9C15 (149 bytes, 47 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9B80: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    MEM32(esi) = 0x7CFB8C;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x28) = edi;
    PUSH32(esp, 0x000F9BD4u); RECOMP_ABI_CALL(0x0002AF87u, sub_0002AF87); /* call 0x0002AF87 */

loc_000F9BD4: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, 0x7CFB4C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F9BE3u); RECOMP_ABI_CALL(0x000288EFu, sub_000288EF); /* call 0x000288EF */

loc_000F9BE3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9C02; /* je: equal / zero */

loc_000F9BEA: ;
    /* nop */

loc_000F9BF0: ;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F9BFBu); RECOMP_ABI_CALL(0x000153FDu, sub_000153FD); /* call 0x000153FD */

loc_000F9BFB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9BF0; /* jne: not equal / not zero */

loc_000F9C02: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x000F9C0Bu); RECOMP_ABI_CALL(0x0002B7C0u, sub_0002B7C0); /* call 0x0002B7C0 */

loc_000F9C0B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000F9C40
 * Original: 0x000F9C40 - 0x000F9C5E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9C40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000F9C48u); RECOMP_ABI_CALL(0x00019B5Bu, sub_00019B5B); /* call 0x00019B5B */

loc_000F9C48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9C58; /* je: equal / zero */

loc_000F9C4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F9C55u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000F9C55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F9C58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9C70
 * Original: 0x000F9C70 - 0x000F9D05 (149 bytes, 47 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9C70: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    MEM32(esi) = 0x7CFB90;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x28) = edi;
    PUSH32(esp, 0x000F9CC4u); RECOMP_ABI_CALL(0x000298A8u, sub_000298A8); /* call 0x000298A8 */

loc_000F9CC4: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, 0x7CFB4C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F9CD3u); RECOMP_ABI_CALL(0x000288EFu, sub_000288EF); /* call 0x000288EF */

loc_000F9CD3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9CF2; /* je: equal / zero */

loc_000F9CDA: ;
    /* nop */

loc_000F9CE0: ;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F9CEBu); RECOMP_ABI_CALL(0x000170F4u, sub_000170F4); /* call 0x000170F4 */

loc_000F9CEB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9CE0; /* jne: not equal / not zero */

loc_000F9CF2: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x000F9CFBu); RECOMP_ABI_CALL(0x0002714Du, sub_0002714D); /* call 0x0002714D */

loc_000F9CFB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000F9D30
 * Original: 0x000F9D30 - 0x000F9D4E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9D30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000F9D38u); RECOMP_ABI_CALL(0x0001D82Du, sub_0001D82D); /* call 0x0001D82D */

loc_000F9D38: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9D48; /* je: equal / zero */

loc_000F9D3F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F9D45u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000F9D45: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F9D48: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9D60
 * Original: 0x000F9D60 - 0x000F9D7E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9D60(void)
{

loc_000F9D60: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x11352);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF604;
    PUSH32(esp, 0x000F9D7Cu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_000F9D7C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F9D90
 * Original: 0x000F9D90 - 0x000F9DAE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9D90(void)
{

loc_000F9D90: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x341F9);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF63C;
    PUSH32(esp, 0x000F9DACu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_000F9DAC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F9DC0
 * Original: 0x000F9DC0 - 0x000F9DDE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9DC0(void)
{

loc_000F9DC0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x168BB);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF8C8;
    PUSH32(esp, 0x000F9DDCu); RECOMP_ABI_CALL(0x0001AA42u, sub_0001AA42); /* call 0x0001AA42 */

loc_000F9DDC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F9DF0
 * Original: 0x000F9DF0 - 0x000F9E0E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9DF0(void)
{

loc_000F9DF0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x1F9A7);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF8EC;
    PUSH32(esp, 0x000F9E0Cu); RECOMP_ABI_CALL(0x0001AA42u, sub_0001AA42); /* call 0x0001AA42 */

loc_000F9E0C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F9E20
 * Original: 0x000F9E20 - 0x000F9E3E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9E20(void)
{

loc_000F9E20: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x3044B);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF9C4;
    PUSH32(esp, 0x000F9E3Cu); RECOMP_ABI_CALL(0x000235A7u, sub_000235A7); /* call 0x000235A7 */

loc_000F9E3C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F9E50
 * Original: 0x000F9E50 - 0x000F9E6E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9E50(void)
{

loc_000F9E50: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x1AC40);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF9F8;
    PUSH32(esp, 0x000F9E6Cu); RECOMP_ABI_CALL(0x000235A7u, sub_000235A7); /* call 0x000235A7 */

loc_000F9E6C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F9E80
 * Original: 0x000F9E80 - 0x000F9E9E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9E80(void)
{

loc_000F9E80: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x31602);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CFA2C;
    PUSH32(esp, 0x000F9E9Cu); RECOMP_ABI_CALL(0x000235A7u, sub_000235A7); /* call 0x000235A7 */

loc_000F9E9C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F9EB0
 * Original: 0x000F9EB0 - 0x000F9ECE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9EB0(void)
{

loc_000F9EB0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x3661B);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CFA60;
    PUSH32(esp, 0x000F9ECCu); RECOMP_ABI_CALL(0x000235A7u, sub_000235A7); /* call 0x000235A7 */

loc_000F9ECC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F9EE0
 * Original: 0x000F9EE0 - 0x000F9EFE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9EE0(void)
{

loc_000F9EE0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x2C85A);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CFA98;
    PUSH32(esp, 0x000F9EFCu); RECOMP_ABI_CALL(0x000235A7u, sub_000235A7); /* call 0x000235A7 */

loc_000F9EFC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F9F10
 * Original: 0x000F9F10 - 0x000F9F2E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9F10(void)
{

loc_000F9F10: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x30DD3);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF66C;
    PUSH32(esp, 0x000F9F2Cu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_000F9F2C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F9F40
 * Original: 0x000F9F40 - 0x000F9F5E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9F40(void)
{

loc_000F9F40: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x2F0AA);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF68C;
    PUSH32(esp, 0x000F9F5Cu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_000F9F5C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F9F70
 * Original: 0x000F9F70 - 0x000F9F8E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9F70(void)
{

loc_000F9F70: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x2AE2E);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF6BC;
    PUSH32(esp, 0x000F9F8Cu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_000F9F8C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F9FA0
 * Original: 0x000F9FA0 - 0x000F9FBE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9FA0(void)
{

loc_000F9FA0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x1C91E);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF6E0;
    PUSH32(esp, 0x000F9FBCu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_000F9FBC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F9FD0
 * Original: 0x000F9FD0 - 0x000F9FEE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9FD0(void)
{

loc_000F9FD0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x24FFB);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF700;
    PUSH32(esp, 0x000F9FECu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_000F9FEC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FA000
 * Original: 0x000FA000 - 0x000FA01E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA000(void)
{

loc_000FA000: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x38024);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF720;
    PUSH32(esp, 0x000FA01Cu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_000FA01C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FA030
 * Original: 0x000FA030 - 0x000FA04E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA030(void)
{

loc_000FA030: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x18D55);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF750;
    PUSH32(esp, 0x000FA04Cu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_000FA04C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FA060
 * Original: 0x000FA060 - 0x000FA07E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA060(void)
{

loc_000FA060: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x21EFA);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF604;
    PUSH32(esp, 0x000FA07Cu); RECOMP_ABI_CALL(0x0002933Fu, sub_0002933F); /* call 0x0002933F */

loc_000FA07C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FA090
 * Original: 0x000FA090 - 0x000FA0AE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA090(void)
{

loc_000FA090: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x144DA);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF9C4;
    PUSH32(esp, 0x000FA0ACu); RECOMP_ABI_CALL(0x0002F041u, sub_0002F041); /* call 0x0002F041 */

loc_000FA0AC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FA0C0
 * Original: 0x000FA0C0 - 0x000FA0DE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA0C0(void)
{

loc_000FA0C0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x34D48);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF8C8;
    PUSH32(esp, 0x000FA0DCu); RECOMP_ABI_CALL(0x00012F13u, sub_00012F13); /* call 0x00012F13 */

loc_000FA0DC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FA0F0
 * Original: 0x000FA0F0 - 0x000FA10E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA0F0(void)
{

loc_000FA0F0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x15E89);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF66C;
    PUSH32(esp, 0x000FA10Cu); RECOMP_ABI_CALL(0x0002933Fu, sub_0002933F); /* call 0x0002933F */

loc_000FA10C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FA120
 * Original: 0x000FA120 - 0x000FA13E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA120(void)
{

loc_000FA120: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x2A85C);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF68C;
    PUSH32(esp, 0x000FA13Cu); RECOMP_ABI_CALL(0x0002933Fu, sub_0002933F); /* call 0x0002933F */

loc_000FA13C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FA150
 * Original: 0x000FA150 - 0x000FA16E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA150(void)
{

loc_000FA150: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x2710C);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF6BC;
    PUSH32(esp, 0x000FA16Cu); RECOMP_ABI_CALL(0x0002933Fu, sub_0002933F); /* call 0x0002933F */

loc_000FA16C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FA180
 * Original: 0x000FA180 - 0x000FA19E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA180(void)
{

loc_000FA180: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x26969);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF7D0;
    PUSH32(esp, 0x000FA19Cu); RECOMP_ABI_CALL(0x0002933Fu, sub_0002933F); /* call 0x0002933F */

loc_000FA19C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FA1B0
 * Original: 0x000FA1B0 - 0x000FA1CE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA1B0(void)
{

loc_000FA1B0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x3064E);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF8C8;
    PUSH32(esp, 0x000FA1CCu); RECOMP_ABI_CALL(0x00037219u, sub_00037219); /* call 0x00037219 */

loc_000FA1CC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FA1E0
 * Original: 0x000FA1E0 - 0x000FA1FE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA1E0(void)
{

loc_000FA1E0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x11767);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF9C4;
    PUSH32(esp, 0x000FA1FCu); RECOMP_ABI_CALL(0x000318FFu, sub_000318FF); /* call 0x000318FF */

loc_000FA1FC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FA210
 * Original: 0x000FA210 - 0x000FA22E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA210(void)
{

loc_000FA210: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x27A1C);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF8EC;
    PUSH32(esp, 0x000FA22Cu); RECOMP_ABI_CALL(0x00037219u, sub_00037219); /* call 0x00037219 */

loc_000FA22C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FA240
 * Original: 0x000FA240 - 0x000FA25E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA240(void)
{

loc_000FA240: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x2C1CA);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF604;
    PUSH32(esp, 0x000FA25Cu); RECOMP_ABI_CALL(0x0002C44Fu, sub_0002C44F); /* call 0x0002C44F */

loc_000FA25C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FA270
 * Original: 0x000FA270 - 0x000FA28E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA270(void)
{

loc_000FA270: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x23A66);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF8EC;
    PUSH32(esp, 0x000FA28Cu); RECOMP_ABI_CALL(0x000326D8u, sub_000326D8); /* call 0x000326D8 */

loc_000FA28C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FA2A0
 * Original: 0x000FA2A0 - 0x000FA2BE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA2A0(void)
{

loc_000FA2A0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x1A84E);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CF8C8;
    PUSH32(esp, 0x000FA2BCu); RECOMP_ABI_CALL(0x000326D8u, sub_000326D8); /* call 0x000326D8 */

loc_000FA2BC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FA2D0
 * Original: 0x000FA2D0 - 0x000FA2EE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA2D0(void)
{

loc_000FA2D0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x30635);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CFA2C;
    PUSH32(esp, 0x000FA2ECu); RECOMP_ABI_CALL(0x0001771Bu, sub_0001771B); /* call 0x0001771B */

loc_000FA2EC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FA300
 * Original: 0x000FA300 - 0x000FA335 (53 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FA300: ;
    ecx = MEM32(0x8E8E74);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA334; /* jne: not equal / not zero */

loc_000FA30C: ;
    MEM32(0x8E8E58) = eax;
    MEM32(0x8E8E60) = eax;
    MEM32(0x8E8E5C) = eax;
    MEM32(0x8E8E64) = eax;
    MEM32(0x8E8E6C) = eax;
    MEM32(0x8E8E68) = eax;
    MEM32(0x8E8E74) = 0x8E8E58;

loc_000FA334: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FA350
 * Original: 0x000FA350 - 0x000FA385 (53 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FA350: ;
    ecx = MEM32(0x8E8DD4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA384; /* jne: not equal / not zero */

loc_000FA35C: ;
    MEM32(0x8E8DB8) = eax;
    MEM32(0x8E8DC0) = eax;
    MEM32(0x8E8DBC) = eax;
    MEM32(0x8E8DC4) = eax;
    MEM32(0x8E8DCC) = eax;
    MEM32(0x8E8DC8) = eax;
    MEM32(0x8E8DD4) = 0x8E8DB8;

loc_000FA384: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FA3A0
 * Original: 0x000FA3A0 - 0x000FA3D5 (53 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA3A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FA3A0: ;
    ecx = MEM32(0x8E8D14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA3D4; /* jne: not equal / not zero */

loc_000FA3AC: ;
    MEM32(0x8E8CF8) = eax;
    MEM32(0x8E8D00) = eax;
    MEM32(0x8E8CFC) = eax;
    MEM32(0x8E8D04) = eax;
    MEM32(0x8E8D0C) = eax;
    MEM32(0x8E8D08) = eax;
    MEM32(0x8E8D14) = 0x8E8CF8;

loc_000FA3D4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FA3F0
 * Original: 0x000FA3F0 - 0x000FA425 (53 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FA3F0: ;
    ecx = MEM32(0x8E8DB4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA424; /* jne: not equal / not zero */

loc_000FA3FC: ;
    MEM32(0x8E8D98) = eax;
    MEM32(0x8E8DA0) = eax;
    MEM32(0x8E8D9C) = eax;
    MEM32(0x8E8DA4) = eax;
    MEM32(0x8E8DAC) = eax;
    MEM32(0x8E8DA8) = eax;
    MEM32(0x8E8DB4) = 0x8E8D98;

loc_000FA424: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FA440
 * Original: 0x000FA440 - 0x000FA475 (53 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FA440: ;
    ecx = MEM32(0x8E8D74);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA474; /* jne: not equal / not zero */

loc_000FA44C: ;
    MEM32(0x8E8D58) = eax;
    MEM32(0x8E8D60) = eax;
    MEM32(0x8E8D5C) = eax;
    MEM32(0x8E8D64) = eax;
    MEM32(0x8E8D6C) = eax;
    MEM32(0x8E8D68) = eax;
    MEM32(0x8E8D74) = 0x8E8D58;

loc_000FA474: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FA490
 * Original: 0x000FA490 - 0x000FA4C5 (53 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FA490: ;
    ecx = MEM32(0x8E8D94);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA4C4; /* jne: not equal / not zero */

loc_000FA49C: ;
    MEM32(0x8E8D78) = eax;
    MEM32(0x8E8D80) = eax;
    MEM32(0x8E8D7C) = eax;
    MEM32(0x8E8D84) = eax;
    MEM32(0x8E8D8C) = eax;
    MEM32(0x8E8D88) = eax;
    MEM32(0x8E8D94) = 0x8E8D78;

loc_000FA4C4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FA4E0
 * Original: 0x000FA4E0 - 0x000FA51A (58 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA4E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FA4E0: ;
    eax = MEM32(0x8E8E74);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA519; /* jne: not equal / not zero */

loc_000FA4EB: ;
    eax = 0x8E8E58;
    MEM32(0x8E8E58) = ecx;
    MEM32(0x8E8E60) = ecx;
    MEM32(0x8E8E5C) = ecx;
    MEM32(0x8E8E64) = ecx;
    MEM32(0x8E8E6C) = ecx;
    MEM32(0x8E8E68) = ecx;
    MEM32(0x8E8E74) = eax;

loc_000FA519: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FA530
 * Original: 0x000FA530 - 0x000FA56A (58 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FA530: ;
    eax = MEM32(0x8E8DD4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA569; /* jne: not equal / not zero */

loc_000FA53B: ;
    eax = 0x8E8DB8;
    MEM32(0x8E8DB8) = ecx;
    MEM32(0x8E8DC0) = ecx;
    MEM32(0x8E8DBC) = ecx;
    MEM32(0x8E8DC4) = ecx;
    MEM32(0x8E8DCC) = ecx;
    MEM32(0x8E8DC8) = ecx;
    MEM32(0x8E8DD4) = eax;

loc_000FA569: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FA580
 * Original: 0x000FA580 - 0x000FA5BA (58 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FA580: ;
    eax = MEM32(0x8E8D14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA5B9; /* jne: not equal / not zero */

loc_000FA58B: ;
    eax = 0x8E8CF8;
    MEM32(0x8E8CF8) = ecx;
    MEM32(0x8E8D00) = ecx;
    MEM32(0x8E8CFC) = ecx;
    MEM32(0x8E8D04) = ecx;
    MEM32(0x8E8D0C) = ecx;
    MEM32(0x8E8D08) = ecx;
    MEM32(0x8E8D14) = eax;

loc_000FA5B9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FA5D0
 * Original: 0x000FA5D0 - 0x000FA60A (58 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FA5D0: ;
    eax = MEM32(0x8E8DB4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA609; /* jne: not equal / not zero */

loc_000FA5DB: ;
    eax = 0x8E8D98;
    MEM32(0x8E8D98) = ecx;
    MEM32(0x8E8DA0) = ecx;
    MEM32(0x8E8D9C) = ecx;
    MEM32(0x8E8DA4) = ecx;
    MEM32(0x8E8DAC) = ecx;
    MEM32(0x8E8DA8) = ecx;
    MEM32(0x8E8DB4) = eax;

loc_000FA609: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FA620
 * Original: 0x000FA620 - 0x000FA65A (58 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FA620: ;
    eax = MEM32(0x8E8D74);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA659; /* jne: not equal / not zero */

loc_000FA62B: ;
    eax = 0x8E8D58;
    MEM32(0x8E8D58) = ecx;
    MEM32(0x8E8D60) = ecx;
    MEM32(0x8E8D5C) = ecx;
    MEM32(0x8E8D64) = ecx;
    MEM32(0x8E8D6C) = ecx;
    MEM32(0x8E8D68) = ecx;
    MEM32(0x8E8D74) = eax;

loc_000FA659: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FA670
 * Original: 0x000FA670 - 0x000FA6AA (58 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FA670: ;
    eax = MEM32(0x8E8D94);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA6A9; /* jne: not equal / not zero */

loc_000FA67B: ;
    eax = 0x8E8D78;
    MEM32(0x8E8D78) = ecx;
    MEM32(0x8E8D80) = ecx;
    MEM32(0x8E8D7C) = ecx;
    MEM32(0x8E8D84) = ecx;
    MEM32(0x8E8D8C) = ecx;
    MEM32(0x8E8D88) = ecx;
    MEM32(0x8E8D94) = eax;

loc_000FA6A9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FA6C0
 * Original: 0x000FA6C0 - 0x000FA7B3 (243 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000FA6C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FA6C0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x7CFB94);
    PUSH32(esp, 0x000FA6D4u); RECOMP_ABI_CALL(0x0002B3D3u, sub_0002B3D3); /* call 0x0002B3D3 */

loc_000FA6D4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x18);
    ebp = eax;
    PUSH32(esp, 0x000FA6DEu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000FA6DE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA7A5; /* je: equal / zero */

loc_000FA6E9: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x8E8E74);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000FA724; /* jne: not equal / not zero */

loc_000FA6F5: ;
    ebx = 0x8E8E58;
    MEM32(0x8E8E58) = esi;
    MEM32(0x8E8E60) = esi;
    MEM32(0x8E8E5C) = esi;
    MEM32(0x8E8E64) = esi;
    MEM32(0x8E8E6C) = esi;
    MEM32(0x8E8E68) = esi;
    MEM32(0x8E8E74) = ebx;

loc_000FA724: ;
    edi = MEM32(0x8E8E94);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA75D; /* jne: not equal / not zero */

loc_000FA72E: ;
    edi = 0x8E8E78;
    MEM32(0x8E8E78) = esi;
    MEM32(0x8E8E80) = esi;
    MEM32(0x8E8E7C) = esi;
    MEM32(0x8E8E84) = esi;
    MEM32(0x8E8E8C) = esi;
    MEM32(0x8E8E88) = esi;
    MEM32(0x8E8E94) = edi;

loc_000FA75D: ;
    edx = MEM32(0x8E8EB4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA796; /* jne: not equal / not zero */

loc_000FA767: ;
    edx = 0x8E8E98;
    MEM32(0x8E8E98) = esi;
    MEM32(0x8E8EA0) = esi;
    MEM32(0x8E8E9C) = esi;
    MEM32(0x8E8EA4) = esi;
    MEM32(0x8E8EAC) = esi;
    MEM32(0x8E8EA8) = esi;
    MEM32(0x8E8EB4) = edx;

loc_000FA796: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x000FA7A1u); RECOMP_ABI_CALL(0x00017009u, sub_00017009); /* call 0x00017009 */

loc_000FA7A1: ;
    POP32(esp, edi);
    esi = eax;
    POP32(esp, ebx);

loc_000FA7A5: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000FA7ABu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000FA7AB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000FA7F0
 * Original: 0x000FA7F0 - 0x000FA8E3 (243 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000FA7F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FA7F0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x7CFBA4);
    PUSH32(esp, 0x000FA804u); RECOMP_ABI_CALL(0x0002B3D3u, sub_0002B3D3); /* call 0x0002B3D3 */

loc_000FA804: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x18);
    ebp = eax;
    PUSH32(esp, 0x000FA80Eu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000FA80E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA8D5; /* je: equal / zero */

loc_000FA819: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x8E8DD4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000FA854; /* jne: not equal / not zero */

loc_000FA825: ;
    ebx = 0x8E8DB8;
    MEM32(0x8E8DB8) = esi;
    MEM32(0x8E8DC0) = esi;
    MEM32(0x8E8DBC) = esi;
    MEM32(0x8E8DC4) = esi;
    MEM32(0x8E8DCC) = esi;
    MEM32(0x8E8DC8) = esi;
    MEM32(0x8E8DD4) = ebx;

loc_000FA854: ;
    edi = MEM32(0x8E8DF4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA88D; /* jne: not equal / not zero */

loc_000FA85E: ;
    edi = 0x8E8DD8;
    MEM32(0x8E8DD8) = esi;
    MEM32(0x8E8DE0) = esi;
    MEM32(0x8E8DDC) = esi;
    MEM32(0x8E8DE4) = esi;
    MEM32(0x8E8DEC) = esi;
    MEM32(0x8E8DE8) = esi;
    MEM32(0x8E8DF4) = edi;

loc_000FA88D: ;
    edx = MEM32(0x8E8E14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA8C6; /* jne: not equal / not zero */

loc_000FA897: ;
    edx = 0x8E8DF8;
    MEM32(0x8E8DF8) = esi;
    MEM32(0x8E8E00) = esi;
    MEM32(0x8E8DFC) = esi;
    MEM32(0x8E8E04) = esi;
    MEM32(0x8E8E0C) = esi;
    MEM32(0x8E8E08) = esi;
    MEM32(0x8E8E14) = edx;

loc_000FA8C6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x000FA8D1u); RECOMP_ABI_CALL(0x00023B51u, sub_00023B51); /* call 0x00023B51 */

loc_000FA8D1: ;
    POP32(esp, edi);
    esi = eax;
    POP32(esp, ebx);

loc_000FA8D5: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000FA8DBu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000FA8DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000FA920
 * Original: 0x000FA920 - 0x000FAA24 (260 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FA920: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA932; /* je: equal / zero */

loc_000FA929: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    eax = 0x7CFBC4;
    if (CMP_NE(_fa, _fb)) goto loc_000FA937; /* jne: not equal / not zero */

loc_000FA932: ;
    eax = 0x7CFBB4;

loc_000FA937: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FA947u); RECOMP_ABI_CALL(0x0002B3D3u, sub_0002B3D3); /* call 0x0002B3D3 */

loc_000FA947: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x18);
    ebx = eax;
    PUSH32(esp, 0x000FA951u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000FA951: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FAA16; /* je: equal / zero */

loc_000FA95C: ;
    ecx = MEM32(0x8E8D14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA995; /* jne: not equal / not zero */

loc_000FA966: ;
    ecx = 0x8E8CF8;
    MEM32(0x8E8CF8) = esi;
    MEM32(0x8E8D00) = esi;
    MEM32(0x8E8CFC) = esi;
    MEM32(0x8E8D04) = esi;
    MEM32(0x8E8D0C) = esi;
    MEM32(0x8E8D08) = esi;
    MEM32(0x8E8D14) = ecx;

loc_000FA995: ;
    PUSH32(esp, edi);
    edi = MEM32(0x8E8D34);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA9CF; /* jne: not equal / not zero */

loc_000FA9A0: ;
    edi = 0x8E8D18;
    MEM32(0x8E8D18) = esi;
    MEM32(0x8E8D20) = esi;
    MEM32(0x8E8D1C) = esi;
    MEM32(0x8E8D24) = esi;
    MEM32(0x8E8D2C) = esi;
    MEM32(0x8E8D28) = esi;
    MEM32(0x8E8D34) = edi;

loc_000FA9CF: ;
    edx = MEM32(0x8E8D54);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FAA08; /* jne: not equal / not zero */

loc_000FA9D9: ;
    edx = 0x8E8D38;
    MEM32(0x8E8D38) = esi;
    MEM32(0x8E8D40) = esi;
    MEM32(0x8E8D3C) = esi;
    MEM32(0x8E8D44) = esi;
    MEM32(0x8E8D4C) = esi;
    MEM32(0x8E8D48) = esi;
    MEM32(0x8E8D54) = edx;

loc_000FAA08: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x000FAA13u); RECOMP_ABI_CALL(0x00016ADCu, sub_00016ADC); /* call 0x00016ADC */

loc_000FAA13: ;
    esi = eax;
    POP32(esp, edi);

loc_000FAA16: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000FAA1Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000FAA1C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FAA70
 * Original: 0x000FAA70 - 0x000FAB63 (243 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000FAA70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FAA70: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x7CFBD4);
    PUSH32(esp, 0x000FAA84u); RECOMP_ABI_CALL(0x0002B3D3u, sub_0002B3D3); /* call 0x0002B3D3 */

loc_000FAA84: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x18);
    ebp = eax;
    PUSH32(esp, 0x000FAA8Eu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000FAA8E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FAB55; /* je: equal / zero */

loc_000FAA99: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x8E8D14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000FAAD4; /* jne: not equal / not zero */

loc_000FAAA5: ;
    ebx = 0x8E8CF8;
    MEM32(0x8E8CF8) = esi;
    MEM32(0x8E8D00) = esi;
    MEM32(0x8E8CFC) = esi;
    MEM32(0x8E8D04) = esi;
    MEM32(0x8E8D0C) = esi;
    MEM32(0x8E8D08) = esi;
    MEM32(0x8E8D14) = ebx;

loc_000FAAD4: ;
    edi = MEM32(0x8E8D34);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FAB0D; /* jne: not equal / not zero */

loc_000FAADE: ;
    edi = 0x8E8D18;
    MEM32(0x8E8D18) = esi;
    MEM32(0x8E8D20) = esi;
    MEM32(0x8E8D1C) = esi;
    MEM32(0x8E8D24) = esi;
    MEM32(0x8E8D2C) = esi;
    MEM32(0x8E8D28) = esi;
    MEM32(0x8E8D34) = edi;

loc_000FAB0D: ;
    edx = MEM32(0x8E8D54);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FAB46; /* jne: not equal / not zero */

loc_000FAB17: ;
    edx = 0x8E8D38;
    MEM32(0x8E8D38) = esi;
    MEM32(0x8E8D40) = esi;
    MEM32(0x8E8D3C) = esi;
    MEM32(0x8E8D44) = esi;
    MEM32(0x8E8D4C) = esi;
    MEM32(0x8E8D48) = esi;
    MEM32(0x8E8D54) = edx;

loc_000FAB46: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x000FAB51u); RECOMP_ABI_CALL(0x00016ADCu, sub_00016ADC); /* call 0x00016ADC */

loc_000FAB51: ;
    POP32(esp, edi);
    esi = eax;
    POP32(esp, ebx);

loc_000FAB55: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000FAB5Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000FAB5B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000FABA0
 * Original: 0x000FABA0 - 0x000FABC6 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FABA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FABA0: ;
    eax = MEM32(0x8F010C);
    ecx = MEM32(eax + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FABB2; /* je: equal / zero */

loc_000FABAC: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FABB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FABB0u); } /* indirect call */
    }

loc_000FABB2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000FABB9u); RECOMP_ABI_CALL(0x000318CDu, sub_000318CD); /* call 0x000318CD */

loc_000FABB9: ;
    ecx = MEM32(0x8F010C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x44) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000FABD0
 * Original: 0x000FABD0 - 0x000FABF6 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FABD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FABD0: ;
    eax = MEM32(0x8F010C);
    ecx = MEM32(eax + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FABE2; /* je: equal / zero */

loc_000FABDC: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FABE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FABE0u); } /* indirect call */
    }

loc_000FABE2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000FABE9u); RECOMP_ABI_CALL(0x00031B75u, sub_00031B75); /* call 0x00031B75 */

loc_000FABE9: ;
    ecx = MEM32(0x8F010C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x40) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000FAC00
 * Original: 0x000FAC00 - 0x000FAC26 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FAC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FAC00: ;
    eax = MEM32(0x8F010C);
    ecx = MEM32(eax + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FAC12; /* je: equal / zero */

loc_000FAC0C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FAC12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FAC10u); } /* indirect call */
    }

loc_000FAC12: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000FAC19u); RECOMP_ABI_CALL(0x00037403u, sub_00037403); /* call 0x00037403 */

loc_000FAC19: ;
    ecx = MEM32(0x8F010C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x3C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000FAC30
 * Original: 0x000FAC30 - 0x000FAC56 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FAC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FAC30: ;
    eax = MEM32(0x8F010C);
    ecx = MEM32(eax + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FAC42; /* je: equal / zero */

loc_000FAC3C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FAC42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FAC40u); } /* indirect call */
    }

loc_000FAC42: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000FAC49u); RECOMP_ABI_CALL(0x00028C23u, sub_00028C23); /* call 0x00028C23 */

loc_000FAC49: ;
    ecx = MEM32(0x8F010C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x48) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000FAC60
 * Original: 0x000FAC60 - 0x000FB882 (3106 bytes, 631 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FAC60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FAC60: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = ecx;
    MEM32(ecx) = esi;
    ecx = MEM32(0x8E8D54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FACA5; /* jne: not equal / not zero */

loc_000FAC76: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = esi;
    MEM32(0x8E8D40) = esi;
    MEM32(0x8E8D3C) = esi;
    MEM32(0x8E8D44) = esi;
    MEM32(0x8E8D4C) = esi;
    MEM32(0x8E8D48) = esi;
    MEM32(0x8E8D54) = ecx;

loc_000FACA5: ;
    PUSH32(esp, 0x11352);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0x7CF604;
    PUSH32(esp, 0x000FACBCu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_000FACBC: ;
    ecx = MEM32(0x8E8D54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FACF5; /* jne: not equal / not zero */

loc_000FACC6: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = esi;
    MEM32(0x8E8D40) = esi;
    MEM32(0x8E8D3C) = esi;
    MEM32(0x8E8D44) = esi;
    MEM32(0x8E8D4C) = esi;
    MEM32(0x8E8D48) = esi;
    MEM32(0x8E8D54) = ecx;

loc_000FACF5: ;
    PUSH32(esp, 0x341F9);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x7CF63C;
    PUSH32(esp, 0x000FAD0Cu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_000FAD0C: ;
    ecx = MEM32(0x8E8D34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FAD45; /* jne: not equal / not zero */

loc_000FAD16: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = esi;
    MEM32(0x8E8D20) = esi;
    MEM32(0x8E8D1C) = esi;
    MEM32(0x8E8D24) = esi;
    MEM32(0x8E8D2C) = esi;
    MEM32(0x8E8D28) = esi;
    MEM32(0x8E8D34) = ecx;

loc_000FAD45: ;
    PUSH32(esp, 0x168BB);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0x7CF8C8;
    PUSH32(esp, 0x000FAD5Cu); RECOMP_ABI_CALL(0x0001AA42u, sub_0001AA42); /* call 0x0001AA42 */

loc_000FAD5C: ;
    ecx = MEM32(0x8E8D34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FAD95; /* jne: not equal / not zero */

loc_000FAD66: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = esi;
    MEM32(0x8E8D20) = esi;
    MEM32(0x8E8D1C) = esi;
    MEM32(0x8E8D24) = esi;
    MEM32(0x8E8D2C) = esi;
    MEM32(0x8E8D28) = esi;
    MEM32(0x8E8D34) = ecx;

loc_000FAD95: ;
    PUSH32(esp, 0x1F9A7);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x7CF8EC;
    PUSH32(esp, 0x000FADACu); RECOMP_ABI_CALL(0x0001AA42u, sub_0001AA42); /* call 0x0001AA42 */

loc_000FADAC: ;
    ecx = MEM32(0x8E8D14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FADE5; /* jne: not equal / not zero */

loc_000FADB6: ;
    ecx = 0x8E8CF8;
    MEM32(0x8E8CF8) = esi;
    MEM32(0x8E8D00) = esi;
    MEM32(0x8E8CFC) = esi;
    MEM32(0x8E8D04) = esi;
    MEM32(0x8E8D0C) = esi;
    MEM32(0x8E8D08) = esi;
    MEM32(0x8E8D14) = ecx;

loc_000FADE5: ;
    PUSH32(esp, 0x3044B);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0x7CF9C4;
    PUSH32(esp, 0x000FADFCu); RECOMP_ABI_CALL(0x000235A7u, sub_000235A7); /* call 0x000235A7 */

loc_000FADFC: ;
    ecx = MEM32(0x8E8D14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FAE35; /* jne: not equal / not zero */

loc_000FAE06: ;
    ecx = 0x8E8CF8;
    MEM32(0x8E8CF8) = esi;
    MEM32(0x8E8D00) = esi;
    MEM32(0x8E8CFC) = esi;
    MEM32(0x8E8D04) = esi;
    MEM32(0x8E8D0C) = esi;
    MEM32(0x8E8D08) = esi;
    MEM32(0x8E8D14) = ecx;

loc_000FAE35: ;
    PUSH32(esp, 0x1AC40);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x7CF9F8;
    PUSH32(esp, 0x000FAE4Cu); RECOMP_ABI_CALL(0x000235A7u, sub_000235A7); /* call 0x000235A7 */

loc_000FAE4C: ;
    ecx = MEM32(0x8E8D14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FAE85; /* jne: not equal / not zero */

loc_000FAE56: ;
    ecx = 0x8E8CF8;
    MEM32(0x8E8CF8) = esi;
    MEM32(0x8E8D00) = esi;
    MEM32(0x8E8CFC) = esi;
    MEM32(0x8E8D04) = esi;
    MEM32(0x8E8D0C) = esi;
    MEM32(0x8E8D08) = esi;
    MEM32(0x8E8D14) = ecx;

loc_000FAE85: ;
    PUSH32(esp, 0x31602);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0x7CFA2C;
    PUSH32(esp, 0x000FAE9Cu); RECOMP_ABI_CALL(0x000235A7u, sub_000235A7); /* call 0x000235A7 */

loc_000FAE9C: ;
    ecx = MEM32(0x8E8D14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FAED5; /* jne: not equal / not zero */

loc_000FAEA6: ;
    ecx = 0x8E8CF8;
    MEM32(0x8E8CF8) = esi;
    MEM32(0x8E8D00) = esi;
    MEM32(0x8E8CFC) = esi;
    MEM32(0x8E8D04) = esi;
    MEM32(0x8E8D0C) = esi;
    MEM32(0x8E8D08) = esi;
    MEM32(0x8E8D14) = ecx;

loc_000FAED5: ;
    PUSH32(esp, 0x3661B);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x7CFA60;
    PUSH32(esp, 0x000FAEECu); RECOMP_ABI_CALL(0x000235A7u, sub_000235A7); /* call 0x000235A7 */

loc_000FAEEC: ;
    ecx = MEM32(0x8E8D14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FAF25; /* jne: not equal / not zero */

loc_000FAEF6: ;
    ecx = 0x8E8CF8;
    MEM32(0x8E8CF8) = esi;
    MEM32(0x8E8D00) = esi;
    MEM32(0x8E8CFC) = esi;
    MEM32(0x8E8D04) = esi;
    MEM32(0x8E8D0C) = esi;
    MEM32(0x8E8D08) = esi;
    MEM32(0x8E8D14) = ecx;

loc_000FAF25: ;
    PUSH32(esp, 0x2C85A);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0x7CFA98;
    PUSH32(esp, 0x000FAF3Cu); RECOMP_ABI_CALL(0x000235A7u, sub_000235A7); /* call 0x000235A7 */

loc_000FAF3C: ;
    ecx = MEM32(0x8E8D54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FAF75; /* jne: not equal / not zero */

loc_000FAF46: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = esi;
    MEM32(0x8E8D40) = esi;
    MEM32(0x8E8D3C) = esi;
    MEM32(0x8E8D44) = esi;
    MEM32(0x8E8D4C) = esi;
    MEM32(0x8E8D48) = esi;
    MEM32(0x8E8D54) = ecx;

loc_000FAF75: ;
    PUSH32(esp, 0x30DD3);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x7CF66C;
    PUSH32(esp, 0x000FAF8Cu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_000FAF8C: ;
    ecx = MEM32(0x8E8D54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FAFC5; /* jne: not equal / not zero */

loc_000FAF96: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = esi;
    MEM32(0x8E8D40) = esi;
    MEM32(0x8E8D3C) = esi;
    MEM32(0x8E8D44) = esi;
    MEM32(0x8E8D4C) = esi;
    MEM32(0x8E8D48) = esi;
    MEM32(0x8E8D54) = ecx;

loc_000FAFC5: ;
    PUSH32(esp, 0x2F0AA);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0x7CF68C;
    PUSH32(esp, 0x000FAFDCu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_000FAFDC: ;
    ecx = MEM32(0x8E8D54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB015; /* jne: not equal / not zero */

loc_000FAFE6: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = esi;
    MEM32(0x8E8D40) = esi;
    MEM32(0x8E8D3C) = esi;
    MEM32(0x8E8D44) = esi;
    MEM32(0x8E8D4C) = esi;
    MEM32(0x8E8D48) = esi;
    MEM32(0x8E8D54) = ecx;

loc_000FB015: ;
    PUSH32(esp, 0x2AE2E);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x7CF6BC;
    PUSH32(esp, 0x000FB02Cu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_000FB02C: ;
    ecx = MEM32(0x8E8D54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB065; /* jne: not equal / not zero */

loc_000FB036: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = esi;
    MEM32(0x8E8D40) = esi;
    MEM32(0x8E8D3C) = esi;
    MEM32(0x8E8D44) = esi;
    MEM32(0x8E8D4C) = esi;
    MEM32(0x8E8D48) = esi;
    MEM32(0x8E8D54) = ecx;

loc_000FB065: ;
    PUSH32(esp, 0x1C91E);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0x7CF6E0;
    PUSH32(esp, 0x000FB07Cu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_000FB07C: ;
    ecx = MEM32(0x8E8D54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB0B5; /* jne: not equal / not zero */

loc_000FB086: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = esi;
    MEM32(0x8E8D40) = esi;
    MEM32(0x8E8D3C) = esi;
    MEM32(0x8E8D44) = esi;
    MEM32(0x8E8D4C) = esi;
    MEM32(0x8E8D48) = esi;
    MEM32(0x8E8D54) = ecx;

loc_000FB0B5: ;
    PUSH32(esp, 0x24FFB);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x7CF700;
    PUSH32(esp, 0x000FB0CCu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_000FB0CC: ;
    ecx = MEM32(0x8E8D54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB105; /* jne: not equal / not zero */

loc_000FB0D6: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = esi;
    MEM32(0x8E8D40) = esi;
    MEM32(0x8E8D3C) = esi;
    MEM32(0x8E8D44) = esi;
    MEM32(0x8E8D4C) = esi;
    MEM32(0x8E8D48) = esi;
    MEM32(0x8E8D54) = ecx;

loc_000FB105: ;
    PUSH32(esp, 0x38024);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0x7CF720;
    PUSH32(esp, 0x000FB11Cu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_000FB11C: ;
    ecx = MEM32(0x8E8D54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB155; /* jne: not equal / not zero */

loc_000FB126: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = esi;
    MEM32(0x8E8D40) = esi;
    MEM32(0x8E8D3C) = esi;
    MEM32(0x8E8D44) = esi;
    MEM32(0x8E8D4C) = esi;
    MEM32(0x8E8D48) = esi;
    MEM32(0x8E8D54) = ecx;

loc_000FB155: ;
    PUSH32(esp, 0x18D55);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x7CF750;
    PUSH32(esp, 0x000FB16Cu); RECOMP_ABI_CALL(0x00026EFFu, sub_00026EFF); /* call 0x00026EFF */

loc_000FB16C: ;
    ecx = MEM32(0x8E8DB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB1A5; /* jne: not equal / not zero */

loc_000FB176: ;
    ecx = 0x8E8D98;
    MEM32(0x8E8D98) = esi;
    MEM32(0x8E8DA0) = esi;
    MEM32(0x8E8D9C) = esi;
    MEM32(0x8E8DA4) = esi;
    MEM32(0x8E8DAC) = esi;
    MEM32(0x8E8DA8) = esi;
    MEM32(0x8E8DB4) = ecx;

loc_000FB1A5: ;
    PUSH32(esp, 0x21EFA);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0x7CF604;
    PUSH32(esp, 0x000FB1BCu); RECOMP_ABI_CALL(0x0002933Fu, sub_0002933F); /* call 0x0002933F */

loc_000FB1BC: ;
    ecx = MEM32(0x8E8D74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB1F5; /* jne: not equal / not zero */

loc_000FB1C6: ;
    ecx = 0x8E8D58;
    MEM32(0x8E8D58) = esi;
    MEM32(0x8E8D60) = esi;
    MEM32(0x8E8D5C) = esi;
    MEM32(0x8E8D64) = esi;
    MEM32(0x8E8D6C) = esi;
    MEM32(0x8E8D68) = esi;
    MEM32(0x8E8D74) = ecx;

loc_000FB1F5: ;
    PUSH32(esp, 0x144DA);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x7CF9C4;
    PUSH32(esp, 0x000FB20Cu); RECOMP_ABI_CALL(0x0002F041u, sub_0002F041); /* call 0x0002F041 */

loc_000FB20C: ;
    ecx = MEM32(0x8E8D94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB245; /* jne: not equal / not zero */

loc_000FB216: ;
    ecx = 0x8E8D78;
    MEM32(0x8E8D78) = esi;
    MEM32(0x8E8D80) = esi;
    MEM32(0x8E8D7C) = esi;
    MEM32(0x8E8D84) = esi;
    MEM32(0x8E8D8C) = esi;
    MEM32(0x8E8D88) = esi;
    MEM32(0x8E8D94) = ecx;

loc_000FB245: ;
    PUSH32(esp, 0x34D48);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0x7CF8C8;
    PUSH32(esp, 0x000FB25Cu); RECOMP_ABI_CALL(0x00012F13u, sub_00012F13); /* call 0x00012F13 */

loc_000FB25C: ;
    ecx = MEM32(0x8E8DB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB295; /* jne: not equal / not zero */

loc_000FB266: ;
    ecx = 0x8E8D98;
    MEM32(0x8E8D98) = esi;
    MEM32(0x8E8DA0) = esi;
    MEM32(0x8E8D9C) = esi;
    MEM32(0x8E8DA4) = esi;
    MEM32(0x8E8DAC) = esi;
    MEM32(0x8E8DA8) = esi;
    MEM32(0x8E8DB4) = ecx;

loc_000FB295: ;
    PUSH32(esp, 0x15E89);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x7CF66C;
    PUSH32(esp, 0x000FB2ACu); RECOMP_ABI_CALL(0x0002933Fu, sub_0002933F); /* call 0x0002933F */

loc_000FB2AC: ;
    ecx = MEM32(0x8E8DB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB2E5; /* jne: not equal / not zero */

loc_000FB2B6: ;
    ecx = 0x8E8D98;
    MEM32(0x8E8D98) = esi;
    MEM32(0x8E8DA0) = esi;
    MEM32(0x8E8D9C) = esi;
    MEM32(0x8E8DA4) = esi;
    MEM32(0x8E8DAC) = esi;
    MEM32(0x8E8DA8) = esi;
    MEM32(0x8E8DB4) = ecx;

loc_000FB2E5: ;
    PUSH32(esp, 0x2A85C);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0x7CF68C;
    PUSH32(esp, 0x000FB2FCu); RECOMP_ABI_CALL(0x0002933Fu, sub_0002933F); /* call 0x0002933F */

loc_000FB2FC: ;
    ecx = MEM32(0x8E8DB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB335; /* jne: not equal / not zero */

loc_000FB306: ;
    ecx = 0x8E8D98;
    MEM32(0x8E8D98) = esi;
    MEM32(0x8E8DA0) = esi;
    MEM32(0x8E8D9C) = esi;
    MEM32(0x8E8DA4) = esi;
    MEM32(0x8E8DAC) = esi;
    MEM32(0x8E8DA8) = esi;
    MEM32(0x8E8DB4) = ecx;

loc_000FB335: ;
    PUSH32(esp, 0x2710C);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x7CF6BC;
    PUSH32(esp, 0x000FB34Cu); RECOMP_ABI_CALL(0x0002933Fu, sub_0002933F); /* call 0x0002933F */

loc_000FB34C: ;
    ecx = MEM32(0x8E8DB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB385; /* jne: not equal / not zero */

loc_000FB356: ;
    ecx = 0x8E8D98;
    MEM32(0x8E8D98) = esi;
    MEM32(0x8E8DA0) = esi;
    MEM32(0x8E8D9C) = esi;
    MEM32(0x8E8DA4) = esi;
    MEM32(0x8E8DAC) = esi;
    MEM32(0x8E8DA8) = esi;
    MEM32(0x8E8DB4) = ecx;

loc_000FB385: ;
    PUSH32(esp, 0x26969);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0x7CF7D0;
    PUSH32(esp, 0x000FB39Cu); RECOMP_ABI_CALL(0x0002933Fu, sub_0002933F); /* call 0x0002933F */

loc_000FB39C: ;
    ecx = MEM32(0x8E8E14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB3D5; /* jne: not equal / not zero */

loc_000FB3A6: ;
    ecx = 0x8E8DF8;
    MEM32(0x8E8DF8) = esi;
    MEM32(0x8E8E00) = esi;
    MEM32(0x8E8DFC) = esi;
    MEM32(0x8E8E04) = esi;
    MEM32(0x8E8E0C) = esi;
    MEM32(0x8E8E08) = esi;
    MEM32(0x8E8E14) = ecx;

loc_000FB3D5: ;
    PUSH32(esp, 0x2E731);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x7CF604;
    PUSH32(esp, 0x000FB3ECu); RECOMP_ABI_CALL(0x0002CC01u, sub_0002CC01); /* call 0x0002CC01 */

loc_000FB3EC: ;
    ecx = MEM32(0x8E8DF4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB425; /* jne: not equal / not zero */

loc_000FB3F6: ;
    ecx = 0x8E8DD8;
    MEM32(0x8E8DD8) = esi;
    MEM32(0x8E8DE0) = esi;
    MEM32(0x8E8DDC) = esi;
    MEM32(0x8E8DE4) = esi;
    MEM32(0x8E8DEC) = esi;
    MEM32(0x8E8DE8) = esi;
    MEM32(0x8E8DF4) = ecx;

loc_000FB425: ;
    PUSH32(esp, 0x3064E);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0x7CF8C8;
    PUSH32(esp, 0x000FB43Cu); RECOMP_ABI_CALL(0x00037219u, sub_00037219); /* call 0x00037219 */

loc_000FB43C: ;
    ecx = MEM32(0x8E8DD4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB475; /* jne: not equal / not zero */

loc_000FB446: ;
    ecx = 0x8E8DB8;
    MEM32(0x8E8DB8) = esi;
    MEM32(0x8E8DC0) = esi;
    MEM32(0x8E8DBC) = esi;
    MEM32(0x8E8DC4) = esi;
    MEM32(0x8E8DCC) = esi;
    MEM32(0x8E8DC8) = esi;
    MEM32(0x8E8DD4) = ecx;

loc_000FB475: ;
    PUSH32(esp, 0x11767);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x7CF9C4;
    PUSH32(esp, 0x000FB48Cu); RECOMP_ABI_CALL(0x000318FFu, sub_000318FF); /* call 0x000318FF */

loc_000FB48C: ;
    ecx = MEM32(0x8E8DF4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB4C5; /* jne: not equal / not zero */

loc_000FB496: ;
    ecx = 0x8E8DD8;
    MEM32(0x8E8DD8) = esi;
    MEM32(0x8E8DE0) = esi;
    MEM32(0x8E8DDC) = esi;
    MEM32(0x8E8DE4) = esi;
    MEM32(0x8E8DEC) = esi;
    MEM32(0x8E8DE8) = esi;
    MEM32(0x8E8DF4) = ecx;

loc_000FB4C5: ;
    PUSH32(esp, 0x27A1C);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0x7CF8EC;
    PUSH32(esp, 0x000FB4DCu); RECOMP_ABI_CALL(0x00037219u, sub_00037219); /* call 0x00037219 */

loc_000FB4DC: ;
    ecx = MEM32(0x8E8E14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB515; /* jne: not equal / not zero */

loc_000FB4E6: ;
    ecx = 0x8E8DF8;
    MEM32(0x8E8DF8) = esi;
    MEM32(0x8E8E00) = esi;
    MEM32(0x8E8DFC) = esi;
    MEM32(0x8E8E04) = esi;
    MEM32(0x8E8E0C) = esi;
    MEM32(0x8E8E08) = esi;
    MEM32(0x8E8E14) = ecx;

loc_000FB515: ;
    PUSH32(esp, 0x2E04C);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x7CF66C;
    PUSH32(esp, 0x000FB52Cu); RECOMP_ABI_CALL(0x0002CC01u, sub_0002CC01); /* call 0x0002CC01 */

loc_000FB52C: ;
    ecx = MEM32(0x8E8E14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB565; /* jne: not equal / not zero */

loc_000FB536: ;
    ecx = 0x8E8DF8;
    MEM32(0x8E8DF8) = esi;
    MEM32(0x8E8E00) = esi;
    MEM32(0x8E8DFC) = esi;
    MEM32(0x8E8E04) = esi;
    MEM32(0x8E8E0C) = esi;
    MEM32(0x8E8E08) = esi;
    MEM32(0x8E8E14) = ecx;

loc_000FB565: ;
    PUSH32(esp, 0x30EC8);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0x7CF6BC;
    PUSH32(esp, 0x000FB57Cu); RECOMP_ABI_CALL(0x0002CC01u, sub_0002CC01); /* call 0x0002CC01 */

loc_000FB57C: ;
    ecx = MEM32(0x8E8E14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB5B5; /* jne: not equal / not zero */

loc_000FB586: ;
    ecx = 0x8E8DF8;
    MEM32(0x8E8DF8) = esi;
    MEM32(0x8E8E00) = esi;
    MEM32(0x8E8DFC) = esi;
    MEM32(0x8E8E04) = esi;
    MEM32(0x8E8E0C) = esi;
    MEM32(0x8E8E08) = esi;
    MEM32(0x8E8E14) = ecx;

loc_000FB5B5: ;
    PUSH32(esp, 0x2353E);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x7CF7AC;
    PUSH32(esp, 0x000FB5CCu); RECOMP_ABI_CALL(0x0002CC01u, sub_0002CC01); /* call 0x0002CC01 */

loc_000FB5CC: ;
    ecx = MEM32(0x8E8E14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB605; /* jne: not equal / not zero */

loc_000FB5D6: ;
    ecx = 0x8E8DF8;
    MEM32(0x8E8DF8) = esi;
    MEM32(0x8E8E00) = esi;
    MEM32(0x8E8DFC) = esi;
    MEM32(0x8E8E04) = esi;
    MEM32(0x8E8E0C) = esi;
    MEM32(0x8E8E08) = esi;
    MEM32(0x8E8E14) = ecx;

loc_000FB605: ;
    PUSH32(esp, 0x28DD6);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0x7CF7D0;
    PUSH32(esp, 0x000FB61Cu); RECOMP_ABI_CALL(0x0002CC01u, sub_0002CC01); /* call 0x0002CC01 */

loc_000FB61C: ;
    ecx = MEM32(0x8E8E14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB655; /* jne: not equal / not zero */

loc_000FB626: ;
    ecx = 0x8E8DF8;
    MEM32(0x8E8DF8) = esi;
    MEM32(0x8E8E00) = esi;
    MEM32(0x8E8DFC) = esi;
    MEM32(0x8E8E04) = esi;
    MEM32(0x8E8E0C) = esi;
    MEM32(0x8E8E08) = esi;
    MEM32(0x8E8E14) = ecx;

loc_000FB655: ;
    PUSH32(esp, 0x11E33);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x7CF6E0;
    PUSH32(esp, 0x000FB66Cu); RECOMP_ABI_CALL(0x0002CC01u, sub_0002CC01); /* call 0x0002CC01 */

loc_000FB66C: ;
    ecx = MEM32(0x8E8E14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB6A5; /* jne: not equal / not zero */

loc_000FB676: ;
    ecx = 0x8E8DF8;
    MEM32(0x8E8DF8) = esi;
    MEM32(0x8E8E00) = esi;
    MEM32(0x8E8DFC) = esi;
    MEM32(0x8E8E04) = esi;
    MEM32(0x8E8E0C) = esi;
    MEM32(0x8E8E08) = esi;
    MEM32(0x8E8E14) = ecx;

loc_000FB6A5: ;
    PUSH32(esp, 0x223E1);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0x7CF700;
    PUSH32(esp, 0x000FB6BCu); RECOMP_ABI_CALL(0x0002CC01u, sub_0002CC01); /* call 0x0002CC01 */

loc_000FB6BC: ;
    ecx = MEM32(0x8E8E14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB6F5; /* jne: not equal / not zero */

loc_000FB6C6: ;
    ecx = 0x8E8DF8;
    MEM32(0x8E8DF8) = esi;
    MEM32(0x8E8E00) = esi;
    MEM32(0x8E8DFC) = esi;
    MEM32(0x8E8E04) = esi;
    MEM32(0x8E8E0C) = esi;
    MEM32(0x8E8E08) = esi;
    MEM32(0x8E8E14) = ecx;

loc_000FB6F5: ;
    PUSH32(esp, 0x1ED1D);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x7CF750;
    PUSH32(esp, 0x000FB70Cu); RECOMP_ABI_CALL(0x0002CC01u, sub_0002CC01); /* call 0x0002CC01 */

loc_000FB70C: ;
    ecx = MEM32(0x8E8EB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB745; /* jne: not equal / not zero */

loc_000FB716: ;
    ecx = 0x8E8E98;
    MEM32(0x8E8E98) = esi;
    MEM32(0x8E8EA0) = esi;
    MEM32(0x8E8E9C) = esi;
    MEM32(0x8E8EA4) = esi;
    MEM32(0x8E8EAC) = esi;
    MEM32(0x8E8EA8) = esi;
    MEM32(0x8E8EB4) = ecx;

loc_000FB745: ;
    PUSH32(esp, 0x2C1CA);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0x7CF604;
    PUSH32(esp, 0x000FB75Cu); RECOMP_ABI_CALL(0x0002C44Fu, sub_0002C44F); /* call 0x0002C44F */

loc_000FB75C: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB795; /* jne: not equal / not zero */

loc_000FB766: ;
    ecx = 0x8E8E78;
    MEM32(0x8E8E78) = esi;
    MEM32(0x8E8E80) = esi;
    MEM32(0x8E8E7C) = esi;
    MEM32(0x8E8E84) = esi;
    MEM32(0x8E8E8C) = esi;
    MEM32(0x8E8E88) = esi;
    MEM32(0x8E8E94) = ecx;

loc_000FB795: ;
    PUSH32(esp, 0x23A66);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x7CF8EC;
    PUSH32(esp, 0x000FB7ACu); RECOMP_ABI_CALL(0x000326D8u, sub_000326D8); /* call 0x000326D8 */

loc_000FB7AC: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB7E5; /* jne: not equal / not zero */

loc_000FB7B6: ;
    ecx = 0x8E8E78;
    MEM32(0x8E8E78) = esi;
    MEM32(0x8E8E80) = esi;
    MEM32(0x8E8E7C) = esi;
    MEM32(0x8E8E84) = esi;
    MEM32(0x8E8E8C) = esi;
    MEM32(0x8E8E88) = esi;
    MEM32(0x8E8E94) = ecx;

loc_000FB7E5: ;
    PUSH32(esp, 0x1A84E);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0x7CF8C8;
    PUSH32(esp, 0x000FB7FCu); RECOMP_ABI_CALL(0x000326D8u, sub_000326D8); /* call 0x000326D8 */

loc_000FB7FC: ;
    ecx = MEM32(0x8E8E74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB835; /* jne: not equal / not zero */

loc_000FB806: ;
    ecx = 0x8E8E58;
    MEM32(0x8E8E58) = esi;
    MEM32(0x8E8E60) = esi;
    MEM32(0x8E8E5C) = esi;
    MEM32(0x8E8E64) = esi;
    MEM32(0x8E8E6C) = esi;
    MEM32(0x8E8E68) = esi;
    MEM32(0x8E8E74) = ecx;

loc_000FB835: ;
    PUSH32(esp, 0x30635);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x7CFA2C;
    PUSH32(esp, 0x000FB84Cu); RECOMP_ABI_CALL(0x0001771Bu, sub_0001771B); /* call 0x0001771B */

loc_000FB84C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000FB853u); RECOMP_ABI_CALL(0x00037403u, sub_00037403); /* call 0x00037403 */

loc_000FB853: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    MEM32(esi + 0x3C) = eax;
    PUSH32(esp, 0x000FB861u); RECOMP_ABI_CALL(0x00031B75u, sub_00031B75); /* call 0x00031B75 */

loc_000FB861: ;
    PUSH32(esp, 1);
    MEM32(esi + 0x40) = eax;
    PUSH32(esp, 0x000FB86Bu); RECOMP_ABI_CALL(0x000318CDu, sub_000318CD); /* call 0x000318CD */

loc_000FB86B: ;
    PUSH32(esp, 1);
    MEM32(esi + 0x44) = eax;
    PUSH32(esp, 0x000FB875u); RECOMP_ABI_CALL(0x00028C23u, sub_00028C23); /* call 0x00028C23 */

loc_000FB875: ;
    MEM32(esi + 0x48) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FBB90
 * Original: 0x000FBB90 - 0x000FBEC7 (823 bytes, 188 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FBB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FBB90: ;
    eax = MEM32(0x8E8EB4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000FBBCD; /* jne: not equal / not zero */

loc_000FBB9F: ;
    eax = 0x8E8E98;
    MEM32(0x8E8E98) = esi;
    MEM32(0x8E8EA0) = esi;
    MEM32(0x8E8E9C) = esi;
    MEM32(0x8E8EA4) = esi;
    MEM32(0x8E8EAC) = esi;
    MEM32(0x8E8EA8) = esi;
    MEM32(0x8E8EB4) = eax;

loc_000FBBCD: ;
    ecx = eax + 0xC;
    PUSH32(esp, 0x000FBBD5u); RECOMP_ABI_CALL(0x00023F5Cu, sub_00023F5C); /* call 0x00023F5C */

loc_000FBBD5: ;
    eax = MEM32(0x8E8E94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FBC0C; /* jne: not equal / not zero */

loc_000FBBDE: ;
    eax = 0x8E8E78;
    MEM32(0x8E8E78) = esi;
    MEM32(0x8E8E80) = esi;
    MEM32(0x8E8E7C) = esi;
    MEM32(0x8E8E84) = esi;
    MEM32(0x8E8E8C) = esi;
    MEM32(0x8E8E88) = esi;
    MEM32(0x8E8E94) = eax;

loc_000FBC0C: ;
    ecx = eax + 0xC;
    PUSH32(esp, 0x000FBC14u); RECOMP_ABI_CALL(0x0002CF17u, sub_0002CF17); /* call 0x0002CF17 */

loc_000FBC14: ;
    eax = MEM32(0x8E8E74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FBC4B; /* jne: not equal / not zero */

loc_000FBC1D: ;
    eax = 0x8E8E58;
    MEM32(0x8E8E58) = esi;
    MEM32(0x8E8E60) = esi;
    MEM32(0x8E8E5C) = esi;
    MEM32(0x8E8E64) = esi;
    MEM32(0x8E8E6C) = esi;
    MEM32(0x8E8E68) = esi;
    MEM32(0x8E8E74) = eax;

loc_000FBC4B: ;
    ecx = eax + 0xC;
    PUSH32(esp, 0x000FBC53u); RECOMP_ABI_CALL(0x0002E6BEu, sub_0002E6BE); /* call 0x0002E6BE */

loc_000FBC53: ;
    eax = MEM32(0x8E8D54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FBC8A; /* jne: not equal / not zero */

loc_000FBC5C: ;
    eax = 0x8E8D38;
    MEM32(0x8E8D38) = esi;
    MEM32(0x8E8D40) = esi;
    MEM32(0x8E8D3C) = esi;
    MEM32(0x8E8D44) = esi;
    MEM32(0x8E8D4C) = esi;
    MEM32(0x8E8D48) = esi;
    MEM32(0x8E8D54) = eax;

loc_000FBC8A: ;
    ecx = eax + 0xC;
    PUSH32(esp, 0x000FBC92u); RECOMP_ABI_CALL(0x0002572Bu, sub_0002572B); /* call 0x0002572B */

loc_000FBC92: ;
    eax = MEM32(0x8E8D34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FBCC9; /* jne: not equal / not zero */

loc_000FBC9B: ;
    eax = 0x8E8D18;
    MEM32(0x8E8D18) = esi;
    MEM32(0x8E8D20) = esi;
    MEM32(0x8E8D1C) = esi;
    MEM32(0x8E8D24) = esi;
    MEM32(0x8E8D2C) = esi;
    MEM32(0x8E8D28) = esi;
    MEM32(0x8E8D34) = eax;

loc_000FBCC9: ;
    ecx = eax + 0xC;
    PUSH32(esp, 0x000FBCD1u); RECOMP_ABI_CALL(0x0003147Cu, sub_0003147C); /* call 0x0003147C */

loc_000FBCD1: ;
    eax = MEM32(0x8E8D14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FBD08; /* jne: not equal / not zero */

loc_000FBCDA: ;
    eax = 0x8E8CF8;
    MEM32(0x8E8CF8) = esi;
    MEM32(0x8E8D00) = esi;
    MEM32(0x8E8CFC) = esi;
    MEM32(0x8E8D04) = esi;
    MEM32(0x8E8D0C) = esi;
    MEM32(0x8E8D08) = esi;
    MEM32(0x8E8D14) = eax;

loc_000FBD08: ;
    ecx = eax + 0xC;
    PUSH32(esp, 0x000FBD10u); RECOMP_ABI_CALL(0x000126D5u, sub_000126D5); /* call 0x000126D5 */

loc_000FBD10: ;
    eax = MEM32(0x8E8DB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FBD47; /* jne: not equal / not zero */

loc_000FBD19: ;
    eax = 0x8E8D98;
    MEM32(0x8E8D98) = esi;
    MEM32(0x8E8DA0) = esi;
    MEM32(0x8E8D9C) = esi;
    MEM32(0x8E8DA4) = esi;
    MEM32(0x8E8DAC) = esi;
    MEM32(0x8E8DA8) = esi;
    MEM32(0x8E8DB4) = eax;

loc_000FBD47: ;
    ecx = eax + 0xC;
    PUSH32(esp, 0x000FBD4Fu); RECOMP_ABI_CALL(0x000181B1u, sub_000181B1); /* call 0x000181B1 */

loc_000FBD4F: ;
    eax = MEM32(0x8E8D94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FBD86; /* jne: not equal / not zero */

loc_000FBD58: ;
    eax = 0x8E8D78;
    MEM32(0x8E8D78) = esi;
    MEM32(0x8E8D80) = esi;
    MEM32(0x8E8D7C) = esi;
    MEM32(0x8E8D84) = esi;
    MEM32(0x8E8D8C) = esi;
    MEM32(0x8E8D88) = esi;
    MEM32(0x8E8D94) = eax;

loc_000FBD86: ;
    ecx = eax + 0xC;
    PUSH32(esp, 0x000FBD8Eu); RECOMP_ABI_CALL(0x00027E40u, sub_00027E40); /* call 0x00027E40 */

loc_000FBD8E: ;
    eax = MEM32(0x8E8D74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FBDC5; /* jne: not equal / not zero */

loc_000FBD97: ;
    eax = 0x8E8D58;
    MEM32(0x8E8D58) = esi;
    MEM32(0x8E8D60) = esi;
    MEM32(0x8E8D5C) = esi;
    MEM32(0x8E8D64) = esi;
    MEM32(0x8E8D6C) = esi;
    MEM32(0x8E8D68) = esi;
    MEM32(0x8E8D74) = eax;

loc_000FBDC5: ;
    ecx = eax + 0xC;
    PUSH32(esp, 0x000FBDCDu); RECOMP_ABI_CALL(0x00037F8Eu, sub_00037F8E); /* call 0x00037F8E */

loc_000FBDCD: ;
    eax = MEM32(0x8E8E14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FBE04; /* jne: not equal / not zero */

loc_000FBDD6: ;
    eax = 0x8E8DF8;
    MEM32(0x8E8DF8) = esi;
    MEM32(0x8E8E00) = esi;
    MEM32(0x8E8DFC) = esi;
    MEM32(0x8E8E04) = esi;
    MEM32(0x8E8E0C) = esi;
    MEM32(0x8E8E08) = esi;
    MEM32(0x8E8E14) = eax;

loc_000FBE04: ;
    ecx = eax + 0xC;
    PUSH32(esp, 0x000FBE0Cu); RECOMP_ABI_CALL(0x00036B7Fu, sub_00036B7F); /* call 0x00036B7F */

loc_000FBE0C: ;
    eax = MEM32(0x8E8DF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FBE43; /* jne: not equal / not zero */

loc_000FBE15: ;
    eax = 0x8E8DD8;
    MEM32(0x8E8DD8) = esi;
    MEM32(0x8E8DE0) = esi;
    MEM32(0x8E8DDC) = esi;
    MEM32(0x8E8DE4) = esi;
    MEM32(0x8E8DEC) = esi;
    MEM32(0x8E8DE8) = esi;
    MEM32(0x8E8DF4) = eax;

loc_000FBE43: ;
    ecx = eax + 0xC;
    PUSH32(esp, 0x000FBE4Bu); RECOMP_ABI_CALL(0x00032C05u, sub_00032C05); /* call 0x00032C05 */

loc_000FBE4B: ;
    eax = MEM32(0x8E8DD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FBE82; /* jne: not equal / not zero */

loc_000FBE54: ;
    eax = 0x8E8DB8;
    MEM32(0x8E8DB8) = esi;
    MEM32(0x8E8DC0) = esi;
    MEM32(0x8E8DBC) = esi;
    MEM32(0x8E8DC4) = esi;
    MEM32(0x8E8DCC) = esi;
    MEM32(0x8E8DC8) = esi;
    MEM32(0x8E8DD4) = eax;

loc_000FBE82: ;
    ecx = eax + 0xC;
    PUSH32(esp, 0x000FBE8Au); RECOMP_ABI_CALL(0x00036409u, sub_00036409); /* call 0x00036409 */

loc_000FBE8A: ;
    ecx = MEM32(edi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FBE97; /* je: equal / zero */

loc_000FBE91: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FBE97u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FBE95u); } /* indirect call */
    }

loc_000FBE97: ;
    ecx = MEM32(edi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FBEA4; /* je: equal / zero */

loc_000FBE9E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FBEA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FBEA2u); } /* indirect call */
    }

loc_000FBEA4: ;
    ecx = MEM32(edi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FBEB1; /* je: equal / zero */

loc_000FBEAB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FBEB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FBEAFu); } /* indirect call */
    }

loc_000FBEB1: ;
    ecx = MEM32(edi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FBEBE; /* je: equal / zero */

loc_000FBEB8: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FBEBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FBEBCu); } /* indirect call */
    }

loc_000FBEBE: ;
    POP32(esp, edi);
    MEM32(0x8F010C) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FBFA0
 * Original: 0x000FBFA0 - 0x000FBFA9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FBFA0(void)
{

loc_000FBFA0: ;
    eax = ecx;
    MEM32(eax) = 0x7D0084;
    esp += 4; return; /* ret */

}

/**
 * sub_000FBFB0
 * Original: 0x000FBFB0 - 0x000FBFB3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FBFB0(void)
{

loc_000FBFB0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FBFC0
 * Original: 0x000FBFC0 - 0x000FBFCD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FBFC0(void)
{

loc_000FBFC0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D0094;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FBFD0
 * Original: 0x000FBFD0 - 0x000FC024 (84 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FBFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000FBFD0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FBFDEu); RECOMP_ABI_CALL(0x0002893Fu, sub_0002893F); /* call 0x0002893F */

loc_000FBFDE: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FBFF4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_000FBFEF: ;
    xmm0 = xmm1; /* movaps */
    goto loc_000FBFFB;

loc_000FBFF4: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_000FBFFB: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7BA420); /* comiss */
    eax = MEM32(esp + 0x10);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FC01A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7BA420)) */

loc_000FC008: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000FC01A: ;
    MEMF(eax) = xmm2.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000FC040
 * Original: 0x000FC040 - 0x000FC049 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC040(void)
{

loc_000FC040: ;
    eax = ecx;
    MEM32(eax) = 0x7D00B0;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC050
 * Original: 0x000FC050 - 0x000FC053 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC050(void)
{

loc_000FC050: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC060
 * Original: 0x000FC060 - 0x000FC06D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC060(void)
{

loc_000FC060: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D00C0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC070
 * Original: 0x000FC070 - 0x000FC0E6 (118 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000FC070: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FC07Eu); RECOMP_ABI_CALL(0x0002893Fu, sub_0002893F); /* call 0x0002893F */

loc_000FC07E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FC094; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000FC08F: ;
    xmm1 = xmm0; /* movaps */
    goto loc_000FC09B;

loc_000FC094: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_000FC09B: ;
    _fca = xmm1.f[0]; _fcb = MEMF(0x7BA43C); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FC0D8; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(0x7BA43C)) */

loc_000FC0A4: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FC0AE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000FC0A9: ;
    xmm1 = xmm0; /* movaps */
    goto loc_000FC0B5;

loc_000FC0AE: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_000FC0B5: ;
    xmm0 = XMM_SCALAR(MEMF(0x7BA420)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FC0D8; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000FC0C2: ;
    eax = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000FC0D8: ;
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm2.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000FC110
 * Original: 0x000FC110 - 0x000FC119 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC110(void)
{

loc_000FC110: ;
    eax = ecx;
    MEM32(eax) = 0x7D00DC;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC120
 * Original: 0x000FC120 - 0x000FC123 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC120(void)
{

loc_000FC120: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC130
 * Original: 0x000FC130 - 0x000FC13D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC130(void)
{

loc_000FC130: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D00EC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC140
 * Original: 0x000FC140 - 0x000FC198 (88 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000FC140: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FC14Eu); RECOMP_ABI_CALL(0x0002893Fu, sub_0002893F); /* call 0x0002893F */

loc_000FC14E: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FC164; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_000FC15F: ;
    xmm0 = xmm1; /* movaps */
    goto loc_000FC16B;

loc_000FC164: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_000FC16B: ;
    xmm1 = XMM_SCALAR(MEMF(0x7BA43C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    eax = MEM32(esp + 0x10);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FC18E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000FC17C: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000FC18E: ;
    MEMF(eax) = xmm2.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000FC1B0
 * Original: 0x000FC1B0 - 0x000FC1B9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC1B0(void)
{

loc_000FC1B0: ;
    eax = ecx;
    MEM32(eax) = 0x7D0108;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC1C0
 * Original: 0x000FC1C0 - 0x000FC1C3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC1C0(void)
{

loc_000FC1C0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC1D0
 * Original: 0x000FC1D0 - 0x000FC1DD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC1D0(void)
{

loc_000FC1D0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D0118;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC1E0
 * Original: 0x000FC1E0 - 0x000FC220 (64 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000FC1E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FC1EEu); RECOMP_ABI_CALL(0x0002893Fu, sub_0002893F); /* call 0x0002893F */

loc_000FC1EE: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A99C0)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x8E931C); /* subss */
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(esp); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_000FC216; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esp)) */

loc_000FC213: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000FC216: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000FC230
 * Original: 0x000FC230 - 0x000FC239 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC230(void)
{

loc_000FC230: ;
    eax = ecx;
    MEM32(eax) = 0x7D0140;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC240
 * Original: 0x000FC240 - 0x000FC243 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC240(void)
{

loc_000FC240: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC250
 * Original: 0x000FC250 - 0x000FC25D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC250(void)
{

loc_000FC250: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D0150;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC260
 * Original: 0x000FC260 - 0x000FC2A5 (69 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000FC260: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FC26Eu); RECOMP_ABI_CALL(0x0002893Fu, sub_0002893F); /* call 0x0002893F */

loc_000FC26E: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E931C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A99C0); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_000FC29B; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000FC298: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000FC29B: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000FC2C0
 * Original: 0x000FC2C0 - 0x000FC2C9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC2C0(void)
{

loc_000FC2C0: ;
    eax = ecx;
    MEM32(eax) = 0x7D0178;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC2D0
 * Original: 0x000FC2D0 - 0x000FC2D3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC2D0(void)
{

loc_000FC2D0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC2E0
 * Original: 0x000FC2E0 - 0x000FC2ED (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC2E0(void)
{

loc_000FC2E0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D0188;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC2F0
 * Original: 0x000FC2F0 - 0x000FC345 (85 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000FC2F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FC2FEu); RECOMP_ABI_CALL(0x0002893Fu, sub_0002893F); /* call 0x0002893F */

loc_000FC2FE: ;
    xmm1 = XMM_SCALAR(MEMF(0x8E931C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A99C0)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm3 = xmm1; /* movaps */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FC334; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_000FC323: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca > _fcb)) goto loc_000FC337; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_000FC334: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000FC337: ;
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000FC360
 * Original: 0x000FC360 - 0x000FC369 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC360(void)
{

loc_000FC360: ;
    eax = ecx;
    MEM32(eax) = 0x7D01A4;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC370
 * Original: 0x000FC370 - 0x000FC373 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC370(void)
{

loc_000FC370: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000FC380
 * Original: 0x000FC380 - 0x000FC38D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC380(void)
{

loc_000FC380: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D01B4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC390
 * Original: 0x000FC390 - 0x000FC399 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC390(void)
{

loc_000FC390: ;
    eax = ecx;
    MEM32(eax) = 0x7D01D4;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC3A0
 * Original: 0x000FC3A0 - 0x000FC3A3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC3A0(void)
{

loc_000FC3A0: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000FC3B0
 * Original: 0x000FC3B0 - 0x000FC3BD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC3B0(void)
{

loc_000FC3B0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D01E4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC3C0
 * Original: 0x000FC3C0 - 0x000FC3C9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC3C0(void)
{

loc_000FC3C0: ;
    eax = ecx;
    MEM32(eax) = 0x7D0204;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC3D0
 * Original: 0x000FC3D0 - 0x000FC3D3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC3D0(void)
{

loc_000FC3D0: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000FC3E0
 * Original: 0x000FC3E0 - 0x000FC3ED (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC3E0(void)
{

loc_000FC3E0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D0214;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC3F0
 * Original: 0x000FC3F0 - 0x000FC3F9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC3F0(void)
{

loc_000FC3F0: ;
    eax = ecx;
    MEM32(eax) = 0x7D0228;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC400
 * Original: 0x000FC400 - 0x000FC403 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC400(void)
{

loc_000FC400: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000FC410
 * Original: 0x000FC410 - 0x000FC41D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC410(void)
{

loc_000FC410: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D0238;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC420
 * Original: 0x000FC420 - 0x000FC429 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC420(void)
{

loc_000FC420: ;
    eax = ecx;
    MEM32(eax) = 0x7D0248;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC430
 * Original: 0x000FC430 - 0x000FC433 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC430(void)
{

loc_000FC430: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000FC440
 * Original: 0x000FC440 - 0x000FC44D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC440(void)
{

loc_000FC440: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D0258;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC450
 * Original: 0x000FC450 - 0x000FC459 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC450(void)
{

loc_000FC450: ;
    eax = ecx;
    MEM32(eax) = 0x7D0268;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC460
 * Original: 0x000FC460 - 0x000FC463 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC460(void)
{

loc_000FC460: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000FC470
 * Original: 0x000FC470 - 0x000FC47D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC470(void)
{

loc_000FC470: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D0278;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC480
 * Original: 0x000FC480 - 0x000FC489 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC480(void)
{

loc_000FC480: ;
    eax = ecx;
    MEM32(eax) = 0x7D028C;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC490
 * Original: 0x000FC490 - 0x000FC493 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC490(void)
{

loc_000FC490: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000FC4A0
 * Original: 0x000FC4A0 - 0x000FC4AD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC4A0(void)
{

loc_000FC4A0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D029C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC4B0
 * Original: 0x000FC4B0 - 0x000FC4B9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC4B0(void)
{

loc_000FC4B0: ;
    eax = ecx;
    MEM32(eax) = 0x7D02B8;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC4C0
 * Original: 0x000FC4C0 - 0x000FC4C3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC4C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC4C0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FC4D0
 * Original: 0x000FC4D0 - 0x000FC4DD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC4D0(void)
{

loc_000FC4D0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D02C8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC4E0
 * Original: 0x000FC4E0 - 0x000FC4E9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC4E0(void)
{

loc_000FC4E0: ;
    eax = ecx;
    MEM32(eax) = 0x7D02DC;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC4F0
 * Original: 0x000FC4F0 - 0x000FC4F3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC4F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC4F0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FC500
 * Original: 0x000FC500 - 0x000FC50D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC500(void)
{

loc_000FC500: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D02EC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC510
 * Original: 0x000FC510 - 0x000FC519 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC510(void)
{

loc_000FC510: ;
    eax = ecx;
    MEM32(eax) = 0x7D0300;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC520
 * Original: 0x000FC520 - 0x000FC523 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC520(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC520: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FC530
 * Original: 0x000FC530 - 0x000FC53D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC530(void)
{

loc_000FC530: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D0310;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC540
 * Original: 0x000FC540 - 0x000FC549 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC540(void)
{

loc_000FC540: ;
    eax = ecx;
    MEM32(eax) = 0x7D0320;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC550
 * Original: 0x000FC550 - 0x000FC553 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC550: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FC560
 * Original: 0x000FC560 - 0x000FC56D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC560(void)
{

loc_000FC560: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D0330;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC570
 * Original: 0x000FC570 - 0x000FC579 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC570(void)
{

loc_000FC570: ;
    eax = ecx;
    MEM32(eax) = 0x7D0344;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC580
 * Original: 0x000FC580 - 0x000FC583 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC580(void)
{

loc_000FC580: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000FC590
 * Original: 0x000FC590 - 0x000FC59D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC590(void)
{

loc_000FC590: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D0354;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC5A0
 * Original: 0x000FC5A0 - 0x000FC5A9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC5A0(void)
{

loc_000FC5A0: ;
    eax = ecx;
    MEM32(eax) = 0x7D0370;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC5B0
 * Original: 0x000FC5B0 - 0x000FC5B3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC5B0(void)
{

loc_000FC5B0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC5C0
 * Original: 0x000FC5C0 - 0x000FC5CD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC5C0(void)
{

loc_000FC5C0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7D0380;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC5D0
 * Original: 0x000FC5D0 - 0x000FC600 (48 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC5D0: ;
    eax = MEM32(esp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    edx = MEM32(ecx * 4 + 0x8F0040);
    eax = MEM32(edx + 0x144);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_000FC5F9; /* jne: not equal / not zero */

loc_000FC5F1: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */

loc_000FC5F9: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}
