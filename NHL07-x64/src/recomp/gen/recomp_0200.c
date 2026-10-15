/**
 * nhl_07_recomp - Recompiled code chunk 200
 * Functions: 250 (0x0043D260 - 0x004406A0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0043D260
 * Original: 0x0043D260 - 0x0043D28A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D260(void)
{

loc_0043D260: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AE88;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043D279u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043D279: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA19AED);
    ecx = eax;
    PUSH32(esp, 0x0043D286u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043D286: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043D2A0
 * Original: 0x0043D2A0 - 0x0043D2B1 (17 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D2A0(void)
{

loc_0043D2A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(ecx));
    eax = MEM32(esp + 8);
    MEM8(eax) = LO8(edx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043D2C0
 * Original: 0x0043D2C0 - 0x0043D2D5 (21 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D2C0(void)
{

loc_0043D2C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    edx = MEM32(esp + 8);
    xmm0.f[0] = (float)(int32_t)MEM32(ecx); /* cvtsi2ss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043D2E0
 * Original: 0x0043D2E0 - 0x0043D2F2 (18 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D2E0(void)
{

loc_0043D2E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    edx = (uint32_t)(int32_t)SMEM8(ecx);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043D300
 * Original: 0x0043D300 - 0x0043D313 (19 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D300(void)
{

loc_0043D300: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    eax = MEM32(esp + 8);
    edx = (int32_t)MEMF(ecx); /* cvttss2si */
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043D320
 * Original: 0x0043D320 - 0x0043D33D (29 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0043D320: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    eax = MEM32(edx);
    edx = MEM32(ecx);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043D350
 * Original: 0x0043D350 - 0x0043D36F (31 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043D350: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    eax = MEM32(edx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    eax = MEM32(esp + 0xC);
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    POP32(esp, esi);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043D380
 * Original: 0x0043D380 - 0x0043D39F (31 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043D380: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    eax = MEM32(edx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    eax = MEM32(esp + 0xC);
    SET_LO8(edx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    POP32(esp, esi);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043D3B0
 * Original: 0x0043D3B0 - 0x0043D3CF (31 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D3B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043D3B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    eax = MEM32(edx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    eax = MEM32(esp + 0xC);
    SET_LO8(edx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    POP32(esp, esi);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043D3E0
 * Original: 0x0043D3E0 - 0x0043D3FF (31 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043D3E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    eax = MEM32(edx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    eax = MEM32(esp + 0xC);
    SET_LO8(edx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    POP32(esp, esi);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043D410
 * Original: 0x0043D410 - 0x0043D43F (47 bytes, 16 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_0043D410: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0043D434; /* jp: parity */

loc_0043D426: ;
    ecx = MEM32(esp + 8);
    eax = 1;
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

loc_0043D434: ;
    edx = MEM32(esp + 8);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043D450
 * Original: 0x0043D450 - 0x0043D47B (43 bytes, 14 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0043D450: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    ecx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0043D470; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_0043D462: ;
    ecx = MEM32(esp + 8);
    eax = 1;
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

loc_0043D470: ;
    edx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043D490
 * Original: 0x0043D490 - 0x0043D4BB (43 bytes, 14 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0043D490: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    ecx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0043D4B0; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ecx)) */

loc_0043D4A2: ;
    ecx = MEM32(esp + 8);
    eax = 1;
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

loc_0043D4B0: ;
    edx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043D4D0
 * Original: 0x0043D4D0 - 0x0043D4FB (43 bytes, 14 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0043D4D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0043D4F0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx)) */

loc_0043D4E2: ;
    ecx = MEM32(esp + 8);
    eax = 1;
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

loc_0043D4F0: ;
    edx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043D510
 * Original: 0x0043D510 - 0x0043D53B (43 bytes, 14 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0043D510: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0043D530; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(edx)) */

loc_0043D522: ;
    ecx = MEM32(esp + 8);
    eax = 1;
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

loc_0043D530: ;
    edx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043D550
 * Original: 0x0043D550 - 0x0043D56D (29 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0043D550: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    eax = MEM32(edx);
    edx = MEM32(ecx);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043D580
 * Original: 0x0043D580 - 0x0043D9C0 (1088 bytes, 293 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043D580: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83ACA0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043D593u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D591u); } /* indirect call */
    }

loc_0043D593: ;
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043D5C6; /* je: equal / zero */

loc_0043D59B: ;
    MEM32(esi) = 0x83AE88;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043D5B1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043D5B1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA19AED);
    ecx = eax;
    PUSH32(esp, 0x0043D5BEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043D5BE: ;
    MEM32(0x90A060) = esi;
    goto loc_0043D5CC;

loc_0043D5C6: ;
    MEM32(0x90A060) = edi;

loc_0043D5CC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83ACB8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043D5DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D5DBu); } /* indirect call */
    }

loc_0043D5DD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043D60E; /* je: equal / zero */

loc_0043D5E3: ;
    MEM32(esi) = 0x83ACD0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043D5F9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043D5F9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA18245);
    ecx = eax;
    PUSH32(esp, 0x0043D606u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043D606: ;
    MEM32(0x90A074) = esi;
    goto loc_0043D614;

loc_0043D60E: ;
    MEM32(0x90A074) = edi;

loc_0043D614: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83ACD4);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043D625u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D623u); } /* indirect call */
    }

loc_0043D625: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043D656; /* je: equal / zero */

loc_0043D62B: ;
    MEM32(esi) = 0x83ACEC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043D641u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043D641: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA199AD);
    ecx = eax;
    PUSH32(esp, 0x0043D64Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043D64E: ;
    MEM32(0x90A058) = esi;
    goto loc_0043D65C;

loc_0043D656: ;
    MEM32(0x90A058) = edi;

loc_0043D65C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83ACF0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043D66Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D66Bu); } /* indirect call */
    }

loc_0043D66D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043D69E; /* je: equal / zero */

loc_0043D673: ;
    MEM32(esi) = 0x83AD08;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043D689u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043D689: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA182E5);
    ecx = eax;
    PUSH32(esp, 0x0043D696u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043D696: ;
    MEM32(0x90A054) = esi;
    goto loc_0043D6A4;

loc_0043D69E: ;
    MEM32(0x90A054) = edi;

loc_0043D6A4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AD0C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043D6B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D6B3u); } /* indirect call */
    }

loc_0043D6B5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043D6E6; /* je: equal / zero */

loc_0043D6BB: ;
    MEM32(esi) = 0x83AD24;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043D6D1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043D6D1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA18613);
    ecx = eax;
    PUSH32(esp, 0x0043D6DEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043D6DE: ;
    MEM32(0x90A088) = esi;
    goto loc_0043D6EC;

loc_0043D6E6: ;
    MEM32(0x90A088) = edi;

loc_0043D6EC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AD28);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043D6FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D6FBu); } /* indirect call */
    }

loc_0043D6FD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043D72E; /* je: equal / zero */

loc_0043D703: ;
    MEM32(esi) = 0x83AD40;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043D719u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043D719: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA18AD1);
    ecx = eax;
    PUSH32(esp, 0x0043D726u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043D726: ;
    MEM32(0x90A06C) = esi;
    goto loc_0043D734;

loc_0043D72E: ;
    MEM32(0x90A06C) = edi;

loc_0043D734: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AD44);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043D745u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D743u); } /* indirect call */
    }

loc_0043D745: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043D776; /* je: equal / zero */

loc_0043D74B: ;
    MEM32(esi) = 0x83AD60;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043D761u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043D761: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA18C61);
    ecx = eax;
    PUSH32(esp, 0x0043D76Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043D76E: ;
    MEM32(0x90A064) = esi;
    goto loc_0043D77C;

loc_0043D776: ;
    MEM32(0x90A064) = edi;

loc_0043D77C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AD64);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043D78Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D78Bu); } /* indirect call */
    }

loc_0043D78D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043D7BE; /* je: equal / zero */

loc_0043D793: ;
    MEM32(esi) = 0x83AD80;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043D7A9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043D7A9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA18C77);
    ecx = eax;
    PUSH32(esp, 0x0043D7B6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043D7B6: ;
    MEM32(0x90A07C) = esi;
    goto loc_0043D7C4;

loc_0043D7BE: ;
    MEM32(0x90A07C) = edi;

loc_0043D7C4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AD84);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043D7D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D7D3u); } /* indirect call */
    }

loc_0043D7D5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043D806; /* je: equal / zero */

loc_0043D7DB: ;
    MEM32(esi) = 0x83ADA4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043D7F1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043D7F1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA192A7);
    ecx = eax;
    PUSH32(esp, 0x0043D7FEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043D7FE: ;
    MEM32(0x90A068) = esi;
    goto loc_0043D80C;

loc_0043D806: ;
    MEM32(0x90A068) = edi;

loc_0043D80C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83ADA8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043D81Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D81Bu); } /* indirect call */
    }

loc_0043D81D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043D84E; /* je: equal / zero */

loc_0043D823: ;
    MEM32(esi) = 0x83ADC4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043D839u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043D839: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA19969);
    ecx = eax;
    PUSH32(esp, 0x0043D846u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043D846: ;
    MEM32(0x90A080) = esi;
    goto loc_0043D854;

loc_0043D84E: ;
    MEM32(0x90A080) = edi;

loc_0043D854: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83ADC8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043D865u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D863u); } /* indirect call */
    }

loc_0043D865: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043D896; /* je: equal / zero */

loc_0043D86B: ;
    MEM32(esi) = 0x83ADE4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043D881u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043D881: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA182E7);
    ecx = eax;
    PUSH32(esp, 0x0043D88Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043D88E: ;
    MEM32(0x90A05C) = esi;
    goto loc_0043D89C;

loc_0043D896: ;
    MEM32(0x90A05C) = edi;

loc_0043D89C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83ADE8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043D8ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D8ABu); } /* indirect call */
    }

loc_0043D8AD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043D8DE; /* je: equal / zero */

loc_0043D8B3: ;
    MEM32(esi) = 0x83AE0C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043D8C9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043D8C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA19E37);
    ecx = eax;
    PUSH32(esp, 0x0043D8D6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043D8D6: ;
    MEM32(0x90A050) = esi;
    goto loc_0043D8E4;

loc_0043D8DE: ;
    MEM32(0x90A050) = edi;

loc_0043D8E4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AE10);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043D8F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D8F3u); } /* indirect call */
    }

loc_0043D8F5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043D926; /* je: equal / zero */

loc_0043D8FB: ;
    MEM32(esi) = 0x83AE30;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043D911u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043D911: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA1864D);
    ecx = eax;
    PUSH32(esp, 0x0043D91Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043D91E: ;
    MEM32(0x90A070) = esi;
    goto loc_0043D92C;

loc_0043D926: ;
    MEM32(0x90A070) = edi;

loc_0043D92C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AE34);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043D93Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D93Bu); } /* indirect call */
    }

loc_0043D93D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043D96E; /* je: equal / zero */

loc_0043D943: ;
    MEM32(esi) = 0x83AE5C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043D959u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043D959: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA18E3D);
    ecx = eax;
    PUSH32(esp, 0x0043D966u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043D966: ;
    MEM32(0x90A078) = esi;
    goto loc_0043D974;

loc_0043D96E: ;
    MEM32(0x90A078) = edi;

loc_0043D974: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AE60);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043D985u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043D983u); } /* indirect call */
    }

loc_0043D985: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043D9B7; /* je: equal / zero */

loc_0043D98B: ;
    MEM32(esi) = 0x83AE84;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x0043D9A1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043D9A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xA18E7F);
    ecx = eax;
    PUSH32(esp, 0x0043D9AEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043D9AE: ;
    POP32(esp, edi);
    MEM32(0x90A084) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0043D9B7: ;
    MEM32(0x90A084) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043DAD0
 * Original: 0x0043DAD0 - 0x0043DAE5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043DAD0(void)
{

loc_0043DAD0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AE8C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043DAE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043DAE2u); } /* indirect call */
    }

loc_0043DAE4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043DAF0
 * Original: 0x0043DAF0 - 0x0043DB01 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043DAF0(void)
{

loc_0043DAF0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043DB00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043DAFDu); } /* indirect call */
    }

loc_0043DB00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043DB10
 * Original: 0x0043DB10 - 0x0043DB25 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043DB10(void)
{

loc_0043DB10: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AEA8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043DB24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043DB22u); } /* indirect call */
    }

loc_0043DB24: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043DB30
 * Original: 0x0043DB30 - 0x0043DB41 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043DB30(void)
{

loc_0043DB30: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043DB40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043DB3Du); } /* indirect call */
    }

loc_0043DB40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043DB50
 * Original: 0x0043DB50 - 0x0043DB7A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043DB50(void)
{

loc_0043DB50: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AEC4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x7FC);
    PUSH32(esp, 0x0043DB69u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043DB69: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF9234);
    ecx = eax;
    PUSH32(esp, 0x0043DB76u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043DB76: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043DB90
 * Original: 0x0043DB90 - 0x0043DBA5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043DB90(void)
{

loc_0043DB90: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AEC8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043DBA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043DBA2u); } /* indirect call */
    }

loc_0043DBA4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043DBB0
 * Original: 0x0043DBB0 - 0x0043DBC1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043DBB0(void)
{

loc_0043DBB0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043DBC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043DBBDu); } /* indirect call */
    }

loc_0043DBC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043DBD0
 * Original: 0x0043DBD0 - 0x0043DBFA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043DBD0(void)
{

loc_0043DBD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AEE8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x7FC);
    PUSH32(esp, 0x0043DBE9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043DBE9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF856C);
    ecx = eax;
    PUSH32(esp, 0x0043DBF6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043DBF6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043DC10
 * Original: 0x0043DC10 - 0x0043DC25 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043DC10(void)
{

loc_0043DC10: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AEEC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043DC24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043DC22u); } /* indirect call */
    }

loc_0043DC24: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043DC30
 * Original: 0x0043DC30 - 0x0043DC41 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043DC30(void)
{

loc_0043DC30: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043DC40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043DC3Du); } /* indirect call */
    }

loc_0043DC40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043DC50
 * Original: 0x0043DC50 - 0x0043DC7A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043DC50(void)
{

loc_0043DC50: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AF20;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x7FC);
    PUSH32(esp, 0x0043DC69u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043DC69: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF9837);
    ecx = eax;
    PUSH32(esp, 0x0043DC76u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043DC76: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043DC90
 * Original: 0x0043DC90 - 0x0043DCD9 (73 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043DC90(void)
{

loc_0043DC90: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A0A0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043DCA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043DC9Fu); } /* indirect call */
    }

loc_0043DCA2: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A09C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043DCB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043DCB1u); } /* indirect call */
    }

loc_0043DCB4: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A098);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043DCC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043DCC3u); } /* indirect call */
    }

loc_0043DCC6: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A0A4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043DCD8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043DCD5u); } /* indirect call */
    }

loc_0043DCD8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043DCF0
 * Original: 0x0043DCF0 - 0x0043DD1A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043DCF0(void)
{

loc_0043DCF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AF24;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x7FC);
    PUSH32(esp, 0x0043DD09u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043DD09: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF9F41);
    ecx = eax;
    PUSH32(esp, 0x0043DD16u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043DD16: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043DD30
 * Original: 0x0043DD30 - 0x0043DD4E (30 bytes, 10 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043DD30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043DD30: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0043DD48u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0043DD48: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043DD60
 * Original: 0x0043DD60 - 0x0043DD75 (21 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043DD60(void)
{

loc_0043DD60: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(ecx));
    eax = MEM32(esp + 8);
    MEM8(eax) = LO8(edx);
    MEM8(eax + 1) = 0;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043DD80
 * Original: 0x0043DD80 - 0x0043DDA3 (35 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043DD80(void)
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

loc_0043DD80: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    fp_push(MEMF(ecx)); /* fld float */
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x83AF28);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0043DD9Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0043DD9D: ;
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
 * sub_0043DDB0
 * Original: 0x0043DDB0 - 0x0043DDD0 (32 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043DDB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043DDB0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E0928);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0043DDCAu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0043DDCA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043DDE0
 * Original: 0x0043DDE0 - 0x0043DF08 (296 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043DDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043DDE0: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AE8C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043DDF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043DDF1u); } /* indirect call */
    }

loc_0043DDF3: ;
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043DE26; /* je: equal / zero */

loc_0043DDFB: ;
    MEM32(esi) = 0x83AF24;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x7FC);
    PUSH32(esp, 0x0043DE11u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043DE11: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF9F41);
    ecx = eax;
    PUSH32(esp, 0x0043DE1Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043DE1E: ;
    MEM32(0x90A0A0) = esi;
    goto loc_0043DE2C;

loc_0043DE26: ;
    MEM32(0x90A0A0) = edi;

loc_0043DE2C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AEA8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043DE3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043DE3Bu); } /* indirect call */
    }

loc_0043DE3D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043DE6E; /* je: equal / zero */

loc_0043DE43: ;
    MEM32(esi) = 0x83AEC4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x7FC);
    PUSH32(esp, 0x0043DE59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043DE59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF9234);
    ecx = eax;
    PUSH32(esp, 0x0043DE66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043DE66: ;
    MEM32(0x90A09C) = esi;
    goto loc_0043DE74;

loc_0043DE6E: ;
    MEM32(0x90A09C) = edi;

loc_0043DE74: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AEC8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043DE85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043DE83u); } /* indirect call */
    }

loc_0043DE85: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043DEB6; /* je: equal / zero */

loc_0043DE8B: ;
    MEM32(esi) = 0x83AEE8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x7FC);
    PUSH32(esp, 0x0043DEA1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043DEA1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF856C);
    ecx = eax;
    PUSH32(esp, 0x0043DEAEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043DEAE: ;
    MEM32(0x90A098) = esi;
    goto loc_0043DEBC;

loc_0043DEB6: ;
    MEM32(0x90A098) = edi;

loc_0043DEBC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AEEC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043DECDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043DECBu); } /* indirect call */
    }

loc_0043DECD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043DEFF; /* je: equal / zero */

loc_0043DED3: ;
    MEM32(esi) = 0x83AF20;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x7FC);
    PUSH32(esp, 0x0043DEE9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043DEE9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF9837);
    ecx = eax;
    PUSH32(esp, 0x0043DEF6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043DEF6: ;
    POP32(esp, edi);
    MEM32(0x90A0A4) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0043DEFF: ;
    MEM32(0x90A0A4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043DF60
 * Original: 0x0043DF60 - 0x0043DF75 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043DF60(void)
{

loc_0043DF60: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AF30);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043DF74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043DF72u); } /* indirect call */
    }

loc_0043DF74: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043DF80
 * Original: 0x0043DF80 - 0x0043DF91 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043DF80(void)
{

loc_0043DF80: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043DF90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043DF8Du); } /* indirect call */
    }

loc_0043DF90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043DFA0
 * Original: 0x0043DFA0 - 0x0043DFB5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043DFA0(void)
{

loc_0043DFA0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AF38);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043DFB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043DFB2u); } /* indirect call */
    }

loc_0043DFB4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043DFC0
 * Original: 0x0043DFC0 - 0x0043DFD1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043DFC0(void)
{

loc_0043DFC0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043DFD0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043DFCDu); } /* indirect call */
    }

loc_0043DFD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043DFE0
 * Original: 0x0043DFE0 - 0x0043E00A (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043DFE0(void)
{

loc_0043DFE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AF4C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x94);
    PUSH32(esp, 0x0043DFF9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043DFF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x128B38);
    ecx = eax;
    PUSH32(esp, 0x0043E006u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_0043E006: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043E020
 * Original: 0x0043E020 - 0x0043E035 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E020(void)
{

loc_0043E020: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AF60);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043E034u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E032u); } /* indirect call */
    }

loc_0043E034: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043E040
 * Original: 0x0043E040 - 0x0043E051 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E040(void)
{

loc_0043E040: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043E050u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E04Du); } /* indirect call */
    }

loc_0043E050: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043E060
 * Original: 0x0043E060 - 0x0043E08A (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E060(void)
{

loc_0043E060: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AF68;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x94);
    PUSH32(esp, 0x0043E079u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043E079: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x129D14);
    ecx = eax;
    PUSH32(esp, 0x0043E086u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_0043E086: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043E0A0
 * Original: 0x0043E0A0 - 0x0043E0B5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E0A0(void)
{

loc_0043E0A0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AF7C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043E0B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E0B2u); } /* indirect call */
    }

loc_0043E0B4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043E0C0
 * Original: 0x0043E0C0 - 0x0043E0D1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E0C0(void)
{

loc_0043E0C0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043E0D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E0CDu); } /* indirect call */
    }

loc_0043E0D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043E0E0
 * Original: 0x0043E0E0 - 0x0043E129 (73 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E0E0(void)
{

loc_0043E0E0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A0B8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043E0F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E0EFu); } /* indirect call */
    }

loc_0043E0F2: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A0B4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043E104u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E101u); } /* indirect call */
    }

loc_0043E104: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A0B0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043E116u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E113u); } /* indirect call */
    }

loc_0043E116: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90A0AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043E128u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E125u); } /* indirect call */
    }

loc_0043E128: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043E140
 * Original: 0x0043E140 - 0x0043E16A (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E140(void)
{

loc_0043E140: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AF8C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x94);
    PUSH32(esp, 0x0043E159u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043E159: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x129B66);
    ecx = eax;
    PUSH32(esp, 0x0043E166u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_0043E166: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043E180
 * Original: 0x0043E180 - 0x0043E1CC (76 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043E180: ;
    eax = MEM32(esp + 4);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0043E1C9; /* ja: above (unsigned >) */

loc_0043E191: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x43E1CC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0043E198u) goto loc_0043E198;
    if (_jt == 0x0043E1A5u) goto loc_0043E1A5;
    if (_jt == 0x0043E1B2u) goto loc_0043E1B2;
    if (_jt == 0x0043E1BFu) goto loc_0043E1BF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0043E198: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0043E1A2u); RECOMP_ABI_CALL(0x00029E5Cu, sub_00029E5C); /* call 0x00029E5C */

loc_0043E1A2: ;
    esp += 12; return; /* ret 8 */

loc_0043E1A5: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0043E1AFu); RECOMP_ABI_CALL(0x0001399Au, sub_0001399A); /* call 0x0001399A */

loc_0043E1AF: ;
    esp += 12; return; /* ret 8 */

loc_0043E1B2: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0043E1BCu); RECOMP_ABI_CALL(0x00020992u, sub_00020992); /* call 0x00020992 */

loc_0043E1BC: ;
    esp += 12; return; /* ret 8 */

loc_0043E1BF: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0043E1C9u); RECOMP_ABI_CALL(0x00024F79u, sub_00024F79); /* call 0x00024F79 */

loc_0043E1C9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0043E200
 * Original: 0x0043E200 - 0x0043E237 (55 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043E200: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi);
    eax = MEM32(ecx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043E215; /* jne: not equal / not zero */

loc_0043E20E: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x0043E215u); RECOMP_ABI_CALL(0x0001F2B3u, sub_0001F2B3); /* call 0x0001F2B3 */

loc_0043E215: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM8(eax + 4) = 0;
    eax = MEM32(esi);
    MEM8(eax + 0x1C) = 1;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0043E233u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E230u); } /* indirect call */
    }

loc_0043E233: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043E250
 * Original: 0x0043E250 - 0x0043E271 (33 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043E250: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043E26E; /* je: equal / zero */

loc_0043E25D: ;
    MEM8(eax + 4) = 1;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0043E26Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E26Bu); } /* indirect call */
    }

loc_0043E26E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043E280
 * Original: 0x0043E280 - 0x0043E2A1 (33 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043E280: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043E29E; /* je: equal / zero */

loc_0043E28D: ;
    MEM8(eax + 4) = 0;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0043E29Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E29Bu); } /* indirect call */
    }

loc_0043E29E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043E2B0
 * Original: 0x0043E2B0 - 0x0043E2CA (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E2B0(void)
{

loc_0043E2B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    MEM8(ecx + 0x1C) = 0;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0043E2C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E2C4u); } /* indirect call */
    }

loc_0043E2C7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043E2D0
 * Original: 0x0043E2D0 - 0x0043E2EA (26 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E2D0(void)
{

loc_0043E2D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(esp + 4) = eax;
    PUSH32(esp, edx);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0043E2E7u); RECOMP_ABI_CALL(0x0002717Au, sub_0002717A); /* call 0x0002717A */

loc_0043E2E7: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0043E2F0
 * Original: 0x0043E2F0 - 0x0043E32B (59 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043E2F0: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx);
    eax = MEM32(ecx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043E303; /* jne: not equal / not zero */

loc_0043E2FD: ;
    MEM8(ecx + 0x1C) = LO8(eax);
    esp += 12; return; /* ret 8 */

loc_0043E303: ;
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043E328; /* jne: not equal / not zero */

loc_0043E30A: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 8); /* addss */
    PUSH32(esp, esi);
    MEMF(eax) = xmm0.f[0]; /* movss */
    edx = MEM32(edx);
    ecx = MEM32(edx + 0x10);
    esi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0xC); PUSH32(esp, 0x0043E327u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E324u); } /* indirect call */
    }

loc_0043E327: ;
    POP32(esp, esi);

loc_0043E328: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0043E340
 * Original: 0x0043E340 - 0x0043E343 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E340(void)
{

loc_0043E340: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043E350
 * Original: 0x0043E350 - 0x0043E39C (76 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043E350: ;
    eax = MEM32(esp + 4);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0043E399; /* ja: above (unsigned >) */

loc_0043E361: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x43E39C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0043E368u) goto loc_0043E368;
    if (_jt == 0x0043E375u) goto loc_0043E375;
    if (_jt == 0x0043E382u) goto loc_0043E382;
    if (_jt == 0x0043E38Fu) goto loc_0043E38F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0043E368: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0043E372u); RECOMP_ABI_CALL(0x00011483u, sub_00011483); /* call 0x00011483 */

loc_0043E372: ;
    esp += 12; return; /* ret 8 */

loc_0043E375: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0043E37Fu); RECOMP_ABI_CALL(0x00019336u, sub_00019336); /* call 0x00019336 */

loc_0043E37F: ;
    esp += 12; return; /* ret 8 */

loc_0043E382: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0043E38Cu); RECOMP_ABI_CALL(0x0001C2B1u, sub_0001C2B1); /* call 0x0001C2B1 */

loc_0043E38C: ;
    esp += 12; return; /* ret 8 */

loc_0043E38F: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0043E399u); RECOMP_ABI_CALL(0x0001F308u, sub_0001F308); /* call 0x0001F308 */

loc_0043E399: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0043E3D0
 * Original: 0x0043E3D0 - 0x0043E43B (107 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0043E3D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = MEM32(edi);
    esi = MEM32(ecx + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043E3E8; /* jne: not equal / not zero */

loc_0043E3DF: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0043E3E6u); RECOMP_ABI_CALL(0x0001F2B3u, sub_0001F2B3); /* call 0x0001F2B3 */

loc_0043E3E6: ;
    esi = eax;

loc_0043E3E8: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEM8(esi + 0xC) = 0;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0043E405u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E402u); } /* indirect call */
    }

loc_0043E405: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0043E429; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_0043E412: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    eax = MEM32(edi);
    MEM8(eax + 0x1C) = 1;

loc_0043E429: ;
    edi = MEM32(edi);
    ecx = MEM32(edi + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0043E436u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E433u); } /* indirect call */
    }

loc_0043E436: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043E460
 * Original: 0x0043E460 - 0x0043E481 (33 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043E460: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043E47E; /* je: equal / zero */

loc_0043E46D: ;
    MEM8(eax + 0xC) = 1;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0043E47Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E47Bu); } /* indirect call */
    }

loc_0043E47E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043E490
 * Original: 0x0043E490 - 0x0043E4B1 (33 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043E490: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043E4AE; /* je: equal / zero */

loc_0043E49D: ;
    MEM8(eax + 0xC) = 0;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0043E4AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E4ABu); } /* indirect call */
    }

loc_0043E4AE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043E4C0
 * Original: 0x0043E4C0 - 0x0043E4DA (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E4C0(void)
{

loc_0043E4C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    MEM8(ecx + 0x1C) = 0;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0043E4D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E4D4u); } /* indirect call */
    }

loc_0043E4D7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043E4E0
 * Original: 0x0043E4E0 - 0x0043E4FA (26 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E4E0(void)
{

loc_0043E4E0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(esp + 4) = eax;
    PUSH32(esp, edx);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0043E4F7u); RECOMP_ABI_CALL(0x0001146Fu, sub_0001146F); /* call 0x0001146F */

loc_0043E4F7: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0043E500
 * Original: 0x0043E500 - 0x0043E57D (125 bytes, 44 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0043E500: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    esi = MEM32(eax + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043E518; /* jne: not equal / not zero */

loc_0043E50F: ;
    POP32(esp, edi);
    MEM8(eax + 0x1C) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0043E518: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043E578; /* jne: not equal / not zero */

loc_0043E51F: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0043E53Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E538u); } /* indirect call */
    }

loc_0043E53B: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 8); /* comiss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0043E578; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 8)) */

loc_0043E551: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 8); /* subss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0043E56Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E56Au); } /* indirect call */
    }

loc_0043E56D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 8); /* comiss */
    if ((_fca >= _fcb)) goto loc_0043E551; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esi + 8)) */

loc_0043E578: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0043E5A0
 * Original: 0x0043E5A0 - 0x0043E5A3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E5A0(void)
{

loc_0043E5A0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043E5B0
 * Original: 0x0043E5B0 - 0x0043E5DE (46 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043E5B0: ;
    eax = MEM32(esp + 4);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0043E5D1; /* je: equal / zero */

loc_0043E5C1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0043E5DB; /* jne: not equal / not zero */

loc_0043E5C4: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0043E5CEu); RECOMP_ABI_CALL(0x0001E778u, sub_0001E778); /* call 0x0001E778 */

loc_0043E5CE: ;
    esp += 12; return; /* ret 8 */

loc_0043E5D1: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0043E5DBu); RECOMP_ABI_CALL(0x00024966u, sub_00024966); /* call 0x00024966 */

loc_0043E5DB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0043E5F0
 * Original: 0x0043E5F0 - 0x0043E657 (103 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0043E5F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = MEM32(edi);
    esi = MEM32(ecx + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043E608; /* jne: not equal / not zero */

loc_0043E5FF: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x0043E606u); RECOMP_ABI_CALL(0x0001F2B3u, sub_0001F2B3); /* call 0x0001F2B3 */

loc_0043E606: ;
    esi = eax;

loc_0043E608: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0043E61Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E619u); } /* indirect call */
    }

loc_0043E61C: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0043E632; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0043E62D: ;
    MEMF(esi + 4) = xmm1.f[0]; /* movss */

loc_0043E632: ;
    eax = MEM32(edi);
    esi = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = 1;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0043E64Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E649u); } /* indirect call */
    }

loc_0043E64C: ;
    eax = MEM32(edi);
    POP32(esp, edi);
    MEM8(eax + 0x1C) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043E670
 * Original: 0x0043E670 - 0x0043E6A8 (56 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E670(void)
{

loc_0043E670: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0043E683u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E680u); } /* indirect call */
    }

loc_0043E683: ;
    eax = MEM32(esi);
    edi = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 0;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0043E69Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E69Au); } /* indirect call */
    }

loc_0043E69D: ;
    eax = MEM32(esi);
    POP32(esp, edi);
    MEM8(eax + 0x1C) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043E6C0
 * Original: 0x0043E6C0 - 0x0043E6DA (26 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E6C0(void)
{

loc_0043E6C0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(esp + 4) = eax;
    PUSH32(esp, edx);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0043E6D7u); RECOMP_ABI_CALL(0x0001BE10u, sub_0001BE10); /* call 0x0001BE10 */

loc_0043E6D7: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0043E6E0
 * Original: 0x0043E6E0 - 0x0043E73C (92 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0043E6E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi);
    eax = MEM32(ecx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043E6F5; /* jne: not equal / not zero */

loc_0043E6EE: ;
    MEM8(ecx + 0x1C) = LO8(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0043E6F5: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0043E738; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_0043E709: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0043E717u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E714u); } /* indirect call */
    }

loc_0043E717: ;
    eax = MEM32(esi);
    edi = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 0;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0043E731u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E72Eu); } /* indirect call */
    }

loc_0043E731: ;
    eax = MEM32(esi);
    MEM8(eax + 0x1C) = 0;
    POP32(esp, edi);

loc_0043E738: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0043E760
 * Original: 0x0043E760 - 0x0043E763 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E760(void)
{

loc_0043E760: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0043E770
 * Original: 0x0043E770 - 0x0043E79A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E770(void)
{

loc_0043E770: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AFA0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x94);
    PUSH32(esp, 0x0043E789u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043E789: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x128EB0);
    ecx = eax;
    PUSH32(esp, 0x0043E796u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043E796: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043E7B0
 * Original: 0x0043E7B0 - 0x0043E7B3 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E7B0(void)
{

loc_0043E7B0: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0043E7C0
 * Original: 0x0043E7C0 - 0x0043E8E8 (296 bytes, 84 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043E7C0: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AF7C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043E7D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E7D1u); } /* indirect call */
    }

loc_0043E7D3: ;
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043E806; /* je: equal / zero */

loc_0043E7DB: ;
    MEM32(esi) = 0x83AFA0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x94);
    PUSH32(esp, 0x0043E7F1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043E7F1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x128EB0);
    ecx = eax;
    PUSH32(esp, 0x0043E7FEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043E7FE: ;
    MEM32(0x90A0B8) = esi;
    goto loc_0043E80C;

loc_0043E806: ;
    MEM32(0x90A0B8) = edi;

loc_0043E80C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AF30);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043E81Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E81Bu); } /* indirect call */
    }

loc_0043E81D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043E84E; /* je: equal / zero */

loc_0043E823: ;
    MEM32(esi) = 0x83AF8C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x94);
    PUSH32(esp, 0x0043E839u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043E839: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x129B66);
    ecx = eax;
    PUSH32(esp, 0x0043E846u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_0043E846: ;
    MEM32(0x90A0B4) = esi;
    goto loc_0043E854;

loc_0043E84E: ;
    MEM32(0x90A0B4) = edi;

loc_0043E854: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AF38);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043E865u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E863u); } /* indirect call */
    }

loc_0043E865: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043E896; /* je: equal / zero */

loc_0043E86B: ;
    MEM32(esi) = 0x83AF4C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x94);
    PUSH32(esp, 0x0043E881u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043E881: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x128B38);
    ecx = eax;
    PUSH32(esp, 0x0043E88Eu); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_0043E88E: ;
    MEM32(0x90A0B0) = esi;
    goto loc_0043E89C;

loc_0043E896: ;
    MEM32(0x90A0B0) = edi;

loc_0043E89C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AF60);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043E8ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E8ABu); } /* indirect call */
    }

loc_0043E8AD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043E8DF; /* je: equal / zero */

loc_0043E8B3: ;
    MEM32(esi) = 0x83AF68;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x94);
    PUSH32(esp, 0x0043E8C9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043E8C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x129D14);
    ecx = eax;
    PUSH32(esp, 0x0043E8D6u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_0043E8D6: ;
    POP32(esp, edi);
    MEM32(0x90A0AC) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0043E8DF: ;
    MEM32(0x90A0AC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043E940
 * Original: 0x0043E940 - 0x0043E955 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E940(void)
{

loc_0043E940: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AFB0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043E954u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E952u); } /* indirect call */
    }

loc_0043E954: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043E960
 * Original: 0x0043E960 - 0x0043E971 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E960(void)
{

loc_0043E960: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043E970u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E96Du); } /* indirect call */
    }

loc_0043E970: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043E980
 * Original: 0x0043E980 - 0x0043E995 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E980(void)
{

loc_0043E980: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AFC8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043E994u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E992u); } /* indirect call */
    }

loc_0043E994: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043E9A0
 * Original: 0x0043E9A0 - 0x0043E9B1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E9A0(void)
{

loc_0043E9A0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043E9B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043E9ADu); } /* indirect call */
    }

loc_0043E9B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043E9C0
 * Original: 0x0043E9C0 - 0x0043E9EA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043E9C0(void)
{

loc_0043E9C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AFE0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043E9D9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043E9D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C487D);
    ecx = eax;
    PUSH32(esp, 0x0043E9E6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043E9E6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043EA00
 * Original: 0x0043EA00 - 0x0043EA15 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EA00(void)
{

loc_0043EA00: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83AFE4);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043EA14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043EA12u); } /* indirect call */
    }

loc_0043EA14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043EA20
 * Original: 0x0043EA20 - 0x0043EA31 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EA20(void)
{

loc_0043EA20: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043EA30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043EA2Du); } /* indirect call */
    }

loc_0043EA30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043EA40
 * Original: 0x0043EA40 - 0x0043EA6A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EA40(void)
{

loc_0043EA40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83AFFC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043EA59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043EA59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4EBF);
    ecx = eax;
    PUSH32(esp, 0x0043EA66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043EA66: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043EA80
 * Original: 0x0043EA80 - 0x0043EA95 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EA80(void)
{

loc_0043EA80: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B000);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043EA94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043EA92u); } /* indirect call */
    }

loc_0043EA94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043EAA0
 * Original: 0x0043EAA0 - 0x0043EAB1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EAA0(void)
{

loc_0043EAA0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043EAB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043EAADu); } /* indirect call */
    }

loc_0043EAB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043EAC0
 * Original: 0x0043EAC0 - 0x0043EAEA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EAC0(void)
{

loc_0043EAC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B02C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043EAD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043EAD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C59F3);
    ecx = eax;
    PUSH32(esp, 0x0043EAE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043EAE6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043EB00
 * Original: 0x0043EB00 - 0x0043EB15 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EB00(void)
{

loc_0043EB00: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B030);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043EB14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043EB12u); } /* indirect call */
    }

loc_0043EB14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043EB20
 * Original: 0x0043EB20 - 0x0043EB31 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EB20(void)
{

loc_0043EB20: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043EB30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043EB2Du); } /* indirect call */
    }

loc_0043EB30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043EB40
 * Original: 0x0043EB40 - 0x0043EB6A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EB40(void)
{

loc_0043EB40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B050;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043EB59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043EB59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4A25);
    ecx = eax;
    PUSH32(esp, 0x0043EB66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043EB66: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043EB80
 * Original: 0x0043EB80 - 0x0043EB95 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EB80(void)
{

loc_0043EB80: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B054);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043EB94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043EB92u); } /* indirect call */
    }

loc_0043EB94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043EBA0
 * Original: 0x0043EBA0 - 0x0043EBB1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EBA0(void)
{

loc_0043EBA0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043EBB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043EBADu); } /* indirect call */
    }

loc_0043EBB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043EBC0
 * Original: 0x0043EBC0 - 0x0043EBEA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EBC0(void)
{

loc_0043EBC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B074;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043EBD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043EBD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5D47);
    ecx = eax;
    PUSH32(esp, 0x0043EBE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043EBE6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043EC00
 * Original: 0x0043EC00 - 0x0043EC15 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EC00(void)
{

loc_0043EC00: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B078);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043EC14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043EC12u); } /* indirect call */
    }

loc_0043EC14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043EC20
 * Original: 0x0043EC20 - 0x0043EC31 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EC20(void)
{

loc_0043EC20: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043EC30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043EC2Du); } /* indirect call */
    }

loc_0043EC30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043EC40
 * Original: 0x0043EC40 - 0x0043EC6A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EC40(void)
{

loc_0043EC40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B098;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043EC59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043EC59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5069);
    ecx = eax;
    PUSH32(esp, 0x0043EC66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043EC66: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043EC80
 * Original: 0x0043EC80 - 0x0043EC95 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EC80(void)
{

loc_0043EC80: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B09C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043EC94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043EC92u); } /* indirect call */
    }

loc_0043EC94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043ECA0
 * Original: 0x0043ECA0 - 0x0043ECB1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043ECA0(void)
{

loc_0043ECA0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043ECB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043ECADu); } /* indirect call */
    }

loc_0043ECB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043ECC0
 * Original: 0x0043ECC0 - 0x0043ECEA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043ECC0(void)
{

loc_0043ECC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B0BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043ECD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043ECD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4AE3);
    ecx = eax;
    PUSH32(esp, 0x0043ECE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043ECE6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043ED00
 * Original: 0x0043ED00 - 0x0043ED15 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043ED00(void)
{

loc_0043ED00: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B0C0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043ED14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043ED12u); } /* indirect call */
    }

loc_0043ED14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043ED20
 * Original: 0x0043ED20 - 0x0043ED31 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043ED20(void)
{

loc_0043ED20: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043ED30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043ED2Du); } /* indirect call */
    }

loc_0043ED30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043ED40
 * Original: 0x0043ED40 - 0x0043ED6A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043ED40(void)
{

loc_0043ED40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B0E0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043ED59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043ED59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C404C);
    ecx = eax;
    PUSH32(esp, 0x0043ED66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043ED66: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043ED80
 * Original: 0x0043ED80 - 0x0043ED95 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043ED80(void)
{

loc_0043ED80: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B0E4);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043ED94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043ED92u); } /* indirect call */
    }

loc_0043ED94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043EDA0
 * Original: 0x0043EDA0 - 0x0043EDB1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EDA0(void)
{

loc_0043EDA0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043EDB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043EDADu); } /* indirect call */
    }

loc_0043EDB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043EDC0
 * Original: 0x0043EDC0 - 0x0043EDEA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EDC0(void)
{

loc_0043EDC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B10C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043EDD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043EDD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C428A);
    ecx = eax;
    PUSH32(esp, 0x0043EDE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043EDE6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043EE00
 * Original: 0x0043EE00 - 0x0043EE15 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EE00(void)
{

loc_0043EE00: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B110);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043EE14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043EE12u); } /* indirect call */
    }

loc_0043EE14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043EE20
 * Original: 0x0043EE20 - 0x0043EE31 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EE20(void)
{

loc_0043EE20: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043EE30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043EE2Du); } /* indirect call */
    }

loc_0043EE30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043EE40
 * Original: 0x0043EE40 - 0x0043EE6A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EE40(void)
{

loc_0043EE40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B134;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043EE59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043EE59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5F9D);
    ecx = eax;
    PUSH32(esp, 0x0043EE66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043EE66: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043EE80
 * Original: 0x0043EE80 - 0x0043EE95 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EE80(void)
{

loc_0043EE80: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B138);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043EE94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043EE92u); } /* indirect call */
    }

loc_0043EE94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043EEA0
 * Original: 0x0043EEA0 - 0x0043EEB1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EEA0(void)
{

loc_0043EEA0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043EEB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043EEADu); } /* indirect call */
    }

loc_0043EEB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043EEC0
 * Original: 0x0043EEC0 - 0x0043EEEA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EEC0(void)
{

loc_0043EEC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B154;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043EED9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043EED9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5CB0);
    ecx = eax;
    PUSH32(esp, 0x0043EEE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043EEE6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043EF00
 * Original: 0x0043EF00 - 0x0043EF15 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EF00(void)
{

loc_0043EF00: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B158);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043EF14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043EF12u); } /* indirect call */
    }

loc_0043EF14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043EF20
 * Original: 0x0043EF20 - 0x0043EF31 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EF20(void)
{

loc_0043EF20: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043EF30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043EF2Du); } /* indirect call */
    }

loc_0043EF30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043EF40
 * Original: 0x0043EF40 - 0x0043EF6A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EF40(void)
{

loc_0043EF40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B178;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043EF59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043EF59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C480A);
    ecx = eax;
    PUSH32(esp, 0x0043EF66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043EF66: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043EF80
 * Original: 0x0043EF80 - 0x0043EF95 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EF80(void)
{

loc_0043EF80: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B17C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043EF94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043EF92u); } /* indirect call */
    }

loc_0043EF94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043EFA0
 * Original: 0x0043EFA0 - 0x0043EFB1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EFA0(void)
{

loc_0043EFA0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043EFB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043EFADu); } /* indirect call */
    }

loc_0043EFB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043EFC0
 * Original: 0x0043EFC0 - 0x0043EFEA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043EFC0(void)
{

loc_0043EFC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B1A4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043EFD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043EFD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C420D);
    ecx = eax;
    PUSH32(esp, 0x0043EFE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043EFE6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043F000
 * Original: 0x0043F000 - 0x0043F015 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F000(void)
{

loc_0043F000: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B1A8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043F014u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F012u); } /* indirect call */
    }

loc_0043F014: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F020
 * Original: 0x0043F020 - 0x0043F031 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F020(void)
{

loc_0043F020: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043F030u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F02Du); } /* indirect call */
    }

loc_0043F030: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F040
 * Original: 0x0043F040 - 0x0043F06A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F040(void)
{

loc_0043F040: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B1D4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043F059u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043F059: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5610);
    ecx = eax;
    PUSH32(esp, 0x0043F066u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043F066: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043F080
 * Original: 0x0043F080 - 0x0043F095 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F080(void)
{

loc_0043F080: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B1D8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043F094u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F092u); } /* indirect call */
    }

loc_0043F094: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F0A0
 * Original: 0x0043F0A0 - 0x0043F0B1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F0A0(void)
{

loc_0043F0A0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043F0B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F0ADu); } /* indirect call */
    }

loc_0043F0B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F0C0
 * Original: 0x0043F0C0 - 0x0043F0EA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F0C0(void)
{

loc_0043F0C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B1FC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043F0D9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043F0D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C497C);
    ecx = eax;
    PUSH32(esp, 0x0043F0E6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043F0E6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043F100
 * Original: 0x0043F100 - 0x0043F115 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F100(void)
{

loc_0043F100: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B200);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043F114u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F112u); } /* indirect call */
    }

loc_0043F114: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F120
 * Original: 0x0043F120 - 0x0043F131 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F120(void)
{

loc_0043F120: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043F130u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F12Du); } /* indirect call */
    }

loc_0043F130: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F140
 * Original: 0x0043F140 - 0x0043F16A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F140(void)
{

loc_0043F140: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B220;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043F159u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043F159: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5787);
    ecx = eax;
    PUSH32(esp, 0x0043F166u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043F166: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043F180
 * Original: 0x0043F180 - 0x0043F195 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F180(void)
{

loc_0043F180: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B224);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043F194u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F192u); } /* indirect call */
    }

loc_0043F194: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F1A0
 * Original: 0x0043F1A0 - 0x0043F1B1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F1A0(void)
{

loc_0043F1A0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043F1B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F1ADu); } /* indirect call */
    }

loc_0043F1B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F1C0
 * Original: 0x0043F1C0 - 0x0043F1EA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F1C0(void)
{

loc_0043F1C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B24C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043F1D9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043F1D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C56F5);
    ecx = eax;
    PUSH32(esp, 0x0043F1E6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043F1E6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043F200
 * Original: 0x0043F200 - 0x0043F215 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F200(void)
{

loc_0043F200: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B250);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043F214u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F212u); } /* indirect call */
    }

loc_0043F214: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F220
 * Original: 0x0043F220 - 0x0043F231 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F220(void)
{

loc_0043F220: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043F230u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F22Du); } /* indirect call */
    }

loc_0043F230: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F240
 * Original: 0x0043F240 - 0x0043F26A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F240(void)
{

loc_0043F240: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B278;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043F259u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043F259: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C562A);
    ecx = eax;
    PUSH32(esp, 0x0043F266u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043F266: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043F280
 * Original: 0x0043F280 - 0x0043F295 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F280(void)
{

loc_0043F280: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B27C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043F294u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F292u); } /* indirect call */
    }

loc_0043F294: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F2A0
 * Original: 0x0043F2A0 - 0x0043F2B1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F2A0(void)
{

loc_0043F2A0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043F2B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F2ADu); } /* indirect call */
    }

loc_0043F2B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F2C0
 * Original: 0x0043F2C0 - 0x0043F2EA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F2C0(void)
{

loc_0043F2C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B2AC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043F2D9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043F2D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5E7B);
    ecx = eax;
    PUSH32(esp, 0x0043F2E6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043F2E6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043F300
 * Original: 0x0043F300 - 0x0043F315 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F300(void)
{

loc_0043F300: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B2B0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043F314u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F312u); } /* indirect call */
    }

loc_0043F314: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F320
 * Original: 0x0043F320 - 0x0043F331 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F320(void)
{

loc_0043F320: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043F330u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F32Du); } /* indirect call */
    }

loc_0043F330: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F340
 * Original: 0x0043F340 - 0x0043F36A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F340(void)
{

loc_0043F340: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B2CC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043F359u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043F359: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4A3C);
    ecx = eax;
    PUSH32(esp, 0x0043F366u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043F366: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043F380
 * Original: 0x0043F380 - 0x0043F395 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F380(void)
{

loc_0043F380: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B2D0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043F394u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F392u); } /* indirect call */
    }

loc_0043F394: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F3A0
 * Original: 0x0043F3A0 - 0x0043F3B1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F3A0(void)
{

loc_0043F3A0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043F3B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F3ADu); } /* indirect call */
    }

loc_0043F3B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F3C0
 * Original: 0x0043F3C0 - 0x0043F3EA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F3C0(void)
{

loc_0043F3C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B300;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043F3D9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043F3D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4349);
    ecx = eax;
    PUSH32(esp, 0x0043F3E6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043F3E6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043F400
 * Original: 0x0043F400 - 0x0043F415 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F400(void)
{

loc_0043F400: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B304);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043F414u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F412u); } /* indirect call */
    }

loc_0043F414: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F420
 * Original: 0x0043F420 - 0x0043F431 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F420(void)
{

loc_0043F420: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043F430u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F42Du); } /* indirect call */
    }

loc_0043F430: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F440
 * Original: 0x0043F440 - 0x0043F46A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F440(void)
{

loc_0043F440: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B320;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043F459u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043F459: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4176);
    ecx = eax;
    PUSH32(esp, 0x0043F466u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043F466: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043F480
 * Original: 0x0043F480 - 0x0043F495 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F480(void)
{

loc_0043F480: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B324);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043F494u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F492u); } /* indirect call */
    }

loc_0043F494: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F4A0
 * Original: 0x0043F4A0 - 0x0043F4B1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F4A0(void)
{

loc_0043F4A0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043F4B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F4ADu); } /* indirect call */
    }

loc_0043F4B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F4C0
 * Original: 0x0043F4C0 - 0x0043F4EA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F4C0(void)
{

loc_0043F4C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B344;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043F4D9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043F4D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C45FF);
    ecx = eax;
    PUSH32(esp, 0x0043F4E6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043F4E6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043F500
 * Original: 0x0043F500 - 0x0043F515 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F500(void)
{

loc_0043F500: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B348);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043F514u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F512u); } /* indirect call */
    }

loc_0043F514: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F520
 * Original: 0x0043F520 - 0x0043F531 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F520(void)
{

loc_0043F520: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043F530u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F52Du); } /* indirect call */
    }

loc_0043F530: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F540
 * Original: 0x0043F540 - 0x0043F56A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F540(void)
{

loc_0043F540: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B364;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043F559u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043F559: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5BD6);
    ecx = eax;
    PUSH32(esp, 0x0043F566u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043F566: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043F580
 * Original: 0x0043F580 - 0x0043F595 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F580(void)
{

loc_0043F580: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B368);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043F594u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F592u); } /* indirect call */
    }

loc_0043F594: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F5A0
 * Original: 0x0043F5A0 - 0x0043F5B1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F5A0(void)
{

loc_0043F5A0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043F5B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F5ADu); } /* indirect call */
    }

loc_0043F5B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F5C0
 * Original: 0x0043F5C0 - 0x0043F5EA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F5C0(void)
{

loc_0043F5C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B388;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043F5D9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043F5D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5427);
    ecx = eax;
    PUSH32(esp, 0x0043F5E6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043F5E6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043F600
 * Original: 0x0043F600 - 0x0043F615 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F600(void)
{

loc_0043F600: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B38C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043F614u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F612u); } /* indirect call */
    }

loc_0043F614: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F620
 * Original: 0x0043F620 - 0x0043F631 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F620(void)
{

loc_0043F620: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043F630u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F62Du); } /* indirect call */
    }

loc_0043F630: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F640
 * Original: 0x0043F640 - 0x0043F66A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F640(void)
{

loc_0043F640: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B3AC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043F659u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043F659: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4F27);
    ecx = eax;
    PUSH32(esp, 0x0043F666u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043F666: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043F680
 * Original: 0x0043F680 - 0x0043F695 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F680(void)
{

loc_0043F680: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B3B0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043F694u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F692u); } /* indirect call */
    }

loc_0043F694: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F6A0
 * Original: 0x0043F6A0 - 0x0043F6B1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F6A0(void)
{

loc_0043F6A0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043F6B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F6ADu); } /* indirect call */
    }

loc_0043F6B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F6C0
 * Original: 0x0043F6C0 - 0x0043F6EA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F6C0(void)
{

loc_0043F6C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B3D0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043F6D9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043F6D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C457F);
    ecx = eax;
    PUSH32(esp, 0x0043F6E6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043F6E6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043F700
 * Original: 0x0043F700 - 0x0043F715 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F700(void)
{

loc_0043F700: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B3D4);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043F714u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F712u); } /* indirect call */
    }

loc_0043F714: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F720
 * Original: 0x0043F720 - 0x0043F731 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F720(void)
{

loc_0043F720: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043F730u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F72Du); } /* indirect call */
    }

loc_0043F730: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F740
 * Original: 0x0043F740 - 0x0043F76A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F740(void)
{

loc_0043F740: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B3F4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043F759u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043F759: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5527);
    ecx = eax;
    PUSH32(esp, 0x0043F766u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043F766: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043F780
 * Original: 0x0043F780 - 0x0043F795 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F780(void)
{

loc_0043F780: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B3F8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043F794u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F792u); } /* indirect call */
    }

loc_0043F794: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F7A0
 * Original: 0x0043F7A0 - 0x0043F7B1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F7A0(void)
{

loc_0043F7A0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043F7B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F7ADu); } /* indirect call */
    }

loc_0043F7B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F7C0
 * Original: 0x0043F7C0 - 0x0043F7EA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F7C0(void)
{

loc_0043F7C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B420;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043F7D9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043F7D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5A40);
    ecx = eax;
    PUSH32(esp, 0x0043F7E6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043F7E6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043F800
 * Original: 0x0043F800 - 0x0043F815 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F800(void)
{

loc_0043F800: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B424);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043F814u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F812u); } /* indirect call */
    }

loc_0043F814: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F820
 * Original: 0x0043F820 - 0x0043F831 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F820(void)
{

loc_0043F820: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043F830u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F82Du); } /* indirect call */
    }

loc_0043F830: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F840
 * Original: 0x0043F840 - 0x0043F86A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F840(void)
{

loc_0043F840: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B444;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043F859u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043F859: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5D14);
    ecx = eax;
    PUSH32(esp, 0x0043F866u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043F866: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043F880
 * Original: 0x0043F880 - 0x0043F895 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F880(void)
{

loc_0043F880: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B448);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043F894u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F892u); } /* indirect call */
    }

loc_0043F894: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F8A0
 * Original: 0x0043F8A0 - 0x0043F8B1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F8A0(void)
{

loc_0043F8A0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043F8B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F8ADu); } /* indirect call */
    }

loc_0043F8B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F8C0
 * Original: 0x0043F8C0 - 0x0043F8EA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F8C0(void)
{

loc_0043F8C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B460;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043F8D9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043F8D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5C3A);
    ecx = eax;
    PUSH32(esp, 0x0043F8E6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043F8E6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043F900
 * Original: 0x0043F900 - 0x0043F915 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F900(void)
{

loc_0043F900: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B464);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043F914u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F912u); } /* indirect call */
    }

loc_0043F914: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F920
 * Original: 0x0043F920 - 0x0043F931 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F920(void)
{

loc_0043F920: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043F930u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F92Du); } /* indirect call */
    }

loc_0043F930: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F940
 * Original: 0x0043F940 - 0x0043F96A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F940(void)
{

loc_0043F940: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B47C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043F959u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043F959: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4A9C);
    ecx = eax;
    PUSH32(esp, 0x0043F966u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043F966: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043F980
 * Original: 0x0043F980 - 0x0043F995 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F980(void)
{

loc_0043F980: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B480);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043F994u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F992u); } /* indirect call */
    }

loc_0043F994: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F9A0
 * Original: 0x0043F9A0 - 0x0043F9B1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F9A0(void)
{

loc_0043F9A0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043F9B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043F9ADu); } /* indirect call */
    }

loc_0043F9B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043F9C0
 * Original: 0x0043F9C0 - 0x0043F9EA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043F9C0(void)
{

loc_0043F9C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B498;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043F9D9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043F9D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C58FE);
    ecx = eax;
    PUSH32(esp, 0x0043F9E6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043F9E6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043FA00
 * Original: 0x0043FA00 - 0x0043FA15 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FA00(void)
{

loc_0043FA00: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B49C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043FA14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043FA12u); } /* indirect call */
    }

loc_0043FA14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043FA20
 * Original: 0x0043FA20 - 0x0043FA31 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FA20(void)
{

loc_0043FA20: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043FA30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043FA2Du); } /* indirect call */
    }

loc_0043FA30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043FA40
 * Original: 0x0043FA40 - 0x0043FA6A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FA40(void)
{

loc_0043FA40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B4C8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043FA59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043FA59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C46E4);
    ecx = eax;
    PUSH32(esp, 0x0043FA66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043FA66: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043FA80
 * Original: 0x0043FA80 - 0x0043FA95 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FA80(void)
{

loc_0043FA80: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B4CC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043FA94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043FA92u); } /* indirect call */
    }

loc_0043FA94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043FAA0
 * Original: 0x0043FAA0 - 0x0043FAB1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FAA0(void)
{

loc_0043FAA0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043FAB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043FAADu); } /* indirect call */
    }

loc_0043FAB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043FAC0
 * Original: 0x0043FAC0 - 0x0043FAEA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FAC0(void)
{

loc_0043FAC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B4F4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043FAD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043FAD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4E78);
    ecx = eax;
    PUSH32(esp, 0x0043FAE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043FAE6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043FB00
 * Original: 0x0043FB00 - 0x0043FB15 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FB00(void)
{

loc_0043FB00: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B4F8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043FB14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043FB12u); } /* indirect call */
    }

loc_0043FB14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043FB20
 * Original: 0x0043FB20 - 0x0043FB31 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FB20(void)
{

loc_0043FB20: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043FB30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043FB2Du); } /* indirect call */
    }

loc_0043FB30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043FB40
 * Original: 0x0043FB40 - 0x0043FB6A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FB40(void)
{

loc_0043FB40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B520;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043FB59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043FB59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4DFA);
    ecx = eax;
    PUSH32(esp, 0x0043FB66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043FB66: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043FB80
 * Original: 0x0043FB80 - 0x0043FB95 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FB80(void)
{

loc_0043FB80: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B524);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043FB94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043FB92u); } /* indirect call */
    }

loc_0043FB94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043FBA0
 * Original: 0x0043FBA0 - 0x0043FBB1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FBA0(void)
{

loc_0043FBA0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043FBB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043FBADu); } /* indirect call */
    }

loc_0043FBB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043FBC0
 * Original: 0x0043FBC0 - 0x0043FBEA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FBC0(void)
{

loc_0043FBC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B54C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043FBD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043FBD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4D7C);
    ecx = eax;
    PUSH32(esp, 0x0043FBE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043FBE6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043FC00
 * Original: 0x0043FC00 - 0x0043FC15 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FC00(void)
{

loc_0043FC00: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B550);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043FC14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043FC12u); } /* indirect call */
    }

loc_0043FC14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043FC20
 * Original: 0x0043FC20 - 0x0043FC31 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FC20(void)
{

loc_0043FC20: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043FC30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043FC2Du); } /* indirect call */
    }

loc_0043FC30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043FC40
 * Original: 0x0043FC40 - 0x0043FC6A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FC40(void)
{

loc_0043FC40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B584;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043FC59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043FC59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C54C2);
    ecx = eax;
    PUSH32(esp, 0x0043FC66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043FC66: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043FC80
 * Original: 0x0043FC80 - 0x0043FC95 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FC80(void)
{

loc_0043FC80: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B588);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043FC94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043FC92u); } /* indirect call */
    }

loc_0043FC94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043FCA0
 * Original: 0x0043FCA0 - 0x0043FCB1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FCA0(void)
{

loc_0043FCA0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043FCB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043FCADu); } /* indirect call */
    }

loc_0043FCB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043FCC0
 * Original: 0x0043FCC0 - 0x0043FCEA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FCC0(void)
{

loc_0043FCC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B5C0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043FCD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043FCD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C56D8);
    ecx = eax;
    PUSH32(esp, 0x0043FCE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043FCE6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043FD00
 * Original: 0x0043FD00 - 0x0043FD15 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FD00(void)
{

loc_0043FD00: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B5C4);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043FD14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043FD12u); } /* indirect call */
    }

loc_0043FD14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043FD20
 * Original: 0x0043FD20 - 0x0043FD31 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FD20(void)
{

loc_0043FD20: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043FD30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043FD2Du); } /* indirect call */
    }

loc_0043FD30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043FD40
 * Original: 0x0043FD40 - 0x0043FD6A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FD40(void)
{

loc_0043FD40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B5E4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043FD59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043FD59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5AEA);
    ecx = eax;
    PUSH32(esp, 0x0043FD66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043FD66: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043FD80
 * Original: 0x0043FD80 - 0x0043FD95 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FD80(void)
{

loc_0043FD80: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B5E8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043FD94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043FD92u); } /* indirect call */
    }

loc_0043FD94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043FDA0
 * Original: 0x0043FDA0 - 0x0043FDB1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FDA0(void)
{

loc_0043FDA0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043FDB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043FDADu); } /* indirect call */
    }

loc_0043FDB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043FDC0
 * Original: 0x0043FDC0 - 0x0043FDEA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FDC0(void)
{

loc_0043FDC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B604;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043FDD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043FDD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C49A4);
    ecx = eax;
    PUSH32(esp, 0x0043FDE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043FDE6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043FE00
 * Original: 0x0043FE00 - 0x0043FE15 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FE00(void)
{

loc_0043FE00: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B608);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043FE14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043FE12u); } /* indirect call */
    }

loc_0043FE14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043FE20
 * Original: 0x0043FE20 - 0x0043FE31 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FE20(void)
{

loc_0043FE20: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043FE30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043FE2Du); } /* indirect call */
    }

loc_0043FE30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043FE40
 * Original: 0x0043FE40 - 0x0043FE6A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FE40(void)
{

loc_0043FE40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B630;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043FE59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043FE59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4200);
    ecx = eax;
    PUSH32(esp, 0x0043FE66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043FE66: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043FE80
 * Original: 0x0043FE80 - 0x0043FE95 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FE80(void)
{

loc_0043FE80: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B634);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043FE94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043FE92u); } /* indirect call */
    }

loc_0043FE94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043FEA0
 * Original: 0x0043FEA0 - 0x0043FEB1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FEA0(void)
{

loc_0043FEA0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043FEB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043FEADu); } /* indirect call */
    }

loc_0043FEB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043FEC0
 * Original: 0x0043FEC0 - 0x0043FEEA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FEC0(void)
{

loc_0043FEC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B658;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043FED9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043FED9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5221);
    ecx = eax;
    PUSH32(esp, 0x0043FEE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043FEE6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043FF00
 * Original: 0x0043FF00 - 0x0043FF15 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FF00(void)
{

loc_0043FF00: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B65C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043FF14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043FF12u); } /* indirect call */
    }

loc_0043FF14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043FF20
 * Original: 0x0043FF20 - 0x0043FF31 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FF20(void)
{

loc_0043FF20: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043FF30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043FF2Du); } /* indirect call */
    }

loc_0043FF30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043FF40
 * Original: 0x0043FF40 - 0x0043FF6A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FF40(void)
{

loc_0043FF40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B67C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043FF59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043FF59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4CD2);
    ecx = eax;
    PUSH32(esp, 0x0043FF66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043FF66: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0043FF80
 * Original: 0x0043FF80 - 0x0043FF95 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FF80(void)
{

loc_0043FF80: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B680);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043FF94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043FF92u); } /* indirect call */
    }

loc_0043FF94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043FFA0
 * Original: 0x0043FFA0 - 0x0043FFB1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FFA0(void)
{

loc_0043FFA0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043FFB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043FFADu); } /* indirect call */
    }

loc_0043FFB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0043FFC0
 * Original: 0x0043FFC0 - 0x0043FFEA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043FFC0(void)
{

loc_0043FFC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B6A8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x0043FFD9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_0043FFD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C52D0);
    ecx = eax;
    PUSH32(esp, 0x0043FFE6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043FFE6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440000
 * Original: 0x00440000 - 0x00440015 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440000(void)
{

loc_00440000: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B6AC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00440014u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440012u); } /* indirect call */
    }

loc_00440014: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440020
 * Original: 0x00440020 - 0x00440031 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440020(void)
{

loc_00440020: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440030u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044002Du); } /* indirect call */
    }

loc_00440030: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440040
 * Original: 0x00440040 - 0x0044006A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440040(void)
{

loc_00440040: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B6D4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00440059u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00440059: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5829);
    ecx = eax;
    PUSH32(esp, 0x00440066u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00440066: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440080
 * Original: 0x00440080 - 0x00440095 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440080(void)
{

loc_00440080: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B6D8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00440094u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440092u); } /* indirect call */
    }

loc_00440094: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004400A0
 * Original: 0x004400A0 - 0x004400B1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004400A0(void)
{

loc_004400A0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004400B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004400ADu); } /* indirect call */
    }

loc_004400B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004400C0
 * Original: 0x004400C0 - 0x004400EA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004400C0(void)
{

loc_004400C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B700;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004400D9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004400D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C54AD);
    ecx = eax;
    PUSH32(esp, 0x004400E6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004400E6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440100
 * Original: 0x00440100 - 0x00440115 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440100(void)
{

loc_00440100: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B704);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00440114u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440112u); } /* indirect call */
    }

loc_00440114: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440120
 * Original: 0x00440120 - 0x00440131 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440120(void)
{

loc_00440120: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440130u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044012Du); } /* indirect call */
    }

loc_00440130: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440140
 * Original: 0x00440140 - 0x0044016A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440140(void)
{

loc_00440140: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B72C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00440159u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00440159: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5AEF);
    ecx = eax;
    PUSH32(esp, 0x00440166u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00440166: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440180
 * Original: 0x00440180 - 0x00440195 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440180(void)
{

loc_00440180: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B730);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00440194u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440192u); } /* indirect call */
    }

loc_00440194: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004401A0
 * Original: 0x004401A0 - 0x004401B1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004401A0(void)
{

loc_004401A0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004401B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004401ADu); } /* indirect call */
    }

loc_004401B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004401C0
 * Original: 0x004401C0 - 0x004401EA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004401C0(void)
{

loc_004401C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B758;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004401D9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004401D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4131);
    ecx = eax;
    PUSH32(esp, 0x004401E6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004401E6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440200
 * Original: 0x00440200 - 0x00440215 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440200(void)
{

loc_00440200: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B75C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00440214u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440212u); } /* indirect call */
    }

loc_00440214: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440220
 * Original: 0x00440220 - 0x00440231 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440220(void)
{

loc_00440220: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440230u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044022Du); } /* indirect call */
    }

loc_00440230: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440240
 * Original: 0x00440240 - 0x0044026A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440240(void)
{

loc_00440240: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B784;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00440259u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00440259: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C489A);
    ecx = eax;
    PUSH32(esp, 0x00440266u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00440266: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440280
 * Original: 0x00440280 - 0x00440295 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440280(void)
{

loc_00440280: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B788);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00440294u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440292u); } /* indirect call */
    }

loc_00440294: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004402A0
 * Original: 0x004402A0 - 0x004402B1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004402A0(void)
{

loc_004402A0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004402B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004402ADu); } /* indirect call */
    }

loc_004402B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004402C0
 * Original: 0x004402C0 - 0x004402EA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004402C0(void)
{

loc_004402C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B7BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004402D9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004402D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4F33);
    ecx = eax;
    PUSH32(esp, 0x004402E6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004402E6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440300
 * Original: 0x00440300 - 0x00440315 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440300(void)
{

loc_00440300: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B7C0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00440314u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440312u); } /* indirect call */
    }

loc_00440314: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440320
 * Original: 0x00440320 - 0x00440331 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440320(void)
{

loc_00440320: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440330u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044032Du); } /* indirect call */
    }

loc_00440330: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440340
 * Original: 0x00440340 - 0x0044036A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440340(void)
{

loc_00440340: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B7F0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00440359u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00440359: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5143);
    ecx = eax;
    PUSH32(esp, 0x00440366u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00440366: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440380
 * Original: 0x00440380 - 0x00440395 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440380(void)
{

loc_00440380: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B7F4);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00440394u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440392u); } /* indirect call */
    }

loc_00440394: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004403A0
 * Original: 0x004403A0 - 0x004403B1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004403A0(void)
{

loc_004403A0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004403B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004403ADu); } /* indirect call */
    }

loc_004403B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004403C0
 * Original: 0x004403C0 - 0x004403EA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004403C0(void)
{

loc_004403C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B830;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004403D9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004403D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5DA5);
    ecx = eax;
    PUSH32(esp, 0x004403E6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004403E6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440400
 * Original: 0x00440400 - 0x00440415 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440400(void)
{

loc_00440400: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B834);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00440414u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440412u); } /* indirect call */
    }

loc_00440414: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440420
 * Original: 0x00440420 - 0x00440431 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440420(void)
{

loc_00440420: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440430u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044042Du); } /* indirect call */
    }

loc_00440430: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440440
 * Original: 0x00440440 - 0x0044046A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440440(void)
{

loc_00440440: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B874;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00440459u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00440459: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C442B);
    ecx = eax;
    PUSH32(esp, 0x00440466u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00440466: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440480
 * Original: 0x00440480 - 0x00440495 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440480(void)
{

loc_00440480: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B878);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00440494u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440492u); } /* indirect call */
    }

loc_00440494: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004404A0
 * Original: 0x004404A0 - 0x004404B1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004404A0(void)
{

loc_004404A0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004404B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004404ADu); } /* indirect call */
    }

loc_004404B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004404C0
 * Original: 0x004404C0 - 0x004404EA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004404C0(void)
{

loc_004404C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B898;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004404D9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004404D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C51E5);
    ecx = eax;
    PUSH32(esp, 0x004404E6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004404E6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440500
 * Original: 0x00440500 - 0x00440515 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440500(void)
{

loc_00440500: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B89C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00440514u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440512u); } /* indirect call */
    }

loc_00440514: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440520
 * Original: 0x00440520 - 0x00440531 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440520(void)
{

loc_00440520: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440530u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044052Du); } /* indirect call */
    }

loc_00440530: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440540
 * Original: 0x00440540 - 0x0044056A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440540(void)
{

loc_00440540: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B8BC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00440559u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00440559: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4B3D);
    ecx = eax;
    PUSH32(esp, 0x00440566u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00440566: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440580
 * Original: 0x00440580 - 0x00440595 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440580(void)
{

loc_00440580: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B8C0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00440594u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440592u); } /* indirect call */
    }

loc_00440594: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004405A0
 * Original: 0x004405A0 - 0x004405B1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004405A0(void)
{

loc_004405A0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004405B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004405ADu); } /* indirect call */
    }

loc_004405B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004405C0
 * Original: 0x004405C0 - 0x004405EA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004405C0(void)
{

loc_004405C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B8E8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x004405D9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004405D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C4AB0);
    ecx = eax;
    PUSH32(esp, 0x004405E6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004405E6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440600
 * Original: 0x00440600 - 0x00440615 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440600(void)
{

loc_00440600: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B8EC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00440614u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440612u); } /* indirect call */
    }

loc_00440614: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440620
 * Original: 0x00440620 - 0x00440631 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440620(void)
{

loc_00440620: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00440630u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044062Du); } /* indirect call */
    }

loc_00440630: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00440640
 * Original: 0x00440640 - 0x0044066A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440640(void)
{

loc_00440640: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83B914;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x4E2);
    PUSH32(esp, 0x00440659u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00440659: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x9C5D46);
    ecx = eax;
    PUSH32(esp, 0x00440666u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00440666: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00440680
 * Original: 0x00440680 - 0x00440695 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00440680(void)
{

loc_00440680: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83B918);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00440694u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00440692u); } /* indirect call */
    }

loc_00440694: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004406A0
 * Original: 0x004406A0 - 0x004406B1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004406A0(void)
{

loc_004406A0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004406B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004406ADu); } /* indirect call */
    }

loc_004406B0: ;
    esp += 4; return; /* ret */

}
