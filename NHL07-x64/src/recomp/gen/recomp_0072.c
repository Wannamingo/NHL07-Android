/**
 * nhl_07_recomp - Recompiled code chunk 72
 * Functions: 250 (0x00048920 - 0x0004EE40)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00048920
 * Original: 0x00048920 - 0x0004894F (47 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048920: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048938; /* je: equal / zero */

loc_0004892A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(edx));
    esp += 8; return; /* ret 4 */

loc_00048938: ;
    edx = MEM32(eax + 4);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(edx));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048960
 * Original: 0x00048960 - 0x00048964 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048960(void)
{

loc_00048960: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00048970
 * Original: 0x00048970 - 0x00048989 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048970: ;
    eax = ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048988; /* je: equal / zero */

loc_00048977: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00048982; /* jne: not equal / not zero */

loc_0004897E: ;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

loc_00048982: ;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;

loc_00048988: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00048990
 * Original: 0x00048990 - 0x000489A5 (21 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048990: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000489A2; /* jne: not equal / not zero */

loc_0004899C: ;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;

loc_000489A2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000489B0
 * Original: 0x000489B0 - 0x000489CF (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000489B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000489B0: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000489C7; /* je: equal / zero */

loc_000489B7: ;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000489C0u); RECOMP_ABI_CALL(0x0002DD59u, sub_0002DD59); /* call 0x0002DD59 */

loc_000489C0: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000489B7; /* jne: not equal / not zero */

loc_000489C7: ;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000489E0
 * Original: 0x000489E0 - 0x000489FD (29 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000489E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000489E0: ;
    eax = ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000489FA; /* je: equal / zero */

loc_000489E7: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000489F4; /* jne: not equal / not zero */

loc_000489EE: ;
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

loc_000489F4: ;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;

loc_000489FA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048A10
 * Original: 0x00048A10 - 0x00048A65 (85 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048A10: ;
    eax = ecx;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048A64; /* je: equal / zero */

loc_00048A18: ;
    ecx = MEM32(edx + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048A63; /* je: equal / zero */

loc_00048A23: ;
    PUSH32(esp, esi);
    edx = ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00048A31; /* jne: not equal / not zero */

loc_00048A2D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00048A34;

loc_00048A31: ;
    esi = MEM32(edx + 4);

loc_00048A34: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048A5E; /* je: equal / zero */

loc_00048A38: ;
    ecx = MEM32(eax + 4);
    goto loc_00048A40;

    /* nop */

loc_00048A40: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00048A48; /* jne: not equal / not zero */

loc_00048A44: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00048A4B;

loc_00048A48: ;
    edx = MEM32(edi + 4);

loc_00048A4B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00048A55; /* jne: not equal / not zero */

loc_00048A51: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00048A58;

loc_00048A55: ;
    edx = MEM32(esi + 4);

loc_00048A58: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    esi = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00048A40; /* jne: not equal / not zero */

loc_00048A5E: ;
    MEM32(eax + 4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00048A63: ;
    POP32(esp, ebx);

loc_00048A64: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00048A80
 * Original: 0x00048A80 - 0x00048A88 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048A80(void)
{

loc_00048A80: ;
    PUSH32(esp, 0x00048A85u); RECOMP_ABI_CALL(0x00036963u, sub_00036963); /* call 0x00036963 */

loc_00048A85: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048A90
 * Original: 0x00048A90 - 0x00048A91 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048A90(void)
{

loc_00048A90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00048AA0
 * Original: 0x00048AA0 - 0x00048AB4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048AA0(void)
{

loc_00048AA0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00048AC0
 * Original: 0x00048AC0 - 0x00048AE5 (37 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048AC0(void)
{

loc_00048AC0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00048AF0
 * Original: 0x00048AF0 - 0x00048AFB (11 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048AF0(void)
{

loc_00048AF0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048B00
 * Original: 0x00048B00 - 0x00048B05 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00048B00: ;
    g_seh_ebp = ebp; sub_00020951(); return; /* tail jmp 0x00020951 */

}

/**
 * sub_00048B10
 * Original: 0x00048B10 - 0x00048B15 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00048B10: ;
    g_seh_ebp = ebp; sub_0001AF42(); return; /* tail jmp 0x0001AF42 */

}

/**
 * sub_00048B20
 * Original: 0x00048B20 - 0x00048B3B (27 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048B20: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(edx, MEM8(ecx));
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = eax & 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(ecx) = MEM16(ecx) ^ LO16(eax);
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048B50
 * Original: 0x00048B50 - 0x00048B55 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048B50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048B50: ;
    MEM8(ecx + 0x38) = MEM8(ecx + 0x38) | 0x20;
    _fa = (uint32_t)(MEM8(ecx + 0x38)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_00048B60
 * Original: 0x00048B60 - 0x00048B6D (13 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048B60(void)
{

loc_00048B60: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048B70
 * Original: 0x00048B70 - 0x00048B7D (13 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048B70(void)
{

loc_00048B70: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048B80
 * Original: 0x00048B80 - 0x00048B81 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048B80(void)
{

loc_00048B80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00048B90
 * Original: 0x00048B90 - 0x00048BC0 (48 bytes, 22 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00048B90: ;
    eax = MEM32(esp + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00048BBD; /* js: sign (negative) */

loc_00048B97: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = eax + 1;
    /* nop */

loc_00048BB0: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x00048BB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00048BB2u); } /* indirect call */
    }

loc_00048BB4: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00048BB0; /* jne: not equal / not zero */

loc_00048BB9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00048BBD: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00048BD0
 * Original: 0x00048BD0 - 0x00048BDC (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048BD0(void)
{

loc_00048BD0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x60) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048BE0
 * Original: 0x00048BE0 - 0x00048BFB (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048BE0: ;
    eax = MEM32(ecx);
    edx = (uint32_t)(int32_t)SMEM8(eax + 0xD2);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0xD2);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0;
    SET_LO8(eax, ((_fas < 0)) ? 1 : 0); /* sets */
    esp += 4; return; /* ret */

}

/**
 * sub_00048C10
 * Original: 0x00048C10 - 0x00048C17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048C10(void)
{

loc_00048C10: ;
    SET_LO8(eax, MEM8(ecx + 0x158));
    esp += 4; return; /* ret */

}

/**
 * sub_00048C20
 * Original: 0x00048C20 - 0x00048C2C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048C20: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 4) (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048C30
 * Original: 0x00048C30 - 0x00048C3D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048C30(void)
{

loc_00048C30: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    MEM8(ecx + 4) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048C40
 * Original: 0x00048C40 - 0x00048C4B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048C40(void)
{

loc_00048C40: ;
    MEM32(ecx) = 0;
    MEM8(ecx + 4) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00048C50
 * Original: 0x00048C50 - 0x00048C85 (53 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048C50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048C50: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    ecx = MEM32(ecx + 0x20);
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00048C7Fu); RECOMP_ABI_CALL(0x0003525Cu, sub_0003525C); /* call 0x0003525C */

loc_00048C7F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00048CA0
 * Original: 0x00048CA0 - 0x00048CBE (30 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048CA0(void)
{

loc_00048CA0: ;
    eax = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    edx = esp + 4;
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00048CBBu); RECOMP_ABI_CALL(0x00034A1Eu, sub_00034A1E); /* call 0x00034A1E */

loc_00048CBB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048CD0
 * Original: 0x00048CD0 - 0x00048CD8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00048CD0: ;
    ecx = MEM32(ecx + 0x20);
    g_seh_ebp = ebp; sub_0001ADE9(); return; /* tail jmp 0x0001ADE9 */

}

/**
 * sub_00048CE0
 * Original: 0x00048CE0 - 0x00048CE8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048CE0: ;
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), 1 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00048CF0
 * Original: 0x00048CF0 - 0x00048CFA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048CF0(void)
{

loc_00048CF0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x34) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048D00
 * Original: 0x00048D00 - 0x00048D05 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048D00(void)
{

loc_00048D00: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x39);
    esp += 4; return; /* ret */

}

/**
 * sub_00048D10
 * Original: 0x00048D10 - 0x00048D15 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048D10(void)
{

loc_00048D10: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    esp += 4; return; /* ret */

}

/**
 * sub_00048D20
 * Original: 0x00048D20 - 0x00048D2C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048D20: ;
    eax = MEM32(ecx + 0x1A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00048D30
 * Original: 0x00048D30 - 0x00048D37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048D30(void)
{

loc_00048D30: ;
    eax = MEM32(ecx + 0x1B0);
    esp += 4; return; /* ret */

}

/**
 * sub_00048D40
 * Original: 0x00048D40 - 0x00048D47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048D40(void)
{

loc_00048D40: ;
    eax = MEM32(ecx + 0x1B4);
    esp += 4; return; /* ret */

}

/**
 * sub_00048D50
 * Original: 0x00048D50 - 0x00048D5D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048D50(void)
{

loc_00048D50: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x1B0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048D60
 * Original: 0x00048D60 - 0x00048D6D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048D60(void)
{

loc_00048D60: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x1B4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048D70
 * Original: 0x00048D70 - 0x00048D7B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048D70(void)
{

loc_00048D70: ;
    eax = MEM32(ecx + 0xF0);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x51);
    esp += 4; return; /* ret */

}

/**
 * sub_00048D80
 * Original: 0x00048D80 - 0x00048D97 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048D80: ;
    eax = MEM32(ecx + 0xF0);
    SET_LO8(eax, MEM8(eax + 0x51));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048D94; /* je: equal / zero */

loc_00048D8D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048D94; /* je: equal / zero */

loc_00048D91: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00048D94: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00048DA0
 * Original: 0x00048DA0 - 0x00048DD1 (49 bytes, 24 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00048DA0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00048DCC; /* js: sign (negative) */

loc_00048DB8: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = eax + 1;

loc_00048DC1: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x00048DC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00048DC5u); } /* indirect call */
    }

loc_00048DC7: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00048DC1; /* jne: not equal / not zero */

loc_00048DCA: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00048DCC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00048DE0
 * Original: 0x00048DE0 - 0x00048DE5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00048DE0: ;
    g_seh_ebp = ebp; sub_00014791(); return; /* tail jmp 0x00014791 */

}

/**
 * sub_00048DF0
 * Original: 0x00048DF0 - 0x00048DFF (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048DF0(void)
{

loc_00048DF0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x1E4) = 0xFF;
    esp += 4; return; /* ret */

}

/**
 * sub_00048E10
 * Original: 0x00048E10 - 0x00048E28 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048E10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048E10: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xF0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = 2;
    MEM8(eax + 4) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00048E30
 * Original: 0x00048E30 - 0x00048EB0 (128 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048E30: ;
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x00048E40u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_00048E40: ;
    ecx = eax;
    PUSH32(esp, 0x00048E47u); RECOMP_ABI_CALL(0x0001AD71u, sub_0001AD71); /* call 0x0001AD71 */

loc_00048E47: ;
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, 2);
    PUSH32(esp, 0x2E);
    PUSH32(esp, 0x00048E56u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_00048E56: ;
    ecx = eax;
    PUSH32(esp, 0x00048E5Du); RECOMP_ABI_CALL(0x0001AD71u, sub_0001AD71); /* call 0x0001AD71 */

loc_00048E5D: ;
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, 2);
    PUSH32(esp, 0x2F);
    PUSH32(esp, 0x00048E6Cu); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_00048E6C: ;
    ecx = eax;
    PUSH32(esp, 0x00048E73u); RECOMP_ABI_CALL(0x0001AD71u, sub_0001AD71); /* call 0x0001AD71 */

loc_00048E73: ;
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x00048E82u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_00048E82: ;
    ecx = eax;
    PUSH32(esp, 0x00048E89u); RECOMP_ABI_CALL(0x0001AD71u, sub_0001AD71); /* call 0x0001AD71 */

loc_00048E89: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00048E90;

    /* nop */

loc_00048E90: ;
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, 0);
    eax = esi + 0x2A;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00048EA1u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_00048EA1: ;
    ecx = eax;
    PUSH32(esp, 0x00048EA8u); RECOMP_ABI_CALL(0x0001AD71u, sub_0001AD71); /* call 0x0001AD71 */

loc_00048EA8: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00048E90; /* jl: less (signed <) */

loc_00048EAE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00048ED0
 * Original: 0x00048ED0 - 0x00048EF2 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048ED0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1B4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00048EEF; /* jne: not equal / not zero */

loc_00048EDE: ;
    eax = MEM32(eax + 0x1B0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00048EEC; /* je: equal / zero */

loc_00048EE7: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00048EEF; /* jne: not equal / not zero */

loc_00048EEC: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00048EEF: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00048F00
 * Original: 0x00048F00 - 0x00048F17 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048F00(void)
{

loc_00048F00: ;
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x00048F0Du); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_00048F0D: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x00048F16u); RECOMP_ABI_CALL(0x0001AD71u, sub_0001AD71); /* call 0x0001AD71 */

loc_00048F16: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00048F20
 * Original: 0x00048F20 - 0x00048F3B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048F20(void)
{

loc_00048F20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x78);
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00048F32u); RECOMP_ABI_CALL(0x0003451Eu, sub_0003451E); /* call 0x0003451E */

loc_00048F32: ;
    MEM32(esi + 0x78) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00048F50
 * Original: 0x00048F50 - 0x00048F83 (51 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048F50: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048F7F; /* je: equal / zero */

loc_00048F5A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7A993C);
    ecx = esi;
    PUSH32(esp, 0x00048F6Cu); RECOMP_ABI_CALL(0x00020717u, sub_00020717); /* call 0x00020717 */

loc_00048F6C: ;
    eax = MEM32(edi + 0x78);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00048F77u); RECOMP_ABI_CALL(0x000259C4u, sub_000259C4); /* call 0x000259C4 */

loc_00048F77: ;
    ecx = esi;
    PUSH32(esp, 0x00048F7Eu); RECOMP_ABI_CALL(0x000115F0u, sub_000115F0); /* call 0x000115F0 */

loc_00048F7E: ;
    POP32(esp, esi);

loc_00048F7F: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048F90
 * Original: 0x00048F90 - 0x00048FA1 (17 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048F90(void)
{

loc_00048F90: ;
    eax = MEM32(ecx + 0x78);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00048F9Eu); RECOMP_ABI_CALL(0x000346A9u, sub_000346A9); /* call 0x000346A9 */

loc_00048F9E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048FB0
 * Original: 0x00048FB0 - 0x00048FBA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048FB0(void)
{

loc_00048FB0: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048FC0
 * Original: 0x00048FC0 - 0x00048FCA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048FC0(void)
{

loc_00048FC0: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048FD0
 * Original: 0x00048FD0 - 0x00048FDA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048FD0(void)
{

loc_00048FD0: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048FE0
 * Original: 0x00048FE0 - 0x00048FEA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048FE0(void)
{

loc_00048FE0: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048FF0
 * Original: 0x00048FF0 - 0x00048FF9 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048FF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048FF0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00049000
 * Original: 0x00049000 - 0x0004900C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049000(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049000: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00049010
 * Original: 0x00049010 - 0x0004901F (15 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049010: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00049030
 * Original: 0x00049030 - 0x0004903A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049030(void)
{

loc_00049030: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00049040
 * Original: 0x00049040 - 0x0004904A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049040(void)
{

loc_00049040: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00049050
 * Original: 0x00049050 - 0x0004905A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049050(void)
{

loc_00049050: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00049060
 * Original: 0x00049060 - 0x0004906A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049060(void)
{

loc_00049060: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00049070
 * Original: 0x00049070 - 0x00049079 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049070(void)
{

loc_00049070: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00049080
 * Original: 0x00049080 - 0x0004908A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049080(void)
{

loc_00049080: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00049090
 * Original: 0x00049090 - 0x0004909C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049090(void)
{

loc_00049090: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    eax = MEM32(eax * 4 + 0x8F0040);
    esp += 4; return; /* ret */

}

/**
 * sub_000490A0
 * Original: 0x000490A0 - 0x000490AC (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000490A0(void)
{

loc_000490A0: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    eax = MEM32(eax * 4 + 0x8F00F8);
    esp += 4; return; /* ret */

}

/**
 * sub_000490B0
 * Original: 0x000490B0 - 0x0004958B (1243 bytes, 376 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000490B0(void)
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

loc_000490B0: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = 0x8F5C10;
    PUSH32(esp, edi);
    /* nop */

loc_000490D0: ;
    ebx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);
    ebx = ebx & 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }

loc_000490E0: ;
    eax = MEM32(esi + 0x1C);
    ecx = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 0x7F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esp + 0x3C);
    edx = eax;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x15) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x80000 (32-bit) */
    MEM32(esp + 0x3C) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00049126; /* je: equal / zero */

loc_00049109: ;
    eax = esi + -16;
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(eax + -16);
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, 0x7A9984);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00049121u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00049121: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00049139;

loc_00049126: ;
    PUSH32(esp, 0x14);
    edx = esi + -16;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00049136u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00049136: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00049139: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00049176; /* jl: less (signed <) */

loc_0004913E: ;
    ecx = MEM32(esi + -52);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = ecx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(9) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edx = ecx;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(LO8(eax)), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        SET_LO8(eax, _sv << _sc);
        _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    SET_LO8(eax, LO8(eax) | LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(edx, MEM8(esp + 0x38));
    { uint32_t _sv=(uint32_t)(LO8(eax)), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        SET_LO8(eax, _sv << _sc);
        _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    SET_LO8(edx, LO8(edx) & 0xED);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_000491BC;

loc_00049176: ;
    eax = MEM32(esi);
    eax = eax & 0x3FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00049183u); RECOMP_ABI_CALL(0x0002CBE8u, sub_0002CBE8); /* call 0x0002CBE8 */

loc_00049183: ;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    ecx = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xA) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 0x3FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    eax = eax & 0x3FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000491A0u); RECOMP_ABI_CALL(0x000304C3u, sub_000304C3); /* call 0x000304C3 */

loc_000491A0: ;
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + -52);
    SET_LO8(eax, MEM8(esp + 0x44));
    edx = ecx;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(LO8(edx)), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        SET_LO8(edx, _sv << _sc);
        _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(edx) & 2);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000491BC: ;
    edi = MEM32(esp + 0x34);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x12 (32-bit) */
    SET_LO8(edx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    edi = edi & 0xFFFFFF00u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x58) = ecx;
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x12 (32-bit) */
    MEM32(esp + 0x34) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_000491F7; /* jge: greater or equal (signed >=) */

loc_000491E8: ;
    ecx = MEM32(esi + 0xC);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1E) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00049206;

loc_000491F7: ;
    edx = MEM32(esi + 4);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x1E) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00049206: ;
    edi = MEM32(esi + 0x1C);
    ecx = edi;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(9) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(LO8(ecx)), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        SET_LO8(ecx, _sv << _sc);
        _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    edx = edi;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(eax, LO8(eax) & 0xF3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(LO8(ecx)), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        SET_LO8(ecx, _sv << _sc);
        _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x38) = LO8(ecx);
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004923Au); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_0004923A: ;
    ecx = esp + 0x2C;
    edi = eax;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00049248u); RECOMP_ABI_CALL(0x000296B9u, sub_000296B9); /* call 0x000296B9 */

loc_00049248: ;
    MEM8(edi + 0x38) = MEM8(edi + 0x38) | 0x20;
    _fa = (uint32_t)(MEM8(edi + 0x38)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00049255u); RECOMP_ABI_CALL(0x0001AD71u, sub_0001AD71); /* call 0x0001AD71 */

loc_00049255: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x54;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000490E0; /* jl: less (signed <) */

loc_00049262: ;
    eax = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x778) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x778;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F6B00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8F6B00 (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000490D0; /* jl: less (signed <) */

loc_0004928E: ;
    eax = MEM32(esp + 0x34);
    eax = eax & 0xFFFFFF2Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & 0xFFFFFFF2u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = 1;
    ebx = 0x45;
    PUSH32(esp, 0x47);
    MEM32(esp + 0x5C) = edi;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, 0x000492BDu); RECOMP_ABI_CALL(0x0002CBE8u, sub_0002CBE8); /* call 0x0002CBE8 */

loc_000492BD: ;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xB4);
    PUSH32(esp, 0x47);
    PUSH32(esp, 0x000492CDu); RECOMP_ABI_CALL(0x000304C3u, sub_000304C3); /* call 0x000304C3 */

loc_000492CD: ;
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x8FCAD8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x000492E1u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_000492E1: ;
    edx = MEM32(0x7A9974);
    esi = eax;
    eax = MEM32(0x7A9978);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, 0x00049302u); RECOMP_ABI_CALL(0x000296B9u, sub_000296B9); /* call 0x000296B9 */

loc_00049302: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0004930Cu); RECOMP_ABI_CALL(0x00033501u, sub_00033501); /* call 0x00033501 */

loc_0004930C: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00049315u); RECOMP_ABI_CALL(0x00033501u, sub_00033501); /* call 0x00033501 */

loc_00049315: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x0004931Eu); RECOMP_ABI_CALL(0x0001AD71u, sub_0001AD71); /* call 0x0001AD71 */

loc_0004931E: ;
    edx = MEM32(0x8E9248);
    MEM32(edx + 0x34) = 2;
    eax = MEM32(esp + 0x34);
    eax = eax & 0xFFFFFFF3u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x46);
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, 0x00049344u); RECOMP_ABI_CALL(0x0002CBE8u, sub_0002CBE8); /* call 0x0002CBE8 */

loc_00049344: ;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xB4);
    PUSH32(esp, 0x46);
    PUSH32(esp, 0x00049354u); RECOMP_ABI_CALL(0x000304C3u, sub_000304C3); /* call 0x000304C3 */

loc_00049354: ;
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x7A996C);
    SET_LO16(edx, MEM16(0x7A9970));
    SET_LO8(eax, MEM8(0x7A9972));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, 0x2E);
    MEM32(esp + 0x5C) = edi;
    MEM16(esp + 0x48) = LO16(edx);
    MEM8(esp + 0x4A) = LO8(eax);
    PUSH32(esp, 0x0004938Bu); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_0004938B: ;
    ecx = esp + 0x2C;
    esi = eax;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00049399u); RECOMP_ABI_CALL(0x000296B9u, sub_000296B9); /* call 0x000296B9 */

loc_00049399: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x000493A2u); RECOMP_ABI_CALL(0x0001AD71u, sub_0001AD71); /* call 0x0001AD71 */

loc_000493A2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000493ACu); RECOMP_ABI_CALL(0x00033501u, sub_00033501); /* call 0x00033501 */

loc_000493AC: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000493B5u); RECOMP_ABI_CALL(0x00033501u, sub_00033501); /* call 0x00033501 */

loc_000493B5: ;
    edx = MEM32(esp + 0x34);
    edx = edx & 0xFFFFFFF3u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x46);
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x38) = edx;
    PUSH32(esp, 0x000493CEu); RECOMP_ABI_CALL(0x0002CBE8u, sub_0002CBE8); /* call 0x0002CBE8 */

loc_000493CE: ;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xB4);
    PUSH32(esp, 0x46);
    PUSH32(esp, 0x000493DEu); RECOMP_ABI_CALL(0x000304C3u, sub_000304C3); /* call 0x000304C3 */

loc_000493DE: ;
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO16(ecx, MEM16(0x7A9968));
    eax = MEM32(0x7A9964);
    SET_LO8(edx, MEM8(0x7A996A));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esp + 0x44) = LO16(ecx);
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, 0x2F);
    MEM32(esp + 0x5C) = edi;
    MEM32(esp + 0x44) = eax;
    MEM8(esp + 0x4A) = LO8(edx);
    PUSH32(esp, 0x00049415u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_00049415: ;
    esi = eax;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00049423u); RECOMP_ABI_CALL(0x000296B9u, sub_000296B9); /* call 0x000296B9 */

loc_00049423: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x0004942Cu); RECOMP_ABI_CALL(0x0001AD71u, sub_0001AD71); /* call 0x0001AD71 */

loc_0004942C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00049436u); RECOMP_ABI_CALL(0x00033501u, sub_00033501); /* call 0x00033501 */

loc_00049436: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0004943Fu); RECOMP_ABI_CALL(0x00033501u, sub_00033501); /* call 0x00033501 */

loc_0004943F: ;
    ecx = MEM32(esp + 0x34);
    ecx = ecx & 0xFFFFFFF2u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x47);
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x38) = ecx;
    PUSH32(esp, 0x00049458u); RECOMP_ABI_CALL(0x0002CBE8u, sub_0002CBE8); /* call 0x0002CBE8 */

loc_00049458: ;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xB4);
    PUSH32(esp, 0x47);
    PUSH32(esp, 0x00049468u); RECOMP_ABI_CALL(0x000304C3u, sub_000304C3); /* call 0x000304C3 */

loc_00049468: ;
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(ecx, MEM8(0x7A9960));
    edx = MEM32(0x7A9958);
    eax = MEM32(0x7A995C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x48) = LO8(ecx);
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, 0x29);
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, 0x00049499u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_00049499: ;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000494A5u); RECOMP_ABI_CALL(0x000296B9u, sub_000296B9); /* call 0x000296B9 */

loc_000494A5: ;
    ebp = 0x2A;
    MEM32(esp + 0x18) = 4;

loc_000494B2: ;
    eax = MEM32(esp + 0x34);
    eax = eax & 0xFFFFFFF2u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x47);
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, 0x000494CBu); RECOMP_ABI_CALL(0x0002CBE8u, sub_0002CBE8); /* call 0x0002CBE8 */

loc_000494CB: ;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xB4);
    PUSH32(esp, 0x47);
    PUSH32(esp, 0x000494DBu); RECOMP_ABI_CALL(0x000304C3u, sub_000304C3); /* call 0x000304C3 */

loc_000494DB: ;
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x7A994C);
    edx = MEM32(0x7A9950);
    PUSH32(esp, 0xA);
    eax = esp + 0x2C;
    MEM32(esp + 0x50) = ecx;
    PUSH32(esp, eax);
    ecx = ebp + -41;
    PUSH32(esp, ecx);
    MEM32(esp + 0x5C) = edx;
    PUSH32(esp, 0x00049503u); RECOMP_ABI_CALL(0x005D6457u, sub_005D6457); /* call 0x005D6457 */

loc_00049503: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;

loc_00049508: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049508; /* jne: not equal / not zero */

loc_0004950F: ;
    edi = esp + 0x40;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00049518: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049518; /* jne: not equal / not zero */

loc_00049520: ;
    ecx = eax;
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
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0004953Au); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_0004953A: ;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00049546u); RECOMP_ABI_CALL(0x000296B9u, sub_000296B9); /* call 0x000296B9 */

loc_00049546: ;
    eax = MEM32(esp + 0x18);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_000494B2; /* jne: not equal / not zero */

loc_00049556: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    edi = edi;

loc_00049560: ;
    MEM32(eax * 4 + 0x8961AC) = ecx;
    MEM8(eax + 0x8961E8) = 0;
    MEM32(eax * 4 + 0x89617C) = ecx;
    MEM8(eax + 0x8961DC) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00049560; /* jl: less (signed <) */

loc_00049582: ;
    PUSH32(esp, 0x00049587u); RECOMP_ABI_CALL(0x0001978Cu, sub_0001978C); /* call 0x0001978C */

loc_00049587: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000496D0
 * Original: 0x000496D0 - 0x00049713 (67 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000496D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000496D0: ;
    eax = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(esp + 0xC));
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(eax * 4 + 0x89617C) = esi;
    MEM8(eax + 0x8961DC) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00049711; /* je: equal / zero */

loc_000496EE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000496F4u); RECOMP_ABI_CALL(0x00036E13u, sub_00036E13); /* call 0x00036E13 */

loc_000496F4: ;
    eax = MEM32(esi + 0x1B0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049711; /* je: equal / zero */

loc_00049702: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049711; /* je: equal / zero */

loc_00049707: ;
    MEM32(esi + 0x1B0) = 0;

loc_00049711: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00049730
 * Original: 0x00049730 - 0x00049761 (49 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049730: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(edx) | 0xFF);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    /* nop */

loc_00049740: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x89617C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x89617C), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004975A; /* jne: not equal / not zero */

loc_00049749: ;
    MEM32(eax * 4 + 0x89617C) = 0;
    MEM8(eax + 0x8961DC) = LO8(edx);

loc_0004975A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00049740; /* jl: less (signed <) */

loc_00049760: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00049770
 * Original: 0x00049770 - 0x0004978C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049770: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00049776: ;
    _fa = (uint32_t)(MEM32(eax + 0x89617C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x89617C), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049789; /* je: equal / zero */

loc_0004977E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00049776; /* jl: less (signed <) */

loc_00049786: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00049789: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000497A0
 * Original: 0x000497A0 - 0x000497BC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000497A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000497A0: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000497A6: ;
    _fa = (uint32_t)(MEM32(eax + 0x8961AC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x8961AC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000497B9; /* je: equal / zero */

loc_000497AE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000497A6; /* jl: less (signed <) */

loc_000497B6: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000497B9: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000497D0
 * Original: 0x000497D0 - 0x0004980C (60 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000497D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000497D0: ;
    ecx = MEM32(esp + 4);
    ecx = ecx + ecx * 2;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004980B; /* jge: greater or equal (signed >=) */

loc_000497E0: ;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    goto loc_000497F0;

    /* nop */
    /* nop */

loc_000497F0: ;
    edx = MEM32(ecx + 0x8961AC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x89617C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x89617C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049803; /* je: equal / zero */

loc_000497FE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049803; /* jne: not equal / not zero */

loc_00049802: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00049803: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000497F0; /* jl: less (signed <) */

loc_0004980B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00049820
 * Original: 0x00049820 - 0x0004985D (61 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049820: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00049823: ;
    eax = MEM32(esi + 0x8961AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049840; /* jne: not equal / not zero */

loc_0004982D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00049833u); RECOMP_ABI_CALL(0x000280E3u, sub_000280E3); /* call 0x000280E3 */

loc_00049833: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x8961AC) = 0;

loc_00049840: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00049823; /* jl: less (signed <) */

loc_00049848: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x30);
    ecx = MEM32(eax * 4 + 0x8F0040);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0004985Bu); RECOMP_ABI_CALL(0x00022A58u, sub_00022A58); /* call 0x00022A58 */

loc_0004985B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00049870
 * Original: 0x00049870 - 0x00049887 (23 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00049870: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x1B0) = 3;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00020E56(); return; /* tail jmp 0x00020E56 */

}

/**
 * sub_00049890
 * Original: 0x00049890 - 0x000498A7 (23 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00049890: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x1B0) = 2;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00020E56(); return; /* tail jmp 0x00020E56 */

}

/**
 * sub_000498B0
 * Original: 0x000498B0 - 0x000498D5 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000498B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000498B0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000498BBu); RECOMP_ABI_CALL(0x00020E56u, sub_00020E56); /* call 0x00020E56 */

loc_000498BB: ;
    PUSH32(esp, 0x000498C0u); RECOMP_ABI_CALL(0x00049820u, sub_00049820); /* call 0x00049820 */

loc_000498C0: ;
    PUSH32(esp, edi);
    MEM32(edi + 0x1B0) = 2;
    PUSH32(esp, 0x000498D0u); RECOMP_ABI_CALL(0x00028368u, sub_00028368); /* call 0x00028368 */

loc_000498D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000498E0
 * Original: 0x000498E0 - 0x00049982 (162 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000498E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000498E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi + 0x1E4) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00049905; /* je: equal / zero */

loc_000498F9: ;
    ebx = 6;
    edi = 0xC;
    goto loc_0004990C;

loc_00049905: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 6;

loc_0004990C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00049912u); RECOMP_ABI_CALL(0x000376DDu, sub_000376DD); /* call 0x000376DD */

loc_00049912: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    eax = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_00049930; /* jge: greater or equal (signed >=) */

loc_0004991B: ;
    goto loc_00049920;

    /* nop */

loc_00049920: ;
    ecx = MEM32(eax * 4 + 0x89617C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049934; /* je: equal / zero */

loc_0004992B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00049920; /* jl: less (signed <) */

loc_00049930: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00049934: ;
    SET_LO8(ecx, LO8(eax));
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - LO8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM32(eax * 4 + 0x89617C) = esi;
    PUSH32(esp, esi);
    MEM8(eax + 0x8961DC) = LO8(ecx);
    PUSH32(esp, 0x0004994Bu); RECOMP_ABI_CALL(0x00036E13u, sub_00036E13); /* call 0x00036E13 */

loc_0004994B: ;
    eax = MEM32(esi + 0x1B0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049968; /* je: equal / zero */

loc_00049959: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049968; /* je: equal / zero */

loc_0004995E: ;
    MEM32(esi + 0x1B0) = 0;

loc_00049968: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    POP32(esp, edi);
    MEM32(esi + 0x1B0) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0001ADD0(); return; /* tail jmp 0x0001ADD0 */

}

/**
 * sub_000499B0
 * Original: 0x000499B0 - 0x00049BCC (540 bytes, 181 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000499B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000499B0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + eax * 4;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(0x8F5B98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B98;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = edx;

loc_000499D5: ;
    _fa = (uint32_t)(MEM32(edx * 4 + 0x89617C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx * 4 + 0x89617C), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000499ED; /* je: equal / zero */

loc_000499DE: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000499D5; /* jl: less (signed <) */

loc_000499E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000499ED: ;
    ecx = MEM32(ecx + 0xF0);
    SET_LO8(ecx, MEM8(ecx + 0x51));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    PUSH32(esp, ebp);
    MEM32(esp + 0x10) = edx;
    MEM8(esp + 0x18) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00049A09; /* je: equal / zero */

loc_00049A04: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049A5E; /* jne: not equal / not zero */

loc_00049A09: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax + 0xC;
    goto loc_00049A14;

loc_00049A10: ;
    edx = MEM32(esp + 0x10);

loc_00049A14: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049B8D; /* jne: not equal / not zero */

loc_00049A1C: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_00049A20: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049A53; /* jne: not equal / not zero */

loc_00049A24: ;
    eax = ZX8(MEM8(esi + edx));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax * 4 + 0x8E8FA8);
    ecx = MEM32(eax + 0x1B4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049A41; /* je: equal / zero */

loc_00049A3C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049A4D; /* jne: not equal / not zero */

loc_00049A41: ;
    ecx = MEM32(eax + 0x1B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049A4D; /* je: equal / zero */

loc_00049A4B: ;
    ebx = eax;

loc_00049A4D: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00049A20; /* jl: less (signed <) */

loc_00049A53: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00049A10; /* jl: less (signed <) */

loc_00049A5C: ;
    goto loc_00049AAE;

loc_00049A5E: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax;
    goto loc_00049A68;

loc_00049A64: ;
    edx = MEM32(esp + 0x10);

loc_00049A68: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049B8D; /* jne: not equal / not zero */

loc_00049A70: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00049A72: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049AA5; /* jne: not equal / not zero */

loc_00049A76: ;
    ecx = ZX8(MEM8(esi + edx));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx * 4 + 0x8E8FA8);
    ecx = MEM32(eax + 0x1B4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049A93; /* je: equal / zero */

loc_00049A8E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049A9F; /* jne: not equal / not zero */

loc_00049A93: ;
    ecx = MEM32(eax + 0x1B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049A9F; /* je: equal / zero */

loc_00049A9D: ;
    ebx = eax;

loc_00049A9F: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00049A72; /* jl: less (signed <) */

loc_00049AA5: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00049A64; /* jl: less (signed <) */

loc_00049AAE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049B89; /* jne: not equal / not zero */

loc_00049AB6: ;
    ecx = edi * 4 + 0x8E8FA8;
    esi = 3;

loc_00049AC2: ;
    eax = MEM32(ecx);
    edx = MEM32(eax + 0x1B4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049AD4; /* je: equal / zero */

loc_00049ACF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049AE0; /* jne: not equal / not zero */

loc_00049AD4: ;
    edx = MEM32(eax + 0x1B0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049AE0; /* je: equal / zero */

loc_00049ADE: ;
    ebx = eax;

loc_00049AE0: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(eax + 0x1B4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049AF3; /* je: equal / zero */

loc_00049AEE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049AFF; /* jne: not equal / not zero */

loc_00049AF3: ;
    edx = MEM32(eax + 0x1B0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049AFF; /* je: equal / zero */

loc_00049AFD: ;
    ebx = eax;

loc_00049AFF: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(eax + 0x1B4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049B12; /* je: equal / zero */

loc_00049B0D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049B1E; /* jne: not equal / not zero */

loc_00049B12: ;
    edx = MEM32(eax + 0x1B0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049B1E; /* je: equal / zero */

loc_00049B1C: ;
    ebx = eax;

loc_00049B1E: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(eax + 0x1B4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049B31; /* je: equal / zero */

loc_00049B2C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049B3D; /* jne: not equal / not zero */

loc_00049B31: ;
    edx = MEM32(eax + 0x1B0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049B3D; /* je: equal / zero */

loc_00049B3B: ;
    ebx = eax;

loc_00049B3D: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(eax + 0x1B4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049B50; /* je: equal / zero */

loc_00049B4B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049B5C; /* jne: not equal / not zero */

loc_00049B50: ;
    edx = MEM32(eax + 0x1B0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049B5C; /* je: equal / zero */

loc_00049B5A: ;
    ebx = eax;

loc_00049B5C: ;
    eax = MEM32(ecx + 0x14);
    edx = MEM32(eax + 0x1B4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049B6F; /* je: equal / zero */

loc_00049B6A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049B7B; /* jne: not equal / not zero */

loc_00049B6F: ;
    edx = MEM32(eax + 0x1B0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049B7B; /* je: equal / zero */

loc_00049B79: ;
    ebx = eax;

loc_00049B7B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00049AC2; /* jne: not equal / not zero */

loc_00049B85: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049BC6; /* je: equal / zero */

loc_00049B89: ;
    edx = MEM32(esp + 0x10);

loc_00049B8D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    eax = (uint32_t)(int32_t)SMEM8(esp + 0x18);
    MEM32(edx * 4 + 0x89617C) = ebx;
    MEM8(edx + 0x8961DC) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00049BC6; /* je: equal / zero */

loc_00049BA3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00049BA9u); RECOMP_ABI_CALL(0x00036E13u, sub_00036E13); /* call 0x00036E13 */

loc_00049BA9: ;
    eax = MEM32(ebx + 0x1B0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049BC6; /* je: equal / zero */

loc_00049BB7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049BC6; /* je: equal / zero */

loc_00049BBC: ;
    MEM32(ebx + 0x1B0) = 0;

loc_00049BC6: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00049C60
 * Original: 0x00049C60 - 0x00049C7E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049C60: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00049C62: ;
    ecx = MEM32(eax + 0x89617C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x8961AC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x8961AC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049C7B; /* jne: not equal / not zero */

loc_00049C70: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00049C62; /* jl: less (signed <) */

loc_00049C78: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00049C7B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00049C90
 * Original: 0x00049C90 - 0x00049CDC (76 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049C90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00049CA0;

    /* nop */
    /* nop */

loc_00049CA0: ;
    eax = MEM32(esi + 0x8E8FA8);
    _fa = (uint32_t)(MEM32(eax + 0x1E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1E4), 0xFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049CCE; /* jne: not equal / not zero */

loc_00049CB2: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(eax + 0x1E4) = edi;
    MEM32(eax + 0x1B0) = edi;
    MEM32(eax + 0x1B4) = edi;
    PUSH32(esp, 0x00049CCBu); RECOMP_ABI_CALL(0x000233C7u, sub_000233C7); /* call 0x000233C7 */

loc_00049CCB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00049CCE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00049CA0; /* jl: less (signed <) */

loc_00049CD9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00049CF0
 * Original: 0x00049CF0 - 0x00049D2E (62 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049CF0: ;
    ecx = MEM32(esp + 4);
    ecx = ecx + ecx * 2;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, esi);
    esi = ecx + 6;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00049D2C; /* jge: greater or equal (signed >=) */

loc_00049D03: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    goto loc_00049D10;

    /* nop */

loc_00049D10: ;
    edx = MEM32(ecx * 4 + 0x8961AC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049D26; /* je: equal / zero */

loc_00049D1B: ;
    _fa = (uint32_t)(MEM32(edx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x28), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049D25; /* jne: not equal / not zero */

loc_00049D21: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049D26; /* je: equal / zero */

loc_00049D25: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00049D26: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00049D10; /* jl: less (signed <) */

loc_00049D2B: ;
    POP32(esp, ebx);

loc_00049D2C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00049D40
 * Original: 0x00049D40 - 0x00049D84 (68 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049D40: ;
    ecx = MEM32(esp + 4);
    ecx = ecx + ecx * 4;
    PUSH32(esp, esi);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x8E8FA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x8E8FA8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x14;
    /* nop */

loc_00049D60: ;
    edx = MEM32(ecx);
    edi = MEM32(edx + 0x1B4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049D7B; /* jne: not equal / not zero */

loc_00049D6C: ;
    edx = MEM32(edx + 0x1B0);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00049D7A; /* je: equal / zero */

loc_00049D75: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00049D7B; /* jne: not equal / not zero */

loc_00049D7A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00049D7B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00049D60; /* jne: not equal / not zero */

loc_00049D81: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00049DA0
 * Original: 0x00049DA0 - 0x00049F05 (357 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00049DA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x10) = 0x8F5BCC;
    /* nop */

loc_00049DC0: ;
    eax = MEM32(ebp * 4 + 0x8F0040);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049EC1; /* je: equal / zero */

loc_00049DD2: ;
    eax = MEM32(esp + 0x10);
    ecx = ZX8(MEM8(eax));
    eax = MEM32(esp + 0x14);
    edx = MEM32(esi + 0x8E8FF0);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(ecx * 4 + 0x8E8FA8);
    eax = 8;

loc_00049DF1: ;
    ecx = MEM32(eax + 0x8961A4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049E03; /* je: equal / zero */

loc_00049DFB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x8E8FF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x8E8FF4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049E05; /* jne: not equal / not zero */

loc_00049E03: ;
    edi = ecx;

loc_00049E05: ;
    ecx = MEM32(eax + 0x8961A8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049E17; /* je: equal / zero */

loc_00049E0F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x8E8FF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x8E8FF4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049E19; /* jne: not equal / not zero */

loc_00049E17: ;
    edi = ecx;

loc_00049E19: ;
    ecx = MEM32(eax + 0x8961AC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049E2B; /* je: equal / zero */

loc_00049E23: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x8E8FF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x8E8FF4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049E2D; /* jne: not equal / not zero */

loc_00049E2B: ;
    edi = ecx;

loc_00049E2D: ;
    ecx = MEM32(eax + 0x8961B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049E3F; /* je: equal / zero */

loc_00049E37: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x8E8FF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x8E8FF4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049E41; /* jne: not equal / not zero */

loc_00049E3F: ;
    edi = ecx;

loc_00049E41: ;
    ecx = MEM32(eax + 0x8961B4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049E53; /* je: equal / zero */

loc_00049E4B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x8E8FF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x8E8FF4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049E55; /* jne: not equal / not zero */

loc_00049E53: ;
    edi = ecx;

loc_00049E55: ;
    ecx = MEM32(eax + 0x8961B8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049E67; /* je: equal / zero */

loc_00049E5F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x8E8FF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x8E8FF4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049E69; /* jne: not equal / not zero */

loc_00049E67: ;
    edi = ecx;

loc_00049E69: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x38 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00049DF1; /* jl: less (signed <) */

loc_00049E71: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049EA4; /* je: equal / zero */

loc_00049E75: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049EA4; /* je: equal / zero */

loc_00049E79: ;
    SET_LO8(edx, MEM8(edi + 0x30));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ebx + 0x30)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ebx + 0x30) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049EA4; /* jne: not equal / not zero */

loc_00049E81: ;
    eax = MEM32(ebp * 4 + 0x8F0040);
    MEM32(eax + 0xC) = ebx;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x39);
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x39);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00049E9Au); RECOMP_ABI_CALL(0x0001F420u, sub_0001F420); /* call 0x0001F420 */

loc_00049E9A: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00049EA2u); RECOMP_ABI_CALL(0x00024AFBu, sub_00024AFB); /* call 0x00024AFB */

loc_00049EA2: ;
    goto loc_00049ED3;

loc_00049EA4: ;
    eax = MEM32(ebp * 4 + 0x8F0040);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    MEM32(eax + 0xC) = ebx;
    PUSH32(esp, 0x00049EB6u); RECOMP_ABI_CALL(0x00024AFBu, sub_00024AFB); /* call 0x00024AFB */

loc_00049EB6: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00049EBCu); RECOMP_ABI_CALL(0x00030199u, sub_00030199); /* call 0x00030199 */

loc_00049EBC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00049ED6;

loc_00049EC1: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0xD4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00049ED3u); RECOMP_ABI_CALL(0x00033DDAu, sub_00033DDA); /* call 0x00033DDA */

loc_00049ED3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00049ED6: ;
    eax = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x778) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x778;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F6ABC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8F6ABC (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00049DC0; /* jl: less (signed <) */

loc_00049EFD: ;
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
 * sub_00049F60
 * Original: 0x00049F60 - 0x00049F9F (63 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049F60: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx * 4 + 0x8F0040);
    ecx = MEM32(edx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00049F70: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x8961AC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x8961AC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049F82; /* je: equal / zero */

loc_00049F79: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00049F70; /* jl: less (signed <) */

loc_00049F7F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00049F82: ;
    ecx = MEM32(eax * 4 + 0x89617C);
    PUSH32(esp, esi);
    esi = MEM32(eax * 4 + 0x8961AC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00049FB0
 * Original: 0x00049FB0 - 0x00049FF6 (70 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049FB0: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00049FC0;

    /* nop */

loc_00049FC0: ;
    ecx = MEM32(eax * 4 + 0x89617C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049FDE; /* je: equal / zero */

loc_00049FCB: ;
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049FDE; /* jne: not equal / not zero */

loc_00049FD3: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x8961DC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049FE9; /* je: equal / zero */

loc_00049FDE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00049FC0; /* jl: less (signed <) */

loc_00049FE4: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00049FE9: ;
    edx = MEM32(eax * 4 + 0x89617C);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x39);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004A010
 * Original: 0x0004A010 - 0x0004A270 (608 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004A010: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(0x8E8CF0));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004A259; /* jne: not equal / not zero */

loc_0004A026: ;
    ecx = MEM32(0x8E8CF0);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 4;
    MEM32(0x8E8CF0) = ecx;
    SET_LO8(ecx, 0xE);
    MEM16(0x895726) = LO16(eax);
    MEM16(0x895728) = LO16(eax);
    MEM16(0x89572C) = LO16(eax);
    MEM16(0x895732) = LO16(eax);
    edx = 0xC;
    MEM16(0x895738) = LO16(eax);
    MEM16(0x89573E) = LO16(eax);
    MEM16(0x895744) = LO16(eax);
    MEM16(0x89574A) = LO16(eax);
    MEM16(0x895750) = LO16(eax);
    MEM16(0x895756) = LO16(eax);
    MEM16(0x89575C) = LO16(eax);
    MEM16(0x895762) = LO16(eax);
    MEM16(0x895768) = LO16(eax);
    MEM16(0x89576E) = LO16(eax);
    MEM16(0x895774) = LO16(eax);
    MEM16(0x89577A) = LO16(eax);
    MEM16(0x895780) = LO16(eax);
    MEM16(0x895786) = LO16(eax);
    MEM16(0x89578C) = LO16(eax);
    MEM16(0x895792) = LO16(eax);
    MEM16(0x895798) = LO16(eax);
    MEM16(0x89579E) = LO16(eax);
    MEM16(0x8957A4) = LO16(eax);
    MEM16(0x8957AA) = LO16(eax);
    SET_LO8(eax, 0xA);
    MEM16(0x895722) = 0;
    MEM8(0x895724) = LO8(ecx);
    MEM8(0x89572A) = LO8(ecx);
    MEM16(0x89572E) = 8;
    MEM8(0x895730) = LO8(ecx);
    MEM16(0x895734) = LO16(edx);
    MEM8(0x895736) = LO8(ecx);
    MEM16(0x89573A) = 0x10;
    MEM8(0x89573C) = LO8(ecx);
    MEM16(0x895740) = 0x14;
    MEM8(0x895742) = LO8(ecx);
    MEM16(0x895746) = 0x18;
    MEM8(0x895748) = LO8(ecx);
    MEM16(0x89574C) = 0x1C;
    MEM8(0x89574E) = LO8(ecx);
    MEM16(0x895752) = 0x20;
    MEM8(0x895754) = LO8(ecx);
    MEM16(0x895758) = 0x24;
    MEM8(0x89575A) = LO8(ecx);
    MEM16(0x89575E) = 0x28;
    MEM8(0x895760) = LO8(ecx);
    MEM16(0x895764) = 0x2C;
    MEM8(0x895766) = LO8(ecx);
    MEM16(0x89576A) = 0x30;
    MEM8(0x89576C) = LO8(ecx);
    MEM16(0x895770) = 0x34;
    MEM8(0x895772) = LO8(ecx);
    MEM16(0x895776) = 0x38;
    MEM8(0x895778) = LO8(ecx);
    MEM16(0x89577C) = 0x3C;
    MEM8(0x89577E) = LO8(ecx);
    MEM16(0x895782) = 0x40;
    MEM8(0x895784) = LO8(ecx);
    MEM16(0x895788) = 0x44;
    MEM8(0x89578A) = LO8(ecx);
    MEM16(0x89578E) = 0x48;
    MEM8(0x895790) = LO8(ecx);
    MEM16(0x895794) = 0x4C;
    MEM8(0x895796) = LO8(ecx);
    MEM16(0x89579A) = 0x50;
    MEM8(0x89579C) = LO8(ecx);
    MEM16(0x8957A0) = 0x54;
    MEM8(0x8957A2) = LO8(ecx);
    MEM16(0x8957A6) = 0x58;
    MEM8(0x8957A8) = LO8(ecx);
    MEM16(0x8957AC) = 0x5C;
    MEM8(0x8957AE) = LO8(ecx);
    MEM16(0x8957B0) = LO16(edx);
    MEM16(0x8957B2) = 0x60;
    MEM8(0x8957B4) = LO8(eax);
    MEM16(0x8957B6) = LO16(edx);
    MEM16(0x8957B8) = 0x6C;
    MEM8(0x8957BA) = LO8(eax);

loc_0004A259: ;
    ecx = MEM32(0x9016AC);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0x895720);
    PUSH32(esp, 0x0004A26Bu); RECOMP_ABI_CALL(0x0001E8E0u, sub_0001E8E0); /* call 0x0001E8E0 */

loc_0004A26B: ;
    MEM32(esi + 0x78) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004A310
 * Original: 0x0004A310 - 0x0004A320 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A310(void)
{

loc_0004A310: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0004A330
 * Original: 0x0004A330 - 0x0004A34C (28 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A330(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004A330: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM32(eax) = 0x7A998C;
    MEM16(eax + 0xC) = LO16(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004A360
 * Original: 0x0004A360 - 0x0004A38B (43 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A360(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004A360: ;
    SET_LO16(edx, MEM16(esp + 8));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM16(eax + 0xC) = 0xD;
    MEM32(eax) = 0x7A999C;
    MEM16(eax + 0x1C) = LO16(ecx);
    MEM16(eax + 0x1E) = LO16(edx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0004A3A0
 * Original: 0x0004A3A0 - 0x0004A3A6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A3A0(void)
{

loc_0004A3A0: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_0004A3B0
 * Original: 0x0004A3B0 - 0x0004A3B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A3B0(void)
{

loc_0004A3B0: ;
    eax = 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0004A3C0
 * Original: 0x0004A3C0 - 0x0004A3FE (62 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004A3C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    edi = ecx;
    PUSH32(esp, 0x0004A3CDu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0004A3CD: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A3F9; /* je: equal / zero */

loc_0004A3D6: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0004A3DEu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_0004A3DE: ;
    MEM32(esi) = 0x7A999C;
    SET_LO16(eax, MEM16(edi + 0x1C));
    MEM16(esi + 0x1C) = LO16(eax);
    SET_LO16(ecx, MEM16(edi + 0x1E));
    POP32(esp, edi);
    MEM16(esi + 0x1E) = LO16(ecx);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0004A3F9: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004A410
 * Original: 0x0004A410 - 0x0004A474 (100 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004A410: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A41F; /* je: equal / zero */

loc_0004A41A: ;
    edx = ecx + 4;
    goto loc_0004A421;

loc_0004A41F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0004A421: ;
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(eax + 4) = esi;
    edx = MEM32(edx + 4);
    esi = MEM32(eax + 0x10);
    MEM32(eax + 8) = edx;
    MEM32(eax) = 0x7A998C;
    SET_LO16(edx, MEM16(ecx + 0xC));
    MEM16(eax + 0xC) = LO16(edx);
    SET_LO16(edx, MEM16(ecx + 0xE));
    MEM16(eax + 0xE) = LO16(edx);
    edx = MEM32(ecx + 0x10);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = edx ^ esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi ^ edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = esi;
    SET_LO8(edx, MEM8(ecx + 0x13));
    MEM8(eax + 0x13) = LO8(edx);
    SET_LO16(edx, MEM16(ecx + 0x14));
    MEM16(eax + 0x14) = LO16(edx);
    ecx = MEM32(ecx + 0x18);
    MEM32(eax + 0x18) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004A490
 * Original: 0x0004A490 - 0x0004A4BB (43 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004A490: ;
    SET_LO16(edx, MEM16(esp + 8));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM16(eax + 0xC) = 0xD;
    MEM16(eax + 0x1C) = LO16(ecx);
    MEM16(eax + 0x1E) = LO16(edx);
    MEM32(eax) = 0x7A99AC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0004A4D0
 * Original: 0x0004A4D0 - 0x0004A70D (573 bytes, 167 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A4D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004A4D0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x29);
    MEM8(0x8F010A) = 1;
    PUSH32(esp, 0x0004A4E9u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_0004A4E9: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x0004A4F3u); RECOMP_ABI_CALL(0x0001AD71u, sub_0001AD71); /* call 0x0001AD71 */

loc_0004A4F3: ;
    eax = MEM32(0x8E8F90);
    MEM32(eax + 0x34) = ebp;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0004A500: ;
    ecx = esi + 0x2A;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, 0x0004A50Fu); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_0004A50F: ;
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x0004A517u); RECOMP_ABI_CALL(0x0001AD71u, sub_0001AD71); /* call 0x0001AD71 */

loc_0004A517: ;
    edx = MEM32(esi * 4 + 0x8E91A4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    MEM32(edx + 0x34) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_0004A500; /* jl: less (signed <) */

loc_0004A527: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = eax;
    /* nop */

loc_0004A530: ;
    esi = MEM32(eax + 0x8E8FA8);
    eax = MEM32(esi + 0x1B0);
    ebx = 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x34) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_0004A5C5; /* jne: not equal / not zero */

loc_0004A548: ;
    eax = MEM32(esi + 0x1B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A557; /* je: equal / zero */

loc_0004A553: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004A562; /* jne: not equal / not zero */

loc_0004A557: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004A55Fu); RECOMP_ABI_CALL(0x0002AE38u, sub_0002AE38); /* call 0x0002AE38 */

loc_0004A55F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004A562: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0004A564: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x89617C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x89617C), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004A57B; /* jne: not equal / not zero */

loc_0004A56D: ;
    MEM32(eax * 4 + 0x89617C) = ebp;
    MEM8(eax + 0x8961DC) = 0xFF;

loc_0004A57B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004A564; /* jl: less (signed <) */

loc_0004A581: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0004A583: ;
    eax = MEM32(edi + 0x8961AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004A59C; /* jne: not equal / not zero */

loc_0004A58D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004A593u); RECOMP_ABI_CALL(0x000280E3u, sub_000280E3); /* call 0x000280E3 */

loc_0004A593: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x8961AC) = ebp;

loc_0004A59C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004A583; /* jl: less (signed <) */

loc_0004A5A4: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    ecx = MEM32(eax * 4 + 0x8F0040);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004A5B6u); RECOMP_ABI_CALL(0x00022A58u, sub_00022A58); /* call 0x00022A58 */

loc_0004A5B6: ;
    PUSH32(esp, esi);
    MEM32(esi + 0x1B0) = ebx;
    PUSH32(esp, 0x0004A5C2u); RECOMP_ABI_CALL(0x00028368u, sub_00028368); /* call 0x00028368 */

loc_0004A5C2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004A5C5: ;
    eax = MEM32(esi + 0x1B0);
    edi = 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004A5E9; /* jne: not equal / not zero */

loc_0004A5D4: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM32(esi + 0x1B4) = 4;
    PUSH32(esp, 0x0004A5E6u); RECOMP_ABI_CALL(0x00024E84u, sub_00024E84); /* call 0x00024E84 */

loc_0004A5E6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004A5E9: ;
    eax = MEM32(esi + 0x1B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A62C; /* je: equal / zero */

loc_0004A5F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A62C; /* je: equal / zero */

loc_0004A5F8: ;
    _fa = (uint32_t)(MEM32(esi + 0x1A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1A0), ebp (32-bit) */
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0004A61A; /* je: equal / zero */

loc_0004A603: ;
    MEM32(esi + 0x1B0) = edi;
    MEM32(esi + 0x1B4) = 4;
    PUSH32(esp, 0x0004A618u); RECOMP_ABI_CALL(0x00024E84u, sub_00024E84); /* call 0x00024E84 */

loc_0004A618: ;
    goto loc_0004A629;

loc_0004A61A: ;
    PUSH32(esp, 0x0004A61Fu); RECOMP_ABI_CALL(0x00024E84u, sub_00024E84); /* call 0x00024E84 */

loc_0004A61F: ;
    MEM32(esi + 0x1B0) = 1;

loc_0004A629: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004A62C: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0004A530; /* jl: less (signed <) */

loc_0004A642: ;
    edi = 0x8961AC;
    goto loc_0004A650;

    /* nop */

loc_0004A650: ;
    SET_LO8(eax, MEM8(ebp + 0x8961DC));
    MEM8(ebp + 0x8961E8) = LO8(eax);
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    ebx = SX8(LO8(eax));
    PUSH32(esp, 0x0004A667u); RECOMP_ABI_CALL(0x000280E3u, sub_000280E3); /* call 0x000280E3 */

loc_0004A667: ;
    esi = MEM32(edi + -48);
    PUSH32(esp, esi);
    MEM32(edi) = esi;
    PUSH32(esp, 0x0004A672u); RECOMP_ABI_CALL(0x0002F488u, sub_0002F488); /* call 0x0002F488 */

loc_0004A672: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A6AB; /* je: equal / zero */

loc_0004A67B: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    PUSH32(esp, ebx);
    MEM32(esi + 0x1B4) = eax;
    MEM32(esi + 0x1B0) = eax;
    MEM32(esi + 0x34) = 2;
    ecx = MEM32(edx * 4 + 0x8F0040);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004A6A0u); RECOMP_ABI_CALL(0x00024BC8u, sub_00024BC8); /* call 0x00024BC8 */

loc_0004A6A0: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004A6A8u); RECOMP_ABI_CALL(0x0002AE38u, sub_0002AE38); /* call 0x0002AE38 */

loc_0004A6A8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004A6AB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8961DC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x8961DC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004A650; /* jl: less (signed <) */

loc_0004A6B7: ;
    PUSH32(esp, 0x0004A6BCu); RECOMP_ABI_CALL(0x00014EA3u, sub_00014EA3); /* call 0x00014EA3 */

loc_0004A6BC: ;
    PUSH32(esp, 0x0004A6C1u); RECOMP_ABI_CALL(0x0001ECAFu, sub_0001ECAF); /* call 0x0001ECAF */

loc_0004A6C1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0004A6C8u); RECOMP_ABI_CALL(0x0002BD15u, sub_0002BD15); /* call 0x0002BD15 */

loc_0004A6C8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0004A6D1u); RECOMP_ABI_CALL(0x00033F7Eu, sub_00033F7E); /* call 0x00033F7E */

loc_0004A6D1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0004A6DAu); RECOMP_ABI_CALL(0x00033F7Eu, sub_00033F7E); /* call 0x00033F7E */

loc_0004A6DA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0004A6E3u); RECOMP_ABI_CALL(0x00033F7Eu, sub_00033F7E); /* call 0x00033F7E */

loc_0004A6E3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0004A6ECu); RECOMP_ABI_CALL(0x00033F7Eu, sub_00033F7E); /* call 0x00033F7E */

loc_0004A6EC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0004A6F5u); RECOMP_ABI_CALL(0x00033F7Eu, sub_00033F7E); /* call 0x00033F7E */

loc_0004A6F5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0004A6FEu); RECOMP_ABI_CALL(0x00033F7Eu, sub_00033F7E); /* call 0x00033F7E */

loc_0004A6FE: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002CA9E(); return; /* tail jmp 0x0002CA9E */

}

/**
 * sub_0004A7A0
 * Original: 0x0004A7A0 - 0x0004AC5D (1213 bytes, 340 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A7A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004A7A0: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x89617C;
    edi = edi;

loc_0004A7B0: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A80A; /* je: equal / zero */

loc_0004A7B7: ;
    edi = 6;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004A7CB; /* jl: less (signed <) */

loc_0004A7C4: ;
    edx = edi;
    edi = 0xC;

loc_0004A7CB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004A80A; /* jge: greater or equal (signed >=) */

loc_0004A7CF: ;
    /* nop */

loc_0004A7D0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004A80A; /* jne: not equal / not zero */

loc_0004A7D4: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A805; /* je: equal / zero */

loc_0004A7D8: ;
    ecx = MEM32(esi);
    eax = MEM32(edx * 4 + 0x8961AC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004A805; /* jne: not equal / not zero */

loc_0004A7E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A805; /* je: equal / zero */

loc_0004A7E9: ;
    eax = MEM32(edx * 4 + 0x89617C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A805; /* je: equal / zero */

loc_0004A7F4: ;
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A805; /* je: equal / zero */

loc_0004A7FA: ;
    MEM32(edx * 4 + 0x89617C) = ecx;
    MEM32(esi) = eax;
    SET_LO8(ebx, 1);

loc_0004A805: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004A7D0; /* jl: less (signed <) */

loc_0004A80A: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004A7B0; /* jl: less (signed <) */

loc_0004A813: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = ebx;
    /* nop */

loc_0004A820: ;
    eax = MEM32(ebx * 4 + 0x89617C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(ebx * 4 + 0x8961AC);
    if (CMP_EQ(_fa, _fb)) goto loc_0004A896; /* je: equal / zero */

loc_0004A832: ;
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A896; /* je: equal / zero */

loc_0004A838: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    edx = MEM32(ecx * 4 + 0x8F0040);
    SET_LO8(eax, MEM8(edx + 0x158));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004A896; /* jne: not equal / not zero */

loc_0004A84D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A896; /* je: equal / zero */

loc_0004A851: ;
    eax = MEM32(esi + 0x1A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004A896; /* jne: not equal / not zero */

loc_0004A85B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x8961E8);
    MEM32(ebx * 4 + 0x89617C) = esi;
    MEM8(ebx + 0x8961DC) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0004A896; /* je: equal / zero */

loc_0004A873: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004A879u); RECOMP_ABI_CALL(0x00036E13u, sub_00036E13); /* call 0x00036E13 */

loc_0004A879: ;
    eax = MEM32(esi + 0x1B0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A896; /* je: equal / zero */

loc_0004A887: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A896; /* je: equal / zero */

loc_0004A88C: ;
    MEM32(esi + 0x1B0) = 0;

loc_0004A896: ;
    edi = MEM32(ebx * 4 + 0x8961AC);
    esi = MEM32(ebx * 4 + 0x89617C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AACF; /* je: equal / zero */

loc_0004A8AC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004A8F6; /* jne: not equal / not zero */

loc_0004A8B0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0004A8B6u); RECOMP_ABI_CALL(0x000280E3u, sub_000280E3); /* call 0x000280E3 */

loc_0004A8B6: ;
    esi = MEM32(esp + 0x14);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    edx = MEM32(esi * 4 + 0x8961AC);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x30);
    ecx = MEM32(eax * 4 + 0x8F00F8);
    PUSH32(esp, 0x0004A8DFu); RECOMP_ABI_CALL(0x0002339Fu, sub_0002339F); /* call 0x0002339F */

loc_0004A8DF: ;
    MEM32(esi * 4 + 0x8961AC) = 0;
    MEM8(esi + 0x8961E8) = 0;
    goto loc_0004AB19;

loc_0004A8F6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A966; /* je: equal / zero */

loc_0004A8FA: ;
    eax = MEM32(edi + 0xF0);
    ecx = MEM32(edi + 0x1B0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A934; /* je: equal / zero */

loc_0004A90D: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0004AACF; /* jle: less or equal (signed <=) */

loc_0004A913: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004AACF; /* jg: greater (signed >) */

loc_0004A91C: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AACF; /* je: equal / zero */

loc_0004A925: ;
    MEM32(eax) = 1;
    MEM8(eax + 4) = 1;
    goto loc_0004AACF;

loc_0004A934: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A94A; /* je: equal / zero */

loc_0004A939: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0004A93Fu); RECOMP_ABI_CALL(0x00025F23u, sub_00025F23); /* call 0x00025F23 */

loc_0004A93F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AACF; /* je: equal / zero */

loc_0004A94A: ;
    eax = MEM32(edi + 0x1A0);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx + ecx + 1;
    MEM32(edi + 0x1B0) = ecx;
    goto loc_0004AACF;

loc_0004A966: ;
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    eax = MEM32(edi * 4 + 0x8F0040);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebp = (uint32_t)(int32_t)SMEM8(eax + 0xD2);
    if (CMP_NE(_fa, _fb)) goto loc_0004A980; /* jne: not equal / not zero */

loc_0004A97F: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0004A980: ;
    eax = edi + edi * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = eax + 6;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004A9A7; /* jge: greater or equal (signed >=) */

loc_0004A98E: ;
    edi = edi;

loc_0004A990: ;
    ecx = MEM32(eax * 4 + 0x8961AC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A9A2; /* je: equal / zero */

loc_0004A99B: ;
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A9A2; /* je: equal / zero */

loc_0004A9A1: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0004A9A2: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004A990; /* jl: less (signed <) */

loc_0004A9A7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004A9F3; /* jl: less (signed <) */

loc_0004A9AB: ;
    PUSH32(esp, 0x0004A9B0u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_0004A9B0: ;
    ecx = eax;
    PUSH32(esp, 0x0004A9B7u); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_0004A9B7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A9F3; /* je: equal / zero */

loc_0004A9BB: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    eax = MEM32(edx * 4 + 0x8F0040);
    ecx = MEM32(eax);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0xD2);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0xD2);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_0004A9F3; /* jns: not sign (positive) */

loc_0004A9DA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0004A9E0u); RECOMP_ABI_CALL(0x0002F4B5u, sub_0002F4B5); /* call 0x0002F4B5 */

loc_0004A9E0: ;
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x0004A9E8u); RECOMP_ABI_CALL(0x0001198Du, sub_0001198D); /* call 0x0001198D */

loc_0004A9E8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0004AB20; /* jg: greater (signed >) */

loc_0004A9F3: ;
    edi = MEM32(esp + 0x10);
    ecx = MEM32(edi * 4 + 0x8961AC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0004AA04u); RECOMP_ABI_CALL(0x000280E3u, sub_000280E3); /* call 0x000280E3 */

loc_0004AA04: ;
    PUSH32(esp, esi);
    MEM32(edi * 4 + 0x8961AC) = esi;
    PUSH32(esp, 0x0004AA11u); RECOMP_ABI_CALL(0x0002F488u, sub_0002F488); /* call 0x0002F488 */

loc_0004AA11: ;
    SET_LO8(eax, MEM8(edi + 0x8961DC));
    edx = SX8(LO8(eax));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + 0x8961E8) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    ecx = MEM32(eax * 4 + 0x8F0040);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004AA35u); RECOMP_ABI_CALL(0x00024BC8u, sub_00024BC8); /* call 0x00024BC8 */

loc_0004AA35: ;
    _fa = (uint32_t)(MEM32(esi + 0x1B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1B4), 3 (32-bit) */
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0004AA48; /* jne: not equal / not zero */

loc_0004AA41: ;
    PUSH32(esp, 0x0004AA46u); RECOMP_ABI_CALL(0x000233C7u, sub_000233C7); /* call 0x000233C7 */

loc_0004AA46: ;
    goto loc_0004AA4D;

loc_0004AA48: ;
    PUSH32(esp, 0x0004AA4Du); RECOMP_ABI_CALL(0x0002AE38u, sub_0002AE38); /* call 0x0002AE38 */

loc_0004AA4D: ;
    ecx = MEM32(esi + 0xF0);
    MEM32(esi + 0x34) = 2;
    SET_LO8(eax, MEM8(ecx + 0x51));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004AACF; /* jne: not equal / not zero */

loc_0004AA64: ;
    SET_LO8(eax, MEM8(0x8E93BA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AACF; /* je: equal / zero */

loc_0004AA6D: ;
    PUSH32(esp, 0x0004AA72u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_0004AA72: ;
    ecx = eax;
    PUSH32(esp, 0x0004AA79u); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_0004AA79: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AACF; /* je: equal / zero */

loc_0004AA7D: ;
    SET_LO8(eax, MEM8(0x896177));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004AACF; /* jne: not equal / not zero */

loc_0004AA86: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    eax = MEM32(edx * 4 + 0x8F0040);
    ecx = MEM32(eax + 8);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x39);
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(esi + 0x39));
    ecx = esp + 0x14;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM16(esp + 0x20) = 0xD;
    MEM16(esp + 0x30) = LO16(edx);
    MEM16(esp + 0x32) = LO16(eax);
    MEM32(esp + 0x14) = 0x7A99AC;
    PUSH32(esp, 0x0004AACFu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_0004AACF: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax * 4 + 0x8961AC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AB20; /* je: equal / zero */

loc_0004AADE: ;
    edx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx * 4 + 0x89617C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx * 4 + 0x89617C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004AB20; /* jne: not equal / not zero */

loc_0004AAE9: ;
    eax = MEM32(ecx + 0xF0);
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004AB20; /* jne: not equal / not zero */

loc_0004AAFA: ;
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004AB0F; /* jne: not equal / not zero */

loc_0004AB00: ;
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    MEM32(ecx * 4 + 0x8F6A6C) = MEM32(ecx * 4 + 0x8F6A6C) & 0xFFFFF7FFu;
    _fa = (uint32_t)(MEM32(ecx * 4 + 0x8F6A6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0004AB0F: ;
    MEM32(eax) = 0;
    MEM8(eax + 4) = 1;

loc_0004AB19: ;
    MEM8(0x8F010A) = 1;

loc_0004AB20: ;
    ebx = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xC (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_0004A820; /* jl: less (signed <) */

loc_0004AB32: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xC;
    edi = esp + 0x14;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0004AB46: ;
    ecx = MEM32(eax + 0x8961AC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AB60; /* je: equal / zero */

loc_0004AB50: ;
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x39);
    SET_LO8(ebx, MEM8(esp + ecx + 0x14));
    ecx = esp + ecx + 0x14;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(ebx);

loc_0004AB60: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004AB46; /* jl: less (signed <) */

loc_0004AB68: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0004AB70: ;
    _fa = (uint32_t)(MEM8(esp + eax + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + eax + 0x14), 1 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0004AB79; /* jle: less or equal (signed <=) */

loc_0004AB77: ;
    SET_LO8(edx, 1);

loc_0004AB79: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x33) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x33 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004AB70; /* jl: less (signed <) */

loc_0004AB7F: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AC50; /* je: equal / zero */

loc_0004AB87: ;
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0004AB90: ;
    eax = MEM32(ebx * 4 + 0x8961AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AC46; /* je: equal / zero */

loc_0004AB9F: ;
    edi = ebx + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004AC46; /* jge: greater or equal (signed >=) */

loc_0004ABAB: ;
    goto loc_0004ABB0;

    /* nop */

loc_0004ABB0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AC3C; /* je: equal / zero */

loc_0004ABB8: ;
    eax = MEM32(ebx * 4 + 0x8961AC);
    ecx = MEM32(edi * 4 + 0x8961AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004AC3C; /* jne: not equal / not zero */

loc_0004ABCA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx * 4 + 0x89617C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx * 4 + 0x89617C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004ABD7; /* jne: not equal / not zero */

loc_0004ABD3: ;
    ebp = edi;
    goto loc_0004ABE2;

loc_0004ABD7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi * 4 + 0x89617C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi * 4 + 0x89617C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004ABE2; /* jne: not equal / not zero */

loc_0004ABE0: ;
    ebp = ebx;

loc_0004ABE2: ;
    esi = MEM32(ebp * 4 + 0x89617C);
    PUSH32(esp, esi);
    MEM32(ebp * 4 + 0x8961AC) = esi;
    PUSH32(esp, 0x0004ABF6u); RECOMP_ABI_CALL(0x0002F488u, sub_0002F488); /* call 0x0002F488 */

loc_0004ABF6: ;
    SET_LO8(eax, MEM8(ebp + 0x8961DC));
    MEM8(ebp + 0x8961E8) = LO8(eax);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    ecx = MEM32(ecx * 4 + 0x8F0040);
    eax = SX8(LO8(eax));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004AC1Au); RECOMP_ABI_CALL(0x00024BC8u, sub_00024BC8); /* call 0x00024BC8 */

loc_0004AC1A: ;
    _fa = (uint32_t)(MEM32(esi + 0x1B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1B4), 3 (32-bit) */
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0004AC2D; /* jne: not equal / not zero */

loc_0004AC26: ;
    PUSH32(esp, 0x0004AC2Bu); RECOMP_ABI_CALL(0x000233C7u, sub_000233C7); /* call 0x000233C7 */

loc_0004AC2B: ;
    goto loc_0004AC32;

loc_0004AC2D: ;
    PUSH32(esp, 0x0004AC32u); RECOMP_ABI_CALL(0x0002AE38u, sub_0002AE38); /* call 0x0002AE38 */

loc_0004AC32: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x34) = 2;

loc_0004AC3C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004ABB0; /* jl: less (signed <) */

loc_0004AC46: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004AB90; /* jl: less (signed <) */

loc_0004AC50: ;
    PUSH32(esp, 0x0004AC55u); RECOMP_ABI_CALL(0x00028CE1u, sub_00028CE1); /* call 0x00028CE1 */

loc_0004AC55: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004AD90
 * Original: 0x0004AD90 - 0x0004AEAB (283 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004AD90(void)
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

loc_0004AD90: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8F6A6C);
    PUSH32(esp, 0);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x11) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 1);
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0004ADAAu); RECOMP_ABI_CALL(0x00033DDAu, sub_00033DDA); /* call 0x00033DDA */

loc_0004ADAA: ;
    ecx = MEM32(0x8F6A70);
    PUSH32(esp, 0);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x11) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 1);
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0004ADC2u); RECOMP_ABI_CALL(0x00033DDAu, sub_00033DDA); /* call 0x00033DDA */

loc_0004ADC2: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0004ADCAu); RECOMP_ABI_CALL(0x0001DE59u, sub_0001DE59); /* call 0x0001DE59 */

loc_0004ADCA: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E931C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A99C0); /* subss */
    eax = MEM32(0x8E9248);
    ecx = MEM32(eax + 0x20);
    edx = esp + 0x10;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edx);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0004AE01u); RECOMP_ABI_CALL(0x0003525Cu, sub_0003525C); /* call 0x0003525C */

loc_0004AE01: ;
    eax = MEM32(0x8E9248);
    xmm0 = XMM_SCALAR(MEMF(0x8F95EC)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp;
    MEMF(ecx + 0x60) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0004AE29u); RECOMP_ABI_CALL(0x00034A1Eu, sub_00034A1E); /* call 0x00034A1E */

loc_0004AE29: ;
    eax = MEM32(0x8E9248);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0004AE38u); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_0004AE38: ;
    ecx = MEM32(0x8E9248);
    PUSH32(esp, 0x0004AE43u); RECOMP_ABI_CALL(0x0003692Cu, sub_0003692C); /* call 0x0003692C */

loc_0004AE43: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0004AE5Du); RECOMP_ABI_CALL(0x00018111u, sub_00018111); /* call 0x00018111 */

loc_0004AE5D: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0004AE66u); RECOMP_ABI_CALL(0x0001E2AAu, sub_0001E2AA); /* call 0x0001E2AA */

loc_0004AE66: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x7A99BC)); /* movss */
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8E9050);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0004AE88u); RECOMP_ABI_CALL(0x00025591u, sub_00025591); /* call 0x00025591 */

loc_0004AE88: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    ecx = MEM32(0x8E904C);
    edx = esp + 4;
    PUSH32(esp, edx);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0004AEA7u); RECOMP_ABI_CALL(0x00025591u, sub_00025591); /* call 0x00025591 */

loc_0004AEA7: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_0004AF00
 * Original: 0x0004AF00 - 0x0004AF04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004AF00(void)
{

loc_0004AF00: ;
    MEM8(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0004AF10
 * Original: 0x0004AF10 - 0x0004AF23 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004AF10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004AF10: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0004AF1Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0004AF1F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004AF30
 * Original: 0x0004AF30 - 0x0004AF39 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004AF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004AF30: ;
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_0004AF40
 * Original: 0x0004AF40 - 0x0004AF48 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004AF40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004AF40: ;
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), 2 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_0004AF50
 * Original: 0x0004AF50 - 0x0004AF58 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004AF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004AF50: ;
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), 5 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_0004AF60
 * Original: 0x0004AF60 - 0x0004AF68 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004AF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004AF60: ;
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), 6 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_0004AF70
 * Original: 0x0004AF70 - 0x0004AF91 (33 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004AF70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004AF70: ;
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AF8E; /* je: equal / zero */

loc_0004AF78: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AF8E; /* je: equal / zero */

loc_0004AF7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AF8E; /* je: equal / zero */

loc_0004AF81: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AF8E; /* je: equal / zero */

loc_0004AF86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AF8E; /* je: equal / zero */

loc_0004AF8B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0004AF8E: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0004AFA0
 * Original: 0x0004AFA0 - 0x0004AFA3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004AFA0(void)
{

loc_0004AFA0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0004AFB0
 * Original: 0x0004AFB0 - 0x0004AFB4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004AFB0(void)
{

loc_0004AFB0: ;
    eax = MEM32(ecx + 0x44);
    esp += 4; return; /* ret */

}

/**
 * sub_0004AFC0
 * Original: 0x0004AFC0 - 0x0004AFCA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004AFC0(void)
{

loc_0004AFC0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x48) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004AFD0
 * Original: 0x0004AFD0 - 0x0004AFD6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004AFD0(void)
{

loc_0004AFD0: ;
    eax = MEM32(0x8F0650);
    esp += 4; return; /* ret */

}

/**
 * sub_0004AFE0
 * Original: 0x0004AFE0 - 0x0004AFEA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004AFE0(void)
{

loc_0004AFE0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x34) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004AFF0
 * Original: 0x0004AFF0 - 0x0004B00E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004AFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004AFF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0004AFF8u); RECOMP_ABI_CALL(0x0001144Cu, sub_0001144C); /* call 0x0001144C */

loc_0004AFF8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004B008; /* je: equal / zero */

loc_0004AFFF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004B005u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0004B005: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004B008: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004B020
 * Original: 0x0004B020 - 0x0004B03E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004B020: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0004B028u); RECOMP_ABI_CALL(0x00035171u, sub_00035171); /* call 0x00035171 */

loc_0004B028: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004B038; /* je: equal / zero */

loc_0004B02F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004B035u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0004B035: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004B038: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004B050
 * Original: 0x0004B050 - 0x0004B06E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004B050: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0004B058u); RECOMP_ABI_CALL(0x00011523u, sub_00011523); /* call 0x00011523 */

loc_0004B058: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004B068; /* je: equal / zero */

loc_0004B05F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004B065u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0004B065: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004B068: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004B080
 * Original: 0x0004B080 - 0x0004B08A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B080(void)
{

loc_0004B080: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004B090
 * Original: 0x0004B090 - 0x0004B09A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B090(void)
{

loc_0004B090: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004B0A0
 * Original: 0x0004B0A0 - 0x0004B0AA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B0A0(void)
{

loc_0004B0A0: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004B0B0
 * Original: 0x0004B0B0 - 0x0004B0BA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B0B0(void)
{

loc_0004B0B0: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004B0C0
 * Original: 0x0004B0C0 - 0x0004B0CD (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B0C0(void)
{

loc_0004B0C0: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 8;
    eax = ecx + eax * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004B0D0
 * Original: 0x0004B0D0 - 0x0004B0DA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B0D0(void)
{

loc_0004B0D0: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004B0E0
 * Original: 0x0004B0E0 - 0x0004B0EA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B0E0(void)
{

loc_0004B0E0: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004B0F0
 * Original: 0x0004B0F0 - 0x0004B0FA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B0F0(void)
{

loc_0004B0F0: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004B100
 * Original: 0x0004B100 - 0x0004B10F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B100(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004B100: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004B120
 * Original: 0x0004B120 - 0x0004B12A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B120(void)
{

loc_0004B120: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004B130
 * Original: 0x0004B130 - 0x0004B13A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B130(void)
{

loc_0004B130: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004B140
 * Original: 0x0004B140 - 0x0004B14A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B140(void)
{

loc_0004B140: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004B150
 * Original: 0x0004B150 - 0x0004B4F4 (932 bytes, 274 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004B150: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x4C);
    MEM8(0x8E9304) = 0;
    PUSH32(esp, 0x0004B168u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0004B168: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B17D; /* je: equal / zero */

loc_0004B16F: ;
    ecx = eax;
    PUSH32(esp, 0x0004B176u); RECOMP_ABI_CALL(0x0001A191u, sub_0001A191); /* call 0x0001A191 */

loc_0004B176: ;
    MEM32(0x8F010C) = eax;
    goto loc_0004B183;

loc_0004B17D: ;
    MEM32(0x8F010C) = edi;

loc_0004B183: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x94);
    PUSH32(esp, 0x0004B18Eu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0004B18E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B1A3; /* je: equal / zero */

loc_0004B195: ;
    ecx = eax;
    PUSH32(esp, 0x0004B19Cu); RECOMP_ABI_CALL(0x00017117u, sub_00017117); /* call 0x00017117 */

loc_0004B19C: ;
    MEM32(0x8EB300) = eax;
    goto loc_0004B1A9;

loc_0004B1A3: ;
    MEM32(0x8EB300) = edi;

loc_0004B1A9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x360);
    PUSH32(esp, 0x0004B1B4u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0004B1B4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B1C9; /* je: equal / zero */

loc_0004B1BB: ;
    ecx = eax;
    PUSH32(esp, 0x0004B1C2u); RECOMP_ABI_CALL(0x0001C671u, sub_0001C671); /* call 0x0001C671 */

loc_0004B1C2: ;
    MEM32(0x8E936C) = eax;
    goto loc_0004B1CF;

loc_0004B1C9: ;
    MEM32(0x8E936C) = edi;

loc_0004B1CF: ;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x10) = edi;
    ebp = 0x8E8F94;
    eax = 0x8E91B8;
    MEM32(esp + 0x18) = 2;
    goto loc_0004B1F0;

loc_0004B1EB: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0004B1F0: ;
    esi = MEM32(esp + 0x10);
    ebx = eax;
    goto loc_0004B200;

    /* nop */
    /* nop */

loc_0004B200: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x420);
    PUSH32(esp, 0x0004B20Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0004B20C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B223; /* je: equal / zero */

loc_0004B213: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0004B221u); RECOMP_ABI_CALL(0x00020AE6u, sub_00020AE6); /* call 0x00020AE6 */

loc_0004B221: ;
    goto loc_0004B225;

loc_0004B223: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0004B225: ;
    MEM32(ebx) = eax;
    MEM32(esi + 0x8E9100) = eax;
    MEM32(esi + 0x8E9058) = eax;
    MEM32(esi + 0x8E8FA8) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004B200; /* jl: less (signed <) */

loc_0004B245: ;
    esi = MEM32(esp + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi;

loc_0004B250: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x450);
    PUSH32(esp, 0x0004B25Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0004B25C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B275; /* je: equal / zero */

loc_0004B263: ;
    edx = MEM32(esp + 0x14);
    ecx = edx + edi + 0x12;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0004B273u); RECOMP_ABI_CALL(0x00037593u, sub_00037593); /* call 0x00037593 */

loc_0004B273: ;
    goto loc_0004B277;

loc_0004B275: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0004B277: ;
    MEM32(ebp) = eax;
    MEM32(esi + 0x8E9100) = eax;
    MEM32(esi + 0x8E9058) = eax;
    MEM32(esi + 0x8E8FA8) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004B250; /* jl: less (signed <) */

loc_0004B298: ;
    esi = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ebx;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = ecx;
    if ((_fa != 0)) goto loc_0004B1EB; /* jne: not equal / not zero */

loc_0004B2BF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x210);
    PUSH32(esp, 0x0004B2CBu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0004B2CB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B2DD; /* je: equal / zero */

loc_0004B2D2: ;
    PUSH32(esp, 0x28);
    ecx = eax;
    PUSH32(esp, 0x0004B2DBu); RECOMP_ABI_CALL(0x0001131Bu, sub_0001131B); /* call 0x0001131B */

loc_0004B2DB: ;
    goto loc_0004B2DF;

loc_0004B2DD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0004B2DF: ;
    MEM32(0x8E8FA4) = eax;
    MEM32(0x8E90F8) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0004B2F0;

    /* nop */

loc_0004B2F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7C);
    PUSH32(esp, 0x0004B2F9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0004B2F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B309; /* je: equal / zero */

loc_0004B300: ;
    ecx = eax;
    PUSH32(esp, 0x0004B307u); RECOMP_ABI_CALL(0x0001912Eu, sub_0001912E); /* call 0x0001912E */

loc_0004B307: ;
    goto loc_0004B30B;

loc_0004B309: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0004B30B: ;
    MEM32(esi + 0x8F0050) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004B2F0; /* jl: less (signed <) */

loc_0004B31C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_0004B320: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x74);
    PUSH32(esp, 0x0004B329u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0004B329: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B33D; /* je: equal / zero */

loc_0004B330: ;
    edx = esi + 0x2E;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0004B33Bu); RECOMP_ABI_CALL(0x000119A1u, sub_000119A1); /* call 0x000119A1 */

loc_0004B33B: ;
    goto loc_0004B33F;

loc_0004B33D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0004B33F: ;
    MEM32(esi * 4 + 0x8E904C) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004B320; /* jl: less (signed <) */

loc_0004B34C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x0004B355u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0004B355: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B367; /* je: equal / zero */

loc_0004B35C: ;
    PUSH32(esp, 0x29);
    ecx = eax;
    PUSH32(esp, 0x0004B365u); RECOMP_ABI_CALL(0x0002DA1Bu, sub_0002DA1B); /* call 0x0002DA1B */

loc_0004B365: ;
    goto loc_0004B369;

loc_0004B367: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0004B369: ;
    MEM32(0x8E8F90) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0004B370: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x0004B379u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0004B379: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B38D; /* je: equal / zero */

loc_0004B380: ;
    ecx = esi + 0x2A;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0004B38Bu); RECOMP_ABI_CALL(0x0002DA1Bu, sub_0002DA1B); /* call 0x0002DA1B */

loc_0004B38B: ;
    goto loc_0004B38F;

loc_0004B38D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0004B38F: ;
    MEM32(esi * 4 + 0x8E91A4) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004B370; /* jl: less (signed <) */

loc_0004B39C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_0004B3A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x430);
    PUSH32(esp, 0x0004B3ACu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0004B3AC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B3C1; /* je: equal / zero */

loc_0004B3B3: ;
    PUSH32(esp, esi);
    edx = esi + 0x30;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0004B3BFu); RECOMP_ABI_CALL(0x00015466u, sub_00015466); /* call 0x00015466 */

loc_0004B3BF: ;
    goto loc_0004B3C3;

loc_0004B3C1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0004B3C3: ;
    MEM32(esi * 4 + 0x8E8F88) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004B3A0; /* jl: less (signed <) */

loc_0004B3D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xC4);
    PUSH32(esp, 0x0004B3DCu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0004B3DC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B3EE; /* je: equal / zero */

loc_0004B3E3: ;
    PUSH32(esp, 0x32);
    ecx = eax;
    PUSH32(esp, 0x0004B3ECu); RECOMP_ABI_CALL(0x00015D08u, sub_00015D08); /* call 0x00015D08 */

loc_0004B3EC: ;
    goto loc_0004B3F0;

loc_0004B3EE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0004B3F0: ;
    ecx = MEM32(0x8E8FA4);
    MEM32(0x8E9248) = ecx;
    edx = MEM32(0x8E8F88);
    ebx = MEM32(0x8E8F8C);
    ecx = 0x28;
    esi = 0x8E9058;
    edi = 0x8E8EB8;
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
    ecx = MEM32(0x8E90F8);
    MEM32(0x8E8F58) = ecx;
    ecx = MEM32(0x8E8F90);
    MEM32(0x8E8F5C) = ecx;
    ecx = MEM32(0x8E91A4);
    MEM32(0x8E8F60) = ecx;
    ecx = MEM32(0x8E91A8);
    MEM32(0x8E8F64) = ecx;
    ecx = MEM32(0x8E91AC);
    MEM32(0x8E8F68) = ecx;
    ecx = MEM32(0x8E91B0);
    MEM32(0x8E8F6C) = ecx;
    ecx = MEM32(0x8E904C);
    MEM32(0x8E8F70) = ecx;
    ecx = MEM32(0x8E9050);
    MEM32(0x8E90FC) = eax;
    MEM32(0x8E91A0) = edx;
    MEM32(0x8E9048) = ebx;
    MEM32(0x8E8F84) = eax;
    MEM32(0x8E8F74) = ecx;
    MEM32(0x8E8F78) = edx;
    MEM32(0x8E8F7C) = ebx;
    MEM32(0x8E8F80) = eax;
    PUSH32(esp, 0x0004B4A5u); RECOMP_ABI_CALL(0x0002FFF0u, sub_0002FFF0); /* call 0x0002FFF0 */

loc_0004B4A5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x0004B4AEu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0004B4AE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0004B4C9; /* je: equal / zero */

loc_0004B4B9: ;
    PUSH32(esp, 0xC);
    ecx = eax;
    PUSH32(esp, 0x0004B4C2u); RECOMP_ABI_CALL(0x000233EFu, sub_000233EF); /* call 0x000233EF */

loc_0004B4C2: ;
    MEM32(0x8EB3BC) = eax;
    goto loc_0004B4D3;

loc_0004B4C9: ;
    MEM32(0x8EB3BC) = 0;

loc_0004B4D3: ;
    PUSH32(esp, 0x0004B4D8u); RECOMP_ABI_CALL(0x0002CF6Cu, sub_0002CF6C); /* call 0x0002CF6C */

loc_0004B4D8: ;
    ecx = 0x8978E8;
    PUSH32(esp, 0x0004B4E2u); RECOMP_ABI_CALL(0x00035883u, sub_00035883); /* call 0x00035883 */

loc_0004B4E2: ;
    PUSH32(esp, 0x0004B4E7u); RECOMP_ABI_CALL(0x00035509u, sub_00035509); /* call 0x00035509 */

loc_0004B4E7: ;
    PUSH32(esp, 0x0004B4ECu); RECOMP_ABI_CALL(0x0002AD25u, sub_0002AD25); /* call 0x0002AD25 */

loc_0004B4EC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002090B(); return; /* tail jmp 0x0002090B */

}

/**
 * sub_0004B5E0
 * Original: 0x0004B5E0 - 0x0004B636 (86 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004B5E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004B5E6u); RECOMP_ABI_CALL(0x0002E5FBu, sub_0002E5FB); /* call 0x0002E5FB */

loc_0004B5E6: ;
    PUSH32(esp, 0x0004B5EBu); RECOMP_ABI_CALL(0x0001C491u, sub_0001C491); /* call 0x0001C491 */

loc_0004B5EB: ;
    ecx = eax;
    PUSH32(esp, 0x0004B5F2u); RECOMP_ABI_CALL(0x0002192Du, sub_0002192D); /* call 0x0002192D */

loc_0004B5F2: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0004B5F4: ;
    ecx = MEM32(esi + 0x8E8EB8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0004B5FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004B5FCu); } /* indirect call */
    }

loc_0004B5FF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xCC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004B5F4; /* jl: less (signed <) */

loc_0004B60A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0004B610: ;
    ecx = MEM32(esi + 0x8F0040);
    PUSH32(esp, 0x0004B61Bu); RECOMP_ABI_CALL(0x0002E844u, sub_0002E844); /* call 0x0002E844 */

loc_0004B61B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004B610; /* jl: less (signed <) */

loc_0004B623: ;
    ecx = MEM32(0x896158);
    PUSH32(esp, ecx);
    ecx = 0x8978E8;
    PUSH32(esp, 0x0004B634u); RECOMP_ABI_CALL(0x0002A889u, sub_0002A889); /* call 0x0002A889 */

loc_0004B634: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004B650
 * Original: 0x0004B650 - 0x0004B750 (256 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004B650: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004B657u); RECOMP_ABI_CALL(0x00013670u, sub_00013670); /* call 0x00013670 */

loc_0004B657: ;
    PUSH32(esp, 0x0004B65Cu); RECOMP_ABI_CALL(0x00022D28u, sub_00022D28); /* call 0x00022D28 */

loc_0004B65C: ;
    PUSH32(esp, 0x0004B661u); RECOMP_ABI_CALL(0x00019584u, sub_00019584); /* call 0x00019584 */

loc_0004B661: ;
    PUSH32(esp, 0x0004B666u); RECOMP_ABI_CALL(0x0003504Fu, sub_0003504F); /* call 0x0003504F */

loc_0004B666: ;
    PUSH32(esp, 0x0004B66Bu); RECOMP_ABI_CALL(0x000273B4u, sub_000273B4); /* call 0x000273B4 */

loc_0004B66B: ;
    ecx = MEM32(0x8EB300);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0004B687; /* je: equal / zero */

loc_0004B679: ;
    PUSH32(esp, 0x0004B67Eu); RECOMP_ABI_CALL(0x0001144Cu, sub_0001144C); /* call 0x0001144C */

loc_0004B67E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004B684u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0004B684: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004B687: ;
    ecx = MEM32(0x8F010C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(0x8EB300) = ebx;
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0004B6A7; /* je: equal / zero */

loc_0004B699: ;
    PUSH32(esp, 0x0004B69Eu); RECOMP_ABI_CALL(0x00035171u, sub_00035171); /* call 0x00035171 */

loc_0004B69E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004B6A4u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0004B6A4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004B6A7: ;
    ecx = MEM32(0x8E936C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(0x8F010C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0004B6BD; /* je: equal / zero */

loc_0004B6B7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0004B6BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004B6BBu); } /* indirect call */
    }

loc_0004B6BD: ;
    MEM32(0x8E936C) = ebx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0004B6C5: ;
    ecx = MEM32(esi + 0x8E8EB8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B6D5; /* je: equal / zero */

loc_0004B6CF: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0004B6D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004B6D3u); } /* indirect call */
    }

loc_0004B6D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xCC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004B6C5; /* jl: less (signed <) */

loc_0004B6E0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);

loc_0004B6E3: ;
    edi = MEM32(esi + 0x8F0050);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B6FD; /* je: equal / zero */

loc_0004B6ED: ;
    ecx = edi;
    PUSH32(esp, 0x0004B6F4u); RECOMP_ABI_CALL(0x00011523u, sub_00011523); /* call 0x00011523 */

loc_0004B6F4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0004B6FAu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0004B6FA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004B6FD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004B6E3; /* jl: less (signed <) */

loc_0004B708: ;
    PUSH32(esp, 0x0004B70Du); RECOMP_ABI_CALL(0x00017D92u, sub_00017D92); /* call 0x00017D92 */

loc_0004B70D: ;
    _fa = (uint32_t)(MEM32(0x8F0650)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8F0650), ebx (32-bit) */
    MEM32(0x8E8F84) = ebx;
    MEM32(0x8E9248) = ebx;
    MEM32(0x8E9048) = ebx;
    MEM32(0x8E91A0) = ebx;
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0004B733; /* je: equal / zero */

loc_0004B72E: ;
    PUSH32(esp, 0x0004B733u); RECOMP_ABI_CALL(0x00036FC6u, sub_00036FC6); /* call 0x00036FC6 */

loc_0004B733: ;
    ecx = 0x8978E8;
    PUSH32(esp, 0x0004B73Du); RECOMP_ABI_CALL(0x000362BFu, sub_000362BF); /* call 0x000362BF */

loc_0004B73D: ;
    ecx = MEM32(0x8EB3BC);
    POP32(esp, esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0004B74F; /* je: equal / zero */

loc_0004B749: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0004B74Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004B74Du); } /* indirect call */
    }

loc_0004B74F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004B790
 * Original: 0x0004B790 - 0x0004B7F4 (100 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004B790: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    ecx = ebx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0004B79Fu); RECOMP_ABI_CALL(0x00014C5Fu, sub_00014C5F); /* call 0x00014C5F */

loc_0004B79F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0004B7F1; /* jbe: below or equal (unsigned <=) */

loc_0004B7A3: ;
    PUSH32(esp, esi);

loc_0004B7A4: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0004B7ACu); RECOMP_ABI_CALL(0x00014B2Eu, sub_00014B2E); /* call 0x00014B2E */

loc_0004B7AC: ;
    edx = MEM32(edi * 4 + 0x8E8EB8);
    esi = MEM32(edx + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B7CE; /* je: equal / zero */

loc_0004B7BB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B7CE; /* je: equal / zero */

loc_0004B7BF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B7CE; /* je: equal / zero */

loc_0004B7C4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B7CE; /* je: equal / zero */

loc_0004B7C9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004B7E4; /* jne: not equal / not zero */

loc_0004B7CE: ;
    MEM32(edx + 0x48) = eax;
    MEM32(eax + 0x34) = edx;
    ecx = MEM32(edx + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B7E4; /* je: equal / zero */

loc_0004B7DB: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0004B7E4u); RECOMP_ABI_CALL(0x0002F334u, sub_0002F334); /* call 0x0002F334 */

loc_0004B7E4: ;
    ecx = ebx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0004B7ECu); RECOMP_ABI_CALL(0x00014C5Fu, sub_00014C5F); /* call 0x00014C5F */

loc_0004B7EC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0004B7A4; /* jb: below (unsigned <) */

loc_0004B7F0: ;
    POP32(esp, esi);

loc_0004B7F1: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004B810
 * Original: 0x0004B810 - 0x0004B821 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0004B810(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004B810: ;
    PUSH32(esp, ecx);
    fp_push(0.69314718055994530942); /* fldln2 */
    fp_push(MEMF(esp + 8)); /* fld float */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004B830
 * Original: 0x0004B830 - 0x0004B83F (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0004B830(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004B830: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004B850
 * Original: 0x0004B850 - 0x0004B85F (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0004B850(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004B850: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004B870
 * Original: 0x0004B870 - 0x0004B87F (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0004B870(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004B870: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004B890
 * Original: 0x0004B890 - 0x0004B89F (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0004B890(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004B890: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004B8B0
 * Original: 0x0004B8B0 - 0x0004B8BF (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0004B8B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004B8B0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004B8D0
 * Original: 0x0004B8D0 - 0x0004B8DF (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0004B8D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004B8D0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004B8F0
 * Original: 0x0004B8F0 - 0x0004B901 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0004B8F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004B8F0: ;
    PUSH32(esp, ecx);
    fp_push(0.69314718055994530942); /* fldln2 */
    fp_push(MEMF(esp + 8)); /* fld float */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004B910
 * Original: 0x0004B910 - 0x0004B97A (106 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B910(void)
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

loc_0004B910: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004B933; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0004B92B: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_0004B93D;

loc_0004B933: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */

loc_0004B93D: ;
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004B948; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_0004B942: ;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */

loc_0004B948: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x7A9E98);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004B95Au); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0004B95A: ;
    MEM32(esp + 0x1C) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEM32(esp + 0xC) = esi;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    POP32(esp, esi);
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004B9A0
 * Original: 0x0004B9A0 - 0x0004BA98 (248 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B9A0(void)
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

loc_0004B9A0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B9B6; /* je: equal / zero */

loc_0004B9AB: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    MEM8(esi) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0004B9B6: ;
    PUSH32(esp, 0x2A);
    PUSH32(esp, 0x7A9E98);
    PUSH32(esp, 0x7FFF);
    PUSH32(esp, 0x0004B9C7u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0004B9C7: ;
    PUSH32(esp, 0x2B);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7A9EC4); /* mulss */
    PUSH32(esp, 0x7A9E98);
    PUSH32(esp, 0x7FFF);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0004B9EBu); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0004B9EB: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7A9EC4); /* mulss */
    fp_push(0.69314718055994530942); /* fldln2 */
    fp_push(MEMF(esp + 4)); /* fld float */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9EC0)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7A9EBC); /* mulss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.69314718055994530942); /* fldln2 */
    fp_push(MEMF(esp + 4)); /* fld float */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEM8(esi) = 1;
    POP32(esp, esi);
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
 * sub_0004BAE0
 * Original: 0x0004BAE0 - 0x0004BAE7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BAE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004BAE0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004BAF0
 * Original: 0x0004BAF0 - 0x0004BAF7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BAF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004BAF0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004BB00
 * Original: 0x0004BB00 - 0x0004BB28 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BB00(void)
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

loc_0004BB00: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004BB19; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0004BB0E: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

loc_0004BB19: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
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
 * sub_0004BB40
 * Original: 0x0004BB40 - 0x0004BB59 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0004BB40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004BB40: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(esp + 8);
    fp_top() = sin(fp_top()); /* fsin */
    ecx = MEM32(esp + 0xC);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004BB60
 * Original: 0x0004BB60 - 0x0004BB93 (51 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BB60(void)
{

loc_0004BB60: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0004BBA0
 * Original: 0x0004BBA0 - 0x0004BBE4 (68 bytes, 20 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0004BBA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004BBA0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
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
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004BC00
 * Original: 0x0004BC00 - 0x0004BC19 (25 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BC00(void)
{

loc_0004BC00: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004BC20
 * Original: 0x0004BC20 - 0x0004BC43 (35 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BC20(void)
{

loc_0004BC20: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0004BC50
 * Original: 0x0004BC50 - 0x0004BC85 (53 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BC50(void)
{

loc_0004BC50: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 8); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 4); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ecx); /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0004BCA0
 * Original: 0x0004BCA0 - 0x0004BCD5 (53 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BCA0(void)
{

loc_0004BCA0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    eax = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0004BCF0
 * Original: 0x0004BCF0 - 0x0004BD25 (53 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BCF0(void)
{

loc_0004BCF0: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax); /* subss */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0004BD40
 * Original: 0x0004BD40 - 0x0004BD5B (27 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BD40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004BD40: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004BD70
 * Original: 0x0004BD70 - 0x0004BDA5 (53 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BD70(void)
{

loc_0004BD70: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax); /* mulss */
    eax = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0004BDC0
 * Original: 0x0004BDC0 - 0x0004BDF0 (48 bytes, 10 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BDC0(void)
{

loc_0004BDC0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0004BE00
 * Original: 0x0004BE00 - 0x0004BE2C (44 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BE00(void)
{

loc_0004BE00: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(eax) = ecx;
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004BE40
 * Original: 0x0004BE40 - 0x0004BE68 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BE40(void)
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

loc_0004BE40: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004BE59; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0004BE4E: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

loc_0004BE59: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
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
 * sub_0004BE80
 * Original: 0x0004BE80 - 0x0004BE99 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0004BE80(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004BE80: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(esp + 8);
    fp_top() = sin(fp_top()); /* fsin */
    ecx = MEM32(esp + 0xC);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004BEA0
 * Original: 0x0004BEA0 - 0x0004BEB9 (25 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BEA0(void)
{

loc_0004BEA0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = 0;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0004BEC0
 * Original: 0x0004BEC0 - 0x0004BEE4 (36 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BEC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004BEC0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x7AA7B4;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = 1;
    MEM8(eax + 0x10) = LO8(ecx);
    MEM8(eax + 0x11) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004BEF0
 * Original: 0x0004BEF0 - 0x0004BF13 (35 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004BEF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0004BEF8u); RECOMP_ABI_CALL(0x0002E1C8u, sub_0002E1C8); /* call 0x0002E1C8 */

loc_0004BEF8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004BF0D; /* je: equal / zero */

loc_0004BEFF: ;
    ecx = MEM32(0x9092A0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0004BF0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004BF0Au); } /* indirect call */
    }

loc_0004BF0D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004BF20
 * Original: 0x0004BF20 - 0x0004BF42 (34 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BF20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004BF20: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = 5;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = 1;
    MEM8(eax + 0x10) = LO8(ecx);
    MEM8(eax + 0x11) = LO8(ecx);
    MEM32(eax) = 0x7AA7C4;
    esp += 4; return; /* ret */

}

/**
 * sub_0004BF50
 * Original: 0x0004BF50 - 0x0004BF5B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BF50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004BF50: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0004BF59u); RECOMP_ABI_CALL(0x00027643u, sub_00027643); /* call 0x00027643 */

loc_0004BF59: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004BF60
 * Original: 0x0004BF60 - 0x0004BFB4 (84 bytes, 24 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0004BF60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004BF60: ;
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
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004BFD0
 * Original: 0x0004BFD0 - 0x0004BFF3 (35 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004BFD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0004BFD8u); RECOMP_ABI_CALL(0x0001A48Eu, sub_0001A48E); /* call 0x0001A48E */

loc_0004BFD8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004BFED; /* je: equal / zero */

loc_0004BFDF: ;
    ecx = MEM32(0x9092A0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0004BFEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004BFEAu); } /* indirect call */
    }

loc_0004BFED: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004C000
 * Original: 0x0004C000 - 0x0004C028 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C000(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004C000: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x9092A0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0004C024u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0004C022u); } /* indirect call */
    }

loc_0004C024: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004C040
 * Original: 0x0004C040 - 0x0004C044 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C040(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004C040: ;
    SET_LO16(eax, 0); /* xor self */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004C050
 * Original: 0x0004C050 - 0x0004C060 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C050(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004C050: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 4);
    edx = MEM32(ecx + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004C070
 * Original: 0x0004C070 - 0x0004C080 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004C070: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 4);
    edx = MEM32(ecx + 0x20);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004C090
 * Original: 0x0004C090 - 0x0004C09F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C090(void)
{

loc_0004C090: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0004C0B0
 * Original: 0x0004C0B0 - 0x0004C0B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C0B0(void)
{

loc_0004C0B0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0004C0C0
 * Original: 0x0004C0C0 - 0x0004C0C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C0C0(void)
{

loc_0004C0C0: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0004C0D0
 * Original: 0x0004C0D0 - 0x0004C0D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C0D0(void)
{

loc_0004C0D0: ;
    eax = 0x40F4B4FA;
    esp += 4; return; /* ret */

}

/**
 * sub_0004C0E0
 * Original: 0x0004C0E0 - 0x0004C0E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C0E0(void)
{

loc_0004C0E0: ;
    eax = MEM32(ecx + 0x8C);
    esp += 4; return; /* ret */

}

/**
 * sub_0004C0F0
 * Original: 0x0004C0F0 - 0x0004C10B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004C0F0: ;
    ecx = MEM32(0x8E9320);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C100; /* je: equal / zero */

loc_0004C0FA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0004C100u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C0FEu); } /* indirect call */
    }

loc_0004C100: ;
    MEM32(0x8E9320) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0004C120
 * Original: 0x0004C120 - 0x0004C140 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C120(void)
{

loc_0004C120: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8E9320);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004C13Fu); RECOMP_ABI_CALL(0x0002F073u, sub_0002F073); /* call 0x0002F073 */

loc_0004C13F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004C150
 * Original: 0x0004C150 - 0x0004C2BF (367 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C150(void)
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

loc_0004C150: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = sin(fp_top()); /* fsin */
    esi = MEM32(esp + 0x40);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x58);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7AA7D4)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x4C)); /* fmul dword ptr [esp + 0x4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x4C)); /* fmul dword ptr [esp + 0x4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_0004C2B9; /* jle: less or equal (signed <=) */

loc_0004C1F3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    /* nop */

loc_0004C200: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8E9320);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x5C)); /* fmul dword ptr [esp + 0x5c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    MEMF(esp + 0x58) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x5C)); /* fmul dword ptr [esp + 0x5c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(esp + 0x68) = (float)fp_top(); /* fst */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0004C2A6u); RECOMP_ABI_CALL(0x0002F073u, sub_0002F073); /* call 0x0002F073 */

loc_0004C2A6: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    if ((_fa != 0)) goto loc_0004C200; /* jne: not equal / not zero */

loc_0004C2B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004C320
 * Original: 0x0004C320 - 0x0004C399 (121 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C320(void)
{

loc_0004C320: ;
    xmm3 = XMM_SCALAR(MEMF(0x7AA7D8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8E9318)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x8E9328)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x8E9310)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(0x8E9330) = xmm0.f[0]; /* movss */
    MEMF(0x8E9340) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8E9314)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(0x8E9334) = xmm1.f[0]; /* movss */
    MEMF(0x8E9338) = xmm2.f[0]; /* movss */
    MEMF(0x8E933C) = xmm1.f[0]; /* movss */
    MEMF(0x8E9344) = xmm0.f[0]; /* movss */
    MEMF(0x8E9348) = xmm2.f[0]; /* movss */
    MEMF(0x8E934C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0004C3C0
 * Original: 0x0004C3C0 - 0x0004C3D4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C3C0(void)
{

loc_0004C3C0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0004C3E0
 * Original: 0x0004C3E0 - 0x0004C42E (78 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0004C3E0: ;
    ecx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x8E9334); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004C3F6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x8E9334)) */

loc_0004C3F2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0004C40E;

loc_0004C3F6: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x8E934C); /* comiss */
    eax = 3;
    if ((_fca > _fcb)) goto loc_0004C40E; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x8E934C)) */

loc_0004C409: ;
    eax = 6;

loc_0004C40E: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9338)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004C41F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_0004C41B: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0004C41F: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9330)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004C42D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_0004C42C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0004C42D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004C450
 * Original: 0x0004C450 - 0x0004C473 (35 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C450(void)
{

loc_0004C450: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0004C480
 * Original: 0x0004C480 - 0x0004C4D7 (87 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C480(void)
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

loc_0004C480: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 3 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7AA7E8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0004C4D2; /* jne: not equal / not zero */

loc_0004C495: ;
    eax = MEM32(esp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004C4AB; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0004C4A6: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0004C4AF;

loc_0004C4AB: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_0004C4AF: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA7E4); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004C4D2; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7AA7E4)) */

loc_0004C4B8: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AA7E0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004C4D2; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0004C4C5: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AA7DC)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_0004C4D2: ;
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004C4F0
 * Original: 0x0004C4F0 - 0x0004C50C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C4F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004C4F0: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0004C50B; /* ja: above (unsigned >) */

loc_0004C4FB: ;
    ecx = ZX8(MEM8(ecx + 0x4C514));
    { uint32_t _jt = MEM32(ecx * 4 + 0x4C50C); /* switch: 2 entries, 2 targets */
    if (_jt == 0x0004C509u) goto loc_0004C509;
    if (_jt == 0x0004C50Bu) goto loc_0004C50B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0004C509: ;
    SET_LO8(eax, 1);

loc_0004C50B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004C530
 * Original: 0x0004C530 - 0x0004C7BD (653 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C530(void)
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

loc_0004C530: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x110);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x118);
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 4); /* subss */
    eax = esi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 8); /* subss */
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x11C)); /* movss */
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(0x8E9320);
    PUSH32(esp, 0);
    MEM8(esp + 0x13) = 0;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x40) = eax;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0004C5C4u); RECOMP_ABI_CALL(0x00029975u, sub_00029975); /* call 0x00029975 */

loc_0004C5C4: ;
    ebp = MEM32(esp + 0x110);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, 0x64);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    MEMF(ebp + 0x18) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x8E9320);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0004C5EFu); RECOMP_ABI_CALL(0x00018A08u, sub_00018A08); /* call 0x00018A08 */

loc_0004C5EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C7A4; /* je: equal / zero */

loc_0004C5F7: ;
    PUSH32(esp, ebx);
    goto loc_0004C600;

    /* nop */

loc_0004C600: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0004C784; /* jle: less or equal (signed <=) */

loc_0004C60A: ;
    xmm5 = XMM_SCALAR(MEMF(0x7AA344)); /* movss */

loc_0004C612: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + edx * 2 + 0x48);
    ebx = MEM32(0x8E9320);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    _fb = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x120)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0xC); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x14); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(ecx + 0xC); /* subss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ecx); /* mulss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x14); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    if ((_fca >= _fcb)) goto loc_0004C685; /* jae: above or equal (unsigned >=) (xmm4.f[0] vs xmm0.f[0]) */

loc_0004C67C: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004C77B; /* jb: below (unsigned <) (xmm4.f[0] vs xmm1.f[0]) */

loc_0004C685: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004C696; /* jb: below (unsigned <) (xmm2.f[0] vs xmm4.f[0]) */

loc_0004C691: ;
    xmm3 = xmm2; /* movaps */
    goto loc_0004C69D;

loc_0004C696: ;
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */

loc_0004C69D: ;
    _fca = xmm3.f[0]; _fcb = xmm5.f[0]; /* comiss */
    xmm3 = xmm4; /* movaps */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004C6B9; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm5.f[0]) */

loc_0004C6A5: ;
    xmm6 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] / xmm2.f[0]; /* divss */
    xmm3.f[0] = xmm3.f[0] - xmm6.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004C776; /* jb: below (unsigned <) (xmm3.f[0] vs xmm4.f[0]) */

loc_0004C6B9: ;
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004C776; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_0004C6C7: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ebx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    ecx = ebp;
    MEM32(ecx) = ebx;
    ebx = MEM32(esp + 0x18);
    MEM32(ecx + 4) = ebx;
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    ebx = MEM32(esp + 0x1C);
    MEM32(ecx + 8) = ebx;
    if ((_fca > _fcb)) goto loc_0004C705; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0004C702: ;
    xmm0 = xmm1; /* movaps */

loc_0004C705: ;
    MEMF(ebp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(ebp + 0x18) = xmm3.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 8); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 8); /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    ebx = MEM32(esp + 0x20);
    ecx = ebp + 0xC;
    MEM32(ecx) = ebx;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ebx = MEM32(esp + 0x24);
    MEM32(ecx + 4) = ebx;
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    ebx = MEM32(esp + 0x28);
    MEM32(ecx + 8) = ebx;

loc_0004C776: ;
    MEM8(esp + 0x13) = 1;

loc_0004C77B: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004C612; /* jl: less (signed <) */

loc_0004C784: ;
    ecx = MEM32(0x8E9320);
    PUSH32(esp, 0x64);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004C79Bu); RECOMP_ABI_CALL(0x00018A08u, sub_00018A08); /* call 0x00018A08 */

loc_0004C79B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004C600; /* jne: not equal / not zero */

loc_0004C7A3: ;
    POP32(esp, ebx);

loc_0004C7A4: ;
    ecx = MEM32(0x8E9320);
    PUSH32(esp, 0x0004C7AFu); RECOMP_ABI_CALL(0x00024222u, sub_00024222); /* call 0x00024222 */

loc_0004C7AF: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004C860
 * Original: 0x0004C860 - 0x0004CDD4 (1396 bytes, 333 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0004C860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0004C860: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x134;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    edx = MEM32(esp + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    MEM32(esp + 0x50) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(0x8E9320);
    PUSH32(esp, ebx);
    MEM8(esp + 0x13) = LO8(ebx);
    MEM32(esp + 0x38) = 5;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = 1;
    MEM8(esp + 0x44) = LO8(ebx);
    MEM8(esp + 0x45) = LO8(ebx);
    MEM32(esp + 0x34) = 0x7AA7C4;
    MEM32(esp + 0x5C) = edx;
    MEM32(esp + 0x60) = eax;
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004C910u); RECOMP_ABI_CALL(0x00029975u, sub_00029975); /* call 0x00029975 */

loc_0004C910: ;
    esi = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x7AA7EC)); /* movss */
    PUSH32(esp, 0x64);
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x8E9320);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004C937u); RECOMP_ABI_CALL(0x0002C6A2u, sub_0002C6A2); /* call 0x0002C6A2 */

loc_0004C937: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0x2C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0004CDB5; /* je: equal / zero */

loc_0004C945: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004CC9E; /* jl: less (signed <) */

loc_0004C950: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + edx * 2 + 0x78);
    eax = MEM32(0x8E9320);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    ebx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + ebx + 0x14); /* subss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + ebx + 0xC); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + ebx); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + ebx + 8); /* mulss */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004CA23; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0004C994: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ebx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    eax = esi;
    MEM32(eax) = ebx;
    ebx = MEM32(esp + 0x14);
    MEM32(eax + 4) = ebx;
    ebx = MEM32(esp + 0x18);
    MEM32(eax + 8) = ebx;
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0xC) = xmm2.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0x10) = xmm2.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0x14) = xmm2.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004CA28; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0004CA1C: ;
    MEM8(esp + 0xF) = 1;
    goto loc_0004CA28;

loc_0004CA23: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */

loc_0004CA28: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + edx * 2 + 0x7A);
    eax = MEM32(0x8E9320);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    ebx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + ebx + 0x14); /* subss */
    xmm2 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + ebx + 0xC); /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + ebx); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + ebx + 8); /* mulss */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004CAF4; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_0004CA6C: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ebx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    eax = esi;
    MEM32(eax) = ebx;
    ebx = MEM32(esp + 0x14);
    MEM32(eax + 4) = ebx;
    ebx = MEM32(esp + 0x18);
    MEM32(eax + 8) = ebx;
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi + 0xC) = xmm3.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi + 0x10) = xmm3.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi + 0x14) = xmm3.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004CAF4; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0004CAEF: ;
    MEM8(esp + 0xF) = 1;

loc_0004CAF4: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + edx * 2 + 0x7C);
    eax = MEM32(0x8E9320);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    ebx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + ebx + 0x14); /* subss */
    xmm2 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + ebx + 0xC); /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + ebx); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + ebx + 8); /* mulss */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004CBC0; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_0004CB38: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ebx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    eax = esi;
    MEM32(eax) = ebx;
    ebx = MEM32(esp + 0x14);
    MEM32(eax + 4) = ebx;
    ebx = MEM32(esp + 0x18);
    MEM32(eax + 8) = ebx;
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi + 0xC) = xmm3.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi + 0x10) = xmm3.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi + 0x14) = xmm3.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004CBC0; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0004CBBB: ;
    MEM8(esp + 0xF) = 1;

loc_0004CBC0: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + edx * 2 + 0x7E);
    eax = MEM32(0x8E9320);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    ebx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + ebx + 0x14); /* subss */
    xmm2 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + ebx + 0xC); /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + ebx); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + ebx + 8); /* mulss */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004CC8C; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_0004CC04: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ebx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    eax = esi;
    MEM32(eax) = ebx;
    ebx = MEM32(esp + 0x14);
    MEM32(eax + 4) = ebx;
    ebx = MEM32(esp + 0x18);
    MEM32(eax + 8) = ebx;
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi + 0xC) = xmm3.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi + 0x10) = xmm3.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi + 0x14) = xmm3.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004CC8C; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0004CC87: ;
    MEM8(esp + 0xF) = 1;

loc_0004CC8C: ;
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx + -3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004C950; /* jl: less (signed <) */

loc_0004CC9E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CD8E; /* jge: greater or equal (signed >=) */

loc_0004CCA6: ;
    goto loc_0004CCB0;

    /* nop */
    /* nop */

loc_0004CCB0: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + edx * 2 + 0x78);
    eax = MEM32(0x8E9320);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    ebx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + ebx + 0x14); /* subss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + ebx + 0xC); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + ebx); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + ebx + 8); /* mulss */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004CD81; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0004CCF4: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ebx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    eax = esi;
    MEM32(eax) = ebx;
    ebx = MEM32(esp + 0x14);
    MEM32(eax + 4) = ebx;
    ebx = MEM32(esp + 0x18);
    MEM32(eax + 8) = ebx;
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0xC) = xmm2.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0x10) = xmm2.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0x14) = xmm2.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004CD81; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0004CD7C: ;
    MEM8(esp + 0xF) = 1;

loc_0004CD81: ;
    eax = MEM32(esp + 0x2C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004CCB0; /* jl: less (signed <) */

loc_0004CD8E: ;
    PUSH32(esp, 0x64);
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8E9320);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004CDA5u); RECOMP_ABI_CALL(0x0002C6A2u, sub_0002C6A2); /* call 0x0002C6A2 */

loc_0004CDA5: ;
    ecx = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0x2C) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0004C945; /* jne: not equal / not zero */

loc_0004CDB5: ;
    ecx = MEM32(0x8E9320);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004CDC0u); RECOMP_ABI_CALL(0x00024222u, sub_00024222); /* call 0x00024222 */

loc_0004CDC0: ;
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004CDC9u); RECOMP_ABI_CALL(0x0001A48Eu, sub_0001A48E); /* call 0x0001A48E */

loc_0004CDC9: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0004CF40
 * Original: 0x0004CF40 - 0x0004CF6E (46 bytes, 19 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CF40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004CF40: ;
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
    PUSH32(esp, 0x40F4B4FA);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004CF65u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0004CF65: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0004CF80
 * Original: 0x0004CF80 - 0x0004CF8A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CF80(void)
{

loc_0004CF80: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004CF88u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0004CF88: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004CF90
 * Original: 0x0004CF90 - 0x0004CF96 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CF90(void)
{

loc_0004CF90: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_0004CFA0
 * Original: 0x0004CFA0 - 0x0004CFA7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CFA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004CFA0: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0001A975(); return; /* tail jmp 0x0001A975 */

}

/**
 * sub_0004CFB0
 * Original: 0x0004CFB0 - 0x0004D780 (2000 bytes, 411 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CFB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004CFB0: ;
    eax = MEM32(0x8F6A68);
    eax = eax & 0xC0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004CFCE; /* jne: not equal / not zero */

loc_0004CFC7: ;
    eax = 2;
    goto loc_0004D001;

loc_0004CFCE: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004CFE2; /* je: equal / zero */

loc_0004CFD7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004CFE2; /* je: equal / zero */

loc_0004CFDB: ;
    eax = 1;
    goto loc_0004D001;

loc_0004CFE2: ;
    eax = MEM32(0x8F0650);
    eax = MEM32(eax + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004CFFC; /* je: equal / zero */

loc_0004CFF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    eax = 3;
    if (CMP_NE(_fa, _fb)) goto loc_0004D001; /* jne: not equal / not zero */

loc_0004CFFC: ;
    eax = 4;

loc_0004D001: ;
    MEM32(0x8E932C) = eax;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0004D0A2; /* ja: above (unsigned >) */

loc_0004D010: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x4D780); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0004D017u) goto loc_0004D017;
    if (_jt == 0x0004D021u) goto loc_0004D021;
    if (_jt == 0x0004D046u) goto loc_0004D046;
    if (_jt == 0x0004D050u) goto loc_0004D050;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0004D017: ;
    xmm3 = XMM_SCALAR(MEMF(0x7AA83C)); /* movss */
    goto loc_0004D058;

loc_0004D021: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AA838)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AA834)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AA830)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7AA83C)); /* movss */
    xmm4 = xmm0; /* movaps */
    goto loc_0004D078;

loc_0004D046: ;
    xmm3 = XMM_SCALAR(MEMF(0x7AA6D4)); /* movss */
    goto loc_0004D058;

loc_0004D050: ;
    xmm3 = XMM_SCALAR(MEMF(0x8958DC)); /* movss */

loc_0004D058: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AA82C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AA828)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AA824)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x7AA838)); /* movss */

loc_0004D078: ;
    MEMF(0x8E9324) = xmm0.f[0]; /* movss */
    MEMF(0x8E9310) = xmm1.f[0]; /* movss */
    MEMF(0x8E9318) = xmm2.f[0]; /* movss */
    MEMF(0x8E9314) = xmm3.f[0]; /* movss */
    MEMF(0x8E9328) = xmm4.f[0]; /* movss */
    goto loc_0004D0CA;

loc_0004D0A2: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9324)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x8E9310)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x8E9318)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x8E9314)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x8E9328)); /* movss */

loc_0004D0CA: ;
    xmm5 = XMM_SCALAR(MEMF(0x7AA7D8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AA820); /* mulss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7AA7F0);
    ecx = esp + 0x68;
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm5.f[0]; /* addss */
    PUSH32(esp, 0x40F4B4FA);
    PUSH32(esp, ecx);
    MEMF(0x8E9330) = xmm2.f[0]; /* movss */
    MEMF(0x8E9334) = xmm4.f[0]; /* movss */
    MEMF(0x8E9338) = xmm1.f[0]; /* movss */
    MEMF(0x8E933C) = xmm4.f[0]; /* movss */
    MEMF(0x8E9340) = xmm2.f[0]; /* movss */
    MEMF(0x8E9344) = xmm3.f[0]; /* movss */
    MEMF(0x8E9348) = xmm1.f[0]; /* movss */
    MEMF(0x8E934C) = xmm3.f[0]; /* movss */
    MEMF(0x8E931C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0004D154u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0004D154: ;
    eax = MEM32(esp + 0x70);
    esi = MEM32(eax + 0x14);
    xmm0 = XMM_SCALAR(MEMF(0x8958DC)); /* movss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    edi = esp + 0x50;
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
    _fa = (uint32_t)(MEM32(0x8E932C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8E932C), 4 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0004D184; /* je: equal / zero */

loc_0004D17C: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AA6D4)); /* movss */

loc_0004D184: ;
    edx = esp + 0x48;
    PUSH32(esp, edx);
    ecx = eax;
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0004D199u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0004D199: ;
    ecx = MEM32(0x9092A0);
    edx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x3C) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, 0x30);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0004D1C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004D1C0u); } /* indirect call */
    }

loc_0004D1C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D1D5; /* je: equal / zero */

loc_0004D1C6: ;
    PUSH32(esp, 0x2F);
    PUSH32(esp, 0x28);
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0004D1D3u); RECOMP_ABI_CALL(0x00026059u, sub_00026059); /* call 0x00026059 */

loc_0004D1D3: ;
    goto loc_0004D1D7;

loc_0004D1D5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0004D1D7: ;
    xmm2 = XMM_SCALAR(MEMF(0x8E9328)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x8E9318)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 4;
    PUSH32(esp, edx);
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x8E9314); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    ecx = esp + 0x20;
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x8E9310); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(0x7AA7DC)); /* movss */
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(0x8E9320) = eax;
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x0004D28Cu); RECOMP_ABI_CALL(0x0002F073u, sub_0002F073); /* call 0x0002F073 */

loc_0004D28C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x8E9328)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(0x8E9310)); /* movss */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8E9320);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AA7DC)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x0004D314u); RECOMP_ABI_CALL(0x0002F073u, sub_0002F073); /* call 0x0002F073 */

loc_0004D314: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9318)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x8E9314)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(0x7AA7DC)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8E9320);
    PUSH32(esp, 0x0004D39Bu); RECOMP_ABI_CALL(0x0002F073u, sub_0002F073); /* call 0x0002F073 */

loc_0004D39B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x8E9314)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(0x8E9310)); /* movss */
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8E9320);
    edx = esp + 0x18;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AA7DC)); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x0004D423u); RECOMP_ABI_CALL(0x0002F073u, sub_0002F073); /* call 0x0002F073 */

loc_0004D423: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AA7DC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x8E9318)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(0x8E9328)); /* movss */
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8E9320);
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0004D4ABu); RECOMP_ABI_CALL(0x0002F073u, sub_0002F073); /* call 0x0002F073 */

loc_0004D4AB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x8E9318)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(0x7AA7DC)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8E9314)); /* movss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp) = xmm3.f[0]; /* movss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8E9320);
    PUSH32(esp, 0x0004D532u); RECOMP_ABI_CALL(0x0002F073u, sub_0002F073); /* call 0x0002F073 */

loc_0004D532: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AA7DC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x8E9310)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(0x8E9328)); /* movss */
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8E9320);
    edx = esp + 0x30;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0004D5BAu); RECOMP_ABI_CALL(0x0002F073u, sub_0002F073); /* call 0x0002F073 */

loc_0004D5BA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x8E9310)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(0x7AA7DC)); /* movss */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8E9320);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8E9314)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0004D642u); RECOMP_ABI_CALL(0x0002F073u, sub_0002F073); /* call 0x0002F073 */

loc_0004D642: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9330)); /* movss */
    PUSH32(esp, 8);
    PUSH32(esp, 0x43280000);
    PUSH32(esp, 0);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x44700000);
    ecx = esp + 0x40;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8E9334)); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0004D681u); RECOMP_ABI_CALL(0x00037AA2u, sub_00037AA2); /* call 0x00037AA2 */

loc_0004D681: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9338)); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8E933C)); /* movss */
    PUSH32(esp, 8);
    PUSH32(esp, 0x43280000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x44700000);
    edx = esp + 0x58;
    PUSH32(esp, 0x4096CBE4);
    PUSH32(esp, edx);
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0004D6C3u); RECOMP_ABI_CALL(0x00037AA2u, sub_00037AA2); /* call 0x00037AA2 */

loc_0004D6C3: ;
    eax = MEM32(0x8E932C);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D764; /* je: equal / zero */

loc_0004D6D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D764; /* je: equal / zero */

loc_0004D6DD: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9340)); /* movss */
    PUSH32(esp, 8);
    PUSH32(esp, 0x43280000);
    PUSH32(esp, 0);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x44700000);
    eax = esp + 0x40;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8E9344)); /* movss */
    PUSH32(esp, 0x3FC90FDB);
    PUSH32(esp, eax);
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0004D71Fu); RECOMP_ABI_CALL(0x00037AA2u, sub_00037AA2); /* call 0x00037AA2 */

loc_0004D71F: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9348)); /* movss */
    PUSH32(esp, 8);
    PUSH32(esp, 0x43280000);
    PUSH32(esp, 0);
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x44700000);
    ecx = esp + 0x58;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8E934C)); /* movss */
    PUSH32(esp, 0x40490FDB);
    PUSH32(esp, ecx);
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0004D761u); RECOMP_ABI_CALL(0x00037AA2u, sub_00037AA2); /* call 0x00037AA2 */

loc_0004D761: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004D764: ;
    ecx = MEM32(0x8E9320);
    PUSH32(esp, 0x0004D76Fu); RECOMP_ABI_CALL(0x0001D9D6u, sub_0001D9D6); /* call 0x0001D9D6 */

loc_0004D76F: ;
    edx = MEM32(esp + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0004D779u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0004D779: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004D990
 * Original: 0x0004D990 - 0x0004DAED (349 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D990(void)
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

loc_0004D990: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E9320);
    xmm0 = XMM_SCALAR(MEMF(0x7AA7EC)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x18);
    PUSH32(esp, edi);
    ecx = 7;
    edi = esp + 0x24;
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
    esi = MEM32(esp + 0x4C);
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    PUSH32(esp, 0x46960000);
    ecx = esp + 0x10;
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0004DA0Cu); RECOMP_ABI_CALL(0x000130D0u, sub_000130D0); /* call 0x000130D0 */

loc_0004DA0C: ;
    fp_pop(); /* fstp st(0) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    ecx = MEM32(esp + 0x54);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x30); /* addss */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ecx);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0004DA7Eu); RECOMP_ABI_CALL(0x0002CC7Eu, sub_0002CC7E); /* call 0x0002CC7E */

loc_0004DA7E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004DAE3; /* je: equal / zero */

loc_0004DA85: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x28);
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    xmm2 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x38); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x2C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x34); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x30); /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x54); /* subss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_0004DAE3: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004DB50
 * Original: 0x0004DB50 - 0x0004DBD2 (130 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DB50(void)
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

loc_0004DB50: ;
    ecx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x8E9334); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004DB66; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x8E9334)) */

loc_0004DB62: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0004DB7E;

loc_0004DB66: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x8E934C); /* comiss */
    eax = 3;
    if ((_fca > _fcb)) goto loc_0004DB7E; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x8E934C)) */

loc_0004DB79: ;
    eax = 6;

loc_0004DB7E: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9338)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004DB90; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_0004DB8B: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0004DB9E;

loc_0004DB90: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9330)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004DB9E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_0004DB9D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0004DB9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0004DBCE; /* je: equal / zero */

loc_0004DBAB: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004DBB8u); RECOMP_ABI_CALL(0x000114D3u, sub_000114D3); /* call 0x000114D3 */

loc_0004DBB8: ;
    MEMF(esi + 0xC) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x7AA840)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_0004DBCE; /* jb: below (unsigned <) */

loc_0004DBCA: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0004DBCE: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004DC00
 * Original: 0x0004DC00 - 0x0004DD3E (318 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DC00(void)
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

loc_0004DC00: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x8E9334); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004DC2F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x8E9334)) */

loc_0004DC2B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0004DC47;

loc_0004DC2F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x8E934C); /* comiss */
    eax = 3;
    if ((_fca > _fcb)) goto loc_0004DC47; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x8E934C)) */

loc_0004DC42: ;
    eax = 6;

loc_0004DC47: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9338)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004DC59; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi)) */

loc_0004DC54: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0004DC67;

loc_0004DC59: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9330)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004DC67; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi)) */

loc_0004DC66: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0004DC67: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004DC75u); RECOMP_ABI_CALL(0x000114D3u, sub_000114D3); /* call 0x000114D3 */

loc_0004DC75: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    eax = MEM32(esp + 0x30);
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 4) = edx;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 8) = edx;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 8); /* subss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    POP32(esp, esi);
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
 * sub_0004DD90
 * Original: 0x0004DD90 - 0x0004DD94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DD90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004DD90: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004DDA0
 * Original: 0x0004DDA0 - 0x0004DDBA (26 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DDA0(void)
{

loc_0004DDA0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x10) = xmm1.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004DDC0
 * Original: 0x0004DDC0 - 0x0004DDCA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DDC0(void)
{

loc_0004DDC0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004DDD0
 * Original: 0x0004DDD0 - 0x0004DDD9 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DDD0(void)
{

loc_0004DDD0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004DDE0
 * Original: 0x0004DDE0 - 0x0004DDEA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DDE0(void)
{

loc_0004DDE0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004DDF0
 * Original: 0x0004DDF0 - 0x0004DDFA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DDF0(void)
{

loc_0004DDF0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x14) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004DE00
 * Original: 0x0004DE00 - 0x0004DE08 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DE00(void)
{

loc_0004DE00: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x132);
    esp += 4; return; /* ret */

}

/**
 * sub_0004DE10
 * Original: 0x0004DE10 - 0x0004DE3A (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0004DE10(void)
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

loc_0004DE10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0004DE22u); RECOMP_ABI_CALL(0x0001BF82u, sub_0001BF82); /* call 0x0001BF82 */

loc_0004DE22: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_0004DE50
 * Original: 0x0004DE50 - 0x0004DE6F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DE50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004DE50: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    MEM32(ecx + 8) = eax;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 0x14) = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DE80
 * Original: 0x0004DE80 - 0x0004DEB9 (57 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0004DE80: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004DEB3; /* je: equal / zero */

loc_0004DE88: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004DEAF; /* je: equal / zero */

loc_0004DE90: ;
    ecx = MEM32(ecx + 0xF0);
    edx = MEM32(eax + 0xF0);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x1C); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca > _fcb)) goto loc_0004DEB3; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_0004DEAF: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_0004DEB3: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DED0
 * Original: 0x0004DED0 - 0x0004DF28 (88 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DED0(void)
{
    int _flags = 0; /* fallback flag var */
    int _jf_0004DF21 = 0; /* per-edge flags of joins */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004DED0: ;
    ecx = MEM32(esp + 8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, 1);
    if ((_fa == 0)) goto loc_0004DF18; /* je: equal / zero */

loc_0004DED9: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0004DF01; /* je: equal / zero */

loc_0004DEDC: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0004DF25; /* jne: not equal / not zero */

loc_0004DEDF: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004DF23; /* jne: not equal / not zero */

loc_0004DEEA: ;
    ecx = MEM32(ecx + 0xF0);
    SET_LO8(ecx, MEM8(ecx + 0x51));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004DF23; /* je: equal / zero */

loc_0004DEF7: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004DF25; /* jne: not equal / not zero */

loc_0004DEFC: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_0004DF01: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx + 0xF0);
    SET_LO8(ecx, MEM8(ecx + 0x51));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004DF25; /* je: equal / zero */

loc_0004DF13: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    _jf_0004DF21 = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* flags of this edge */
    goto loc_0004DF21;

loc_0004DF18: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _jf_0004DF21 = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* flags of this edge */

loc_0004DF21: ;
    if (_jf_0004DF21 /* je: equal / zero */) goto loc_0004DF25;

loc_0004DF23: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0004DF25: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0004DF40
 * Original: 0x0004DF40 - 0x0004DF4D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DF40(void)
{

loc_0004DF40: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    eax = ecx + eax * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004DF50
 * Original: 0x0004DF50 - 0x0004DF6D (29 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DF50(void)
{

loc_0004DF50: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x132);
    ecx = MEM32(ecx * 4 + 0x8E904C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0004DF67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004DF64u); } /* indirect call */
    }

loc_0004DF67: ;
    MEM32(0x8E935C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0004DF80
 * Original: 0x0004DF80 - 0x0004E08B (267 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DF80(void)
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

loc_0004DF80: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0004DF9A; /* je: equal / zero */

loc_0004DF90: ;
    edx = eax + eax * 2;
    esi = ecx + edx * 8 + 0x1E8;

loc_0004DF9A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004DFAA; /* je: equal / zero */

loc_0004DFA0: ;
    eax = eax + eax * 2;
    edi = ebx + eax * 8 + 0x1E8;

loc_0004DFAA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    xmm1 = XMM_SCALAR(MEMF(0x7AACB0)); /* movss */
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0004DFCA; /* je: equal / zero */

loc_0004DFBF: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_0004DFCA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0004DFDF; /* je: equal / zero */

loc_0004DFD4: ;
    xmm1 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */

loc_0004DFDF: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004E020; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0004DFE7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E020; /* je: equal / zero */

loc_0004DFEB: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0004DFF2u); RECOMP_ABI_CALL(0x0001BF82u, sub_0001BF82); /* call 0x0001BF82 */

loc_0004DFF2: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm1.f[0]; /* movss */

loc_0004E020: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004E069; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esp + 0x10)) */

loc_0004E02A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E069; /* je: equal / zero */

loc_0004E02E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0004E035u); RECOMP_ABI_CALL(0x0001BF82u, sub_0001BF82); /* call 0x0001BF82 */

loc_0004E035: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(edi + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(edi + 0x10) = xmm1.f[0]; /* movss */

loc_0004E069: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004E084; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_0004E07B: ;
    eax = 1;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0004E084: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
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
 * sub_0004E0D0
 * Original: 0x0004E0D0 - 0x0004E108 (56 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E0D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004E0D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E101; /* je: equal / zero */

loc_0004E0DA: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    /* nop */

loc_0004E0E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0004E0E9u); RECOMP_ABI_CALL(0x00013DBEu, sub_00013DBE); /* call 0x00013DBE */

loc_0004E0E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004E100; /* jne: not equal / not zero */

loc_0004E0ED: ;
    esi = MEM32(esi + 0x14);
    eax = esi + esi * 2;
    esi = edi + eax * 8 + 0x1E8;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004E0E0; /* jne: not equal / not zero */

loc_0004E100: ;
    POP32(esp, ebx);

loc_0004E101: ;
    eax = MEM32(esi);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004E120
 * Original: 0x0004E120 - 0x0004E15A (58 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004E120: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E152; /* je: equal / zero */

loc_0004E12B: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);

loc_0004E130: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0004E139u); RECOMP_ABI_CALL(0x00013DBEu, sub_00013DBE); /* call 0x00013DBE */

loc_0004E139: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004E151; /* jne: not equal / not zero */

loc_0004E13D: ;
    esi = MEM32(esi + 0x14);
    eax = esi + esi * 2;
    esi = edi + eax * 8 + 0x1E8;
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004E130; /* jne: not equal / not zero */

loc_0004E151: ;
    POP32(esp, ebx);

loc_0004E152: ;
    eax = MEM32(esi + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004E170
 * Original: 0x0004E170 - 0x0004E247 (215 bytes, 76 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004E170: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebp * 4 + 0x8958F8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0004E190; /* je: equal / zero */

loc_0004E18A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0004E18Du); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0004E18Bu); } /* indirect call */
    }

loc_0004E18D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004E190: ;
    ecx = MEM32(esi + 4);
    edi = ebp + ebp * 2;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = edi + ecx + 4;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = esi;
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 0x14) = ebp;
    MEM32(esp + 0x1C) = ebx;
    goto loc_0004E1C0;

loc_0004E1B4: ;
    ecx = MEM32(esp + 0x10);
    goto loc_0004E1C0;

    /* nop */

loc_0004E1C0: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004E1CAu); RECOMP_ABI_CALL(0x00020E7Eu, sub_00020E7E); /* call 0x00020E7E */

loc_0004E1CA: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E1FD; /* je: equal / zero */

loc_0004E1D0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(ebp * 4 + 0x8958EC); PUSH32(esp, 0x0004E1DCu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0004E1D5u); } /* indirect call */
    }

loc_0004E1DC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0004E1EE; /* jle: less or equal (signed <=) */

loc_0004E1E3: ;
    esi = MEM32(esi);
    esi = edi + esi + 0x1E8;
    goto loc_0004E1D0;

loc_0004E1EE: ;
    eax = MEM32(esi);
    MEM32(edi + ebx + 0x1E8) = eax;
    MEM32(esi) = ebx;
    esi = MEM32(esp + 0x14);

loc_0004E1FD: ;
    eax = MEM32(esp + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0004E1B4; /* jl: less (signed <) */

loc_0004E20B: ;
    eax = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E23C; /* je: equal / zero */

loc_0004E215: ;
    goto loc_0004E220;

    /* nop */
    edi = edi;

loc_0004E220: ;
    MEM32(edi + eax + 0x1EC) = ecx;
    MEM32(edi + eax + 0x1F0) = edx;
    ecx = eax;
    eax = MEM32(edi + eax + 0x1E8);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004E220; /* jne: not equal / not zero */

loc_0004E23C: ;
    POP32(esp, edi);
    MEM32(esi + 4) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004E280
 * Original: 0x0004E280 - 0x0004E29D (29 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E280(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004E280: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x0004E298u); RECOMP_ABI_CALL(0x0004DF80u, sub_0004DF80); /* call 0x0004DF80 */

loc_0004E298: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004E2B0
 * Original: 0x0004E2B0 - 0x0004E2CD (29 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E2B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004E2B0: ;
    eax = MEM32(0x8E935C);
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x0004E2C8u); RECOMP_ABI_CALL(0x0004DF80u, sub_0004DF80); /* call 0x0004DF80 */

loc_0004E2C8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004E2E0
 * Original: 0x0004E2E0 - 0x0004E377 (151 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E2E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004E2E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_0004E2F0: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0004E2F8u); RECOMP_ABI_CALL(0x00020E7Eu, sub_00020E7E); /* call 0x00020E7E */

loc_0004E2F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E356; /* je: equal / zero */

loc_0004E2FC: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax + 0x1F4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1F8) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x1FC) = esi;
    MEMF(eax + 0x20C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x210) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x214) = 1;
    MEMF(eax + 0x224) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x228) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x22C) = 2;

loc_0004E356: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004E2F0; /* jl: less (signed <) */

loc_0004E35C: ;
    /* nop */

loc_0004E360: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004E36Au); RECOMP_ABI_CALL(0x0004E170u, sub_0004E170); /* call 0x0004E170 */

loc_0004E36A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004E360; /* jl: less (signed <) */

loc_0004E373: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004E3A0
 * Original: 0x0004E3A0 - 0x0004E3A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E3A0(void)
{

loc_0004E3A0: ;
    eax = (int32_t)MEMF(esp + 4); /* cvttss2si */
    esp += 4; return; /* ret */

}

/**
 * sub_0004E3B0
 * Original: 0x0004E3B0 - 0x0004E3F1 (65 bytes, 17 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0004E3B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004E3B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp); /* movaps */
    XMM_STORE(ecx, xmm0); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0004E410
 * Original: 0x0004E410 - 0x0004E4A3 (147 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E410(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004E410: ;
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
 * sub_0004E4D0
 * Original: 0x0004E4D0 - 0x0004E584 (180 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E4D0(void)
{

loc_0004E4D0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0004E5C0
 * Original: 0x0004E5C0 - 0x0004E6B3 (243 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E5C0(void)
{

loc_0004E5C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = MEM32(esp + 0xC);
    ebx = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x14);
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm3 = xmm0; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0x55); /* shufps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm2, 0xAA); /* shufps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm3, 0xFF); /* shufps */
    xmm0 = XMM_MUL(xmm0, XMM_MEM(ebx)); /* mulps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(ebx + 0x10)); /* mulps */
    xmm2 = XMM_MUL(xmm2, XMM_MEM(ebx + 0x20)); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(ebx + 0x30)); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    xmm2 = XMM_ADD(xmm2, xmm3); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(edi, xmm0); /* movaps */
    xmm4 = XMM_MEM(eax + 0x10); /* movaps */
    xmm5 = xmm4; /* movaps */
    xmm6 = xmm4; /* movaps */
    xmm7 = xmm4; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm4, 0); /* shufps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm5, 0x55); /* shufps */
    xmm6 = XMM_SHUFFLE(xmm6, xmm6, 0xAA); /* shufps */
    xmm7 = XMM_SHUFFLE(xmm7, xmm7, 0xFF); /* shufps */
    xmm4 = XMM_MUL(xmm4, XMM_MEM(ebx)); /* mulps */
    xmm5 = XMM_MUL(xmm5, XMM_MEM(ebx + 0x10)); /* mulps */
    xmm6 = XMM_MUL(xmm6, XMM_MEM(ebx + 0x20)); /* mulps */
    xmm7 = XMM_MUL(xmm7, XMM_MEM(ebx + 0x30)); /* mulps */
    xmm4 = XMM_ADD(xmm4, xmm5); /* addps */
    xmm6 = XMM_ADD(xmm6, xmm7); /* addps */
    xmm4 = XMM_ADD(xmm4, xmm6); /* addps */
    XMM_STORE(edi + 0x10, xmm4); /* movaps */
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm3 = xmm0; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0x55); /* shufps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm2, 0xAA); /* shufps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm3, 0xFF); /* shufps */
    xmm0 = XMM_MUL(xmm0, XMM_MEM(ebx)); /* mulps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(ebx + 0x10)); /* mulps */
    xmm2 = XMM_MUL(xmm2, XMM_MEM(ebx + 0x20)); /* mulps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(ebx + 0x30)); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    xmm2 = XMM_ADD(xmm2, xmm3); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(edi + 0x20, xmm0); /* movaps */
    xmm4 = XMM_MEM(eax + 0x30); /* movaps */
    xmm5 = xmm4; /* movaps */
    xmm6 = xmm4; /* movaps */
    xmm7 = xmm4; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm4, 0); /* shufps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm5, 0x55); /* shufps */
    xmm6 = XMM_SHUFFLE(xmm6, xmm6, 0xAA); /* shufps */
    xmm7 = XMM_SHUFFLE(xmm7, xmm7, 0xFF); /* shufps */
    xmm4 = XMM_MUL(xmm4, XMM_MEM(ebx)); /* mulps */
    xmm5 = XMM_MUL(xmm5, XMM_MEM(ebx + 0x10)); /* mulps */
    xmm6 = XMM_MUL(xmm6, XMM_MEM(ebx + 0x20)); /* mulps */
    xmm7 = XMM_MUL(xmm7, XMM_MEM(ebx + 0x30)); /* mulps */
    xmm4 = XMM_ADD(xmm4, xmm5); /* addps */
    xmm6 = XMM_ADD(xmm6, xmm7); /* addps */
    xmm4 = XMM_ADD(xmm4, xmm6); /* addps */
    XMM_STORE(edi + 0x30, xmm4); /* movaps */
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004E6F0
 * Original: 0x0004E6F0 - 0x0004E73D (77 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0004E6F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004E6F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E71D; /* je: equal / zero */

loc_0004E708: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004E71D; /* je: equal / zero */

loc_0004E70C: ;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004E714u); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_0004E714: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0004E71D: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004E729u); RECOMP_ABI_CALL(0x0001453Eu, sub_0001453E); /* call 0x0001453E */

loc_0004E729: ;
    ecx = 0x10;
    esi = esp + 0x1C;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0004E750
 * Original: 0x0004E750 - 0x0004E7CE (126 bytes, 31 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0004E750(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004E750: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(esp + 0xC);
    fp_top() = sin(fp_top()); /* fsin */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm2 = xmm0; /* movaps */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp); /* subss */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(eax + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x28) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004E7F0
 * Original: 0x0004E7F0 - 0x0004E834 (68 bytes, 19 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0004E7F0(void)
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

loc_0004E7F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_0004E850
 * Original: 0x0004E850 - 0x0004E871 (33 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E850(void)
{

loc_0004E850: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0004E880
 * Original: 0x0004E880 - 0x0004E8AE (46 bytes, 9 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E880(void)
{

loc_0004E880: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0004E8C0
 * Original: 0x0004E8C0 - 0x0004E8E6 (38 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E8C0(void)
{

loc_0004E8C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004E8F0
 * Original: 0x0004E8F0 - 0x0004E92F (63 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E8F0(void)
{

loc_0004E8F0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    eax = MEM32(esp + 8);
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax); /* subss */
    eax = MEM32(esp + 4);
    xmm2 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm2.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0004E940
 * Original: 0x0004E940 - 0x0004E95B (27 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E940(void)
{

loc_0004E940: ;
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
 * sub_0004E970
 * Original: 0x0004E970 - 0x0004E983 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E970(void)
{

loc_0004E970: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 4); /* cvttss2si */
    esp += 4; return; /* ret */

}

/**
 * sub_0004E990
 * Original: 0x0004E990 - 0x0004E993 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E990(void)
{

loc_0004E990: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0004E9A0
 * Original: 0x0004E9A0 - 0x0004EA1C (124 bytes, 30 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0004E9A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004E9A0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = sin(fp_top()); /* fsin */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm2 = xmm0; /* movaps */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp); /* subss */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(ecx + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0x28) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004EA40
 * Original: 0x0004EA40 - 0x0004EA67 (39 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EA40(void)
{

loc_0004EA40: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    xmm0 = XMM_MEM(ecx); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x20); /* movaps */
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x30); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004EA70
 * Original: 0x0004EA70 - 0x0004EA9A (42 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EA70(void)
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

loc_0004EA70: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_0004EA8F; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_0004EA87: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_0004EA8F: ;
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
 * sub_0004EAB0
 * Original: 0x0004EAB0 - 0x0004EABA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EAB0(void)
{

loc_0004EAB0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004EAC0
 * Original: 0x0004EAC0 - 0x0004EAE2 (34 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EAC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004EAC0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = 1;
    MEM8(eax + 0x10) = LO8(ecx);
    MEM8(eax + 0x11) = LO8(ecx);
    MEM32(eax) = 0x7AB14C;
    MEM32(eax + 4) = 6;
    esp += 4; return; /* ret */

}

/**
 * sub_0004EAF0
 * Original: 0x0004EAF0 - 0x0004EB13 (35 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004EAF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0004EAF8u); RECOMP_ABI_CALL(0x0001A777u, sub_0001A777); /* call 0x0001A777 */

loc_0004EAF8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004EB0D; /* je: equal / zero */

loc_0004EAFF: ;
    ecx = MEM32(0x9092A0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0004EB0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004EB0Au); } /* indirect call */
    }

loc_0004EB0D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004EB20
 * Original: 0x0004EB20 - 0x0004EB2C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EB20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004EB20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xA) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004EB30
 * Original: 0x0004EB30 - 0x0004EB4C (28 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004EB30: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xA) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO16(eax, LO16(eax) ^ MEM16(ecx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    eax = eax & 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(ecx) = MEM16(ecx) ^ LO16(eax);
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004EB60
 * Original: 0x0004EB60 - 0x0004EB7B (27 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004EB60: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(edx, MEM8(ecx));
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(ecx) = MEM16(ecx) ^ LO16(eax);
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004EB90
 * Original: 0x0004EB90 - 0x0004EB94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EB90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004EB90: ;
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004EBA0
 * Original: 0x0004EBA0 - 0x0004EBA5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EBA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004EBA0: ;
    MEM8(ecx + 0x39) = MEM8(ecx + 0x39) | 4;
    _fa = (uint32_t)(MEM8(ecx + 0x39)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004EBB0
 * Original: 0x0004EBB0 - 0x0004EBB5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EBB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004EBB0: ;
    MEM8(ecx + 0x39) = MEM8(ecx + 0x39) & 0xFB;
    _fa = (uint32_t)(MEM8(ecx + 0x39)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004EBC0
 * Original: 0x0004EBC0 - 0x0004EBCD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EBC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004EBC0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx + 0x38));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xA) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004EBD0
 * Original: 0x0004EBD0 - 0x0004EBED (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EBD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004EBD0: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(edx, MEM8(ecx + 0x38));
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(ecx + 0x38) = MEM16(ecx + 0x38) ^ LO16(eax);
    _fa = (uint32_t)(MEM16(ecx + 0x38)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004EC00
 * Original: 0x0004EC00 - 0x0004EC26 (38 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EC00(void)
{

loc_0004EC00: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_MEM(eax); /* movaps */
    XMM_STORE(ecx + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(ecx + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    XMM_STORE(ecx + 0x60, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    XMM_STORE(ecx + 0x70, xmm0); /* movaps */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004EC30
 * Original: 0x0004EC30 - 0x0004EC8D (93 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EC30(void)
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

loc_0004EC30: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x8959B8)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004EC4B; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0004EC46: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0004EC88; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0004EC4B: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004EC5F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0004EC50: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

loc_0004EC5F: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004EC77; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0004EC68: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

loc_0004EC77: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */

loc_0004EC88: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004ECB0
 * Original: 0x0004ECB0 - 0x0004ECCD (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0004ECB0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004ECB0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004ECE0
 * Original: 0x0004ECE0 - 0x0004ED3F (95 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004ECE0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0004ECE0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x8959B8)); /* movss */
    eax = ecx;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004ECFD; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0004ECF8: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0004ED38; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0004ECFD: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004ED10; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0004ED02: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_0004ED10: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004ED2A; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0004ED19: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm0 = xmm2; /* movaps */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_0004ED2A: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */

loc_0004ED38: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004ED60
 * Original: 0x0004ED60 - 0x0004ED63 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004ED60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004ED60: ;
    fp_push(MEMF(ecx)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004ED70
 * Original: 0x0004ED70 - 0x0004EDD7 (103 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004ED70(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0004ED70: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x8959B8)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004ED95; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0004ED90: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0004EDCE; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0004ED95: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004EDA7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0004ED9A: ;
    eax = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0004EDA7: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004EDC0; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0004EDB0: ;
    eax = MEM32(esp + 4);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0004EDC0: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */

loc_0004EDCE: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0004EDF0
 * Original: 0x0004EDF0 - 0x0004EDF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EDF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004EDF0: ;
    fp_push(MEMF(ecx + 0x248)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004EE00
 * Original: 0x0004EE00 - 0x0004EE07 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EE00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004EE00: ;
    fp_push(MEMF(ecx + 0x24C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004EE10
 * Original: 0x0004EE10 - 0x0004EE17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EE10(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004EE10: ;
    fp_push(MEMF(ecx + 0x250)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004EE20
 * Original: 0x0004EE20 - 0x0004EE27 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EE20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004EE20: ;
    fp_push(MEMF(ecx + 0x254)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004EE30
 * Original: 0x0004EE30 - 0x0004EE37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EE30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004EE30: ;
    fp_push(MEMF(ecx + 0x258)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004EE40
 * Original: 0x0004EE40 - 0x0004EE47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EE40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004EE40: ;
    fp_push(MEMF(ecx + 0x43C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
