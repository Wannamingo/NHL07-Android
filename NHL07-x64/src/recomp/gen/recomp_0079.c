/**
 * nhl_07_recomp - Recompiled code chunk 79
 * Functions: 250 (0x0006F140 - 0x00077810)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0006F140
 * Original: 0x0006F140 - 0x0006F146 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F140(void)
{

loc_0006F140: ;
    eax = MEM32(0x8EAC90);
    esp += 4; return; /* ret */

}

/**
 * sub_0006F150
 * Original: 0x0006F150 - 0x0006F170 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F150(void)
{

loc_0006F150: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    esi = ecx;
    PUSH32(esp, 0x0006F15Cu); RECOMP_ABI_CALL(0x000167D5u, sub_000167D5); /* call 0x000167D5 */

loc_0006F15C: ;
    MEM32(esi) = 0x7B3540;
    MEM32(0x8EAC94) = esi;
    MEM8(esi + 0x1C) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006F180
 * Original: 0x0006F180 - 0x0006F185 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006F180: ;
    g_seh_ebp = ebp; sub_00027F2B(); return; /* tail jmp 0x00027F2B */

}

/**
 * sub_0006F190
 * Original: 0x0006F190 - 0x0006F1B4 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F190(void)
{

loc_0006F190: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0006F1A4u); RECOMP_ABI_CALL(0x000167D5u, sub_000167D5); /* call 0x000167D5 */

loc_0006F1A4: ;
    MEM32(esi) = 0x7B3540;
    MEM8(esi + 0x1C) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006F1C0
 * Original: 0x0006F1C0 - 0x0006F1DC (28 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F1C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006F1C0: ;
    SET_LO8(eax, MEM8(ecx + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(ecx) = 0x7B3540;
    if (CMP_EQ(_fa, _fb)) goto loc_0006F1D7; /* je: equal / zero */

loc_0006F1CD: ;
    MEM32(0x8EAC94) = 0;

loc_0006F1D7: ;
    g_seh_ebp = ebp; sub_0001D251(); return; /* tail jmp 0x0001D251 */

}

/**
 * sub_0006F1F0
 * Original: 0x0006F1F0 - 0x0006F2A4 (180 bytes, 75 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F1F0(void)
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

loc_0006F1F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0xC);
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 5 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x4C);
    ebp = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0006F225; /* jne: not equal / not zero */

loc_0006F206: ;
    ecx = edi;
    PUSH32(esp, 0x0006F20Du); RECOMP_ABI_CALL(0x00032813u, sub_00032813); /* call 0x00032813 */

loc_0006F20D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006F225; /* je: equal / zero */

loc_0006F211: ;
    eax = MEM32(0x8EAC9C);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0006F21Eu); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_0006F21E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0006F225: ;
    ecx = edi;
    PUSH32(esp, 0x0006F22Cu); RECOMP_ABI_CALL(0x00032813u, sub_00032813); /* call 0x00032813 */

loc_0006F22C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006F290; /* jne: not equal / not zero */

loc_0006F230: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x40); /* comiss */
    if ((_fca >= _fcb)) goto loc_0006F290; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(edi + 0x40)) */

loc_0006F239: ;
    SET_LO8(eax, MEM8(edi + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006F24F; /* je: equal / zero */

loc_0006F240: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0006F248u); RECOMP_ABI_CALL(0x00027F2Bu, sub_00027F2B); /* call 0x00027F2B */

loc_0006F248: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0006F24F: ;
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x42B40000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006F25Fu); RECOMP_ABI_CALL(0x00012379u, sub_00012379); /* call 0x00012379 */

loc_0006F25F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006F27B; /* je: equal / zero */

loc_0006F266: ;
    ecx = MEM32(0x8EACC0);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0006F274u); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_0006F274: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0006F27B: ;
    edx = MEM32(0x8EACC8);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0006F289u); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_0006F289: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0006F290: ;
    eax = MEM32(0x8EAC90);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0006F29Du); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_0006F29D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006F2E0
 * Original: 0x0006F2E0 - 0x0006F3CB (235 bytes, 66 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F2E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0006F2E0: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006F361; /* je: equal / zero */

loc_0006F2ED: ;
    ecx = MEM32(0x8EFCB8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006F341; /* je: equal / zero */

loc_0006F2F7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006F341; /* je: equal / zero */

loc_0006F2FB: ;
    edx = MEM32(ecx + 0xF0);
    xmm1 = XMM_SCALAR(MEMF(edx + 0x1C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B3448)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F341; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006F313: ;
    edx = MEM32(eax + 0xF0);
    xmm1 = XMM_SCALAR(MEMF(edx + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F341; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006F323: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006F32Fu); RECOMP_ABI_CALL(0x00012BCBu, sub_00012BCB); /* call 0x00012BCB */

loc_0006F32F: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0006F341: ;
    SET_LO8(ecx, MEM8(eax + 0x64));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = 0x8F95B0;
    if (CMP_NE(_fa, _fb)) goto loc_0006F352; /* jne: not equal / not zero */

loc_0006F34D: ;
    eax = 0x8F95EC;

loc_0006F352: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0006F361: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x8F95EC); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x896DD8)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F383; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006F37E: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0006F3C0; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006F383: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F397; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006F388: ;
    eax = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0006F397: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F3B2; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006F3A0: ;
    eax = MEM32(esp + 4);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0006F3B2: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */

loc_0006F3C0: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006F410
 * Original: 0x0006F410 - 0x0006F41A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F410(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006F410: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0x24)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006F420
 * Original: 0x0006F420 - 0x0006F485 (101 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F420(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0006F420: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 8); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB7C8); /* mulss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x896DD8)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F443; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006F43E: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0006F47C; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006F443: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F455; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006F448: ;
    eax = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0006F455: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F46E; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006F45E: ;
    eax = MEM32(esp + 4);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0006F46E: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */

loc_0006F47C: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0006F4A0
 * Original: 0x0006F4A0 - 0x0006F4D7 (55 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F4A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006F4A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi) = 0x7B3540;
    if (CMP_EQ(_fa, _fb)) goto loc_0006F4BA; /* je: equal / zero */

loc_0006F4B0: ;
    MEM32(0x8EAC94) = 0;

loc_0006F4BA: ;
    ecx = esi;
    PUSH32(esp, 0x0006F4C1u); RECOMP_ABI_CALL(0x0001D251u, sub_0001D251); /* call 0x0001D251 */

loc_0006F4C1: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006F4D1; /* je: equal / zero */

loc_0006F4C8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006F4CEu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0006F4CE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006F4D1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006F4F0
 * Original: 0x0006F4F0 - 0x0006F7B6 (710 bytes, 211 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F4F0(void)
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

loc_0006F4F0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    esi = MEM32(edi + 0xC);
    eax = MEM32(esi + 0x4C);
    ebp = ecx;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x60)) >> 32) & 1);
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = ebp;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006F52Du); RECOMP_ABI_CALL(0x0001B2E9u, sub_0001B2E9); /* call 0x0001B2E9 */

loc_0006F52D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x896DD8)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F54E; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006F549: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0006F56A; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006F54E: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F559; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006F553: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0006F56A;

loc_0006F559: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0006F56A; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006F566: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_0006F56A: ;
    ebx = MEM32(0x8EFCB8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0006F6F9; /* je: equal / zero */

loc_0006F57E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0006F6F9; /* je: equal / zero */

loc_0006F586: ;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006F595u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_0006F595: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x8F9608); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F6F1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x8F9608)) */

loc_0006F5A9: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006F5B5u); RECOMP_ABI_CALL(0x00012BCBu, sub_00012BCB); /* call 0x00012BCB */

loc_0006F5B5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x896DD8)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F5D9; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006F5D4: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0006F5F5; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006F5D9: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F5E4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006F5DE: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0006F5F5;

loc_0006F5E4: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0006F5F5; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006F5F1: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_0006F5F5: ;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006F60Au); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_0006F60A: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ebx = eax;
    PUSH32(esp, 0x0006F61Bu); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_0006F61B: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x896DD8)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F63F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006F63A: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0006F65B; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006F63F: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F64A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006F644: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0006F65B;

loc_0006F64A: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0006F65B; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006F657: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_0006F65B: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x8F95EC)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x8F95B0)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x7B309C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0006F6A0; /* jp: parity */

loc_0006F682: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F691; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_0006F687: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    eax = 0x8F9608;
    if ((_fca > _fcb)) goto loc_0006F696; /* ja: above (unsigned >) (xmm4.f[0] vs xmm1.f[0]) */

loc_0006F691: ;
    eax = 0x8F9600;

loc_0006F696: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */

loc_0006F6A0: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F6B7; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_0006F6AB: ;
    _fca = xmm4.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F6B7; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm2.f[0]) */

loc_0006F6B0: ;
    ecx = 1;
    goto loc_0006F6B9;

loc_0006F6B7: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0006F6B9: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F6CA; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_0006F6BE: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F6CA; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_0006F6C3: ;
    eax = 1;
    goto loc_0006F6CC;

loc_0006F6CA: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0006F6CC: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0006F6F1; /* je: equal / zero */

loc_0006F6D0: ;
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F6F1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm5.f[0]) */

loc_0006F6D5: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006F6E4u); RECOMP_ABI_CALL(0x0002F109u, sub_0002F109); /* call 0x0002F109 */

loc_0006F6E4: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */

loc_0006F6F1: ;
    xmm1 = XMM_SCALAR(MEMF(0x896DD8)); /* movss */

loc_0006F6F9: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B3580)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0006F70A; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006F706: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_0006F70A: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006F724u); RECOMP_ABI_CALL(0x0002AAFFu, sub_0002AAFF); /* call 0x0002AAFF */

loc_0006F724: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(0x896DD8)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F746; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0006F741: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0006F762; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_0006F746: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F751; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0006F74B: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    goto loc_0006F762;

loc_0006F751: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0006F762; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0006F75E: ;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */

loc_0006F762: ;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    MEMF(eax) = xmm0.f[0]; /* movss */
    edx = MEM32(edi + 0x1C);
    eax = esp;
    PUSH32(esp, edi);
    ecx = ebp;
    MEM32(eax) = edx;
    PUSH32(esp, 0x0006F77Bu); RECOMP_ABI_CALL(0x0001EE94u, sub_0001EE94); /* call 0x0001EE94 */

loc_0006F77B: ;
    eax = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B30B8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F7AC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B30B8)) */

loc_0006F78D: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0006F795u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006F792u); } /* indirect call */
    }

loc_0006F795: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7B3464)); /* fmul dword ptr [0x7b3464] */
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0006F7ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006F7A9u); } /* indirect call */
    }

loc_0006F7AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_0006F870
 * Original: 0x0006F870 - 0x0006F9AC (316 bytes, 100 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0006F870: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006F890u); RECOMP_ABI_CALL(0x0001B2E9u, sub_0001B2E9); /* call 0x0001B2E9 */

loc_0006F890: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(0x896DD8)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F8B8; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0006F8AB: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F8B8; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0006F8B0: ;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    goto loc_0006F8E0;

loc_0006F8B8: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F8C6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0006F8BD: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm1 = xmm0; /* movaps */
    goto loc_0006F8DA;

loc_0006F8C6: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0006F8DA; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0006F8D6: ;
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */

loc_0006F8DA: ;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */

loc_0006F8E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B3584)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0006F8F1; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_0006F8ED: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_0006F8F1: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006F906u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_0006F906: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F94C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0xC)) */

loc_0006F914: ;
    _fa = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x28), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006F928; /* jne: not equal / not zero */

loc_0006F91A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x3F7;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0006F928: ;
    SET_LO8(ebx, MEM8(edi + 0x30));
    SET_LO8(ecx, MEM8(0x8E93B0));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0x291;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x123) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x123;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0006F94C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x8F95B0); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F96F; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x8F95B0)) */

loc_0006F95B: ;
    xmm1 = XMM_SCALAR(MEMF(0x7B309C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006F96F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006F968: ;
    ebx = 1;
    goto loc_0006F971;

loc_0006F96F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0006F971: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0006F978u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006F975u); } /* indirect call */
    }

loc_0006F978: ;
    ecx = MEM32(edi + 0x28);
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006F991; /* je: equal / zero */

loc_0006F982: ;
    SET_LO8(ecx, MEM8(0x8E93B0));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 0x30)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(edi + 0x30) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006F991; /* jne: not equal / not zero */

loc_0006F98D: ;
    SET_LO8(ecx, 1);
    goto loc_0006F993;

loc_0006F991: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0006F993: ;
    eax = ZX8(LO8(eax));
    edx = ZX8(LO8(ecx));
    POP32(esp, edi);
    ecx = eax + edx * 2;
    eax = MEM32(ecx * 4 + 0x7B3468);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006FA00
 * Original: 0x0006FA00 - 0x0006FA04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FA00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006FA00: ;
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006FA10
 * Original: 0x0006FA10 - 0x0006FA2C (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FA10(void)
{

loc_0006FA10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x0006FA1Cu); RECOMP_ABI_CALL(0x00035185u, sub_00035185); /* call 0x00035185 */

loc_0006FA1C: ;
    MEM32(esi) = 0x7B3A08;
    MEM32(0x8EAC98) = esi;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006FA40
 * Original: 0x0006FA40 - 0x0006FA55 (21 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006FA40: ;
    MEM32(ecx) = 0x7B3A08;
    MEM32(0x8EAC98) = 0;
    g_seh_ebp = ebp; sub_0001AA24(); return; /* tail jmp 0x0001AA24 */

}

/**
 * sub_0006FA60
 * Original: 0x0006FA60 - 0x0006FB29 (201 bytes, 76 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0006FA60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    ebx = MEM32(edi + 0x4C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0006FA78u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0006FA78: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006FB23; /* je: equal / zero */

loc_0006FA80: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0x40); /* comiss */
    if ((_fca >= _fcb)) goto loc_0006FB16; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(ebx + 0x40)) */

loc_0006FA8D: ;
    ecx = ebx;
    PUSH32(esp, 0x0006FA94u); RECOMP_ABI_CALL(0x00032813u, sub_00032813); /* call 0x00032813 */

loc_0006FA94: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FB16; /* jne: not equal / not zero */

loc_0006FA98: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006FA9Eu); RECOMP_ABI_CALL(0x00016BBDu, sub_00016BBD); /* call 0x00016BBD */

loc_0006FA9E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, MEM8(ebx + 0x4C));
    if (CMP_EQ(_fa, _fb)) goto loc_0006FAC0; /* je: equal / zero */

loc_0006FAA8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006FB02; /* je: equal / zero */

loc_0006FAAC: ;
    ecx = MEM32(0x8EAC98);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0006FABAu); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_0006FABA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0006FAC0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006FAD7; /* je: equal / zero */

loc_0006FAC4: ;
    eax = MEM32(0x8EAC94);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0006FAD1u); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_0006FAD1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0006FAD7: ;
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x42B40000);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006FAE7u); RECOMP_ABI_CALL(0x00012379u, sub_00012379); /* call 0x00012379 */

loc_0006FAE7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006FB02; /* je: equal / zero */

loc_0006FAEE: ;
    ecx = MEM32(0x8EACC0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0006FAFCu); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_0006FAFC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0006FB02: ;
    edx = MEM32(0x8EACC8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0006FB10u); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_0006FB10: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0006FB16: ;
    eax = MEM32(0x8EAC90);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0006FB23u); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_0006FB23: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006FB60
 * Original: 0x0006FB60 - 0x0006FB87 (39 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006FB60: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006FB7F; /* je: equal / zero */

loc_0006FB6D: ;
    SET_LO8(edx, MEM8(eax + 0x30));
    SET_LO8(ecx, MEM8(0x8E93B0));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(edx) (8-bit) */
    eax = 0x3B4;
    if (CMP_EQ(_fa, _fb)) goto loc_0006FB84; /* je: equal / zero */

loc_0006FB7F: ;
    eax = 0x11C;

loc_0006FB84: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006FB90
 * Original: 0x0006FB90 - 0x0006FBBE (46 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006FB90: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7B3A08;
    MEM32(0x8EAC98) = 0;
    PUSH32(esp, 0x0006FBA8u); RECOMP_ABI_CALL(0x0001AA24u, sub_0001AA24); /* call 0x0001AA24 */

loc_0006FBA8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006FBB8; /* je: equal / zero */

loc_0006FBAF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006FBB5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0006FBB5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006FBB8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006FBD0
 * Original: 0x0006FBD0 - 0x0006FBEC (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FBD0(void)
{

loc_0006FBD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x20);
    esi = ecx;
    PUSH32(esp, 0x0006FBDCu); RECOMP_ABI_CALL(0x000167D5u, sub_000167D5); /* call 0x000167D5 */

loc_0006FBDC: ;
    MEM32(esi) = 0x7B3EC8;
    MEM32(0x8EAC9C) = esi;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006FC00
 * Original: 0x0006FC00 - 0x0006FC05 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FC00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006FC00: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006FC10
 * Original: 0x0006FC10 - 0x0006FC25 (21 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FC10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006FC10: ;
    MEM32(ecx) = 0x7B3EC8;
    MEM32(0x8EAC9C) = 0;
    g_seh_ebp = ebp; sub_0001D251(); return; /* tail jmp 0x0001D251 */

}

/**
 * sub_0006FC30
 * Original: 0x0006FC30 - 0x0006FCB4 (132 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0006FC30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x4C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006FC42u); RECOMP_ABI_CALL(0x00016BBDu, sub_00016BBD); /* call 0x00016BBD */

loc_0006FC42: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006FC8F; /* je: equal / zero */

loc_0006FC49: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x40); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006FC65; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(edi + 0x40)) */

loc_0006FC52: ;
    ecx = MEM32(0x8EACA4);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0006FC60u); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_0006FC60: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0006FC65: ;
    SET_LO8(eax, MEM8(edi + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0006FC7F; /* je: equal / zero */

loc_0006FC6E: ;
    edx = MEM32(0x8EAC98);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006FC7Au); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_0006FC7A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0006FC7F: ;
    eax = MEM32(0x8EACC8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006FC8Au); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_0006FC8A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0006FC8F: ;
    SET_LO8(eax, MEM8(edi + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006FCAF; /* je: equal / zero */

loc_0006FC96: ;
    ecx = edi;
    PUSH32(esp, 0x0006FC9Du); RECOMP_ABI_CALL(0x00032813u, sub_00032813); /* call 0x00032813 */

loc_0006FC9D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FCAF; /* jne: not equal / not zero */

loc_0006FCA1: ;
    ecx = MEM32(0x8EAC94);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0006FCAFu); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_0006FCAF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006FCE0
 * Original: 0x0006FCE0 - 0x0006FDD0 (240 bytes, 81 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FCE0(void)
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

loc_0006FCE0: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ebx = ecx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006FD02u); RECOMP_ABI_CALL(0x000352F2u, sub_000352F2); /* call 0x000352F2 */

loc_0006FD02: ;
    edi = MEM32(esi + 0x20);
    PUSH32(esp, 0x8F9610);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006FD19u); RECOMP_ABI_CALL(0x0002AAFFu, sub_0002AAFF); /* call 0x0002AAFF */

loc_0006FD19: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x896E40)); /* movss */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(edi + 0x60) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006FD3F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006FD3A: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0006FD6A; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006FD3F: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006FD4A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006FD44: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0006FD6A;

loc_0006FD4A: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006FD5C; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006FD53: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_0006FD6A;

loc_0006FD5C: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */

loc_0006FD6A: ;
    MEMF(edi + 0x60) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0006FD77u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006FD74u); } /* indirect call */
    }

loc_0006FD77: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0006FD83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006FD80u); } /* indirect call */
    }

loc_0006FD83: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x7AA840)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_0006FDA5; /* jb: below (unsigned <) */

loc_0006FD97: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_0006FDA5: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ebx);
    edi = MEM32(esi + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0006FDB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006FDB2u); } /* indirect call */
    }

loc_0006FDB5: ;
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0006FDC0u); RECOMP_ABI_CALL(0x000200DCu, sub_000200DC); /* call 0x000200DC */

loc_0006FDC0: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0006FDC8u); RECOMP_ABI_CALL(0x000315E9u, sub_000315E9); /* call 0x000315E9 */

loc_0006FDC8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006FE10
 * Original: 0x0006FE10 - 0x0006FE45 (53 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FE10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006FE10: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006FE25; /* jne: not equal / not zero */

loc_0006FE1D: ;
    eax = 0x3FA;
    esp += 8; return; /* ret 4 */

loc_0006FE25: ;
    SET_LO8(edx, MEM8(0x8E93B0));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 0x30)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 0x30) (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x29B;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x11A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x11A;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006FE60
 * Original: 0x0006FE60 - 0x0006FE73 (19 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FE60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006FE60: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x20);
    fp_push(MEMF(ecx + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 8)); /* fdiv dword ptr [esp + 8] */
    fp_top() = -fp_top(); /* fchs */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006FE80
 * Original: 0x0006FE80 - 0x0006FE85 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FE80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006FE80: ;
    g_seh_ebp = ebp; sub_00021A90(); return; /* tail jmp 0x00021A90 */

}

/**
 * sub_0006FE90
 * Original: 0x0006FE90 - 0x0006FEBE (46 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006FE90: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7B3EC8;
    MEM32(0x8EAC9C) = 0;
    PUSH32(esp, 0x0006FEA8u); RECOMP_ABI_CALL(0x0001D251u, sub_0001D251); /* call 0x0001D251 */

loc_0006FEA8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006FEB8; /* je: equal / zero */

loc_0006FEAF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006FEB5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0006FEB5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006FEB8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006FED0
 * Original: 0x0006FED0 - 0x0006FEDB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FED0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006FED0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7B43AC)); /* fmul dword ptr [0x7b43ac] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006FEE0
 * Original: 0x0006FEE0 - 0x0006FEE9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FEE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006FEE0: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7B43AC)); /* fmul dword ptr [0x7b43ac] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006FEF0
 * Original: 0x0006FEF0 - 0x0006FEFC (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FEF0(void)
{

loc_0006FEF0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x60) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006FF00
 * Original: 0x0006FF00 - 0x0006FF08 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FF00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006FF00: ;
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x48)); return; /* indirect tail jmp */

}

/**
 * sub_0006FF10
 * Original: 0x0006FF10 - 0x0006FF2C (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FF10(void)
{

loc_0006FF10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    esi = ecx;
    PUSH32(esp, 0x0006FF1Cu); RECOMP_ABI_CALL(0x000167D5u, sub_000167D5); /* call 0x000167D5 */

loc_0006FF1C: ;
    MEM32(esi) = 0x7B43B0;
    MEM32(0x8EACA0) = esi;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006FF40
 * Original: 0x0006FF40 - 0x0006FF45 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FF40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006FF40: ;
    g_seh_ebp = ebp; sub_00027F2B(); return; /* tail jmp 0x00027F2B */

}

/**
 * sub_0006FF50
 * Original: 0x0006FF50 - 0x0006FF65 (21 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FF50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006FF50: ;
    MEM32(ecx) = 0x7B43B0;
    MEM32(0x8EACA0) = 0;
    g_seh_ebp = ebp; sub_0001D251(); return; /* tail jmp 0x0001D251 */

}

/**
 * sub_0006FF70
 * Original: 0x0006FF70 - 0x0006FF75 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FF70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006FF70: ;
    g_seh_ebp = ebp; sub_00021A90(); return; /* tail jmp 0x00021A90 */

}

/**
 * sub_0006FF80
 * Original: 0x0006FF80 - 0x0006FFA7 (39 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006FF80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0006FF92u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0006FF92: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006FFA3; /* je: equal / zero */

loc_0006FF96: ;
    eax = MEM32(0x8EACA4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0006FFA3u); RECOMP_ABI_CALL(0x00027EEAu, sub_00027EEA); /* call 0x00027EEA */

loc_0006FFA3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006FFB0
 * Original: 0x0006FFB0 - 0x00070185 (469 bytes, 143 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FFB0(void)
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

loc_0006FFB0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x20);
    ebx = ecx;
    ecx = edi;
    PUSH32(esp, 0x0006FFCAu); RECOMP_ABI_CALL(0x00029EF2u, sub_00029EF2); /* call 0x00029EF2 */

loc_0006FFCA: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0006FFD1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006FFCEu); } /* indirect call */
    }

loc_0006FFD1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006FFE4; /* je: equal / zero */

loc_0006FFD5: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0006FFDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006FFDAu); } /* indirect call */
    }

loc_0006FFDD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3B6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006FFFE; /* je: equal / zero */

loc_0006FFE4: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x0006FFEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006FFE8u); } /* indirect call */
    }

loc_0006FFEB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070002; /* je: equal / zero */

loc_0006FFEF: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0006FFF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006FFF4u); } /* indirect call */
    }

loc_0006FFF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3B7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070002; /* jne: not equal / not zero */

loc_0006FFFE: ;
    SET_LO8(ecx, 1);
    goto loc_00070004;

loc_00070002: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00070004: ;
    SET_LO8(eax, MEM8(esi + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070013; /* je: equal / zero */

loc_0007000B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070017; /* jne: not equal / not zero */

loc_0007000F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070021; /* jne: not equal / not zero */

loc_00070013: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070021; /* jne: not equal / not zero */

loc_00070017: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD3DC)); /* movss */
    goto loc_00070029;

loc_00070021: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B43F8)); /* movss */

loc_00070029: ;
    xmm1 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7B43AC); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x7B43F4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00070057; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007004D: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB330); /* addss */
    goto loc_00070068;

loc_00070057: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B43F0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007006E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B43F0)) */

loc_00070060: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7AB330); /* subss */

loc_00070068: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_0007006E: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00070076u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070073u); } /* indirect call */
    }

loc_00070076: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00070082u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007007Fu); } /* indirect call */
    }

loc_00070082: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x896E74)); /* movss */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x1C) / fp_top()); /* fdivr dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB7C8)); /* fmul dword ptr [0x7ab7c8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x7AA840)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_000700BA; /* jb: below (unsigned <) */

loc_000700B5: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000700DF; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_000700BA: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000700C5; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_000700BF: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    goto loc_000700DF;

loc_000700C5: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000700DC; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000700D8: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000700DC: ;
    xmm2 = xmm0; /* movaps */

loc_000700DF: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000700F2; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_000700ED: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0007011D; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000700F2: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000700FD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000700F7: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0007011D;

loc_000700FD: ;
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007010F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_00070106: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_0007011D;

loc_0007010F: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */

loc_0007011D: ;
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(edi + 0x60) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00070134u); RECOMP_ABI_CALL(0x00034A1Eu, sub_00034A1E); /* call 0x00034A1E */

loc_00070134: ;
    ecx = MEM32(esi + 0x44);
    xmm0 = XMM_SCALAR(MEMF(edi + 0x6C)); /* movss */
    edx = MEM32(ecx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00070147u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070144u); } /* indirect call */
    }

loc_00070147: ;
    fp_push(MEMF(0x7B42D8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00070167; /* jbe: below or equal (unsigned <=) */

loc_00070153: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B42E0); /* mulss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_00070167: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00070173u); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_00070173: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0007017Bu); RECOMP_ABI_CALL(0x000315E9u, sub_000315E9); /* call 0x000315E9 */

loc_0007017B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006FFE2
 * Original: 0x0006FFE2 - 0x00070185 (419 bytes, 123 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FFE2(void)
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

loc_0006FFE2: ;
    if (_flags /* je: equal / zero */) goto loc_0006FFFE;

loc_0006FFE4: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x0006FFEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006FFE8u); } /* indirect call */
    }

loc_0006FFEB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070002; /* je: equal / zero */

loc_0006FFEF: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0006FFF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006FFF4u); } /* indirect call */
    }

loc_0006FFF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3B7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070002; /* jne: not equal / not zero */

loc_0006FFFE: ;
    SET_LO8(ecx, 1);
    goto loc_00070004;

loc_00070002: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00070004: ;
    SET_LO8(eax, MEM8(esi + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070013; /* je: equal / zero */

loc_0007000B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070017; /* jne: not equal / not zero */

loc_0007000F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070021; /* jne: not equal / not zero */

loc_00070013: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070021; /* jne: not equal / not zero */

loc_00070017: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD3DC)); /* movss */
    goto loc_00070029;

loc_00070021: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B43F8)); /* movss */

loc_00070029: ;
    xmm1 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7B43AC); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x7B43F4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00070057; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007004D: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB330); /* addss */
    goto loc_00070068;

loc_00070057: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B43F0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007006E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B43F0)) */

loc_00070060: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7AB330); /* subss */

loc_00070068: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_0007006E: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00070076u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070073u); } /* indirect call */
    }

loc_00070076: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00070082u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007007Fu); } /* indirect call */
    }

loc_00070082: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x896E74)); /* movss */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x1C) / fp_top()); /* fdivr dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB7C8)); /* fmul dword ptr [0x7ab7c8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x7AA840)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_000700BA; /* jb: below (unsigned <) */

loc_000700B5: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000700DF; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_000700BA: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000700C5; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_000700BF: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    goto loc_000700DF;

loc_000700C5: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000700DC; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000700D8: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000700DC: ;
    xmm2 = xmm0; /* movaps */

loc_000700DF: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000700F2; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_000700ED: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0007011D; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000700F2: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000700FD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000700F7: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0007011D;

loc_000700FD: ;
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007010F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_00070106: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_0007011D;

loc_0007010F: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */

loc_0007011D: ;
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(edi + 0x60) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00070134u); RECOMP_ABI_CALL(0x00034A1Eu, sub_00034A1E); /* call 0x00034A1E */

loc_00070134: ;
    ecx = MEM32(esi + 0x44);
    xmm0 = XMM_SCALAR(MEMF(edi + 0x6C)); /* movss */
    edx = MEM32(ecx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00070147u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070144u); } /* indirect call */
    }

loc_00070147: ;
    fp_push(MEMF(0x7B42D8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00070167; /* jbe: below or equal (unsigned <=) */

loc_00070153: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B42E0); /* mulss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_00070167: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00070173u); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_00070173: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0007017Bu); RECOMP_ABI_CALL(0x000315E9u, sub_000315E9); /* call 0x000315E9 */

loc_0007017B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00070000
 * Original: 0x00070000 - 0x00070185 (389 bytes, 111 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070000(void)
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

loc_00070000: ;
    goto loc_00070004;

    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00070004: ;
    SET_LO8(eax, MEM8(esi + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070013; /* je: equal / zero */

loc_0007000B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070017; /* jne: not equal / not zero */

loc_0007000F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070021; /* jne: not equal / not zero */

loc_00070013: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070021; /* jne: not equal / not zero */

loc_00070017: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD3DC)); /* movss */
    goto loc_00070029;

loc_00070021: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B43F8)); /* movss */

loc_00070029: ;
    xmm1 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7B43AC); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x7B43F4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00070057; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007004D: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB330); /* addss */
    goto loc_00070068;

loc_00070057: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B43F0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007006E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B43F0)) */

loc_00070060: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7AB330); /* subss */

loc_00070068: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_0007006E: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00070076u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070073u); } /* indirect call */
    }

loc_00070076: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00070082u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007007Fu); } /* indirect call */
    }

loc_00070082: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x896E74)); /* movss */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x1C) / fp_top()); /* fdivr dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB7C8)); /* fmul dword ptr [0x7ab7c8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x7AA840)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_000700BA; /* jb: below (unsigned <) */

loc_000700B5: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000700DF; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_000700BA: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000700C5; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_000700BF: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    goto loc_000700DF;

loc_000700C5: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000700DC; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000700D8: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000700DC: ;
    xmm2 = xmm0; /* movaps */

loc_000700DF: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000700F2; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_000700ED: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0007011D; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000700F2: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000700FD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000700F7: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0007011D;

loc_000700FD: ;
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007010F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_00070106: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_0007011D;

loc_0007010F: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */

loc_0007011D: ;
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(edi + 0x60) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00070134u); RECOMP_ABI_CALL(0x00034A1Eu, sub_00034A1E); /* call 0x00034A1E */

loc_00070134: ;
    ecx = MEM32(esi + 0x44);
    xmm0 = XMM_SCALAR(MEMF(edi + 0x6C)); /* movss */
    edx = MEM32(ecx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00070147u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070144u); } /* indirect call */
    }

loc_00070147: ;
    fp_push(MEMF(0x7B42D8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00070167; /* jbe: below or equal (unsigned <=) */

loc_00070153: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B42E0); /* mulss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_00070167: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00070173u); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_00070173: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0007017Bu); RECOMP_ABI_CALL(0x000315E9u, sub_000315E9); /* call 0x000315E9 */

loc_0007017B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00070002
 * Original: 0x00070002 - 0x00070185 (387 bytes, 110 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070002(void)
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

loc_00070002: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070013; /* je: equal / zero */

loc_0007000B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070017; /* jne: not equal / not zero */

loc_0007000F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070021; /* jne: not equal / not zero */

loc_00070013: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070021; /* jne: not equal / not zero */

loc_00070017: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD3DC)); /* movss */
    goto loc_00070029;

loc_00070021: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B43F8)); /* movss */

loc_00070029: ;
    xmm1 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7B43AC); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x7B43F4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00070057; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007004D: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB330); /* addss */
    goto loc_00070068;

loc_00070057: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B43F0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007006E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B43F0)) */

loc_00070060: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7AB330); /* subss */

loc_00070068: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_0007006E: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00070076u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070073u); } /* indirect call */
    }

loc_00070076: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00070082u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007007Fu); } /* indirect call */
    }

loc_00070082: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x896E74)); /* movss */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x1C) / fp_top()); /* fdivr dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB7C8)); /* fmul dword ptr [0x7ab7c8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x7AA840)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_000700BA; /* jb: below (unsigned <) */

loc_000700B5: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000700DF; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_000700BA: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000700C5; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_000700BF: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    goto loc_000700DF;

loc_000700C5: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000700DC; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000700D8: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000700DC: ;
    xmm2 = xmm0; /* movaps */

loc_000700DF: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000700F2; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_000700ED: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0007011D; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000700F2: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000700FD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000700F7: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0007011D;

loc_000700FD: ;
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007010F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_00070106: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_0007011D;

loc_0007010F: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */

loc_0007011D: ;
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(edi + 0x60) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00070134u); RECOMP_ABI_CALL(0x00034A1Eu, sub_00034A1E); /* call 0x00034A1E */

loc_00070134: ;
    ecx = MEM32(esi + 0x44);
    xmm0 = XMM_SCALAR(MEMF(edi + 0x6C)); /* movss */
    edx = MEM32(ecx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00070147u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070144u); } /* indirect call */
    }

loc_00070147: ;
    fp_push(MEMF(0x7B42D8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00070167; /* jbe: below or equal (unsigned <=) */

loc_00070153: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B42E0); /* mulss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_00070167: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00070173u); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_00070173: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0007017Bu); RECOMP_ABI_CALL(0x000315E9u, sub_000315E9); /* call 0x000315E9 */

loc_0007017B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00070004
 * Original: 0x00070004 - 0x00070185 (385 bytes, 109 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070004(void)
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

loc_00070004: ;
    SET_LO8(eax, MEM8(esi + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070013; /* je: equal / zero */

loc_0007000B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070017; /* jne: not equal / not zero */

loc_0007000F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070021; /* jne: not equal / not zero */

loc_00070013: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070021; /* jne: not equal / not zero */

loc_00070017: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD3DC)); /* movss */
    goto loc_00070029;

loc_00070021: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B43F8)); /* movss */

loc_00070029: ;
    xmm1 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7B43AC); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x7B43F4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00070057; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007004D: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB330); /* addss */
    goto loc_00070068;

loc_00070057: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B43F0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007006E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B43F0)) */

loc_00070060: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7AB330); /* subss */

loc_00070068: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_0007006E: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00070076u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070073u); } /* indirect call */
    }

loc_00070076: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00070082u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007007Fu); } /* indirect call */
    }

loc_00070082: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x896E74)); /* movss */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x1C) / fp_top()); /* fdivr dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB7C8)); /* fmul dword ptr [0x7ab7c8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x7AA840)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_000700BA; /* jb: below (unsigned <) */

loc_000700B5: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000700DF; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_000700BA: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000700C5; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_000700BF: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    goto loc_000700DF;

loc_000700C5: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000700DC; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000700D8: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000700DC: ;
    xmm2 = xmm0; /* movaps */

loc_000700DF: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000700F2; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_000700ED: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0007011D; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000700F2: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000700FD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000700F7: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0007011D;

loc_000700FD: ;
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007010F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_00070106: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_0007011D;

loc_0007010F: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */

loc_0007011D: ;
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(edi + 0x60) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00070134u); RECOMP_ABI_CALL(0x00034A1Eu, sub_00034A1E); /* call 0x00034A1E */

loc_00070134: ;
    ecx = MEM32(esi + 0x44);
    xmm0 = XMM_SCALAR(MEMF(edi + 0x6C)); /* movss */
    edx = MEM32(ecx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00070147u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070144u); } /* indirect call */
    }

loc_00070147: ;
    fp_push(MEMF(0x7B42D8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00070167; /* jbe: below or equal (unsigned <=) */

loc_00070153: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B42E0); /* mulss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_00070167: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00070173u); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_00070173: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0007017Bu); RECOMP_ABI_CALL(0x000315E9u, sub_000315E9); /* call 0x000315E9 */

loc_0007017B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00070007
 * Original: 0x00070007 - 0x00070185 (382 bytes, 108 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070007(void)
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

loc_00070007: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070013; /* je: equal / zero */

loc_0007000B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070017; /* jne: not equal / not zero */

loc_0007000F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070021; /* jne: not equal / not zero */

loc_00070013: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070021; /* jne: not equal / not zero */

loc_00070017: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD3DC)); /* movss */
    goto loc_00070029;

loc_00070021: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B43F8)); /* movss */

loc_00070029: ;
    xmm1 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7B43AC); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x7B43F4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00070057; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007004D: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB330); /* addss */
    goto loc_00070068;

loc_00070057: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B43F0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007006E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B43F0)) */

loc_00070060: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7AB330); /* subss */

loc_00070068: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_0007006E: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00070076u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070073u); } /* indirect call */
    }

loc_00070076: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00070082u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007007Fu); } /* indirect call */
    }

loc_00070082: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x896E74)); /* movss */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x1C) / fp_top()); /* fdivr dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB7C8)); /* fmul dword ptr [0x7ab7c8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x7AA840)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_000700BA; /* jb: below (unsigned <) */

loc_000700B5: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000700DF; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_000700BA: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000700C5; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_000700BF: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    goto loc_000700DF;

loc_000700C5: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000700DC; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000700D8: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000700DC: ;
    xmm2 = xmm0; /* movaps */

loc_000700DF: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000700F2; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_000700ED: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0007011D; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000700F2: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000700FD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000700F7: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0007011D;

loc_000700FD: ;
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007010F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_00070106: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_0007011D;

loc_0007010F: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */

loc_0007011D: ;
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(edi + 0x60) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00070134u); RECOMP_ABI_CALL(0x00034A1Eu, sub_00034A1E); /* call 0x00034A1E */

loc_00070134: ;
    ecx = MEM32(esi + 0x44);
    xmm0 = XMM_SCALAR(MEMF(edi + 0x6C)); /* movss */
    edx = MEM32(ecx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00070147u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070144u); } /* indirect call */
    }

loc_00070147: ;
    fp_push(MEMF(0x7B42D8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00070167; /* jbe: below or equal (unsigned <=) */

loc_00070153: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B42E0); /* mulss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_00070167: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00070173u); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_00070173: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0007017Bu); RECOMP_ABI_CALL(0x000315E9u, sub_000315E9); /* call 0x000315E9 */

loc_0007017B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00070009
 * Original: 0x00070009 - 0x00070185 (380 bytes, 107 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070009(void)
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

loc_00070009: ;
    if (_flags /* je: equal / zero */) goto loc_00070013;

loc_0007000B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070017; /* jne: not equal / not zero */

loc_0007000F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070021; /* jne: not equal / not zero */

loc_00070013: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070021; /* jne: not equal / not zero */

loc_00070017: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD3DC)); /* movss */
    goto loc_00070029;

loc_00070021: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B43F8)); /* movss */

loc_00070029: ;
    xmm1 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7B43AC); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x7B43F4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00070057; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007004D: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB330); /* addss */
    goto loc_00070068;

loc_00070057: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B43F0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007006E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B43F0)) */

loc_00070060: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7AB330); /* subss */

loc_00070068: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_0007006E: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00070076u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070073u); } /* indirect call */
    }

loc_00070076: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00070082u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007007Fu); } /* indirect call */
    }

loc_00070082: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x896E74)); /* movss */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x1C) / fp_top()); /* fdivr dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB7C8)); /* fmul dword ptr [0x7ab7c8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x7AA840)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_000700BA; /* jb: below (unsigned <) */

loc_000700B5: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000700DF; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_000700BA: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000700C5; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_000700BF: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    goto loc_000700DF;

loc_000700C5: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000700DC; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000700D8: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000700DC: ;
    xmm2 = xmm0; /* movaps */

loc_000700DF: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000700F2; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_000700ED: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0007011D; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000700F2: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000700FD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000700F7: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0007011D;

loc_000700FD: ;
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007010F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_00070106: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_0007011D;

loc_0007010F: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */

loc_0007011D: ;
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(edi + 0x60) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00070134u); RECOMP_ABI_CALL(0x00034A1Eu, sub_00034A1E); /* call 0x00034A1E */

loc_00070134: ;
    ecx = MEM32(esi + 0x44);
    xmm0 = XMM_SCALAR(MEMF(edi + 0x6C)); /* movss */
    edx = MEM32(ecx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00070147u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070144u); } /* indirect call */
    }

loc_00070147: ;
    fp_push(MEMF(0x7B42D8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00070167; /* jbe: below or equal (unsigned <=) */

loc_00070153: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B42E0); /* mulss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_00070167: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00070173u); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_00070173: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0007017Bu); RECOMP_ABI_CALL(0x000315E9u, sub_000315E9); /* call 0x000315E9 */

loc_0007017B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00070200
 * Original: 0x00070200 - 0x000702B7 (183 bytes, 61 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_00070200: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00070213u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070210u); } /* indirect call */
    }

loc_00070213: ;
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    eax = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00070245u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_00070245: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00070273; /* je: equal / zero */

loc_0007024E: ;
    PUSH32(esp, 0x43F00000);
    ecx = esi;
    PUSH32(esp, 0x0007025Au); RECOMP_ABI_CALL(0x0003632Du, sub_0003632D); /* call 0x0003632D */

loc_0007025A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00070273; /* jne: not equal / not zero */

loc_0007025E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x3B6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x3B6)) >> 32) & 1);
    eax = eax + 0x3B6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00070273: ;
    edx = MEM32(esi + 0xF0);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    ecx = esi;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007029F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_00070289: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0007028Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007028Bu); } /* indirect call */
    }

loc_0007028E: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(0x3B7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x3B7)) >> 32) & 1);
    eax = eax + 0x3B7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0007029F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x000702A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000702A1u); } /* indirect call */
    }

loc_000702A4: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(0x3B6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x3B6)) >> 32) & 1);
    eax = eax + 0x3B6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000702F0
 * Original: 0x000702F0 - 0x000702FA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000702F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000702F0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0x24)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00070300
 * Original: 0x00070300 - 0x0007032E (46 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070300: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7B43B0;
    MEM32(0x8EACA0) = 0;
    PUSH32(esp, 0x00070318u); RECOMP_ABI_CALL(0x0001D251u, sub_0001D251); /* call 0x0001D251 */

loc_00070318: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00070328; /* je: equal / zero */

loc_0007031F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00070325u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00070325: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00070328: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00070340
 * Original: 0x00070340 - 0x000704D8 (408 bytes, 117 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070340(void)
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

loc_00070340: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    eax = MEM32(esi + 0x28);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000704CC; /* je: equal / zero */

loc_0007035C: ;
    ecx = esi;
    PUSH32(esp, 0x00070363u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_00070363: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000704CC; /* jne: not equal / not zero */

loc_0007036B: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000704CC; /* jge: greater or equal (signed >=) */

loc_00070379: ;
    ecx = MEM32(0x8EACE0);
    PUSH32(esp, 0x00070384u); RECOMP_ABI_CALL(0x0001734Cu, sub_0001734C); /* call 0x0001734C */

loc_00070384: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000704C0; /* je: equal / zero */

loc_0007038C: ;
    edi = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edi + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B42DC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000704C0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B42DC)) */

loc_000703A1: ;
    PUSH32(esp, 0x41400000);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000703B2u); RECOMP_ABI_CALL(0x000274C7u, sub_000274C7); /* call 0x000274C7 */

loc_000703B2: ;
    ebp = MEM32(0x8E8F84);
    PUSH32(esp, 0x41400000);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x000703C9u); RECOMP_ABI_CALL(0x000274C7u, sub_000274C7); /* call 0x000274C7 */

loc_000703C9: ;
    eax = MEM32(esi + 0xF0);
    xmm2 = XMM_SCALAR(MEMF(0x7B42B4)); /* movss */
    _fca = xmm2.f[0]; _fcb = MEMF(eax + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000704C0; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(eax + 0x1C)) */

loc_000703E1: ;
    eax = MEM32(ebp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000703F3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000703F1: ;
    goto loc_000703FB;

loc_000703F3: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */

loc_000703FB: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000704C0; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00070404: ;
    SET_LO8(eax, MEM8(esi + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007042D; /* je: equal / zero */

loc_0007040B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000704C0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0007041A: ;
    xmm0 = XMM_SCALAR(MEMF(0x896E94)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x28); /* comiss */
    goto loc_00070459;

loc_0007042D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7ABD70)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000704C0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x1C)) */

loc_00070440: ;
    xmm0 = XMM_SCALAR(MEMF(0x896E94)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */

loc_00070459: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000704C0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0007045B: ;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x60);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = esp;
    edx = esp + 0x34;
    PUSH32(esp, 0x8F95F4);
    MEM32(eax) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0007048B; /* je: equal / zero */

loc_00070470: ;
    PUSH32(esp, 0x8F95B0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007047Bu); RECOMP_ABI_CALL(0x000160F0u, sub_000160F0); /* call 0x000160F0 */

loc_0007047B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F95F4);
    PUSH32(esp, 0x8F95B0);
    goto loc_000704A4;

loc_0007048B: ;
    PUSH32(esp, 0x8F95EC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00070496u); RECOMP_ABI_CALL(0x000160F0u, sub_000160F0); /* call 0x000160F0 */

loc_00070496: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F95F4);
    PUSH32(esp, 0x8F95EC);

loc_000704A4: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000704AEu); RECOMP_ABI_CALL(0x0001E796u, sub_0001E796); /* call 0x0001E796 */

loc_000704AE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000704B7u); RECOMP_ABI_CALL(0x00020E1Fu, sub_00020E1F); /* call 0x00020E1F */

loc_000704B7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000704C0; /* je: equal / zero */

loc_000704BE: ;
    SET_LO8(ebx, 1);

loc_000704C0: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000704CC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00070540
 * Original: 0x00070540 - 0x0007054E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070540(void)
{

loc_00070540: ;
    xmm0.f[0] = (float)(int32_t)MEM32(0x896EA8); /* cvtsi2ss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00070560
 * Original: 0x00070560 - 0x00070567 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070560(void)
{

loc_00070560: ;
    eax = MEM32(ecx + 0x2C);
    MEM32(ecx + 0x28) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00070570
 * Original: 0x00070570 - 0x0007057A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070570(void)
{

loc_00070570: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00070580
 * Original: 0x00070580 - 0x00070586 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070580(void)
{

loc_00070580: ;
    eax = MEM32(0x8EACA8);
    esp += 4; return; /* ret */

}

/**
 * sub_00070590
 * Original: 0x00070590 - 0x00070596 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070590(void)
{

loc_00070590: ;
    eax = MEM32(0x8EACCC);
    esp += 4; return; /* ret */

}

/**
 * sub_000705A0
 * Original: 0x000705A0 - 0x000705F4 (84 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000705A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000705A0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(0x8EACA4);
    MEM32(eax) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x20) = ecx;
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(0x896EA8); /* cvtsi2ss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(0x896EA8); /* cvtsi2ss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x30) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00070610
 * Original: 0x00070610 - 0x00070611 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070610(void)
{

loc_00070610: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00070620
 * Original: 0x00070620 - 0x0007066D (77 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070620: ;
    eax = MEM32(0x8EACA4);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    xmm0 = XMM_SCALAR(MEMF(0x8F95B0)); /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8F95B0)); /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx + 0x20) = eax;
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(0x896EA8); /* cvtsi2ss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x14) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00070680
 * Original: 0x00070680 - 0x00070685 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00070680: ;
    g_seh_ebp = ebp; sub_00029560(); return; /* tail jmp 0x00029560 */

}

/**
 * sub_00070690
 * Original: 0x00070690 - 0x000706A4 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070690: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(MEM8(eax + 0x39)) & 0xFFu; _fb = (uint32_t)(0x29) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x39), 0x29 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000706A3; /* jge: greater or equal (signed >=) */

loc_00070699: ;
    eax = MEM32(ecx);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000706A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000706A0u); } /* indirect call */
    }

loc_000706A3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000706B0
 * Original: 0x000706B0 - 0x000706B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000706B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000706B0: ;
    g_seh_ebp = ebp; sub_0001728E(); return; /* tail jmp 0x0001728E */

}

/**
 * sub_000706C0
 * Original: 0x000706C0 - 0x00070735 (117 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000706C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000706C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000706DE; /* je: equal / zero */

loc_000706CF: ;
    MEM32(esi + 4) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x10) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000706DE: ;
    eax = MEM32(esi + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x10) = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8EACCC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x8EACCC) (32-bit) */
    ecx = eax;
    eax = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000706FC; /* je: equal / zero */

loc_000706F4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8EACA4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x8EACA4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070701; /* jne: not equal / not zero */

loc_000706FC: ;
    eax = 2;

loc_00070701: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00070730; /* jl: less (signed <) */

loc_00070705: ;
    ecx = MEM32(esi);
    MEM32(esi + 8) = ecx;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00070710u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007070Du); } /* indirect call */
    }

loc_00070710: ;
    MEM32(esi) = edi;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0007071Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070717u); } /* indirect call */
    }

loc_0007071A: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(esi);
    MEM32(esi + 0x28) = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00070728u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070725u); } /* indirect call */
    }

loc_00070728: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x14) = eax;

loc_00070730: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00070760
 * Original: 0x00070760 - 0x0007076F (15 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070760: ;
    eax = MEM32(ecx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007076E; /* je: equal / zero */

loc_00070767: ;
    ecx = MEM32(ecx + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0007076Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007076Bu); } /* indirect call */
    }

loc_0007076D: ;
    POP32(esp, ecx);

loc_0007076E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00070780
 * Original: 0x00070780 - 0x00070787 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00070780: ;
    ecx = MEM32(ecx);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x20)); return; /* indirect tail jmp */

}

/**
 * sub_00070790
 * Original: 0x00070790 - 0x0007079B (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070790(void)
{

loc_00070790: ;
    eax = ecx;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0007079Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070797u); } /* indirect call */
    }

loc_0007079A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000707A0
 * Original: 0x000707A0 - 0x000707B2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000707A0(void)
{

loc_000707A0: ;
    eax = MEM32(ecx + 0xC);
    MEM32(ecx + 4) = 0;
    ecx = MEM32(eax + 0x54);
    MEM8(ecx + 0x1C) = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_000707C0
 * Original: 0x000707C0 - 0x000707D0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000707C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000707C0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00031107(); return; /* tail jmp 0x00031107 */

}

/**
 * sub_000707E0
 * Original: 0x000707E0 - 0x0007083C (92 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000707E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000707E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x14);
    eax = MEM32(esi + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x14) = edx;
    SET_LO8(ecx, MEM8(eax + 0x1DC));
    eax = MEM32(eax + 0x54);
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(edx) (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00070827; /* jl: less (signed <) */

loc_000707FC: ;
    SET_LO8(ecx, MEM8(eax + 0x1C));
    PUSH32(esp, ebx);
    SET_LO8(ebx, LO8(ecx));
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(edx) (8-bit) */
    MEM8(eax + 0x1C) = LO8(ebx);
    POP32(esp, ebx);
    if (CMP_G(_fas, _fbs)) goto loc_00070832; /* jg: greater (signed >) */

loc_0007080C: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x54);
    MEM8(ecx + 0x1C) = LO8(edx);
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0007081Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007081Au); } /* indirect call */
    }

loc_0007081D: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00070825u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070822u); } /* indirect call */
    }

loc_00070825: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00070827: ;
    MEM8(eax + 0x1C) = LO8(edx);
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00070832u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007082Fu); } /* indirect call */
    }

loc_00070832: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0007083Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070837u); } /* indirect call */
    }

loc_0007083A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00070860
 * Original: 0x00070860 - 0x00070875 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070860(void)
{

loc_00070860: ;
    eax = MEM32(0x8EAC8C);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x00070871u); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_00070871: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00070880
 * Original: 0x00070880 - 0x000708DA (90 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070880: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000708A5; /* jne: not equal / not zero */

loc_0007088C: ;
    eax = MEM32(0x8EACA8);
    ecx = esi;
    PUSH32(esp, eax);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x0007089Cu); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_0007089C: ;
    MEM32(esi + 0x30) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000708A5: ;
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x42B40000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000708B5u); RECOMP_ABI_CALL(0x000202E9u, sub_000202E9); /* call 0x000202E9 */

loc_000708B5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(0x8EAC90);
    if (CMP_NE(_fa, _fb)) goto loc_000708C6; /* jne: not equal / not zero */

loc_000708C1: ;
    eax = MEM32(0x8EACA4);

loc_000708C6: ;
    ecx = esi;
    PUSH32(esp, eax);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x000708D1u); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_000708D1: ;
    MEM32(esi + 0x30) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000708F0
 * Original: 0x000708F0 - 0x000708F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000708F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000708F0: ;
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00070900
 * Original: 0x00070900 - 0x00070904 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070900(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00070900: ;
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00070910
 * Original: 0x00070910 - 0x00070914 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070910(void)
{

loc_00070910: ;
    eax = MEM32(ecx + 0x5C);
    esp += 4; return; /* ret */

}

/**
 * sub_00070920
 * Original: 0x00070920 - 0x00070927 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070920(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00070920: ;
    fp_push(MEMF(ecx + 0x474)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00070930
 * Original: 0x00070930 - 0x0007093E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070930(void)
{

loc_00070930: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00070950
 * Original: 0x00070950 - 0x00070954 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070950(void)
{

loc_00070950: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00070960
 * Original: 0x00070960 - 0x00070971 (17 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070960(void)
{

loc_00070960: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x94) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00070980
 * Original: 0x00070980 - 0x000709A6 (38 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070980: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000709A0; /* je: equal / zero */

loc_00070989: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000709A0; /* je: equal / zero */

loc_0007098E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000709A0; /* je: equal / zero */

loc_00070993: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000709A0; /* je: equal / zero */

loc_00070998: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000709A0; /* je: equal / zero */

loc_0007099D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000709A0: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000709B0
 * Original: 0x000709B0 - 0x000709B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000709B0(void)
{

loc_000709B0: ;
    eax = MEM32(ecx + 0x54);
    esp += 4; return; /* ret */

}

/**
 * sub_000709C0
 * Original: 0x000709C0 - 0x000709C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000709C0(void)
{

loc_000709C0: ;
    eax = MEM32(ecx + 0x48);
    esp += 4; return; /* ret */

}

/**
 * sub_000709D0
 * Original: 0x000709D0 - 0x000709D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000709D0(void)
{

loc_000709D0: ;
    eax = MEM32(0x8EACC8);
    esp += 4; return; /* ret */

}

/**
 * sub_000709E0
 * Original: 0x000709E0 - 0x000709E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000709E0(void)
{

loc_000709E0: ;
    eax = MEM32(0x8EACA0);
    esp += 4; return; /* ret */

}

/**
 * sub_000709F0
 * Original: 0x000709F0 - 0x000709F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000709F0(void)
{

loc_000709F0: ;
    eax = MEM32(0x8EACA0);
    esp += 4; return; /* ret */

}

/**
 * sub_00070A00
 * Original: 0x00070A00 - 0x00070A06 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070A00(void)
{

loc_00070A00: ;
    eax = MEM32(0x8EACBC);
    esp += 4; return; /* ret */

}

/**
 * sub_00070A10
 * Original: 0x00070A10 - 0x00070A16 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070A10(void)
{

loc_00070A10: ;
    eax = MEM32(0x8EACBC);
    esp += 4; return; /* ret */

}

/**
 * sub_00070A20
 * Original: 0x00070A20 - 0x00070A26 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070A20(void)
{

loc_00070A20: ;
    eax = MEM32(0x8EACC4);
    esp += 4; return; /* ret */

}

/**
 * sub_00070A30
 * Original: 0x00070A30 - 0x00070A36 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070A30(void)
{

loc_00070A30: ;
    eax = MEM32(0x8EACC4);
    esp += 4; return; /* ret */

}

/**
 * sub_00070A40
 * Original: 0x00070A40 - 0x00070A5C (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070A40(void)
{

loc_00070A40: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    esi = ecx;
    PUSH32(esp, 0x00070A4Cu); RECOMP_ABI_CALL(0x000167D5u, sub_000167D5); /* call 0x000167D5 */

loc_00070A4C: ;
    MEM32(esi) = 0x7B4D18;
    MEM32(0x8EACA4) = esi;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00070A70
 * Original: 0x00070A70 - 0x00070A85 (21 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00070A70: ;
    MEM32(ecx) = 0x7B4D18;
    MEM32(0x8EACA4) = 0;
    g_seh_ebp = ebp; sub_0001D251(); return; /* tail jmp 0x0001D251 */

}

/**
 * sub_00070A90
 * Original: 0x00070A90 - 0x00070AA9 (25 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070A90: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8EACA4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x8EACA4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070AA6; /* je: equal / zero */

loc_00070A9C: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00070AA6u); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_00070AA6: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00070AB0
 * Original: 0x00070AB0 - 0x00070B15 (101 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00070AB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = MEM32(edi + 0xC);
    ebx = MEM32(esi + 0x4C);
    ebp = ecx;
    ecx = ebx;
    PUSH32(esp, 0x00070AC7u); RECOMP_ABI_CALL(0x00032813u, sub_00032813); /* call 0x00032813 */

loc_00070AC7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070ADA; /* jne: not equal / not zero */

loc_00070ACB: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x00070AD3u); RECOMP_ABI_CALL(0x0002C026u, sub_0002C026); /* call 0x0002C026 */

loc_00070AD3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00070ADA: ;
    ebx = MEM32(ebx + 0x3C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070AEB; /* jne: not equal / not zero */

loc_00070AE1: ;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    goto loc_00070B00;

loc_00070AEB: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00070AF7u); RECOMP_ABI_CALL(0x00012BCBu, sub_00012BCB); /* call 0x00012BCB */

loc_00070AF7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00070B00: ;
    PUSH32(esp, esi);
    MEMF(edi + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00070B0Bu); RECOMP_ABI_CALL(0x00014368u, sub_00014368); /* call 0x00014368 */

loc_00070B0B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00070B30
 * Original: 0x00070B30 - 0x00070BDD (173 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070B30(void)
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

loc_00070B30: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xF0);
    SET_LO8(eax, MEM8(esi + 0x53));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070B5D; /* je: equal / zero */

loc_00070B41: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xE (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00070B4D; /* je: equal / zero */

loc_00070B45: ;
    POP32(esp, edi);
    eax = 0x20B;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00070B4D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xE0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xE0 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00070BD8; /* je: equal / zero */

loc_00070B55: ;
    POP32(esp, edi);
    eax = 0x209;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00070B5D: ;
    SET_LO8(eax, MEM8(esi + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070BD8; /* je: equal / zero */

loc_00070B64: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00070B69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070B66u); } /* indirect call */
    }

loc_00070B69: ;
    fp_push(MEMF(0x7AEBF0)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00070BD8; /* jbe: below or equal (unsigned <=) */

loc_00070B77: ;
    SET_LO8(eax, MEM8(esi + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00070BA9; /* je: equal / zero */

loc_00070B7E: ;
    PUSH32(esp, 0x14F);
    PUSH32(esp, 0x7B4D58);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x00070B8Fu); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_00070B8F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    POP32(esp, edi);
    POP32(esp, esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0xFFFFFFF6u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20D) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20D;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    esp += 4; return; /* ret */

loc_00070BA9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x60) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x60 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00070BD8; /* je: equal / zero */

loc_00070BAD: ;
    PUSH32(esp, 0x15D);
    PUSH32(esp, 0x7B4D58);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x00070BBEu); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_00070BBE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    SET_LO8(edx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    POP32(esp, edi);
    POP32(esp, esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0xFFFFFFF4u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20E;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    esp += 4; return; /* ret */

loc_00070BD8: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00070C10
 * Original: 0x00070C10 - 0x00070C5E (78 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070C10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x172);
    PUSH32(esp, 0x7B4D58);
    PUSH32(esp, 0x28);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00070C24u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_00070C24: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00070C5A; /* jge: greater or equal (signed >=) */

loc_00070C2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00070C38; /* jle: less or equal (signed <=) */

loc_00070C31: ;
    eax = 0x207;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00070C38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00070C44; /* jle: less or equal (signed <=) */

loc_00070C3D: ;
    eax = 0x208;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00070C44: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    POP32(esp, esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0xFFFFFFFAu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x210) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x210;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    esp += 4; return; /* ret */

loc_00070C5A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00070C80
 * Original: 0x00070C80 - 0x00070D7D (253 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00070C80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xF0);
    SET_LO8(eax, MEM8(edi + 0x53));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070CE1; /* jne: not equal / not zero */

loc_00070C91: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00070CA3u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_00070CA3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00070CE1; /* jl: less (signed <) */

loc_00070CAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00070CB4; /* jle: less or equal (signed <=) */

loc_00070CAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070CE1; /* jne: not equal / not zero */

loc_00070CB4: ;
    eax = MEM32(edi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070CDC; /* je: equal / zero */

loc_00070CBC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070CDC; /* je: equal / zero */

loc_00070CC1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070CDC; /* je: equal / zero */

loc_00070CC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070CDC; /* je: equal / zero */

loc_00070CCB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070CDC; /* je: equal / zero */

loc_00070CD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070CE1; /* je: equal / zero */

loc_00070CD5: ;
    ebx = 0x201;
    goto loc_00070CE1;

loc_00070CDC: ;
    ebx = 0x200;

loc_00070CE1: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B4C24)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00070D4F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x1C)) */

loc_00070CEF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070D78; /* jne: not equal / not zero */

loc_00070CF7: ;
    edx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x44960000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00070D08u); RECOMP_ABI_CALL(0x00013A62u, sub_00013A62); /* call 0x00013A62 */

loc_00070D08: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070D53; /* je: equal / zero */

loc_00070D0F: ;
    eax = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00070D1Cu); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_00070D1C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00070D53; /* jl: less (signed <) */

loc_00070D24: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00070D53; /* jg: greater (signed >) */

loc_00070D29: ;
    PUSH32(esp, 0x1B4);
    PUSH32(esp, 0x7B4D58);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x00070D3Au); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_00070D3A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    SET_LO8(ebx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    POP32(esp, edi);
    ebx = ebx + ebx + 0x20F;
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00070D4F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070D78; /* jne: not equal / not zero */

loc_00070D53: ;
    SET_LO8(eax, MEM8(edi + 0x53));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070D61; /* jne: not equal / not zero */

loc_00070D5A: ;
    SET_LO8(eax, MEM8(edi + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070D78; /* je: equal / zero */

loc_00070D61: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xE (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00070D6F; /* je: equal / zero */

loc_00070D65: ;
    ebx = 0x20B;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00070D6F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xE0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xE0 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00070D78; /* je: equal / zero */

loc_00070D73: ;
    ebx = 0x209;

loc_00070D78: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00070CC9
 * Original: 0x00070CC9 - 0x00070D7D (180 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070CC9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00070CC9: ;
    if (_flags /* je: equal / zero */) goto loc_00070CDC;

loc_00070CCB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070CDC; /* je: equal / zero */

loc_00070CD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070CE1; /* je: equal / zero */

loc_00070CD5: ;
    ebx = 0x201;
    goto loc_00070CE1;

loc_00070CDC: ;
    ebx = 0x200;

loc_00070CE1: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B4C24)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00070D4F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x1C)) */

loc_00070CEF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070D78; /* jne: not equal / not zero */

loc_00070CF7: ;
    edx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x44960000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00070D08u); RECOMP_ABI_CALL(0x00013A62u, sub_00013A62); /* call 0x00013A62 */

loc_00070D08: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070D53; /* je: equal / zero */

loc_00070D0F: ;
    eax = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00070D1Cu); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_00070D1C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00070D53; /* jl: less (signed <) */

loc_00070D24: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00070D53; /* jg: greater (signed >) */

loc_00070D29: ;
    PUSH32(esp, 0x1B4);
    PUSH32(esp, 0x7B4D58);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x00070D3Au); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_00070D3A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    SET_LO8(ebx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    POP32(esp, edi);
    ebx = ebx + ebx + 0x20F;
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00070D4F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070D78; /* jne: not equal / not zero */

loc_00070D53: ;
    SET_LO8(eax, MEM8(edi + 0x53));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070D61; /* jne: not equal / not zero */

loc_00070D5A: ;
    SET_LO8(eax, MEM8(edi + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070D78; /* je: equal / zero */

loc_00070D61: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xE (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00070D6F; /* je: equal / zero */

loc_00070D65: ;
    ebx = 0x20B;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00070D6F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xE0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xE0 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00070D78; /* je: equal / zero */

loc_00070D73: ;
    ebx = 0x209;

loc_00070D78: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00070DC0
 * Original: 0x00070DC0 - 0x00070DD5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070DC0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x200 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00070DD4; /* jl: less (signed <) */

loc_00070DCA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x211) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x211 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00070DD4; /* jg: greater (signed >) */

loc_00070DD2: ;
    SET_LO8(eax, 1);

loc_00070DD4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00070DE0
 * Original: 0x00070DE0 - 0x00070DFE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00070DE0: ;
    _fb = (uint32_t)(0xFFFFFC55u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFC55u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x34 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00070DFD; /* ja: above (unsigned >) */

loc_00070DED: ;
    ecx = ZX8(MEM8(ecx + 0x70E08));
    { uint32_t _jt = MEM32(ecx * 4 + 0x70E00); /* switch: 2 entries, 2 targets */
    if (_jt == 0x00070DFBu) goto loc_00070DFB;
    if (_jt == 0x00070DFDu) goto loc_00070DFD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00070DFB: ;
    SET_LO8(eax, 1);

loc_00070DFD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00070DFE
 * Original: 0x00070DFE - 0x00070E6F (113 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070DFE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00070DFE: ;
    edi = edi;
    RECOMP_UNIMPL("sti", 0x00070E00u); /* TODO: sti */
    eax = eax | 0xDFD0007;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    ecx = MEM32(eax + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00070E68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070E65u); } /* indirect call */
    }

loc_00070E68: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00070DE0(); return; /* tail jmp 0x00070DE0 */

}

/**
 * sub_00070E80
 * Original: 0x00070E80 - 0x00070E9F (31 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070E80: ;
    ecx = MEM32(eax + 0x44);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00070E8Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070E88u); } /* indirect call */
    }

loc_00070E8B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00070E9B; /* jl: less (signed <) */

loc_00070E92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x211) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x211 (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_LE(_fas, _fbs)) goto loc_00070E9D; /* jle: less or equal (signed <=) */

loc_00070E9B: ;
    SET_LO8(eax, LO8(ebx));

loc_00070E9D: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00070EB0
 * Original: 0x00070EB0 - 0x00070EE6 (54 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070EB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8EACA4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x8EACA4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070ED9; /* je: equal / zero */

loc_00070EC3: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x1D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00070ED2u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_00070ED2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 0xF) = 0;

loc_00070ED9: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00070EE1u); RECOMP_ABI_CALL(0x00021A90u, sub_00021A90); /* call 0x00021A90 */

loc_00070EE1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00070F00
 * Original: 0x00070F00 - 0x00070F05 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00070F00: ;
    g_seh_ebp = ebp; sub_00027F2B(); return; /* tail jmp 0x00027F2B */

}

/**
 * sub_00070F10
 * Original: 0x00070F10 - 0x00070F3E (46 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070F10: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7B4D18;
    MEM32(0x8EACA4) = 0;
    PUSH32(esp, 0x00070F28u); RECOMP_ABI_CALL(0x0001D251u, sub_0001D251); /* call 0x0001D251 */

loc_00070F28: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00070F38; /* je: equal / zero */

loc_00070F2F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00070F35u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00070F35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00070F38: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00070F50
 * Original: 0x00070F50 - 0x0007110B (443 bytes, 125 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070F50(void)
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

loc_00070F50: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    esi = MEM32(edi + 0xC);
    ebp = ecx;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00070F68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070F65u); } /* indirect call */
    }

loc_00070F68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00071055; /* jl: less (signed <) */

loc_00070F73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x211) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x211 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00071055; /* jg: greater (signed >) */

loc_00070F7E: ;
    ecx = MEM32(esi + 0x3C);
    ebx = MEM32(esi + 0x20);
    edx = MEM32(ecx + 0x30);
    ecx = ebx;
    MEM32(ebx + 0x94) = edx;
    PUSH32(esp, 0x00070F94u); RECOMP_ABI_CALL(0x00029EF2u, sub_00029EF2); /* call 0x00029EF2 */

loc_00070F94: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = ebx;
    MEMF(ebx + 0x94) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00070FABu); RECOMP_ABI_CALL(0x000237F5u, sub_000237F5); /* call 0x000237F5 */

loc_00070FAB: ;
    xmm1 = XMM_SCALAR(MEMF(0x896EE4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B4D80)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00070FC4; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00070FC0: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_00070FC4: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00070FDEu); RECOMP_ABI_CALL(0x000352F2u, sub_000352F2); /* call 0x000352F2 */

loc_00070FDE: ;
    esi = MEM32(esi + 0x20);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00070FF5u); RECOMP_ABI_CALL(0x0002AAFFu, sub_0002AAFF); /* call 0x0002AAFF */

loc_00070FF5: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x896EE4)); /* movss */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007101F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00071016: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000710F4; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007101F: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007102D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00071024: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_000710F4;

loc_0007102D: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00071042; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00071036: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_000710F4;

loc_00071042: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    goto loc_000710F4;

loc_00071055: ;
    ebx = MEM32(esi + 0x20);
    PUSH32(esp, 0x0007105Du); RECOMP_ABI_CALL(0x00018A0Du, sub_00018A0D); /* call 0x00018A0D */

loc_0007105D: ;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00071068u); RECOMP_ABI_CALL(0x000200DCu, sub_000200DC); /* call 0x000200DC */

loc_00071068: ;
    xmm1 = XMM_SCALAR(MEMF(0x896EE4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B3098)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00071081; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007107D: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_00071081: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0007109Bu); RECOMP_ABI_CALL(0x000352F2u, sub_000352F2); /* call 0x000352F2 */

loc_0007109B: ;
    esi = MEM32(esi + 0x20);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000710B2u); RECOMP_ABI_CALL(0x0002AAFFu, sub_0002AAFF); /* call 0x0002AAFF */

loc_000710B2: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x60); /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(0x896EE4)); /* movss */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000710D8; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000710D3: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000710F4; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_000710D8: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000710E3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000710DD: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    goto loc_000710F4;

loc_000710E3: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000710F4; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000710F0: ;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */

loc_000710F4: ;
    PUSH32(esp, edi);
    ecx = ebp;
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00071101u); RECOMP_ABI_CALL(0x000315E9u, sub_000315E9); /* call 0x000315E9 */

loc_00071101: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00071180
 * Original: 0x00071180 - 0x000713DD (605 bytes, 195 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071180(void)
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

loc_00071180: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    ecx = esi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000711A3u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_000711A3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000711EF; /* je: equal / zero */

loc_000711A7: ;
    eax = MEM32(esi + 0xF0);
    SET_LO8(ecx, MEM8(eax + 0x53));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000711EF; /* je: equal / zero */

loc_000711B4: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = 0x8F00FC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edx);
    PUSH32(esp, 0);
    ecx = eax + 0x1C;
    PUSH32(esp, 0x000711CEu); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_000711CE: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000711EF; /* je: equal / zero */

loc_000711D4: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x000711DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000711D8u); } /* indirect call */
    }

loc_000711DB: ;
    fp_push(MEMF(0x7A99C0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000711EF; /* jbe: below or equal (unsigned <=) */

loc_000711E7: ;
    ecx = MEM32(edi + 0x20);
    goto loc_00071288;

loc_000711EF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000711F5u); RECOMP_ABI_CALL(0x0001617Cu, sub_0001617C); /* call 0x0001617C */

loc_000711F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00071226; /* je: equal / zero */

loc_000711FC: ;
    edx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007120Du); RECOMP_ABI_CALL(0x000228E1u, sub_000228E1); /* call 0x000228E1 */

loc_0007120D: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x18) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x1C) = edx;
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;
    goto loc_0007129F;

loc_00071226: ;
    ecx = MEM32(0x8E96F4);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00071234u); RECOMP_ABI_CALL(0x0003632Du, sub_0003632D); /* call 0x0003632D */

loc_00071234: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00071258; /* je: equal / zero */

loc_00071238: ;
    ecx = esi;
    PUSH32(esp, 0x0007123Fu); RECOMP_ABI_CALL(0x00020947u, sub_00020947); /* call 0x00020947 */

loc_0007123F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    MEM32(esp + 0x10) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x14) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x18) = edx;
    goto loc_0007129F;

loc_00071258: ;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x8E96F8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB7D0); /* mulss */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007127Au); RECOMP_ABI_CALL(0x00013A62u, sub_00013A62); /* call 0x00013A62 */

loc_0007127A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00071399; /* je: equal / zero */

loc_00071285: ;
    ecx = MEM32(eax + 0x20);

loc_00071288: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    MEM32(esp + 0x10) = edx;
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x14) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x18) = ecx;

loc_0007129F: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    eax = MEM32(0x8E8F84);
    _fa = (uint32_t)(MEM32(eax + 0xA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xA8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00071340; /* jne: not equal / not zero */

loc_000712B4: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000712BFu); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000712BF: ;
    edx = esp + 0x18;
    esi = eax;
    eax = MEM32(0x8E8F84);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000712D1u); RECOMP_ABI_CALL(0x0002335Eu, sub_0002335E); /* call 0x0002335E */

loc_000712D1: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000712FC; /* ja: above (unsigned >) */

loc_000712E7: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x713E0); /* switch: 16 entries, 6 targets */
    if (_jt == 0x000712EEu) goto loc_000712EE;
    if (_jt == 0x000712F5u) goto loc_000712F5;
    if (_jt == 0x000712FCu) goto loc_000712FC;
    if (_jt == 0x00071378u) goto loc_00071378;
    if (_jt == 0x00071383u) goto loc_00071383;
    if (_jt == 0x0007138Eu) goto loc_0007138E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000712EE: ;
    eax = 0x3AD;
    goto loc_00071301;

loc_000712F5: ;
    eax = 0x3AF;
    goto loc_00071301;

loc_000712FC: ;
    eax = 0x3AB;

loc_00071301: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B04A0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000713D7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0xC)) */

loc_00071314: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000713D7; /* jl: less (signed <) */

loc_0007131C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00071335; /* jle: less or equal (signed <=) */

loc_00071321: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000713D7; /* jne: not equal / not zero */

loc_0007132A: ;
    POP32(esp, edi);
    eax = 0x3AF;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00071335: ;
    POP32(esp, edi);
    eax = 0x3AD;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00071340: ;
    ecx = esi;
    PUSH32(esp, 0x00071347u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_00071347: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007135E; /* jne: not equal / not zero */

loc_0007134B: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0007135E; /* jne: not equal / not zero */

loc_00071353: ;
    POP32(esp, edi);
    eax = 0x3DF;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007135E: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00071369u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_00071369: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00071378; /* ja: above (unsigned >) */

loc_00071371: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x71400); /* switch: 8 entries, 3 targets */
    if (_jt == 0x00071378u) goto loc_00071378;
    if (_jt == 0x00071383u) goto loc_00071383;
    if (_jt == 0x0007138Eu) goto loc_0007138E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00071378: ;
    POP32(esp, edi);
    eax = 0x3AC;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00071383: ;
    POP32(esp, edi);
    eax = 0x3AE;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007138E: ;
    POP32(esp, edi);
    eax = 0x3B0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00071399: ;
    ecx = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000713A2u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_000713A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000713B8; /* je: equal / zero */

loc_000713A6: ;
    edi = 2;
    eax = MEM32(edi * 4 + 0x7B4C48);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000713B8: ;
    ecx = esi;
    PUSH32(esp, 0x000713BFu); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_000713BF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000713CB; /* jne: not equal / not zero */

loc_000713C3: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000713D0; /* je: equal / zero */

loc_000713CB: ;
    edi = 1;

loc_000713D0: ;
    eax = MEM32(edi * 4 + 0x7B4C48);

loc_000713D7: ;
    POP32(esp, edi);
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
 * sub_0007170E
 * Original: 0x0007170E - 0x00071A2D (799 bytes, 387 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007170E(void)
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

loc_0007170E: ;
    edi = edi;
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(MEM32(0x15260007)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + HI8(edx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x156A0007) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + edx + 7)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(ebp + edx + 7) = MEM8(ebp + edx + 7) + LO8(edx);
    _fa = (uint32_t)(MEM8(ebp + edx + 7)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + edx + 7)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(ebp + edx + 7) = MEM8(ebp + edx + 7) + LO8(edx);
    _fa = (uint32_t)(MEM8(ebp + edx + 7)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + -1577056491)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(edx + -1577056491) = MEM8(edx + -1577056491) + HI8(eax);
    _fa = (uint32_t)(MEM8(edx + -1577056491)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x155F0007) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + 0x15)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(edi + 0x15) = MEM8(edi + 0x15) + LO8(ebx);
    _fa = (uint32_t)(MEM8(edi + 0x15)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + edx + 0x158C0007)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebp + edx + 0x158C0007) = MEM8(ebp + edx + 0x158C0007) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebp + edx + 0x158C0007)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + -1577056491)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(edx + -1577056491) = MEM8(edx + -1577056491) + HI8(eax);
    _fa = (uint32_t)(MEM8(edx + -1577056491)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x15970007) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + -872413419)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(edi + -872413419) = MEM8(edi + -872413419) + LO8(edx);
    _fa = (uint32_t)(MEM8(edi + -872413419)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 0x1D4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0x0007180Cu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0007180C: ;
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x42B40000);
    PUSH32(esp, esi);
    edi = eax;
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x00071820u); RECOMP_ABI_CALL(0x000202E9u, sub_000202E9); /* call 0x000202E9 */

loc_00071820: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00071837; /* je: equal / zero */

loc_00071827: ;
    ecx = MEM32(0x8EAC90);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00071835u); RECOMP_ABI_CALL(0x00027EEAu, sub_00027EEA); /* call 0x00027EEA */

loc_00071835: ;
    SET_LO8(ebx, 1);

loc_00071837: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(esi + 0x4C);
    MEM32(esp + 0x18) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000718B4; /* jne: not equal / not zero */

loc_00071842: ;
    PUSH32(esp, 0x00071847u); RECOMP_ABI_CALL(0x00032813u, sub_00032813); /* call 0x00032813 */

loc_00071847: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000718B0; /* je: equal / zero */

loc_0007184B: ;
    SET_LO8(edx, MEM8(edi + 0xC));
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi + 0xC) = LO8(edx);
    SET_LO8(ecx, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, LO8(edx));
    if (CMP_L(_fas, _fbs)) goto loc_0007186C; /* jl: less (signed <) */

loc_0007185F: ;
    edx = SX8(LO8(eax));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8E96FC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x8E96FC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00071879; /* jg: greater (signed >) */

loc_0007186A: ;
    goto loc_00071877;

loc_0007186C: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00071879; /* je: equal / zero */

loc_00071877: ;
    SET_LO8(ebx, 1);

loc_00071879: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0007187Fu); RECOMP_ABI_CALL(0x00026E78u, sub_00026E78); /* call 0x00026E78 */

loc_0007187F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000719C1; /* je: equal / zero */

loc_0007188A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000719C1; /* jne: not equal / not zero */

loc_00071892: ;
    eax = MEM32(0x8EACCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8EACA4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x8EACA4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000719C1; /* je: equal / zero */

loc_000718A3: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x000718ABu); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_000718AB: ;
    goto loc_000719C1;

loc_000718B0: ;
    ecx = MEM32(esp + 0x18);

loc_000718B4: ;
    SET_LO8(eax, MEM8(ecx + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000718F0; /* je: equal / zero */

loc_000718BB: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000718C1u); RECOMP_ABI_CALL(0x00016BBDu, sub_00016BBD); /* call 0x00016BBD */

loc_000718C1: ;
    ecx = MEM32(0x8EACA4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(0x8EAC98);
    if (CMP_NE(_fa, _fb)) goto loc_000718D8; /* jne: not equal / not zero */

loc_000718D3: ;
    eax = MEM32(0x8EAC94);

loc_000718D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00071A25; /* je: equal / zero */

loc_000718E0: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x000718E8u); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_000718E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000718F0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x40); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007190D; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ecx + 0x40)) */

loc_000718F9: ;
    eax = MEM32(ecx + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0007190D; /* jne: not equal / not zero */

loc_00071900: ;
    PUSH32(esp, 0x00071905u); RECOMP_ABI_CALL(0x00032813u, sub_00032813); /* call 0x00032813 */

loc_00071905: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000719BD; /* jne: not equal / not zero */

loc_0007190D: ;
    ecx = MEM32(0x8EACA0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00071919u); RECOMP_ABI_CALL(0x0001BCFDu, sub_0001BCFD); /* call 0x0001BCFD */

loc_00071919: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00071933; /* je: equal / zero */

loc_0007191D: ;
    ecx = MEM32(0x8EACA0);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0007192Bu); RECOMP_ABI_CALL(0x00027EEAu, sub_00027EEA); /* call 0x00027EEA */

loc_0007192B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00071933: ;
    ecx = MEM32(0x8EACBC);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0007193Fu); RECOMP_ABI_CALL(0x00024597u, sub_00024597); /* call 0x00024597 */

loc_0007193F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00071959; /* je: equal / zero */

loc_00071943: ;
    edx = MEM32(0x8EACBC);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x00071951u); RECOMP_ABI_CALL(0x00027EEAu, sub_00027EEA); /* call 0x00027EEA */

loc_00071951: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00071959: ;
    ecx = MEM32(0x8EACC4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00071965u); RECOMP_ABI_CALL(0x0001C018u, sub_0001C018); /* call 0x0001C018 */

loc_00071965: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0007197E; /* je: equal / zero */

loc_00071969: ;
    eax = MEM32(0x8EACC4);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00071976u); RECOMP_ABI_CALL(0x00027EEAu, sub_00027EEA); /* call 0x00027EEA */

loc_00071976: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0007197E: ;
    ecx = MEM32(0x8EACC8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0007198Au); RECOMP_ABI_CALL(0x000223BEu, sub_000223BE); /* call 0x000223BE */

loc_0007198A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000719A4; /* je: equal / zero */

loc_0007198E: ;
    ecx = MEM32(0x8EACC8);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0007199Cu); RECOMP_ABI_CALL(0x00027EEAu, sub_00027EEA); /* call 0x00027EEA */

loc_0007199C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000719A4: ;
    edx = MEM32(0x8EACC0);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000719B5u); RECOMP_ABI_CALL(0x0001560Fu, sub_0001560F); /* call 0x0001560F */

loc_000719B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000719BD: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00071A25; /* jne: not equal / not zero */

loc_000719C1: ;
    eax = MEM32(ebp + 0x28);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000719CCu); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_000719CC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00071A1E; /* jne: not equal / not zero */

loc_000719D0: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000719D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000719D5u); } /* indirect call */
    }

loc_000719D8: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x000719E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000719E1u); } /* indirect call */
    }

loc_000719E4: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00071A25; /* jbe: below or equal (unsigned <=) */

loc_000719F6: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000719FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000719FBu); } /* indirect call */
    }

loc_000719FE: ;
    ecx = eax;
    PUSH32(esp, 0x00071A05u); RECOMP_ABI_CALL(0x00070DE0u, sub_00070DE0); /* call 0x00070DE0 */

loc_00071A05: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00071A25; /* je: equal / zero */

loc_00071A09: ;
    eax = esi;
    PUSH32(esp, 0x00071A10u); RECOMP_ABI_CALL(0x00071180u, sub_00071180); /* call 0x00071180 */

loc_00071A10: ;
    ecx = MEM32(esi + 0x44);
    edi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00071A1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00071A17u); } /* indirect call */
    }

loc_00071A1A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00071A25; /* je: equal / zero */

loc_00071A1E: ;
    ecx = ebp;
    PUSH32(esp, 0x00071A25u); RECOMP_ABI_CALL(0x00011366u, sub_00011366); /* call 0x00011366 */

loc_00071A25: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00071AC0
 * Original: 0x00071AC0 - 0x00071AC6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071AC0(void)
{

loc_00071AC0: ;
    eax = MEM32(0x8EACAC);
    esp += 4; return; /* ret */

}

/**
 * sub_00071AD0
 * Original: 0x00071AD0 - 0x00071AEC (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071AD0(void)
{

loc_00071AD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    esi = ecx;
    PUSH32(esp, 0x00071ADCu); RECOMP_ABI_CALL(0x000167D5u, sub_000167D5); /* call 0x000167D5 */

loc_00071ADC: ;
    MEM32(esi) = 0x7B520C;
    MEM32(0x8EACA8) = esi;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00071B00
 * Original: 0x00071B00 - 0x00071B15 (21 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00071B00: ;
    MEM32(ecx) = 0x7B520C;
    MEM32(0x8EACA8) = 0;
    g_seh_ebp = ebp; sub_0001D251(); return; /* tail jmp 0x0001D251 */

}

/**
 * sub_00071B20
 * Original: 0x00071B20 - 0x00071B25 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00071B20: ;
    g_seh_ebp = ebp; sub_00021A90(); return; /* tail jmp 0x00021A90 */

}

/**
 * sub_00071B30
 * Original: 0x00071B30 - 0x00071B56 (38 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00071B30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x4C);
    PUSH32(esp, 0x00071B40u); RECOMP_ABI_CALL(0x00032813u, sub_00032813); /* call 0x00032813 */

loc_00071B40: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00071B52; /* jne: not equal / not zero */

loc_00071B44: ;
    ecx = MEM32(0x8EACAC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00071B52u); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_00071B52: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00071B60
 * Original: 0x00071B60 - 0x00071B6A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071B60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00071B60: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0x24)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00071B70
 * Original: 0x00071B70 - 0x00071B78 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071B70(void)
{

loc_00071B70: ;
    eax = 0x1CA;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00071B80
 * Original: 0x00071B80 - 0x00071BAE (46 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00071B80: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7B520C;
    MEM32(0x8EACA8) = 0;
    PUSH32(esp, 0x00071B98u); RECOMP_ABI_CALL(0x0001D251u, sub_0001D251); /* call 0x0001D251 */

loc_00071B98: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00071BA8; /* je: equal / zero */

loc_00071B9F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00071BA5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00071BA5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00071BA8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00071BC0
 * Original: 0x00071BC0 - 0x00071D57 (407 bytes, 126 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071BC0(void)
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

loc_00071BC0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    ebx = MEM32(esi + 0x4C);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x20);
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, 0x00071BDDu); RECOMP_ABI_CALL(0x00015E8Eu, sub_00015E8E); /* call 0x00015E8E */

loc_00071BDD: ;
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00071BE8u); RECOMP_ABI_CALL(0x000200DCu, sub_000200DC); /* call 0x000200DC */

loc_00071BE8: ;
    ebp = ebx + 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00071BF2u); RECOMP_ABI_CALL(0x0002335Eu, sub_0002335E); /* call 0x0002335E */

loc_00071BF2: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0x44); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00071C16; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebx + 0x44)) */

loc_00071C0F: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x44)); /* movss */
    goto loc_00071C34;

loc_00071C16: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00071C1Du); RECOMP_ABI_CALL(0x0002335Eu, sub_0002335E); /* call 0x0002335E */

loc_00071C1D: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */

loc_00071C34: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00071C46u); RECOMP_ABI_CALL(0x00023F07u, sub_00023F07); /* call 0x00023F07 */

loc_00071C46: ;
    xmm1 = XMM_SCALAR(MEMF(0x896F2C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B3098)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00071C5F; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00071C5B: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_00071C5F: ;
    esi = MEM32(esp + 0x2C);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00071C7Du); RECOMP_ABI_CALL(0x000352F2u, sub_000352F2); /* call 0x000352F2 */

loc_00071C7D: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00071C91u); RECOMP_ABI_CALL(0x0002AAFFu, sub_0002AAFF); /* call 0x0002AAFF */

loc_00071C91: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x896F2C)); /* movss */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(edi + 0x60) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00071CB7; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00071CB2: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00071CD6; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00071CB7: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00071CC2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00071CBC: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00071CD6;

loc_00071CC2: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00071CD6; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00071CD2: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00071CD6: ;
    MEMF(edi + 0x60) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x64); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00071CF5; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00071CF0: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00071D11; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00071CF5: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00071D00; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00071CFA: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00071D11;

loc_00071D00: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00071D11; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00071D0D: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00071D11: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x8F95B0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00071D43; /* jnp: not parity */

loc_00071D24: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00071D38u); RECOMP_ABI_CALL(0x0002AAFFu, sub_0002AAFF); /* call 0x0002AAFF */

loc_00071D38: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00071D43u); RECOMP_ABI_CALL(0x00011E6Fu, sub_00011E6F); /* call 0x00011E6F */

loc_00071D43: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00071D4Du); RECOMP_ABI_CALL(0x000315E9u, sub_000315E9); /* call 0x000315E9 */

loc_00071D4D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_00071DC0
 * Original: 0x00071DC0 - 0x00071E88 (200 bytes, 58 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00071DC0: ;
    SET_LO8(edx, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00071DDC; /* je: equal / zero */

loc_00071DC9: ;
    eax = MEM32(ecx + 0x42C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00071DDC; /* je: equal / zero */

loc_00071DD3: ;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x42C) = eax;

loc_00071DDC: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00071DF4; /* je: equal / zero */

loc_00071DE1: ;
    eax = MEM32(ecx + 0x42C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00071DF4; /* je: equal / zero */

loc_00071DEB: ;
    eax = eax ^ 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x42C) = eax;

loc_00071DF4: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00071E0C; /* je: equal / zero */

loc_00071DF9: ;
    eax = MEM32(ecx + 0x42C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00071E0C; /* je: equal / zero */

loc_00071E03: ;
    eax = eax ^ 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x42C) = eax;

loc_00071E0C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00071E24; /* je: equal / zero */

loc_00071E11: ;
    eax = MEM32(ecx + 0x42C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00071E24; /* je: equal / zero */

loc_00071E1B: ;
    eax = eax ^ 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x42C) = eax;

loc_00071E24: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00071E3C; /* je: equal / zero */

loc_00071E29: ;
    eax = MEM32(ecx + 0x42C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00071E3C; /* je: equal / zero */

loc_00071E33: ;
    eax = eax ^ 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x42C) = eax;

loc_00071E3C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00071E54; /* je: equal / zero */

loc_00071E41: ;
    eax = MEM32(ecx + 0x42C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00071E54; /* je: equal / zero */

loc_00071E4B: ;
    eax = eax ^ 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x42C) = eax;

loc_00071E54: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00071E6C; /* je: equal / zero */

loc_00071E59: ;
    eax = MEM32(ecx + 0x42C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00071E6C; /* je: equal / zero */

loc_00071E63: ;
    eax = eax ^ 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x42C) = eax;

loc_00071E6C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00071E85; /* jns: not sign (positive) */

loc_00071E70: ;
    eax = MEM32(ecx + 0x42C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00071E85; /* jns: not sign (positive) */

loc_00071E7A: ;
    eax = eax ^ 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x42C) = eax;

loc_00071E85: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00071EC0
 * Original: 0x00071EC0 - 0x00071ED0 (16 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00071EC0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 0x42C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 0x42C), eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00071EE0
 * Original: 0x00071EE0 - 0x00071EFC (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071EE0(void)
{

loc_00071EE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    esi = ecx;
    PUSH32(esp, 0x00071EECu); RECOMP_ABI_CALL(0x000167D5u, sub_000167D5); /* call 0x000167D5 */

loc_00071EEC: ;
    MEM32(esi) = 0x7B56D8;
    MEM32(0x8EACAC) = esi;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00071F10
 * Original: 0x00071F10 - 0x00071F25 (21 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00071F10: ;
    MEM32(ecx) = 0x7B56D8;
    MEM32(0x8EACAC) = 0;
    g_seh_ebp = ebp; sub_0001D251(); return; /* tail jmp 0x0001D251 */

}

/**
 * sub_00071F30
 * Original: 0x00071F30 - 0x00071F35 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00071F30: ;
    g_seh_ebp = ebp; sub_00021A90(); return; /* tail jmp 0x00021A90 */

}

/**
 * sub_00071F40
 * Original: 0x00071F40 - 0x0007213F (511 bytes, 159 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071F40(void)
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

loc_00071F40: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x1C)); /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(edi + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x896F78)); /* movss */
    ebp = ecx;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00071F7E; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00071F71: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00071F7E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00071F76: ;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    goto loc_00071FAF;

loc_00071F7E: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00071F8C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00071F83: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    goto loc_00071FA9;

loc_00071F8C: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00071F9E; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00071F95: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    goto loc_00071FA9;

loc_00071F9E: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_00071FA9: ;
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */

loc_00071FAF: ;
    eax = MEM32(0x896F70);
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00071FC4u); RECOMP_ABI_CALL(0x00019D63u, sub_00019D63); /* call 0x00019D63 */

loc_00071FC4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00071FCFu); RECOMP_ABI_CALL(0x00011E6Fu, sub_00011E6F); /* call 0x00011E6F */

loc_00071FCF: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00071FD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00071FD4u); } /* indirect call */
    }

loc_00071FD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00072039; /* jne: not equal / not zero */

loc_00071FDE: ;
    ecx = esi;
    PUSH32(esp, 0x00071FE5u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_00071FE5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00072010; /* je: equal / zero */

loc_00071FE9: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00071FF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00071FEDu); } /* indirect call */
    }

loc_00071FF0: ;
    eax = MEM32(eax + 0x20);
    PUSH32(esp, 0x428C0000);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00072008u); RECOMP_ABI_CALL(0x00028106u, sub_00028106); /* call 0x00028106 */

loc_00072008: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    goto loc_000720F4;

loc_00072010: ;
    PUSH32(esp, 0x428C0000);
    edx = esp + 0x2C;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00072021u); RECOMP_ABI_CALL(0x0002893Fu, sub_0002893F); /* call 0x0002893F */

loc_00072021: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00072031u); RECOMP_ABI_CALL(0x00028106u, sub_00028106); /* call 0x00028106 */

loc_00072031: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    goto loc_000720F4;

loc_00072039: ;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x8F95F0)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x1C)); /* movss */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x896F78)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00072070; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0007206B: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0007208C; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00072070: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007207B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00072075: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0007208C;

loc_0007207B: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0007208C; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00072088: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_0007208C: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000720A6u); RECOMP_ABI_CALL(0x0002AAFFu, sub_0002AAFF); /* call 0x0002AAFF */

loc_000720A6: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x896F78)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(edi + 0x60) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000720D0; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000720CB: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000720EF; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000720D0: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000720DB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000720D5: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_000720EF;

loc_000720DB: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000720EF; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000720EB: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000720EF: ;
    MEMF(edi + 0x60) = xmm0.f[0]; /* movss */

loc_000720F4: ;
    edx = MEM32(ebx + 0x1C);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    PUSH32(esp, esi);
    MEM32(eax) = edx;
    PUSH32(esp, 0x0007211Eu); RECOMP_ABI_CALL(0x00031CBAu, sub_00031CBA); /* call 0x00031CBA */

loc_0007211E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0007212Du); RECOMP_ABI_CALL(0x0001402Au, sub_0001402A); /* call 0x0001402A */

loc_0007212D: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x00072135u); RECOMP_ABI_CALL(0x000315E9u, sub_000315E9); /* call 0x000315E9 */

loc_00072135: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000721C0
 * Original: 0x000721C0 - 0x000721F7 (55 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000721C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000721C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 0x4C);
    PUSH32(esp, 0x000721D3u); RECOMP_ABI_CALL(0x00032813u, sub_00032813); /* call 0x00032813 */

loc_000721D3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000721EA; /* je: equal / zero */

loc_000721D7: ;
    ecx = MEM32(0x8EACA8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000721E5u); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_000721E5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000721EA: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000721F2u); RECOMP_ABI_CALL(0x00027F2Bu, sub_00027F2B); /* call 0x00027F2B */

loc_000721F2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00072210
 * Original: 0x00072210 - 0x0007221A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072210(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00072210: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0x24)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00072220
 * Original: 0x00072220 - 0x0007224E (46 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00072220: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7B56D8;
    MEM32(0x8EACAC) = 0;
    PUSH32(esp, 0x00072238u); RECOMP_ABI_CALL(0x0001D251u, sub_0001D251); /* call 0x0001D251 */

loc_00072238: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00072248; /* je: equal / zero */

loc_0007223F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00072245u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00072245: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00072248: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00072260
 * Original: 0x00072260 - 0x000723D8 (376 bytes, 114 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072260(void)
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

loc_00072260: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x42C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00072286; /* je: equal / zero */

loc_0007227D: ;
    _cf = 0; /* logical op clears CF */
    eax = eax ^ 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x42C) = eax;

loc_00072286: ;
    eax = MEM32(0x8EFCB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000722A2; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007229D: ;
    xmm0 = xmm1; /* movaps */
    goto loc_000722A7;

loc_000722A2: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */

loc_000722A7: ;
    xmm1 = XMM_SCALAR(MEMF(0x7B55F4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000722B8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000722B4: ;
    SET_LO8(ecx, 1);
    goto loc_000722BA;

loc_000722B8: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000722BA: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000723C1; /* jne: not equal / not zero */

loc_000722C2: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000723C1; /* je: equal / zero */

loc_000722CA: ;
    ecx = MEM32(esi + 0x4C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x10)) >> 32) & 1);
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000722DFu); RECOMP_ABI_CALL(0x0001349Au, sub_0001349A); /* call 0x0001349A */

loc_000722DF: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x000722E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000722E6u); } /* indirect call */
    }

loc_000722E9: ;
    ecx = MEM32(eax + 0x20);
    edx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x30)) >> 32) & 1);
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00072301u); RECOMP_ABI_CALL(0x0001349Au, sub_0001349A); /* call 0x0001349A */

loc_00072301: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x24); /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x896F78)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007232D; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00072320: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007232D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00072325: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_0007235E;

loc_0007232D: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007233B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00072332: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    goto loc_00072358;

loc_0007233B: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007234D; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00072344: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    goto loc_00072358;

loc_0007234D: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_00072358: ;
    MEMF(esp + 8) = xmm2.f[0]; /* movss */

loc_0007235E: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007236Du); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_0007236D: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00072377u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00072374u); } /* indirect call */
    }

loc_00072377: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007237Eu); RECOMP_ABI_CALL(0x0001BF82u, sub_0001BF82); /* call 0x0001BF82 */

loc_0007237E: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x896F74)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB7D0); /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000723C1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0xC)) */

loc_000723A6: ;
    xmm0 = XMM_SCALAR(MEMF(0x8F95FC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000723C1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x10)) */

loc_000723B5: ;
    eax = 0x1C0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000723C1: ;
    ecx = esi;
    PUSH32(esp, 0x000723C8u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_000723C8: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(0x1FB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x1FB)) >> 32) & 1);
    eax = eax + 0x1FB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
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
 * sub_00072440
 * Original: 0x00072440 - 0x0007244A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072440(void)
{

loc_00072440: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x20) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00072450
 * Original: 0x00072450 - 0x00072471 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00072450: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007246B; /* je: equal / zero */

loc_00072459: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007246B; /* je: equal / zero */

loc_0007245E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007246B; /* je: equal / zero */

loc_00072463: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007246B; /* je: equal / zero */

loc_00072468: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0007246B: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00072480
 * Original: 0x00072480 - 0x00072488 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00072480: ;
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x28)); return; /* indirect tail jmp */

}

/**
 * sub_00072490
 * Original: 0x00072490 - 0x00072494 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072490(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00072490: ;
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000724A0
 * Original: 0x000724A0 - 0x000724A6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000724A0(void)
{

loc_000724A0: ;
    eax = MEM32(0x8EB058);
    esp += 4; return; /* ret */

}

/**
 * sub_000724B0
 * Original: 0x000724B0 - 0x000724BB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000724B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000724B0: ;
    MEM32(ecx) = 0x7B5BC4;
    g_seh_ebp = ebp; sub_0001B726(); return; /* tail jmp 0x0001B726 */

}

/**
 * sub_000724C0
 * Original: 0x000724C0 - 0x00072508 (72 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000724C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000724C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x000724D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000724CDu); } /* indirect call */
    }

loc_000724D0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    ebx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000724DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000724D7u); } /* indirect call */
    }

loc_000724DA: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x2C)); /* movss */
    edx = MEM32(esp + 0xC);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    MEMF(edi + 0x28) = xmm0.f[0]; /* movss */
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00072501u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000724FEu); } /* indirect call */
    }

loc_00072501: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00072520
 * Original: 0x00072520 - 0x00072525 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00072520: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x24)); return; /* indirect tail jmp */

}

/**
 * sub_00072530
 * Original: 0x00072530 - 0x00072553 (35 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00072530: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00072550; /* je: equal / zero */

loc_0007253B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(0x896EA8); /* cvtsi2ss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */

loc_00072550: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00072560
 * Original: 0x00072560 - 0x00072563 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072560(void)
{

loc_00072560: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00072570
 * Original: 0x00072570 - 0x00072579 (9 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072570(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00072570: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00072580
 * Original: 0x00072580 - 0x000725EA (106 bytes, 41 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00072580: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8EB058);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x000725A4u); RECOMP_ABI_CALL(0x0001DE6Du, sub_0001DE6D); /* call 0x0001DE6D */

loc_000725A4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000725E2; /* je: equal / zero */

loc_000725A8: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000725E2; /* jne: not equal / not zero */

loc_000725AE: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8EB058);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000725C8u); RECOMP_ABI_CALL(0x00026991u, sub_00026991); /* call 0x00026991 */

loc_000725C8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000725E2; /* je: equal / zero */

loc_000725CC: ;
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 8); /* cvtsi2ss */
    POP32(esp, esi);
    MEMF(eax) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_000725E2: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00072610
 * Original: 0x00072610 - 0x000726C2 (178 bytes, 53 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00072610: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x20);
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    eax = esp;
    PUSH32(esp, esi);
    ebx = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00072655u); RECOMP_ABI_CALL(0x00031CBAu, sub_00031CBA); /* call 0x00031CBA */

loc_00072655: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00072664u); RECOMP_ABI_CALL(0x0001402Au, sub_0001402A); /* call 0x0001402A */

loc_00072664: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    SET_LO8(eax, MEM8(esp + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(edi + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000726A3; /* jne: not equal / not zero */

loc_00072685: ;
    edx = MEM32(esi + 0x3C);
    xmm0 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x30); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B5AE4); /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */

loc_000726A3: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(esp + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x000726B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000726ADu); } /* indirect call */
    }

loc_000726B0: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x000726B8u); RECOMP_ABI_CALL(0x000315E9u, sub_000315E9); /* call 0x000315E9 */

loc_000726B8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000726F0
 * Original: 0x000726F0 - 0x000726F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000726F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000726F0: ;
    fp_push(MEMF(0x7B5C04)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00072700
 * Original: 0x00072700 - 0x00072707 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072700(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00072700: ;
    fp_push(MEMF(0x7B5C08)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00072710
 * Original: 0x00072710 - 0x00072717 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072710(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00072710: ;
    fp_push(MEMF(0x7B5C08)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00072720
 * Original: 0x00072720 - 0x0007274E (46 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00072720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00072720: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0xC);
    eax = MEM32(edx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8EACB0); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00072749; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00072741: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_00072749: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00072760
 * Original: 0x00072760 - 0x00072789 (41 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00072760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00072760: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x8EACB0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8EACB4); /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x6C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00072786; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx + 0x6C)) */

loc_00072780: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00072786: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000727A0
 * Original: 0x000727A0 - 0x000727F0 (80 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000727A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000727A0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0xC);
    MEM32(edx + 0x30) = 0;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x54);
    MEM32(esi) = MEM32(esi) & 0xFFFFFFFBu;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(eax + 0x54);
    MEM32(esi) = MEM32(esi) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(eax + 0x54);
    MEM32(esi) = MEM32(esi) & 0xFFFFFFDFu;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(eax + 0x54);
    MEM32(esi + 0xC) = 0;
    esi = MEM32(eax + 0x54);
    MEM32(esi) = MEM32(esi) & 0xFFFFFFEFu;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(eax + 0x54);
    MEM8(esi + 6) = 0xFF;
    esi = MEM32(eax + 0x54);
    MEM8(esi + 7) = 0xFF;
    eax = MEM32(eax + 0x54);
    MEM8(eax + 8) = 0;
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0002DD7C(); return; /* tail jmp 0x0002DD7C */

}

/**
 * sub_00072810
 * Original: 0x00072810 - 0x0007285E (78 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072810(void)
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

loc_00072810: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x0007281Au); RECOMP_ABI_CALL(0x00033BF0u, sub_00033BF0); /* call 0x00033BF0 */

loc_0007281A: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 1);
    PUSH32(esp, 0x00072825u); RECOMP_ABI_CALL(0x00033BF0u, sub_00033BF0); /* call 0x00033BF0 */

loc_00072825: ;
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_00072842; /* ja: above (unsigned >) */

loc_0007283C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */

loc_00072842: ;
    MEMF(0x8EACB0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD418)); /* movss */
    MEMF(0x8EACB4) = xmm0.f[0]; /* movss */
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
 * sub_00072880
 * Original: 0x00072880 - 0x00072935 (181 bytes, 71 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072880(void)
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

loc_00072880: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    ebp = MEM32(edi + 0xC);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00072896u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00072893u); } /* indirect call */
    }

loc_00072896: ;
    ecx = MEM32(ebp + 0x44);
    edx = MEM32(ecx);
    ebx = eax;
    MEM32(esp + 0x14) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000728A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000728A1u); } /* indirect call */
    }

loc_000728A4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    ecx = ebp;
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000728B8u); RECOMP_ABI_CALL(0x00031391u, sub_00031391); /* call 0x00031391 */

loc_000728B8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000728CA; /* jne: not equal / not zero */

loc_000728BC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000728CA; /* je: equal / zero */

loc_000728C0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000728CA: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000728D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000728CFu); } /* indirect call */
    }

loc_000728D2: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000728E5; /* je: equal / zero */

loc_000728D6: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ebp = (int32_t)MEMF(edi + 0x28); /* cvttss2si */
    MEMF(edi + 0x2C) = xmm0.f[0]; /* movss */
    goto loc_000728E9;

loc_000728E5: ;
    ebp = MEM32(esp + 0x1C);

loc_000728E9: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x2C)); /* movss */
    MEMF(edi + 0x28) = xmm0.f[0]; /* movss */
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00072901u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000728FEu); } /* indirect call */
    }

loc_00072901: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0007291Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00072919u); } /* indirect call */
    }

loc_0007291C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00072929; /* je: equal / zero */

loc_00072920: ;
    xmm0.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    MEMF(edi + 0x2C) = xmm0.f[0]; /* movss */

loc_00072929: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00072970
 * Original: 0x00072970 - 0x00072A44 (212 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072970(void)
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

loc_00072970: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x20);
    if (CMP_EQ(_fa, _fb)) goto loc_000729A4; /* je: equal / zero */

loc_00072981: ;
    eax = MEM32(edi + 0x3C);
    ecx = MEM32(eax + 0x30);
    MEM32(esi + 0x94) = ecx;
    ecx = esi;
    PUSH32(esp, 0x00072994u); RECOMP_ABI_CALL(0x00029EF2u, sub_00029EF2); /* call 0x00029EF2 */

loc_00072994: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esi + 0x94) = xmm0.f[0]; /* movss */

loc_000729A4: ;
    ecx = MEM32(edi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000729ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000729A9u); } /* indirect call */
    }

loc_000729AC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00072A0A; /* je: equal / zero */

loc_000729B0: ;
    eax = MEM32(edi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    ecx = esi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000729C5u); RECOMP_ABI_CALL(0x0002F717u, sub_0002F717); /* call 0x0002F717 */

loc_000729C5: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000729EB; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000729E4: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */

loc_000729EB: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00072A0A; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000729F8: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7CC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_00072A0A; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00072A05: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00072A15; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00072A0A: ;
    fp_push(MEMF(0x7A9980)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00072A15: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB2D0)); /* movss */
    xmm2.f[0] = xmm2.f[0] / xmm3.f[0]; /* divss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    if ((_fca >= _fcb)) goto loc_00072A35; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00072A2C: ;
    _fca = xmm2.f[0]; _fcb = MEMF(0x7AB868); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00072A3B; /* jb: below (unsigned <) (xmm2.f[0] vs MEMF(0x7AB868)) */

loc_00072A35: ;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */

loc_00072A3B: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00072A80
 * Original: 0x00072A80 - 0x00072ADD (93 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072A80(void)
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

loc_00072A80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00072AB7; /* je: equal / zero */

loc_00072A8F: ;
    PUSH32(esp, 0x00072A94u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_00072A94: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00072ADB; /* jne: not equal / not zero */

loc_00072A98: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00072A9Eu); RECOMP_ABI_CALL(0x0001394Au, sub_0001394A); /* call 0x0001394A */

loc_00072A9E: ;
    fp_push(MEMF(0x7B5AF4)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00072ADB; /* jbe: below or equal (unsigned <=) */

loc_00072AAF: ;
    esi = MEM32(esi + 0x54);
    _cf = 0; /* logical op clears CF */
    MEM32(esi) = MEM32(esi) & 0xFFFFFFBFu;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00072AB7: ;
    PUSH32(esp, 0x00072ABCu); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_00072ABC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00072AD5; /* jne: not equal / not zero */

loc_00072AC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00072AC6u); RECOMP_ABI_CALL(0x0001394Au, sub_0001394A); /* call 0x0001394A */

loc_00072AC6: ;
    fp_push(MEMF(0x7B5AF8)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00072ADB; /* jbe: below or equal (unsigned <=) */

loc_00072AD5: ;
    esi = MEM32(esi + 0x54);
    _cf = 0; /* logical op clears CF */
    MEM32(esi) = MEM32(esi) | 0x40;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00072ADB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00072B00
 * Original: 0x00072B00 - 0x00072B27 (39 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00072B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00072B00: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B5718); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00072B24; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7B5718)) */

loc_00072B11: ;
    xmm0 = XMM_SCALAR(MEMF(0x896FC0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00072B24; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_00072B1E: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00072B24: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00072B30
 * Original: 0x00072B30 - 0x00072B88 (88 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072B30(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00072B30: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00072B44u); RECOMP_ABI_CALL(0x000216D0u, sub_000216D0); /* call 0x000216D0 */

loc_00072B44: ;
    xmm1 = XMM_SCALAR(MEMF(0x896FC0)); /* movss */
    MEM32(esi) = 0x7B5BC4;
    xmm0 = XMM_SCALAR(MEMF(0x8F95F0)); /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B5C0C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00072B70; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00072B6C: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_00072B70: ;
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD310)); /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00072BA0
 * Original: 0x00072BA0 - 0x00072BC4 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00072BA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7B5BC4;
    PUSH32(esp, 0x00072BAEu); RECOMP_ABI_CALL(0x0001B726u, sub_0001B726); /* call 0x0001B726 */

loc_00072BAE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00072BBE; /* je: equal / zero */

loc_00072BB5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00072BBBu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00072BBB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00072BBE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00072BD0
 * Original: 0x00072BD0 - 0x00072D81 (433 bytes, 119 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072BD0(void)
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

loc_00072BD0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(0x7AD354)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x896FC0)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x34); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00072C0E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx + 0x34)) */

loc_00072BFB: ;
    edx = MEM32(ecx + 0x20);
    edx = MEM32(edx + 0x60);
    MEM32(eax + 0x1C) = edx;
    xmm3 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    goto loc_00072C8E;

loc_00072C0E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(esp + 0xC) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 0x20);
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x30); /* subss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x38); /* subss */
    MEM32(esp + 0x10) = esi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    POP32(esp, esi);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00072C6A; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00072C65: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00072C89; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00072C6A: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00072C75; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00072C6F: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00072C89;

loc_00072C75: ;
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00072C89; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm4.f[0]) */

loc_00072C85: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00072C89: ;
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */

loc_00072C8E: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00072CA1; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00072C9C: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00072CC0; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00072CA1: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00072CAC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00072CA6: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00072CC0;

loc_00072CAC: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00072CC0; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00072CBC: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00072CC0: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B43AC); /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7A9980); /* comiss */
    xmm3 = XMM_SCALAR(MEMF(0x7B43F0)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00072CF9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7A9980)) */

loc_00072CD9: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00072CF9; /* jb: below (unsigned <) (xmm3.f[0] vs xmm0.f[0]) */

loc_00072CDE: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AD3EC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00072CF1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AD3EC)) */

loc_00072CE7: ;
    edx = 0xFFFFFFFEu;
    MEM32(eax + 0x20) = edx;
    goto loc_00072D2E;

loc_00072CF1: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x20) = edx;
    goto loc_00072D2E;

loc_00072CF9: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00072D27; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00072CFE: ;
    xmm3 = XMM_SCALAR(MEMF(0x7B5C14)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00072D27; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_00072D0B: ;
    xmm3 = XMM_SCALAR(MEMF(0x7B5C10)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    edx = 2;
    if ((_fca > _fcb)) goto loc_00072D22; /* ja: above (unsigned >) (xmm3.f[0] vs xmm0.f[0]) */

loc_00072D1D: ;
    edx = 1;

loc_00072D22: ;
    MEM32(eax + 0x20) = edx;
    goto loc_00072D2E;

loc_00072D27: ;
    MEM32(eax + 0x20) = 0;

loc_00072D2E: ;
    edx = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x60); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00072D45; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00072D40: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00072D70; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00072D45: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00072D5F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00072D4A: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    PUSH32(esp, ecx);
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00072D59u); RECOMP_ABI_CALL(0x00014368u, sub_00014368); /* call 0x00014368 */

loc_00072D59: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00072D5F: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00072D70; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00072D6C: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00072D70: ;
    PUSH32(esp, ecx);
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00072D7Bu); RECOMP_ABI_CALL(0x00014368u, sub_00014368); /* call 0x00014368 */

loc_00072D7B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_00072DF0
 * Original: 0x00072DF0 - 0x00072E51 (97 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072DF0(void)
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

loc_00072DF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    PUSH32(esp, 0x00072DFCu); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_00072DFC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00072E09; /* je: equal / zero */

loc_00072E00: ;
    eax = 2;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00072E09: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00072E10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00072E0Du); } /* indirect call */
    }

loc_00072E10: ;
    fp_push(MEMF(0x7AA830)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00072E25; /* jbe: below or equal (unsigned <=) */

loc_00072E1C: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00072E25: ;
    PUSH32(esp, 0x43700000);
    ecx = esi;
    PUSH32(esp, 0x00072E31u); RECOMP_ABI_CALL(0x0003632Du, sub_0003632D); /* call 0x0003632D */

loc_00072E31: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00072E1C; /* jne: not equal / not zero */

loc_00072E35: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00072E4B; /* je: equal / zero */

loc_00072E3B: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    edx = MEM32(ecx * 4 + 0x8F00F8);
    _fa = (uint32_t)(MEM32(edx + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x4C), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00072E1C; /* je: equal / zero */

loc_00072E4B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00072E70
 * Original: 0x00072E70 - 0x00072F37 (199 bytes, 69 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00072E70: ;
    ecx = MEM32(0x8EB058);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00072E87u); RECOMP_ABI_CALL(0x0001A696u, sub_0001A696); /* call 0x0001A696 */

loc_00072E87: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00072F30; /* je: equal / zero */

loc_00072E8F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x20); /* cvttss2si */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    esi = eax;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x20); /* cvttss2si */
    edi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) esi = edi; /* cmovg */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00072F10; /* jg: greater (signed >) */

loc_00072ECA: ;
    /* nop */

loc_00072ED0: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8EB058);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00072EE7u); RECOMP_ABI_CALL(0x0001DE6Du, sub_0001DE6D); /* call 0x0001DE6D */

loc_00072EE7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00072F0B; /* je: equal / zero */

loc_00072EEB: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00072F0B; /* jne: not equal / not zero */

loc_00072EF1: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(0x8EB058);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00072F07u); RECOMP_ABI_CALL(0x00026991u, sub_00026991); /* call 0x00026991 */

loc_00072F07: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00072F19; /* jne: not equal / not zero */

loc_00072F0B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00072ED0; /* jle: less or equal (signed <=) */

loc_00072F10: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

loc_00072F19: ;
    ecx = MEM32(esp + 0x24);
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x18); /* cvtsi2ss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

loc_00072F30: ;
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00072F70
 * Original: 0x00072F70 - 0x000731D5 (613 bytes, 184 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072F70(void)
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

loc_00072F70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x4C);
    ecx = edi;
    PUSH32(esp, 0x00072F87u); RECOMP_ABI_CALL(0x00032813u, sub_00032813); /* call 0x00032813 */

loc_00072F87: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00072FF4; /* jne: not equal / not zero */

loc_00072F8B: ;
    SET_LO8(eax, MEM8(edi + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x1C)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00073177; /* je: equal / zero */

loc_00072F9B: ;
    xmm2 = XMM_SCALAR(MEMF(0x896FC0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7B5718)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00072FB4; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_00072FB0: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_00072FB4: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00072FCC; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00072FC3: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00073177; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_00072FCC: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00072FDA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00072FD1: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    goto loc_00073177;

loc_00072FDA: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00073177; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00072FEB: ;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    goto loc_00073177;

loc_00072FF4: ;
    ecx = esi;
    PUSH32(esp, 0x00072FFBu); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_00072FFB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000730DF; /* je: equal / zero */

loc_00073003: ;
    eax = MEM32(esi + 0xF0);
    edi = MEM32(eax + 0x4C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000730C5; /* je: equal / zero */

loc_00073014: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x12 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000730C5; /* je: equal / zero */

loc_0007301D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00073023u); RECOMP_ABI_CALL(0x00033F15u, sub_00033F15); /* call 0x00033F15 */

loc_00073023: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00073037; /* je: equal / zero */

loc_0007302A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00073031u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007302Eu); } /* indirect call */
    }

loc_00073031: ;
    PUSH32(esp, eax);
    goto loc_00073165;

loc_00073037: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007303Du); RECOMP_ABI_CALL(0x00035F3Bu, sub_00035F3B); /* call 0x00035F3B */

loc_0007303D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0007308E; /* je: equal / zero */

loc_00073057: ;
    MEM32(esp + 0x14) = 0x44C38000;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00073062u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007305Fu); } /* indirect call */
    }

loc_00073062: ;
    eax = MEM32(eax + 0x20);
    ecx = MEM32(eax + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007306Eu); RECOMP_ABI_CALL(0x00013648u, sub_00013648); /* call 0x00013648 */

loc_0007306E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00073086u); RECOMP_ABI_CALL(0x000189B8u, sub_000189B8); /* call 0x000189B8 */

loc_00073086: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00073173;

loc_0007308E: ;
    MEM32(esp + 0x14) = 0x44878000;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00073099u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073096u); } /* indirect call */
    }

loc_00073099: ;
    eax = MEM32(eax + 0x20);
    ecx = MEM32(eax + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000730A5u); RECOMP_ABI_CALL(0x00013648u, sub_00013648); /* call 0x00013648 */

loc_000730A5: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000730BDu); RECOMP_ABI_CALL(0x000189B8u, sub_000189B8); /* call 0x000189B8 */

loc_000730BD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00073173;

loc_000730C5: ;
    SET_LO8(eax, MEM8(esi + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = 0x8F95EC;
    if (CMP_NE(_fa, _fb)) goto loc_00073173; /* jne: not equal / not zero */

loc_000730D5: ;
    eax = 0x8F95B0;
    goto loc_00073173;

loc_000730DF: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007314E; /* je: equal / zero */

loc_000730E5: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    edx = MEM32(ecx * 4 + 0x8F00F8);
    _fa = (uint32_t)(MEM8(edx + 0x52)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x52), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007314E; /* je: equal / zero */

loc_000730F6: ;
    eax = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007310B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00073106: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00073110;

loc_0007310B: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */

loc_00073110: ;
    xmm1 = XMM_SCALAR(MEMF(0x7B5AC4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007314E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007311D: ;
    eax = esp + 0xC;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00073129u); RECOMP_ABI_CALL(0x0002893Fu, sub_0002893F); /* call 0x0002893F */

loc_00073129: ;
    SET_LO8(eax, MEM8(esi + 0x64));
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00073142; /* je: equal / zero */

loc_00073136: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    goto loc_0007314C;

loc_00073142: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x38); /* comiss */

loc_0007314C: ;
    if ((_fca > _fcb)) goto loc_0007315E; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ecx + 0x38)) */

loc_0007314E: ;
    edi = MEM32(edi + 0x3C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007315E; /* je: equal / zero */

loc_00073155: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    goto loc_0007316B;

loc_0007315E: ;
    edx = MEM32(0x8E8F84);
    PUSH32(esp, edx);

loc_00073165: ;
    eax = esp + 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, eax);

loc_0007316B: ;
    PUSH32(esp, 0x00073170u); RECOMP_ABI_CALL(0x00012BCBu, sub_00012BCB); /* call 0x00012BCB */

loc_00073170: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00073173: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */

loc_00073177: ;
    ecx = MEM32(esi + 0x20);
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x60); /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x896FC0)); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073197; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00073192: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000731A0; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00073197: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000731AC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0007319C: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_000731A0: ;
    edx = MEM32(esp + 0x14);
    MEMF(edx) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000731AC: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000731C5; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000731B9: ;
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000731C5: ;
    ecx = MEM32(esp + 0x14);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
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
 * sub_00073270
 * Original: 0x00073270 - 0x00073311 (161 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00073270: ;
    PUSH32(esp, ecx);
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x896FC0)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x60); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000732A0; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00073293: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000732A0; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00073298: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    goto loc_000732D1;

loc_000732A0: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000732AE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000732A5: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    goto loc_000732CB;

loc_000732AE: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000732C0; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000732B7: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    goto loc_000732CB;

loc_000732C0: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_000732CB: ;
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */

loc_000732D1: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000732E0u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_000732E0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B43AC); /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007330C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x10)) */

loc_000732F8: ;
    edx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007330C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x14)) */

loc_00073307: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0007330C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00073340
 * Original: 0x00073340 - 0x000733E5 (165 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00073340: ;
    PUSH32(esp, ecx);
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x896FC0)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x60); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073370; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00073363: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073370; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00073368: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    goto loc_000733A1;

loc_00073370: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007337E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00073375: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    goto loc_0007339B;

loc_0007337E: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073390; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00073387: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    goto loc_0007339B;

loc_00073390: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_0007339B: ;
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */

loc_000733A1: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000733B0u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_000733B0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B43AC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000733E0; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_000733CC: ;
    edx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000733E0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x14)) */

loc_000733DB: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000733E0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00073410
 * Original: 0x00073410 - 0x000735A0 (400 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00073410: ;
    xmm1 = XMM_SCALAR(MEMF(0x896FC0)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7AA7D4)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0007342C; /* ja: above (unsigned >) (xmm1.f[0] vs xmm3.f[0]) */

loc_00073428: ;
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */

loc_0007342C: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x60); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007344B; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00073446: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00073470; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007344B: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073456; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00073450: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00073470;

loc_00073456: ;
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0007346D; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm4.f[0]) */

loc_00073469: ;
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */

loc_0007346D: ;
    xmm0 = xmm4; /* movaps */

loc_00073470: ;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073486; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00073479: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073486; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007347E: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_000734AE;

loc_00073486: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073494; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0007348B: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    goto loc_000734A8;

loc_00073494: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000734A8; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000734A4: ;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_000734A8: ;
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */

loc_000734AE: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000734BDu); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_000734BD: ;
    xmm1 = XMM_SCALAR(MEMF(0x896FC0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AA7D4)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000734D9; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000734D5: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_000734D9: ;
    eax = MEM32(esi + 0x20);
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x60); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000734F6; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000734F1: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00073515; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000734F6: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073501; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000734FB: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00073515;

loc_00073501: ;
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00073515; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm4.f[0]) */

loc_00073511: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00073515: ;
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073523; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0007351E: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0007353F; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00073523: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007352E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00073528: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0007353F;

loc_0007352E: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0007353F; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0007353B: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_0007353F: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00073554u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_00073554: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B43AC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_00073583; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00073574: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073599; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00073583: ;
    ecx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x18); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073599; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x18)) */

loc_00073592: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00073599: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00073610
 * Original: 0x00073610 - 0x000736B5 (165 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00073610: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x896FC0)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x20);
    eax = MEM32(eax + 0x50);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x1C); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073643; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00073636: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073643; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007363B: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    goto loc_00073674;

loc_00073643: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073651; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00073648: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    goto loc_0007366E;

loc_00073651: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073663; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0007365A: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    goto loc_0007366E;

loc_00073663: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_0007366E: ;
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */

loc_00073674: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00073683u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_00073683: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B43AC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000736B0; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007369F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000736B0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x14)) */

loc_000736AB: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000736B0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000736E0
 * Original: 0x000736E0 - 0x000739C9 (745 bytes, 222 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000736E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000736E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 8) = 0;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0xC);
    eax = MEM32(esi + 0x4C);
    eax = MEM32(eax + 0x3C);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(ecx, MEM8(esi + 0x64));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ecx = MEM32(0x8E8F78);
    if (CMP_EQ(_fa, _fb)) ecx = MEM32(0x8E8F7C); /* cmove */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) eax = MEM32(0x8E8F84); /* cmove */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00073724u); RECOMP_ABI_CALL(0x00012BCBu, sub_00012BCB); /* call 0x00012BCB */

loc_00073724: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    esi = MEM32(esi + 0x20);
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x896FC0)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x60); /* subss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073755; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00073750: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00073771; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00073755: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073760; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0007375A: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00073771;

loc_00073760: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00073771; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0007376D: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00073771: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00073786u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_00073786: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x896FC0)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm3.f[0]; _fcb = MEMF(edi + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073865; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs MEMF(edi + 0x10)) */

loc_000737A4: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000737B9; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000737B4: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000737D8; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000737B9: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000737C4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000737BE: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_000737D8;

loc_000737C4: ;
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000737D8; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm4.f[0]) */

loc_000737D4: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000737D8: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073811; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000737DD: ;
    xmm3.f[0] = xmm3.f[0] - MEMF(edi + 0x10); /* subss */
    xmm0 = xmm3; /* movaps */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000737EF; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000737EA: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0007380B; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000737EF: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000737FA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000737F4: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0007380B;

loc_000737FA: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0007380B; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00073807: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_0007380B: ;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */

loc_00073811: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x8F95B0); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073842; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x8F95B0)) */

loc_00073820: ;
    xmm1 = XMM_SCALAR(MEMF(0x7B5718)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073842; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007382D: ;
    eax = esp + 0x20;
    edx = MEM32(eax);
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00073842: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00073851u); RECOMP_ABI_CALL(0x0002F109u, sub_0002F109); /* call 0x0002F109 */

loc_00073851: ;
    edx = MEM32(eax);
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00073865: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x8F95EC); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007387C; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00073877: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0007389B; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007387C: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073887; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00073881: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0007389B;

loc_00073887: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0007389B; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00073897: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_0007389B: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x60); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000738AA; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000738A5: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000738C6; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000738AA: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000738B5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000738AF: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_000738C6;

loc_000738B5: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000738C6; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000738C2: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000738C6: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B5718); /* comiss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000738F6; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7B5718)) */

loc_000738D5: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000738F6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000738DA: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000738E9u); RECOMP_ABI_CALL(0x0002F109u, sub_0002F109); /* call 0x0002F109 */

loc_000738E9: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */

loc_000738F6: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00073905u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_00073905: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000739B0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x14)) */

loc_00073916: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x60); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x896FC0)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073936; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00073931: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00073955; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00073936: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073941; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0007393B: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00073955;

loc_00073941: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00073955; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00073951: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00073955: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm3; /* movaps */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007396C; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00073967: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00073988; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007396C: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073977; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00073971: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00073988;

loc_00073977: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00073988; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00073984: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00073988: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0007399Du); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_0007399D: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    if ((_fca >= _fcb)) goto loc_000739B8; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(eax)) */

loc_000739B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x8F95B0)); /* movss */

loc_000739B8: ;
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00073A90
 * Original: 0x00073A90 - 0x00073A94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073A90(void)
{

loc_00073A90: ;
    eax = MEM32(ecx + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_00073AA0
 * Original: 0x00073AA0 - 0x00073AA4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073AA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00073AA0: ;
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00073AB0
 * Original: 0x00073AB0 - 0x00073ACC (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073AB0(void)
{

loc_00073AB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    esi = ecx;
    PUSH32(esp, 0x00073ABCu); RECOMP_ABI_CALL(0x000167D5u, sub_000167D5); /* call 0x000167D5 */

loc_00073ABC: ;
    MEM32(esi) = 0x7B60CC;
    MEM32(0x8EACBC) = esi;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00073AE0
 * Original: 0x00073AE0 - 0x00073AE5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00073AE0: ;
    g_seh_ebp = ebp; sub_00027F2B(); return; /* tail jmp 0x00027F2B */

}

/**
 * sub_00073AF0
 * Original: 0x00073AF0 - 0x00073B05 (21 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00073AF0: ;
    MEM32(ecx) = 0x7B60CC;
    MEM32(0x8EACBC) = 0;
    g_seh_ebp = ebp; sub_0001D251(); return; /* tail jmp 0x0001D251 */

}

/**
 * sub_00073B10
 * Original: 0x00073B10 - 0x00073B7E (110 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00073B10: ;
    edx = MEM32(0x8EACBC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00073B71; /* je: equal / zero */

loc_00073B28: ;
    edx = MEM32(eax + 0x1D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00073B34u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_00073B34: ;
    xmm0 = XMM_SCALAR(MEMF(0x896FF8)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073B5C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00073B47: ;
    xmm0 = xmm1; /* movaps */
    PUSH32(esp, esi);
    ecx = edi;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00073B57u); RECOMP_ABI_CALL(0x00021A90u, sub_00021A90); /* call 0x00021A90 */

loc_00073B57: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00073B5C: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_00073B6C; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00073B68: ;
    xmm0.f[0] = xmm0.f[0] + xmm0.f[0]; /* addss */

loc_00073B6C: ;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */

loc_00073B71: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00073B79u); RECOMP_ABI_CALL(0x00021A90u, sub_00021A90); /* call 0x00021A90 */

loc_00073B79: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00073BA0
 * Original: 0x00073BA0 - 0x00073BC4 (36 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00073BA0: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0xFFFFFC2Au) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFC2Au;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xB (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00073BC1; /* ja: above (unsigned >) */

loc_00073BB1: ;
    ecx = ZX8(MEM8(ecx + 0x73BCC));
    { uint32_t _jt = MEM32(ecx * 4 + 0x73BC4); /* switch: 2 entries, 2 targets */
    if (_jt == 0x00073BBFu) goto loc_00073BBF;
    if (_jt == 0x00073BC1u) goto loc_00073BC1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00073BBF: ;
    SET_LO8(eax, 1);

loc_00073BC1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00073C00
 * Original: 0x00073C00 - 0x00073C2E (46 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00073C00: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7B60CC;
    MEM32(0x8EACBC) = 0;
    PUSH32(esp, 0x00073C18u); RECOMP_ABI_CALL(0x0001D251u, sub_0001D251); /* call 0x0001D251 */

loc_00073C18: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00073C28; /* je: equal / zero */

loc_00073C1F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00073C25u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00073C25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00073C28: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00073C40
 * Original: 0x00073C40 - 0x00073E33 (499 bytes, 152 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073C40(void)
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

loc_00073C40: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    ebp = ecx;
    ecx = MEM32(esi + 0x1D4);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00073C5Cu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_00073C5C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00073C73; /* je: equal / zero */

loc_00073C6C: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    goto loc_00073C7B;

loc_00073C73: ;
    xmm0 = XMM_SCALAR(MEMF(0x8F9608)); /* movss */

loc_00073C7B: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    edi = MEM32(esi + 0x20);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00073C8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073C89u); } /* indirect call */
    }

loc_00073C8C: ;
    ebx = eax;
    eax = MEM32(esi + 0x3C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    ecx = edi;
    MEMF(edi + 0x94) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00073CA5u); RECOMP_ABI_CALL(0x00029EF2u, sub_00029EF2); /* call 0x00029EF2 */

loc_00073CA5: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B5C34)); /* movss */
    eax = ebx + -982;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    MEMF(edi + 0x94) = xmm0.f[0]; /* movss */
    if (CMP_A(_fa, _fb)) goto loc_00073D3C; /* ja: above (unsigned >) */

loc_00073CC0: ;
    eax = ZX8(MEM8(eax + 0x73E3C));
    { uint32_t _jt = MEM32(eax * 4 + 0x73E34); /* switch: 2 entries, 2 targets */
    if (_jt == 0x00073CCEu) goto loc_00073CCE;
    if (_jt == 0x00073D3Cu) goto loc_00073D3C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00073CCE: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00073CD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073CD3u); } /* indirect call */
    }

loc_00073CD6: ;
    fp_push(MEMF(0x7B5FE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    ecx = edi;
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00073D32; /* jbe: below or equal (unsigned <=) */

loc_00073CE4: ;
    PUSH32(esp, 0x00073CE9u); RECOMP_ABI_CALL(0x0002A389u, sub_0002A389); /* call 0x0002A389 */

loc_00073CE9: ;
    eax = MEM32(edi + 0x6C);
    ecx = eax;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    MEM32(esp + 0x1C) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00073CFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073CFBu); } /* indirect call */
    }

loc_00073CFE: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    PUSH32(esp, 0x00073D09u); RECOMP_ABI_CALL(0x0002F717u, sub_0002F717); /* call 0x0002F717 */

loc_00073D09: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x14) - fp_top()); /* fsubr dword ptr [esp + 0x14] */
    fp_push(MEMF(0x7B5FE4)); /* fld float */
    ecx = edi;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x1C) - fp_top()); /* fsubr dword ptr [esp + 0x1c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00073D2Du); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_00073D2D: ;
    goto loc_00073DE6;

loc_00073D32: ;
    PUSH32(esp, 0x00073D37u); RECOMP_ABI_CALL(0x000237F5u, sub_000237F5); /* call 0x000237F5 */

loc_00073D37: ;
    goto loc_00073DE6;

loc_00073D3C: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00073D44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073D41u); } /* indirect call */
    }

loc_00073D44: ;
    fp_push(MEMF(0x7B5FDC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00073D7B; /* jbe: below or equal (unsigned <=) */

loc_00073D50: ;
    ecx = MEM32(esi + 0x44);
    ebx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x60;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00073D5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073D5Bu); } /* indirect call */
    }

loc_00073D5E: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x7B5FDC) - fp_top()); /* fsubr dword ptr [0x7b5fdc] */
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    fp_top() = RECOMP_FP_PC(MEMF(0x7B5C34) / fp_top()); /* fdivr dword ptr [0x7b5c34] */
    edx = esp + 0x20;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    goto loc_00073DD3;

loc_00073D7B: ;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    edx = MEM32(eax + 0x60);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp;
    PUSH32(esp, esi);
    MEM32(ecx) = edx;
    PUSH32(esp, 0x00073DAEu); RECOMP_ABI_CALL(0x00031CBAu, sub_00031CBA); /* call 0x00031CBA */

loc_00073DAE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00073DBDu); RECOMP_ABI_CALL(0x0001402Au, sub_0001402A); /* call 0x0001402A */

loc_00073DBD: ;
    edx = MEM32(esi + 0x20);
    PUSH32(esp, 0x3E99999A);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x60;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);

loc_00073DD3: ;
    PUSH32(esp, 0x00073DD8u); RECOMP_ABI_CALL(0x00013260u, sub_00013260); /* call 0x00013260 */

loc_00073DD8: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edi + 0x60) = xmm0.f[0]; /* movss */

loc_00073DE6: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00073DEFu); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_00073DEF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00073E1D; /* je: equal / zero */

loc_00073DF3: ;
    edx = MEM32(esi + 0x20);
    PUSH32(esp, 0x3E99999A);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x64;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00073E0Eu); RECOMP_ABI_CALL(0x00013260u, sub_00013260); /* call 0x00013260 */

loc_00073E0E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00073E1Du); RECOMP_ABI_CALL(0x00034A1Eu, sub_00034A1E); /* call 0x00034A1E */

loc_00073E1D: ;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x00073E29u); RECOMP_ABI_CALL(0x000315E9u, sub_000315E9); /* call 0x000315E9 */

loc_00073E29: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00074102
 * Original: 0x00074102 - 0x00074650 (1358 bytes, 651 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074102(void)
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

loc_00074102: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0007411C;

    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0007411C; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00074118: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_0007411C: ;
    ecx = MEM32(0x8E8F84);
    eax = MEM32(ecx + 0x20);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00074184; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_0007417E: ;
    MEMF(esp + 0x20) = xmm4.f[0]; /* movss */

loc_00074184: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 0x2C) = edx;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = ecx;
    PUSH32(esp, 0x000741A7u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000741A7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000742D4; /* jl: less (signed <) */

loc_000741B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000741C0; /* jle: less or equal (signed <=) */

loc_000741B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000742D4; /* jne: not equal / not zero */

loc_000741C0: ;
    ecx = ebp;
    PUSH32(esp, 0x000741C7u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_000741C7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000742D4; /* jne: not equal / not zero */

loc_000741CF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x8F95EC); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x896FF8)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000741F8; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000741F3: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0007421A; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000741F8: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00074203; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000741FD: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00074214;

loc_00074203: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00074214; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00074210: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00074214: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_0007421A: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x80;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007422Du); RECOMP_ABI_CALL(0x000189B8u, sub_000189B8); /* call 0x000189B8 */

loc_0007422D: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x20); /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x896FF8)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007424F; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_0007424A: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0007426E; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0007424F: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007425A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00074254: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_0007426E;

loc_0007425A: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0007426E; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm3.f[0]) */

loc_0007426A: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_0007426E: ;
    _fca = xmm1.f[0]; _fcb = MEMF(0x8F95B0); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00074299; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(0x8F95B0)) */

loc_00074277: ;
    xmm3 = XMM_SCALAR(MEMF(0x7B5C18)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00074299; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_00074284: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(0x8F9608); /* subss */
    MEM8(esp + 0x12) = 1;
    goto loc_000742AC;

loc_00074299: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEM8(esp + 0x12) = 0;

loc_000742A4: ;
    xmm4.f[0] = xmm4.f[0] + MEMF(0x8F9608); /* addss */

loc_000742AC: ;
    xmm1 = xmm4; /* movaps */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000742BD; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_000742B4: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00074391; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000742BD: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00074380; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_000742C6: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(edi + 0x18) = xmm1.f[0]; /* movss */
    goto loc_0007439E;

loc_000742D4: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x896FF8)); /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x8F95EC); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000742FA; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_000742F5: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00074319; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000742FA: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00074305; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_000742FF: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_00074319;

loc_00074305: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00074319; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00074315: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_00074319: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007432C; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_00074327: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00074348; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_0007432C: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00074337; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_00074331: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    goto loc_00074348;

loc_00074337: ;
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00074348; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm3.f[0]) */

loc_00074344: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */

loc_00074348: ;
    _fca = xmm2.f[0]; _fcb = MEMF(0x8F95B0); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00074373; /* jb: below (unsigned <) (xmm2.f[0] vs MEMF(0x8F95B0)) */

loc_00074351: ;
    xmm1 = XMM_SCALAR(MEMF(0x7B5C18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00074373; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0007435E: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm4.f[0] = xmm4.f[0] - MEMF(0x8F9608); /* subss */
    MEM8(esp + 0x12) = 1;
    goto loc_000742AC;

loc_00074373: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    MEM8(esp + 0x12) = 0;
    goto loc_000742A4;

loc_00074380: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00074391; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0007438D: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_00074391: ;
    MEMF(edi + 0x18) = xmm1.f[0]; /* movss */
    goto loc_0007439E;

    edx = MEM32(esi + 0x1C);
    MEM32(edi + 0x18) = edx;

loc_0007439E: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000743A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000743A3u); } /* indirect call */
    }

loc_000743A6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000743B5; /* je: equal / zero */

loc_000743AA: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    goto loc_000743B9;

loc_000743B5: ;
    SET_LO8(ebx, MEM8(esp + 0x12));

loc_000743B9: ;
    ecx = MEM32(ebp + 0x20);
    edx = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x18); /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x896FF8)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000743DF; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000743DA: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000743FB; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000743DF: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000743EA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000743E4: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_000743FB;

loc_000743EA: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000743FB; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000743F7: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000743FB: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00074410u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_00074410: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0007443F; /* je: equal / zero */

loc_0007441B: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B610C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x896FF8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00074434; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00074430: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_00074434: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00074490; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007443F: ;
    edx = MEM32(esp + 0xA0);
    xmm0 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    ecx = ebp;
    MEMF(edx + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0007445Au); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_0007445A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00074477; /* je: equal / zero */

loc_0007445E: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x3E0)) >> 32) & 1);
    eax = eax + 0x3E0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x8C)) >> 32) & 1);
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00074477: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFF5u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3E1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x3E1)) >> 32) & 1);
    eax = eax + 0x3E1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x8C)) >> 32) & 1);
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00074490: ;
    eax = MEM32(esp + 0xA0);
    xmm0 = XMM_SCALAR(MEMF(0x7AB82C)); /* movss */
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B5FD8)); /* movss */
    POP32(esp, esi);
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(0x3CB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x3CB)) >> 32) & 1);
    ebx = ebx + 0x3CB;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x8C)) >> 32) & 1);
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00074282
 * Original: 0x00074282 - 0x00074650 (974 bytes, 552 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074282(void)
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

loc_00074282: ;
    if (_flags /* jbe: below or equal (unsigned <=) */) goto loc_00074299;

loc_00074284: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(0x8F9608); /* subss */
    MEM8(esp + 0x12) = 1;
    goto loc_000742AC;

loc_00074299: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEM8(esp + 0x12) = 0;

loc_000742A4: ;
    xmm4.f[0] = xmm4.f[0] + MEMF(0x8F9608); /* addss */

loc_000742AC: ;
    xmm1 = xmm4; /* movaps */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000742BD; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_000742B4: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00074391; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000742BD: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00074380; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_000742C6: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(edi + 0x18) = xmm1.f[0]; /* movss */
    goto loc_0007439E;

    xmm4 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x896FF8)); /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x8F95EC); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000742FA; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_000742F5: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00074319; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000742FA: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00074305; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_000742FF: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_00074319;

loc_00074305: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00074319; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00074315: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_00074319: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007432C; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_00074327: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00074348; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_0007432C: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00074337; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_00074331: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    goto loc_00074348;

loc_00074337: ;
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00074348; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm3.f[0]) */

loc_00074344: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */

loc_00074348: ;
    _fca = xmm2.f[0]; _fcb = MEMF(0x8F95B0); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00074373; /* jb: below (unsigned <) (xmm2.f[0] vs MEMF(0x8F95B0)) */

loc_00074351: ;
    xmm1 = XMM_SCALAR(MEMF(0x7B5C18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00074373; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0007435E: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm4.f[0] = xmm4.f[0] - MEMF(0x8F9608); /* subss */
    MEM8(esp + 0x12) = 1;
    goto loc_000742AC;

loc_00074373: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    MEM8(esp + 0x12) = 0;
    goto loc_000742A4;

loc_00074380: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00074391; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0007438D: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_00074391: ;
    MEMF(edi + 0x18) = xmm1.f[0]; /* movss */
    goto loc_0007439E;

    edx = MEM32(esi + 0x1C);
    MEM32(edi + 0x18) = edx;

loc_0007439E: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000743A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000743A3u); } /* indirect call */
    }

loc_000743A6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000743B5; /* je: equal / zero */

loc_000743AA: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    goto loc_000743B9;

loc_000743B5: ;
    SET_LO8(ebx, MEM8(esp + 0x12));

loc_000743B9: ;
    ecx = MEM32(ebp + 0x20);
    edx = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x18); /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x896FF8)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000743DF; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000743DA: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000743FB; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000743DF: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000743EA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000743E4: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_000743FB;

loc_000743EA: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000743FB; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000743F7: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000743FB: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00074410u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_00074410: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0007443F; /* je: equal / zero */

loc_0007441B: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B610C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x896FF8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00074434; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00074430: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_00074434: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00074490; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007443F: ;
    edx = MEM32(esp + 0xA0);
    xmm0 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    ecx = ebp;
    MEMF(edx + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0007445Au); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_0007445A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00074477; /* je: equal / zero */

loc_0007445E: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x3E0)) >> 32) & 1);
    eax = eax + 0x3E0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x8C)) >> 32) & 1);
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00074477: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFF5u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3E1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x3E1)) >> 32) & 1);
    eax = eax + 0x3E1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x8C)) >> 32) & 1);
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00074490: ;
    eax = MEM32(esp + 0xA0);
    xmm0 = XMM_SCALAR(MEMF(0x7AB82C)); /* movss */
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B5FD8)); /* movss */
    POP32(esp, esi);
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(0x3CB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x3CB)) >> 32) & 1);
    ebx = ebx + 0x3CB;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x8C)) >> 32) & 1);
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00074650
 * Original: 0x00074650 - 0x000749CE (894 bytes, 253 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074650(void)
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

loc_00074650: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x98);
    MEM32(esp + 0xC) = 0;
    ebp = MEM32(edi + 0xC);
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000746A4; /* je: equal / zero */

loc_00074670: ;
    eax = MEM32(ebp + 0x20);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x1C)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00074693; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0007468E: ;
    xmm0 = xmm2; /* movaps */
    goto loc_00074697;

loc_00074693: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */

loc_00074697: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x8E931C); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000746B1; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x8E931C)) */

loc_000746A4: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000746B1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000746B9u); RECOMP_ABI_CALL(0x0002D5A2u, sub_0002D5A2); /* call 0x0002D5A2 */

loc_000746B9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    PUSH32(esp, 0x41100000);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = ebp;
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esp + 0x1B) = 0;
    PUSH32(esp, 0x000746D8u); RECOMP_ABI_CALL(0x000274C7u, sub_000274C7); /* call 0x000274C7 */

loc_000746D8: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    edx = MEM32(ecx);
    MEM32(esp + 0x38) = edx;
    eax = MEM32(ecx + 4);
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0x3C) = eax;
    ecx = MEM32(ecx + 8);
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0007480F; /* jne: not equal / not zero */

loc_00074739: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00074752u); RECOMP_ABI_CALL(0x0002CC7Eu, sub_0002CC7E); /* call 0x0002CC7E */

loc_00074752: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007480F; /* je: equal / zero */

loc_0007475D: ;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00074779u); RECOMP_ABI_CALL(0x00012EAAu, sub_00012EAA); /* call 0x00012EAA */

loc_00074779: ;
    PUSH32(esp, 0x8F9608);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007478Du); RECOMP_ABI_CALL(0x000160F0u, sub_000160F0); /* call 0x000160F0 */

loc_0007478D: ;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x20);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x64;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007479Fu); RECOMP_ABI_CALL(0x0001E796u, sub_0001E796); /* call 0x0001E796 */

loc_0007479F: ;
    PUSH32(esp, eax);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000747AAu); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_000747AA: ;
    eax = esp + 0x3C;
    PUSH32(esp, 0x42200000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000747B9u); RECOMP_ABI_CALL(0x00013D7Du, sub_00013D7D); /* call 0x00013D7D */

loc_000747B9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000747E4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_000747C7: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x430C0000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000747D6u); RECOMP_ABI_CALL(0x00013D7Du, sub_00013D7D); /* call 0x00013D7D */

loc_000747D6: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    if ((_fca > _fcb)) goto loc_000747F9; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0x14)) */

loc_000747E4: ;
    edx = esp + 0x60;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000747EEu); RECOMP_ABI_CALL(0x0001A105u, sub_0001A105); /* call 0x0001A105 */

loc_000747EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000749BD; /* je: equal / zero */

loc_000747F9: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM8(esp + 0xB) = 1;
    SET_LO8(eax, MEM8(esp + 0xB));
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0007480F: ;
    eax = MEM32(ebp + 0x4C);
    SET_LO8(ecx, MEM8(eax + 0x4C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000749BD; /* jne: not equal / not zero */

loc_0007481D: ;
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000749BD; /* jne: not equal / not zero */

loc_00074828: ;
    esi = MEM32(ebp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edi + 0x1C)); /* movss */
    ecx = esp + 0x1C;
    PUSH32(esp, 0x43160000);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00074848u); RECOMP_ABI_CALL(0x00013D7Du, sub_00013D7D); /* call 0x00013D7D */

loc_00074848: ;
    PUSH32(esp, esi);
    edx = esp + 0x20;
    edi = eax;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007485Au); RECOMP_ABI_CALL(0x0001E796u, sub_0001E796); /* call 0x0001E796 */

loc_0007485A: ;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00074865u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_00074865: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(edi); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000749BD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi)) */

loc_00074875: ;
    edx = MEM32(ebp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B5FF4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000749BD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B5FF4)) */

loc_0007488A: ;
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x42B40000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0007489Au); RECOMP_ABI_CALL(0x00012379u, sub_00012379); /* call 0x00012379 */

loc_0007489A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000749BD; /* je: equal / zero */

loc_000748A5: ;
    PUSH32(esp, 0x43F00000);
    ecx = ebp;
    PUSH32(esp, 0x000748B1u); RECOMP_ABI_CALL(0x0003632Du, sub_0003632D); /* call 0x0003632D */

loc_000748B1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000749AA; /* je: equal / zero */

loc_000748B9: ;
    ecx = ebp;
    PUSH32(esp, 0x000748C0u); RECOMP_ABI_CALL(0x00020947u, sub_00020947); /* call 0x00020947 */

loc_000748C0: ;
    esi = eax;
    eax = MEM32(ebp + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 7;
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
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(esp + 0x8C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(esp + 0x90);
    MEM32(esp + 0x20) = ecx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    MEM32(esp + 0x50) = eax;
    eax = MEM32(esp + 0x94);
    MEM32(esp + 0x24) = edx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x24); /* subss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    MEM32(esp + 0x28) = eax;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x28); /* subss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x74)); /* fld float */
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0007495Du); RECOMP_ABI_CALL(0x00012EAAu, sub_00012EAA); /* call 0x00012EAA */

loc_0007495D: ;
    ebp = MEM32(ebp + 0x20);
    edx = esp + 0x44;
    PUSH32(esp, 0x42700000);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x60;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00074972u); RECOMP_ABI_CALL(0x00013D7Du, sub_00013D7D); /* call 0x00013D7D */

loc_00074972: ;
    esi = eax;
    PUSH32(esp, ebp);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00074984u); RECOMP_ABI_CALL(0x0001E796u, sub_0001E796); /* call 0x0001E796 */

loc_00074984: ;
    PUSH32(esp, eax);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007498Fu); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_0007498F: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(esi); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000749BD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi)) */

loc_0007499B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000749AA: ;
    eax = MEM32(ebp + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B5C34); /* comiss */
    SET_LO8(eax, 1);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000749C1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B5C34)) */

loc_000749BD: ;
    SET_LO8(eax, MEM8(esp + 0x13));

loc_000749C1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00074AB0
 * Original: 0x00074AB0 - 0x00074B5E (174 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074AB0(void)
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

loc_00074AB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = MEM32(edi + 0xC);
    ebx = ecx;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00074AC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00074AC1u); } /* indirect call */
    }

loc_00074AC4: ;
    _fb = (uint32_t)(0xFFFFFC2Au) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFC2Au)) >> 32) & 1);
    eax = eax + 0xFFFFFC2Au;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00074ADC; /* ja: above (unsigned >) */

loc_00074ACE: ;
    ecx = ZX8(MEM8(eax + 0x74B68));
    { uint32_t _jt = MEM32(ecx * 4 + 0x74B60); /* switch: 2 entries, 2 targets */
    if (_jt == 0x00074ADCu) goto loc_00074ADC;
    if (_jt == 0x00074B07u) goto loc_00074B07;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00074ADC: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00074AE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00074AE1u); } /* indirect call */
    }

loc_00074AE4: ;
    fp_push(MEMF(0x7B5FF8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00074B07; /* jp: parity */

loc_00074AF4: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x6C);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00074B04u); RECOMP_ABI_CALL(0x00036F8Au, sub_00036F8A); /* call 0x00036F8A */

loc_00074B04: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00074B07: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00074B0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00074B0Cu); } /* indirect call */
    }

loc_00074B0F: ;
    fp_push(MEMF(0x7B5FD8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00074B3A; /* jbe: below or equal (unsigned <=) */

loc_00074B1B: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00074B23u); RECOMP_ABI_CALL(0x00024597u, sub_00024597); /* call 0x00024597 */

loc_00074B23: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00074B3A; /* jne: not equal / not zero */

loc_00074B27: ;
    eax = MEM32(0x8EACA4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00074B34u); RECOMP_ABI_CALL(0x00027EEAu, sub_00027EEA); /* call 0x00027EEA */

loc_00074B34: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00074B3A: ;
    PUSH32(esp, 0x40400000);
    ecx = esi;
    PUSH32(esp, 0x00074B46u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_00074B46: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00074B58; /* je: equal / zero */

loc_00074B4A: ;
    ecx = MEM32(0x8EACA4);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00074B58u); RECOMP_ABI_CALL(0x00027EEAu, sub_00027EEA); /* call 0x00027EEA */

loc_00074B58: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00074B5E
 * Original: 0x00074B5E - 0x00074BB3 (85 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074B5E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00074B5E: ;
    edi = edi;
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(eax, HI8(eax) + LO8(ebx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
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
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00074BC0
 * Original: 0x00074BC0 - 0x00074BC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074BC0(void)
{

loc_00074BC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00074BD0
 * Original: 0x00074BD0 - 0x00074BF1 (33 bytes, 14 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074BD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00074BD0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00074BE8u); RECOMP_ABI_CALL(0x0059F60Au, sub_0059F60A); /* call 0x0059F60A */

loc_00074BE8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00074C00
 * Original: 0x00074C00 - 0x00074C11 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00074C00: ;
    eax = MEM32(ecx);
    edx = eax;
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00074C10; /* je: equal / zero */

loc_00074C09: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;

loc_00074C10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00074C20
 * Original: 0x00074C20 - 0x00074C39 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00074C20: ;
    eax = MEM32(ecx + 0x550);
    edx = eax;
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00074C38; /* je: equal / zero */

loc_00074C2D: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x550) = eax;

loc_00074C38: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00074C40
 * Original: 0x00074C40 - 0x00074C54 (20 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074C40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00074C40: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(eax, MEM8(esp + 4));
    SET_LO16(eax, LO16(eax) ^ MEM16(ecx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    eax = eax & 0x300;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(ecx) = MEM16(ecx) ^ LO16(eax);
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00074C60
 * Original: 0x00074C60 - 0x00074C64 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074C60(void)
{

loc_00074C60: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00074C70
 * Original: 0x00074C70 - 0x00074C74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074C70(void)
{

loc_00074C70: ;
    eax = ecx + 0x3A;
    esp += 4; return; /* ret */

}

/**
 * sub_00074C80
 * Original: 0x00074C80 - 0x00074C84 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074C80(void)
{

loc_00074C80: ;
    eax = ecx + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00074C90
 * Original: 0x00074C90 - 0x00074C9D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074C90(void)
{

loc_00074C90: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xAC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00074CA0
 * Original: 0x00074CA0 - 0x00074CAC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00074CA0: ;
    edx = MEM32(ecx + 0x2C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00074CB0
 * Original: 0x00074CB0 - 0x00074CCA (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074CB0(void)
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

loc_00074CB0: ;
    PUSH32(esp, ecx);
    eax = 1;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_005CBF44(); return; /* tail jmp 0x005CBF44 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00074CD0
 * Original: 0x00074CD0 - 0x00074CE6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074CD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00074CD0: ;
    eax = 1;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 4); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    esp += 4; return; /* ret */

}

/**
 * sub_00074CF0
 * Original: 0x00074CF0 - 0x00074D06 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074CF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00074CF0: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 4); /* cvtsi2ss */
    eax = 1;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    esp += 4; return; /* ret */

}

/**
 * sub_00074D10
 * Original: 0x00074D10 - 0x00074D5F (79 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074D10(void)
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

loc_00074D10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = (int32_t)MEMF(edi); /* cvttss2si */
    esi = ecx;
    MEM16(esi + 0x10) = LO16(eax);
    fp_push(MEMF(edi + 4)); /* fld float */
    PUSH32(esp, 0x00074D28u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00074D28: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esp + 0x10);
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x14) = ecx;
    ecx = (int32_t)MEMF(edi + 8); /* cvttss2si */
    MEM16(esi + 0x12) = LO16(ecx);
    eax = MEM32(edx);
    MEM32(esi) = eax;
    ecx = MEM32(edx + 4);
    MEM32(esi + 4) = ecx;
    eax = MEM32(edx + 8);
    MEM32(esi + 8) = eax;
    ecx = MEM32(edx + 0xC);
    POP32(esp, edi);
    MEM32(esi + 0xC) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00074D80
 * Original: 0x00074D80 - 0x00074DCC (76 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074D80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00074D80: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x10);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx + 0x14);
    edx = edx & 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x12);
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00074DE0
 * Original: 0x00074DE0 - 0x00074DE3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074DE0(void)
{

loc_00074DE0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00074DF0
 * Original: 0x00074DF0 - 0x00074DF1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074DF0(void)
{

loc_00074DF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00074E00
 * Original: 0x00074E00 - 0x00074FE2 (482 bytes, 125 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00074E00(void)
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

loc_00074E00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x90));
    esp = esp - 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x20);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00074E1Bu); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_00074E1B: ;
    PUSH32(esp, 0x20);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00074E2Au); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_00074E2A: ;
    xmm3 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    _fca = xmm3.f[0]; _fcb = MEMF(0x7AA840); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(esp + 0x30);
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00074E93; /* jp: parity */

loc_00074E40: ;
    ecx = MEM32(esp + 0x34);
    edx = SX16(LO16(eax));
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp + 0x20);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esp + 0x28);
    if (((0x10) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((0x10) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(esp + 0x2C);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x4C) = edx;
    goto loc_00074F7E;

loc_00074E93: ;
    edx = MEM32(esp + 0x34);
    ecx = SX16(LO16(eax));
    if (((0x10) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((0x10) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    xmm6.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x60) = eax;
    eax = MEM32(esp + 0x2C);
    xmm4.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esp + 0x24);
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm5.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0x6C) = eax;
    eax = MEM32(esp + 0x80);
    MEM32(esp + 0x64) = ecx;
    ecx = SX16(LO16(eax));
    MEM32(esp + 0x68) = edx;
    edx = MEM32(esp + 0x84);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esp + 0x74);
    if (((0x10) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((0x10) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0x70);
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp + 0x78);
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    MEM32(esp + 0x54) = ecx;
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEM32(esp + 0x50) = eax;
    eax = MEM32(esp + 0x7C);
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x58) = edx;
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0x5C) = eax;
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ebp + 0x10);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00074F7Bu); RECOMP_ABI_CALL(0x0059F60Au, sub_0059F60A); /* call 0x0059F60A */

loc_00074F7B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00074F7E: ;
    ecx = MEM32(esp + 0x34);
    eax = 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00074F99; /* je: equal / zero */

loc_00074F8B: ;
    _fa = (uint32_t)(MEM32(esp + 0x84)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x84), eax (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esp + 4) = 1;
    if (TEST_NZ(_fa, _fb)) goto loc_00074F9E; /* jne: not equal / not zero */

loc_00074F99: ;
    MEM8(esp + 4) = 0;

loc_00074F9E: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00074FAEu); RECOMP_ABI_CALL(0x000302A2u, sub_000302A2); /* call 0x000302A2 */

loc_00074FAE: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(0x8E8F84);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xD) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0xAC) = eax;
    ecx = MEM32(0x8E8F84);
    ecx = MEM32(ecx + 0x20);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00074FDCu); RECOMP_ABI_CALL(0x00032C55u, sub_00032C55); /* call 0x00032C55 */

loc_00074FDC: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00075060
 * Original: 0x00075060 - 0x00075138 (216 bytes, 67 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00075060(void)
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

loc_00075060: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x8E8F84);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x20);
    eax = (int32_t)MEMF(esi + 0x30); /* cvttss2si */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = eax ^ edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi ^ eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x20) = edi;
    fp_push(MEMF(esi + 0x34)); /* fld float */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00075093u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00075093: ;
    ecx = eax;
    eax = MEM32(esp + 0x24);
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x24) = eax;
    edx = (int32_t)MEMF(esi + 0x38); /* cvttss2si */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edi & 0xFFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = edx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    MEM32(esp + 0x10) = eax;
    ecx = MEM32(esi + 4);
    MEM32(esp + 0x14) = ecx;
    edx = MEM32(esi + 8);
    MEM32(esp + 0x18) = edx;
    eax = MEM32(esi + 0xC);
    ecx = ebx;
    MEM32(esp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000750E0u); RECOMP_ABI_CALL(0x000369D6u, sub_000369D6); /* call 0x000369D6 */

loc_000750E0: ;
    _fa = (uint32_t)(MEM32(0x8FC604)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8FC604), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000750EB; /* jne: not equal / not zero */

loc_000750E9: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000750EB: ;
    edx = MEM32(0x8E8F84);
    ecx = ZX8(LO8(eax));
    eax = MEM32(esp + 0x24);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x1000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x24) = eax;
    ecx = MEM32(edx + 0xA8);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xD) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xFE000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x20);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x2C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007512Fu); RECOMP_ABI_CALL(0x000134EAu, sub_000134EA); /* call 0x000134EA */

loc_0007512F: ;
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
 * sub_00075170
 * Original: 0x00075170 - 0x00075199 (41 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075170: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00075180;

    /* nop */

loc_00075180: ;
    ecx = MEM32(esi + 0x8E8F88);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007518Cu); RECOMP_ABI_CALL(0x00012338u, sub_00012338); /* call 0x00012338 */

loc_0007518C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00075180; /* jl: less (signed <) */

loc_00075194: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000751B0
 * Original: 0x000751B0 - 0x000751DF (47 bytes, 21 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000751B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000751B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000751C2: ;
    ecx = MEM32(esi + 0x8E8F88);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000751D0u); RECOMP_ABI_CALL(0x00025776u, sub_00025776); /* call 0x00025776 */

loc_000751D0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000751C2; /* jl: less (signed <) */

loc_000751D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000751F0
 * Original: 0x000751F0 - 0x000752A0 (176 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000751F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000751F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00075200;

    /* nop */

loc_00075200: ;
    ecx = MEM32(edi + 0x8E8F88);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007520Cu); RECOMP_ABI_CALL(0x00012338u, sub_00012338); /* call 0x00012338 */

loc_0007520C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00075200; /* jl: less (signed <) */

loc_00075214: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0007521Cu); RECOMP_ABI_CALL(0x0001E598u, sub_0001E598); /* call 0x0001E598 */

loc_0007521C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00075222u); RECOMP_ABI_CALL(0x00016609u, sub_00016609); /* call 0x00016609 */

loc_00075222: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00075228u); RECOMP_ABI_CALL(0x0002530Cu, sub_0002530C); /* call 0x0002530C */

loc_00075228: ;
    ecx = MEM32(0x8FCAD8);
    MEM8(esp + 0x18) = 0;
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00075274; /* jle: less or equal (signed <=) */

loc_0007523F: ;
    /* nop */

loc_00075240: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00075246u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_00075246: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075266; /* je: equal / zero */

loc_0007524C: ;
    PUSH32(esp, 1);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esp + 0x18) = LO8(ebx);
    PUSH32(esp, 0x0007525Eu); RECOMP_ABI_CALL(0x000134EAu, sub_000134EA); /* call 0x000134EA */

loc_0007525E: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00075266u); RECOMP_ABI_CALL(0x0001DF4Eu, sub_0001DF4E); /* call 0x0001DF4E */

loc_00075266: ;
    ecx = MEM32(0x8FCAD8);
    eax = MEM32(ecx + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00075240; /* jl: less (signed <) */

loc_00075274: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x7B64C0);
    ecx = esi;
    PUSH32(esp, 0x00075282u); RECOMP_ABI_CALL(0x000134EAu, sub_000134EA); /* call 0x000134EA */

loc_00075282: ;
    eax = MEM32(esi + 0x550);
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0007529A; /* je: equal / zero */

loc_0007528F: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x550) = eax;

loc_0007529A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000752D0
 * Original: 0x000752D0 - 0x000753D4 (260 bytes, 108 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000752D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000752D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000752EBu); RECOMP_ABI_CALL(0x000343F7u, sub_000343F7); /* call 0x000343F7 */

loc_000752EB: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000752F5u); RECOMP_ABI_CALL(0x000315B2u, sub_000315B2); /* call 0x000315B2 */

loc_000752F5: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000752FDu); RECOMP_ABI_CALL(0x00019395u, sub_00019395); /* call 0x00019395 */

loc_000752FD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00075305u); RECOMP_ABI_CALL(0x0001C513u, sub_0001C513); /* call 0x0001C513 */

loc_00075305: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00075316u); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_00075316: ;
    PUSH32(esp, 1);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00075324u); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_00075324: ;
    ecx = MEM32(0x8FCAD8);
    eax = MEM32(ecx + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000753AC; /* jle: less or equal (signed <=) */

loc_00075333: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00075339u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_00075339: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007539E; /* je: equal / zero */

loc_0007533F: ;
    ebp = ZX8(MEM8(esp + 0x1C));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    eax = ZX8(MEM8(esp + 0x18));
    MEM32(esp + 0x10) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00075363; /* jne: not equal / not zero */

loc_00075351: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00075363; /* jne: not equal / not zero */

loc_00075355: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00075361u); RECOMP_ABI_CALL(0x00034E15u, sub_00034E15); /* call 0x00034E15 */

loc_00075361: ;
    goto loc_00075378;

loc_00075363: ;
    MEM8(ecx + 0x3B) = MEM8(ecx + 0x3B) & 0xFC;
    _fa = (uint32_t)(MEM8(ecx + 0x3B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007536E; /* jne: not equal / not zero */

loc_0007536B: ;
    PUSH32(esp, edi);
    goto loc_00075373;

loc_0007536E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00075378; /* jne: not equal / not zero */

loc_00075372: ;
    PUSH32(esp, ebx);

loc_00075373: ;
    PUSH32(esp, 0x00075378u); RECOMP_ABI_CALL(0x00033A01u, sub_00033A01); /* call 0x00033A01 */

loc_00075378: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007538A; /* jne: not equal / not zero */

loc_0007537C: ;
    PUSH32(esp, 1);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0007538Au); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_0007538A: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007539E; /* jne: not equal / not zero */

loc_00075390: ;
    PUSH32(esp, 1);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0007539Eu); RECOMP_ABI_CALL(0x0002306Bu, sub_0002306B); /* call 0x0002306B */

loc_0007539E: ;
    ecx = MEM32(0x8FCAD8);
    eax = MEM32(ecx + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00075333; /* jl: less (signed <) */

loc_000753AC: ;
    eax = MEM32(edi);
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000753BC; /* je: equal / zero */

loc_000753B5: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;

loc_000753BC: ;
    eax = MEM32(ebx);
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000753CC; /* je: equal / zero */

loc_000753C5: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;

loc_000753CC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00075420
 * Original: 0x00075420 - 0x00075428 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00075420: ;
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x50)); return; /* indirect tail jmp */

}

/**
 * sub_00075430
 * Original: 0x00075430 - 0x00075438 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00075430: ;
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x54)); return; /* indirect tail jmp */

}

/**
 * sub_00075440
 * Original: 0x00075440 - 0x00075448 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00075440: ;
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x58)); return; /* indirect tail jmp */

}

/**
 * sub_00075450
 * Original: 0x00075450 - 0x00075458 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00075450: ;
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x44)); return; /* indirect tail jmp */

}

/**
 * sub_00075460
 * Original: 0x00075460 - 0x0007546E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075460(void)
{

loc_00075460: ;
    eax = ecx;
    MEM16(eax + 2) = 0;
    MEM16(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00075480
 * Original: 0x00075480 - 0x00075495 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075480(void)
{

loc_00075480: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 4); /* cvttss2si */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000754A0
 * Original: 0x000754A0 - 0x000754A6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000754A0(void)
{

loc_000754A0: ;
    eax = MEM32(0x8EACD0);
    esp += 4; return; /* ret */

}

/**
 * sub_000754B0
 * Original: 0x000754B0 - 0x000754B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000754B0(void)
{

loc_000754B0: ;
    eax = MEM32(0x8EACD0);
    esp += 4; return; /* ret */

}

/**
 * sub_000754C0
 * Original: 0x000754C0 - 0x000754DC (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000754C0(void)
{

loc_000754C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    esi = ecx;
    PUSH32(esp, 0x000754CCu); RECOMP_ABI_CALL(0x000167D5u, sub_000167D5); /* call 0x000167D5 */

loc_000754CC: ;
    MEM32(esi) = 0x7B6AEC;
    MEM32(0x8EACC0) = esi;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000754F0
 * Original: 0x000754F0 - 0x000754F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000754F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000754F0: ;
    g_seh_ebp = ebp; sub_00027F2B(); return; /* tail jmp 0x00027F2B */

}

/**
 * sub_00075500
 * Original: 0x00075500 - 0x00075515 (21 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00075500: ;
    MEM32(ecx) = 0x7B6AEC;
    MEM32(0x8EACC0) = 0;
    g_seh_ebp = ebp; sub_0001D251(); return; /* tail jmp 0x0001D251 */

}

/**
 * sub_00075520
 * Original: 0x00075520 - 0x000755AE (142 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075520(void)
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

loc_00075520: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x4C);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x44)); /* movss */
    edx = MEM32(eax + 0x20);
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x6C); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7B6944); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8F9614); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x897060)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075566; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00075561: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000755A7; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00075566: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007557C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0007556B: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_0007557C: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075596; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00075585: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_00075596: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */

loc_000755A7: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000755E0
 * Original: 0x000755E0 - 0x0007561C (60 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000755E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000755E0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(eax + 0x1D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000755F3u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_000755F3: ;
    SET_LO8(ecx, MEM8(eax + 5));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075608; /* je: equal / zero */

loc_000755FD: ;
    _fa = (uint32_t)(MEM8(eax + 0xE)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xE), 0x12 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00075617; /* jle: less or equal (signed <=) */

loc_00075603: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_00075608: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B6960); /* comiss */
    if ((_fca > _fcb)) goto loc_00075603; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7B6960)) */

loc_00075617: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00075630
 * Original: 0x00075630 - 0x000756AC (124 bytes, 33 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00075630: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007563E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 8)) */

loc_0007563A: ;
    SET_LO8(eax, 1);
    goto loc_00075640;

loc_0007563E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00075640: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075650; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007564B: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00075654;

loc_00075650: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_00075654: ;
    ecx = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(0x7B69F8)); /* movss */
    eax = ZX8(LO8(eax));
    edx = eax + ecx * 2;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075677; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007566E: ;
    eax = MEM32(edx + 0x7B6968);
    esp += 16; return; /* ret 12 */

loc_00075677: ;
    xmm1 = XMM_SCALAR(MEMF(0x7B69FC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007568D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00075684: ;
    eax = MEM32(edx + 0x7B696C);
    esp += 16; return; /* ret 12 */

loc_0007568D: ;
    xmm1 = XMM_SCALAR(MEMF(0x7B6A00)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000756A3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007569A: ;
    eax = MEM32(edx + 0x7B6970);
    esp += 16; return; /* ret 12 */

loc_000756A3: ;
    eax = MEM32(edx + 0x7B6974);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000756D0
 * Original: 0x000756D0 - 0x00075745 (117 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000756D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000756D0: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0007570F; /* je: equal / zero */

loc_000756DB: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00075742; /* jne: not equal / not zero */

loc_000756DE: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3CC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3CC (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00075707; /* jg: greater (signed >) */

loc_000756EA: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00075740; /* je: equal / zero */

loc_000756EC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x112) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x112 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00075742; /* jl: less (signed <) */

loc_000756F4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x114) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x114 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00075740; /* jle: less or equal (signed <=) */

loc_000756FC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x118) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x118 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075740; /* je: equal / zero */

loc_00075704: ;
    esp += 12; return; /* ret 8 */

loc_00075707: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3CE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3CE (32-bit) */
    goto loc_0007573E;

loc_0007570F: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3CD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3CD (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00075738; /* jg: greater (signed >) */

loc_0007571B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00075740; /* je: equal / zero */

loc_0007571D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x115) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x115 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00075742; /* jl: less (signed <) */

loc_00075725: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x117) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x117 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00075740; /* jle: less or equal (signed <=) */

loc_0007572D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x119) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x119 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075740; /* je: equal / zero */

loc_00075735: ;
    esp += 12; return; /* ret 8 */

loc_00075738: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3CF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3CF (32-bit) */

loc_0007573E: ;
    if (CMP_NE(_fa, _fb)) goto loc_00075742; /* jne: not equal / not zero */

loc_00075740: ;
    SET_LO8(eax, 1);

loc_00075742: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00075770
 * Original: 0x00075770 - 0x000757CB (91 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075770: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3CC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3CC (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00075792; /* jg: greater (signed >) */

loc_0007577B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000757C3; /* je: equal / zero */

loc_0007577D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x112) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x112 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00075799; /* jl: less (signed <) */

loc_00075784: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x114) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x114 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000757C3; /* jle: less or equal (signed <=) */

loc_0007578B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x118) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x118 (32-bit) */
    goto loc_00075797;

loc_00075792: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3CE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3CE (32-bit) */

loc_00075797: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000757C3; /* je: equal / zero */

loc_00075799: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3CD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3CD (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000757B7; /* jg: greater (signed >) */

loc_000757A0: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000757C3; /* je: equal / zero */

loc_000757A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x115) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x115 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000757BE; /* jl: less (signed <) */

loc_000757A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x117) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x117 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000757C3; /* jle: less or equal (signed <=) */

loc_000757B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x119) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x119 (32-bit) */
    goto loc_000757BC;

loc_000757B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3CF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3CF (32-bit) */

loc_000757BC: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000757C3; /* je: equal / zero */

loc_000757BE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000757C3: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000757F0
 * Original: 0x000757F0 - 0x000757FA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000757F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000757F0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0x24)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00075800
 * Original: 0x00075800 - 0x00075809 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075800: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00075810
 * Original: 0x00075810 - 0x0007583F (47 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075810(void)
{

loc_00075810: ;
    edx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 4); /* cvttss2si */
    MEM16(ecx) = LO16(eax);
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 4); /* cvttss2si */
    MEM16(ecx + 2) = LO16(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00075850
 * Original: 0x00075850 - 0x0007587E (46 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075850: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7B6AEC;
    MEM32(0x8EACC0) = 0;
    PUSH32(esp, 0x00075868u); RECOMP_ABI_CALL(0x0001D251u, sub_0001D251); /* call 0x0001D251 */

loc_00075868: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00075878; /* je: equal / zero */

loc_0007586F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00075875u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00075875: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00075878: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00075890
 * Original: 0x00075890 - 0x000758E2 (82 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075890: ;
    edx = MEM32(0x8EACC0);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000758D5; /* je: equal / zero */

loc_000758A8: ;
    edx = MEM32(eax + 0x1D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000758B4u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_000758B4: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 5) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    MEM8(eax + 0xE) = LO8(ecx);
    MEM8(eax + 0x10) = LO8(ecx);
    _fb = (uint32_t)(0x11) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x11;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM8(eax + 4) = LO8(ecx);

loc_000758D5: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000758DDu); RECOMP_ABI_CALL(0x00021A90u, sub_00021A90); /* call 0x00021A90 */

loc_000758DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00075900
 * Original: 0x00075900 - 0x00075BA2 (674 bytes, 236 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075900(void)
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

loc_00075900: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 0x4C);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esi + 0x1D4);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0007592Du); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0007592D: ;
    edx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x64); /* subss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x897060)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    edi = eax;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007595C; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_0007594F: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007595C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00075954: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_00075987;

loc_0007595C: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007596A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00075961: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    goto loc_00075981;

loc_0007596A: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00075981; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0007597D: ;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_00075981: ;
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */

loc_00075987: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00075A10; /* jl: less (signed <) */

loc_00075993: ;
    xmm0 = XMM_SCALAR(MEMF(0x8F9614)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B6940); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000759B3; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_000759AE: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000759EA; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000759B3: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000759C4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000759B8: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    goto loc_000759EA;

loc_000759C4: ;
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000759D9; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_000759CD: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    goto loc_000759EA;

loc_000759D9: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */

loc_000759EA: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000759F9u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_000759F9: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x24); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075A10; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esp + 0x24)) */

loc_00075A07: ;
    eax = MEM32(ebp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00075A10; /* jne: not equal / not zero */

loc_00075A0E: ;
    SET_LO8(ebx, 1);

loc_00075A10: ;
    ecx = MEM32(0x8EACA0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00075A1Cu); RECOMP_ABI_CALL(0x0001BCFDu, sub_0001BCFD); /* call 0x0001BCFD */

loc_00075A1C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075A38; /* je: equal / zero */

loc_00075A20: ;
    edx = MEM32(0x8EACA0);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x00075A2Eu); RECOMP_ABI_CALL(0x00027EEAu, sub_00027EEA); /* call 0x00027EEA */

loc_00075A2E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00075A38: ;
    ecx = MEM32(0x8EACD0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00075A44u); RECOMP_ABI_CALL(0x00014345u, sub_00014345); /* call 0x00014345 */

loc_00075A44: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075A5F; /* je: equal / zero */

loc_00075A48: ;
    eax = MEM32(0x8EACD0);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00075A55u); RECOMP_ABI_CALL(0x00027EEAu, sub_00027EEA); /* call 0x00027EEA */

loc_00075A55: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00075A5F: ;
    ecx = MEM32(0x8EACBC);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00075A6Bu); RECOMP_ABI_CALL(0x00024597u, sub_00024597); /* call 0x00024597 */

loc_00075A6B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075A87; /* je: equal / zero */

loc_00075A6F: ;
    ecx = MEM32(0x8EACBC);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00075A7Du); RECOMP_ABI_CALL(0x00027EEAu, sub_00027EEA); /* call 0x00027EEA */

loc_00075A7D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00075A87: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075AA3; /* je: equal / zero */

loc_00075A8B: ;
    edx = MEM32(0x8EACCC);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x00075A99u); RECOMP_ABI_CALL(0x00027EEAu, sub_00027EEA); /* call 0x00027EEA */

loc_00075A99: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00075AA3: ;
    ebx = MEM32(esp + 0x14);
    ecx = ebx;
    PUSH32(esp, 0x00075AAEu); RECOMP_ABI_CALL(0x00032624u, sub_00032624); /* call 0x00032624 */

loc_00075AAE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075B2A; /* je: equal / zero */

loc_00075AB2: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi + 0xC) = LO8(eax);
    SET_LO8(edx, LO8(eax));
    SET_LO8(eax, MEM8(esi + 0x1DC));
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00075ADB; /* jl: less (signed <) */

loc_00075AC8: ;
    esi = MEM32(0x8E96FC);
    edx = SX8(LO8(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00075AD7; /* jg: greater (signed >) */

loc_00075AD5: ;
    SET_LO8(ecx, 1);

loc_00075AD7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00075AE6; /* jge: greater or equal (signed >=) */

loc_00075ADB: ;
    eax = MEM32(ebx + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00075B98; /* jne: not equal / not zero */

loc_00075AE6: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00075B98; /* jne: not equal / not zero */

loc_00075AEE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00075AF4u); RECOMP_ABI_CALL(0x00026E78u, sub_00026E78); /* call 0x00026E78 */

loc_00075AF4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075B12; /* je: equal / zero */

loc_00075AFB: ;
    eax = MEM32(0x8EACCC);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00075B08u); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_00075B08: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00075B12: ;
    ecx = MEM32(0x8EACA4);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00075B20u); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_00075B20: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00075B2A: ;
    ecx = ebx;
    PUSH32(esp, 0x00075B31u); RECOMP_ABI_CALL(0x0002207Bu, sub_0002207B); /* call 0x0002207B */

loc_00075B31: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075B6F; /* je: equal / zero */

loc_00075B35: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00075B3Bu); RECOMP_ABI_CALL(0x00026E78u, sub_00026E78); /* call 0x00026E78 */

loc_00075B3B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00075B5A; /* je: equal / zero */

loc_00075B44: ;
    edx = MEM32(0x8EACCC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00075B50u); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_00075B50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00075B5A: ;
    eax = MEM32(0x8EACA4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00075B65u); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_00075B65: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00075B6F: ;
    SET_LO8(eax, MEM8(ebx + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075B8E; /* je: equal / zero */

loc_00075B76: ;
    ecx = MEM32(0x8EAC94);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00075B84u); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_00075B84: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00075B8E: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00075B98u); RECOMP_ABI_CALL(0x00027F2Bu, sub_00027F2B); /* call 0x00027F2B */

loc_00075B98: ;
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
 * sub_00075C50
 * Original: 0x00075C50 - 0x00075FBC (876 bytes, 260 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075C50(void)
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

loc_00075C50: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x34);
    esi = MEM32(edi + 0xC);
    eax = MEM32(esi + 0x1D4);
    PUSH32(esp, eax);
    ebp = ecx;
    PUSH32(esp, 0x00075C6Cu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_00075C6C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075C7F; /* je: equal / zero */

loc_00075C73: ;
    SET_LO8(ecx, MEM8(eax + 4));
    SET_LO8(ebx, MEM8(eax + 5));
    MEM8(esp + 0x34) = LO8(ecx);
    goto loc_00075C86;

loc_00075C7F: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esp + 0x34) = 1;

loc_00075C86: ;
    ecx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x60)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x64)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x897060)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075CBD; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00075CB8: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00075CDC; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00075CBD: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075CC8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00075CC2: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00075CDC;

loc_00075CC8: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00075CDC; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00075CD8: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00075CDC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00075CF2; /* jne: not equal / not zero */

loc_00075CE6: ;
    SET_LO8(ecx, MEM8(esp + 0x34));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00075DD6; /* jne: not equal / not zero */

loc_00075CF2: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0xE);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B694C); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00075D17u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_00075D17: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x2C); /* mulss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x897060)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075D39; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00075D34: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00075D58; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00075D39: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075D44; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00075D3E: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00075D58;

loc_00075D44: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00075D58; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00075D54: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00075D58: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x8F9610); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075D6A; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00075D65: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00075D86; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00075D6A: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075D75; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00075D6F: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00075D86;

loc_00075D75: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00075D86; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00075D82: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00075D86: ;
    PUSH32(esp, 0x8F9608);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00075DA0u); RECOMP_ABI_CALL(0x0002AAFFu, sub_0002AAFF); /* call 0x0002AAFF */

loc_00075DA0: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00075DBEu); RECOMP_ABI_CALL(0x0002AAFFu, sub_0002AAFF); /* call 0x0002AAFF */

loc_00075DBE: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x897060)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_00075DD6: ;
    xmm0 = XMM_SCALAR(MEMF(0x8F9614)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B6950); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075DF0; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00075DEB: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00075E0C; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00075DF0: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075DFB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00075DF5: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00075E0C;

loc_00075DFB: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00075E0C; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00075E08: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00075E0C: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00075E26u); RECOMP_ABI_CALL(0x0002AAFFu, sub_0002AAFF); /* call 0x0002AAFF */

loc_00075E26: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x897060)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075E52; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00075E4D: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00075E77; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00075E52: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075E5D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00075E57: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00075E71;

loc_00075E5D: ;
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00075E71; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm4.f[0]) */

loc_00075E6D: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00075E71: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_00075E77: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00075E8A; /* jne: not equal / not zero */

loc_00075E7B: ;
    SET_LO8(eax, MEM8(esp + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075E8A; /* je: equal / zero */

loc_00075E83: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x1C)); /* movss */
    goto loc_00075E8D;

loc_00075E8A: ;
    xmm0 = xmm3; /* movaps */

loc_00075E8D: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075E9D; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00075E98: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00075EBC; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00075E9D: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075EA8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00075EA2: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00075EBC;

loc_00075EA8: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00075EBC; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00075EB8: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00075EBC: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x4C);
    xmm3 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    ecx = MEM32(esi + 0x20);
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7B6944); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8F9614); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075EF7; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00075EF2: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00075F16; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00075EF7: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075F02; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00075EFC: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00075F16;

loc_00075F02: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00075F16; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00075F12: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00075F16: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075F20; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00075F1B: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00075F3C; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00075F20: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075F2B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00075F25: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00075F3C;

loc_00075F2B: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00075F3C; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00075F38: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00075F3C: ;
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00075F56u); RECOMP_ABI_CALL(0x0002AAFFu, sub_0002AAFF); /* call 0x0002AAFF */

loc_00075F56: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(0x897060)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075F78; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00075F73: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00075F94; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_00075F78: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075F83; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00075F7D: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    goto loc_00075F94;

loc_00075F83: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00075F94; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00075F90: ;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */

loc_00075F94: ;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    eax = esp;
    PUSH32(esp, edi);
    ecx = ebp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00075FB2u); RECOMP_ABI_CALL(0x0001EE94u, sub_0001EE94); /* call 0x0001EE94 */

loc_00075FB2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000760A0
 * Original: 0x000760A0 - 0x0007610A (106 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000760A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000760A0: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM16(ecx + 0xC) = 0x2D;
    MEM32(ecx) = 0x7B6B2C;
    MEM16(ecx + 0x22) = LO16(edx);
    MEM16(ecx + 0x20) = LO16(edx);
    MEM32(ecx + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000760F7; /* je: equal / zero */

loc_000760C7: ;
    edx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 4); /* cvttss2si */
    MEM16(ecx + 0x20) = LO16(eax);
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 4); /* cvttss2si */
    MEM16(ecx + 0x22) = LO16(eax);

loc_000760F7: ;
    SET_LO8(eax, MEM8(esp + 8));
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM8(ecx + 0x25) = LO8(eax);
    MEM8(ecx + 0x24) = LO8(edx);
    eax = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00076130
 * Original: 0x00076130 - 0x00076136 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076130(void)
{

loc_00076130: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00076140
 * Original: 0x00076140 - 0x00076146 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076140(void)
{

loc_00076140: ;
    eax = 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_00076150
 * Original: 0x00076150 - 0x00076171 (33 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00076150: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x28);
    esi = ecx;
    PUSH32(esp, 0x0007615Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0007615C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007616D; /* je: equal / zero */

loc_00076163: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0007616Bu); RECOMP_ABI_CALL(0x0002877Du, sub_0002877D); /* call 0x0002877D */

loc_0007616B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0007616D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00076180
 * Original: 0x00076180 - 0x000761B3 (51 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076180(void)
{

loc_00076180: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0007618Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_0007618E: ;
    MEM32(esi) = 0x7B6B2C;
    eax = MEM32(edi + 0x1C);
    MEM32(esi + 0x1C) = eax;
    ecx = MEM32(edi + 0x20);
    MEM32(esi + 0x20) = ecx;
    SET_LO8(edx, MEM8(edi + 0x24));
    MEM8(esi + 0x24) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0x25));
    MEM8(esi + 0x25) = LO8(eax);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000761C0
 * Original: 0x000761C0 - 0x000761E5 (37 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000761C0(void)
{

loc_000761C0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000761D9u); RECOMP_ABI_CALL(0x000135ADu, sub_000135AD); /* call 0x000135AD */

loc_000761D9: ;
    MEM32(esi) = 0x7B6B3C;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000761F0
 * Original: 0x000761F0 - 0x0007625A (106 bytes, 36 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000761F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000761F0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    ecx = MEM32(edi + 0x1D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00076208u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_00076208: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0x00076214u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_00076214: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076252; /* je: equal / zero */

loc_00076218: ;
    SET_LO8(eax, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076252; /* je: equal / zero */

loc_0007621F: ;
    SET_LO8(eax, MEM8(esi + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00076252; /* jle: less or equal (signed <=) */

loc_00076226: ;
    edx = SX8(LO8(eax));
    PUSH32(esp, edx);
    _fa = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x3C), 1 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0007623Du); RECOMP_ABI_CALL(0x000135ADu, sub_000135AD); /* call 0x000135AD */

loc_0007623D: ;
    ecx = esp + 8;
    MEM32(esp + 8) = 0x7B6B3C;
    PUSH32(esp, 0x0007624Eu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_0007624E: ;
    MEM8(esi + 0xD) = 0;

loc_00076252: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00076280
 * Original: 0x00076280 - 0x00076A71 (2033 bytes, 563 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076280(void)
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

loc_00076280: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x50));
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x54);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0xC);
    edx = MEM32(ebx + 0x1D4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    ecx = MEM32(ebx + 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = ebp;
    _cf = 0; /* logical op clears CF */
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x38) = ecx;
    PUSH32(esp, 0x000762AAu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_000762AA: ;
    ecx = MEM32(ebx + 0x44);
    esi = eax;
    eax = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000762B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000762B4u); } /* indirect call */
    }

loc_000762B7: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x000762C3u); RECOMP_ABI_CALL(0x0002469Bu, sub_0002469B); /* call 0x0002469B */

loc_000762C3: ;
    ecx = MEM32(esp + 0x64);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    ebp = eax;
    eax = MEM32(ebx + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x897060)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00076300; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000762FB: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0007631C; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00076300: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007630B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00076305: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0007631C;

loc_0007630B: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0007631C; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00076318: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_0007631C: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00076331u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_00076331: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x897060)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x28); /* subss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007635F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0007635A: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0007637B; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007635F: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007636A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00076364: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0007637B;

loc_0007636A: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0007637B; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00076377: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_0007637B: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B6580); /* comiss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00076398; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B6580)) */

loc_0007638A: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x897070); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_00076398: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0007639Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007639Cu); } /* indirect call */
    }

loc_0007639F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000763BA; /* je: equal / zero */

loc_000763A6: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    xmm2 = xmm0; /* movaps */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    goto loc_000763C0;

loc_000763BA: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */

loc_000763C0: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B6B4C); /* mulss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x30); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_000763E9; /* jle: less or equal (signed <=) */

loc_000763E1: ;
    eax = (int32_t)MEMF(esp + 0x30); /* cvttss2si */
    goto loc_000763F1;

loc_000763E9: ;
    eax = (int32_t)MEMF(esp + 0x30); /* cvttss2si */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000763F1: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x10);
    MEM8(ecx + esi + 0x11) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm3 = XMM_SCALAR(MEMF(0x7B6964)); /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    MEM8(esi + 0x10) = LO8(edx);
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x14);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x15);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x13);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x12);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x11);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(eax, MEM8(esi + 5));
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((1) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B1E18); /* mulss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0007646A; /* jne: not equal / not zero */

loc_00076462: ;
    MEM8(esi + 0xE) = LO8(eax);
    MEM8(esi + 0xD) = LO8(eax);
    goto loc_0007646D;

loc_0007646A: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) + 1;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_0007646D: ;
    edx = MEM32(esp + 0x64);
    ecx = MEM32(edx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000764A2; /* je: equal / zero */

loc_0007647D: ;
    SET_LO8(ecx, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00076491; /* je: equal / zero */

loc_00076484: ;
    xmm3 = XMM_SCALAR(MEMF(0x7B6958)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000764C6; /* ja: above (unsigned >) (xmm3.f[0] vs xmm0.f[0]) */

loc_00076491: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000764AA; /* je: equal / zero */

loc_00076495: ;
    xmm3 = XMM_SCALAR(MEMF(0x7B695C)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000764C6; /* ja: above (unsigned >) (xmm3.f[0] vs xmm0.f[0]) */

loc_000764A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000765E5; /* jne: not equal / not zero */

loc_000764AA: ;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000765E5; /* jne: not equal / not zero */

loc_000764B5: ;
    xmm3 = XMM_SCALAR(MEMF(0x7B69F8)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000765E5; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_000764C6: ;
    eax = MEM32(esp + 0x64);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(eax + 0x1D4);
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x000764DDu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_000764DD: ;
    ecx = MEM32(esp + 0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x000764EDu); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_000764ED: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00076530; /* je: equal / zero */

loc_000764F1: ;
    eax = MEM32(esp + 0x2C);
    SET_LO8(ecx, MEM8(eax + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00076530; /* je: equal / zero */

loc_000764FC: ;
    SET_LO8(eax, MEM8(eax + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00076530; /* jle: less or equal (signed <=) */

loc_00076503: ;
    edx = SX8(LO8(eax));
    eax = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, 0x00076517u); RECOMP_ABI_CALL(0x000135ADu, sub_000135AD); /* call 0x000135AD */

loc_00076517: ;
    ecx = esp + 0x38;
    MEM32(esp + 0x38) = 0x7B6B3C;
    PUSH32(esp, 0x00076528u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00076528: ;
    ecx = MEM32(esp + 0x2C);
    MEM8(ecx + 0xD) = 0;

loc_00076530: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD450)); /* movss */
    MEM8(esi + 5) = 0;
    MEM8(esi + 4) = 0;
    _fa = (uint32_t)(MEM32(ebx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x28), 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00076556; /* jne: not equal / not zero */

loc_0007654C: ;
    edi = 0x3F8;
    goto loc_000769C4;

loc_00076556: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B6598)); /* movss */
    eax = MEM32(esp + 0x34);
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x40); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7B6594)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007657A; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x40)) */

loc_00076570: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000765BB; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007657A: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x40); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007658E; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x40)) */

loc_00076580: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca > _fcb)) goto loc_000765BB; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_0007658E: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(0));
    ebp = ebp - 0;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000765B1; /* je: equal / zero */

loc_00076593: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000765A7; /* je: equal / zero */

loc_00076596: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000769C4; /* jne: not equal / not zero */

loc_0007659D: ;
    edi = 0x11F;
    goto loc_000769C4;

loc_000765A7: ;
    edi = 0x122;
    goto loc_000769C4;

loc_000765B1: ;
    edi = 0x125;
    goto loc_000769C4;

loc_000765BB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000769C4; /* jl: less (signed <) */

loc_000765C3: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000765DB; /* jle: less or equal (signed <=) */

loc_000765C8: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000769C4; /* jne: not equal / not zero */

loc_000765D1: ;
    edi = 0x3C7;
    goto loc_000769C4;

loc_000765DB: ;
    edi = 0x3C6;
    goto loc_000769C4;

loc_000765E5: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000765F6; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_000765EA: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x30) = 1;
    goto loc_00076603;

loc_000765F6: ;
    edi = 1;
    MEM32(esp + 0x30) = 0;

loc_00076603: ;
    edx = MEM32(esp + 0x24);
    edi = edi + ebp * 2;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM8(esi + 4) = 0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x7B69C8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 0x7B69C8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00076720; /* jne: not equal / not zero */

loc_0007661D: ;
    SET_LO8(eax, MEM8(esi + 0xE));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x40000000);
    ecx = ebx;
    MEM8(esi + 0xE) = LO8(eax);
    PUSH32(esp, 0x00076631u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_00076631: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00076715; /* je: equal / zero */

loc_00076639: ;
    edx = MEM32(esp + 0x64);
    eax = MEM32(edx + 0xC);
    eax = MEM32(eax + 0x1D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007664Cu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0007664C: ;
    SET_LO8(ecx, MEM8(eax + 5));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00076675; /* je: equal / zero */

loc_00076656: ;
    _fa = (uint32_t)(MEM8(eax + 0xE)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xE), 0x12 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00076684; /* jg: greater (signed >) */

loc_0007665C: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B6948)); /* movss */
    edi = MEM32(edi + 0x7B69CC);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    goto loc_000769C4;

loc_00076675: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B6960); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007665C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B6960)) */

loc_00076684: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(0x7AD314)); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000766A6u); RECOMP_ABI_CALL(0x00033362u, sub_00033362); /* call 0x00033362 */

loc_000766A6: ;
    edi = eax;
    eax = MEM32(esp + 0x64);
    MEM8(esi + 4) = 1;
    ebp = MEM32(eax + 0xC);
    ecx = MEM32(ebp + 0x1D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000766BFu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_000766BF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x000766CDu); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_000766CD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0007670C; /* je: equal / zero */

loc_000766D1: ;
    eax = MEM32(esp + 0x30);
    SET_LO8(ecx, MEM8(eax + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0007670C; /* je: equal / zero */

loc_000766DC: ;
    SET_LO8(eax, MEM8(eax + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0007670C; /* jle: less or equal (signed <=) */

loc_000766E3: ;
    edx = SX8(LO8(eax));
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esp + 0x44;
    PUSH32(esp, 0x000766F3u); RECOMP_ABI_CALL(0x000135ADu, sub_000135AD); /* call 0x000135AD */

loc_000766F3: ;
    ecx = esp + 0x38;
    MEM32(esp + 0x38) = 0x7B6B3C;
    PUSH32(esp, 0x00076704u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00076704: ;
    eax = MEM32(esp + 0x30);
    MEM8(eax + 0xD) = 0;

loc_0007670C: ;
    MEM8(esi + 5) = 0;
    goto loc_000769C4;

loc_00076715: ;
    edi = MEM32(edi + 0x7B69C8);
    goto loc_000769C4;

loc_00076720: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x7B69CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 0x7B69CC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00076800; /* jne: not equal / not zero */

loc_0007672C: ;
    SET_LO8(eax, MEM8(esi + 0xE));
    ecx = MEM32(esp + 0x64);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0xE) = LO8(eax);
    eax = MEM32(ecx + 0xC);
    edx = MEM32(eax + 0x1D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00076747u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_00076747: ;
    SET_LO8(ecx, MEM8(eax + 5));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00076760; /* je: equal / zero */

loc_00076751: ;
    _fa = (uint32_t)(MEM8(eax + 0xE)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xE), 0x12 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0007676F; /* jg: greater (signed >) */

loc_00076757: ;
    edi = MEM32(esp + 0x24);
    goto loc_000769C4;

loc_00076760: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B6960); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00076757; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B6960)) */

loc_0007676F: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(0x7AD314)); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00076791u); RECOMP_ABI_CALL(0x00033362u, sub_00033362); /* call 0x00033362 */

loc_00076791: ;
    edx = MEM32(esp + 0x64);
    MEM8(esi + 4) = 1;
    ebp = MEM32(edx + 0xC);
    edi = eax;
    eax = MEM32(ebp + 0x1D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000767AAu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_000767AA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x000767B8u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_000767B8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000767F7; /* je: equal / zero */

loc_000767BC: ;
    eax = MEM32(esp + 0x30);
    SET_LO8(ecx, MEM8(eax + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000767F7; /* je: equal / zero */

loc_000767C7: ;
    SET_LO8(eax, MEM8(eax + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000767F7; /* jle: less or equal (signed <=) */

loc_000767CE: ;
    ecx = SX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esp + 0x44;
    PUSH32(esp, 0x000767DEu); RECOMP_ABI_CALL(0x000135ADu, sub_000135AD); /* call 0x000135AD */

loc_000767DE: ;
    ecx = esp + 0x38;
    MEM32(esp + 0x38) = 0x7B6B3C;
    PUSH32(esp, 0x000767EFu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000767EF: ;
    edx = MEM32(esp + 0x30);
    MEM8(edx + 0xD) = 0;

loc_000767F7: ;
    MEM8(esi + 5) = 0;
    goto loc_000769C4;

loc_00076800: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0007680Au); RECOMP_ABI_CALL(0x0001A060u, sub_0001A060); /* call 0x0001A060 */

loc_0007680A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000768B3; /* je: equal / zero */

loc_00076812: ;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007681Du); RECOMP_ABI_CALL(0x0001BAA0u, sub_0001BAA0); /* call 0x0001BAA0 */

loc_0007681D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00076844; /* je: equal / zero */

loc_00076821: ;
    ecx = MEM32(esp + 0x64);
    eax = MEM32(ecx + 0xC);
    edx = MEM32(eax + 0x1D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00076834u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_00076834: ;
    SET_LO8(ecx, MEM8(eax + 5));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00076871; /* je: equal / zero */

loc_0007683E: ;
    _fa = (uint32_t)(MEM8(eax + 0xE)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xE), 0x12 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00076880; /* jle: less or equal (signed <=) */

loc_00076844: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(0x7AD314)); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00076866u); RECOMP_ABI_CALL(0x00033362u, sub_00033362); /* call 0x00033362 */

loc_00076866: ;
    edi = eax;
    MEM8(esi + 4) = 1;
    goto loc_000769C4;

loc_00076871: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B6960); /* comiss */
    if ((_fca > _fcb)) goto loc_00076844; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7B6960)) */

loc_00076880: ;
    MEM8(esi + 4) = 0;
    MEM8(esi + 5) = 1;
    edi = MEM32(edi + 0x7B69C8);
    ecx = MEM32(ebx + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x00076897u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076894u); } /* indirect call */
    }

loc_00076897: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7B6958)); /* fmul dword ptr [0x7b6958] */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (int32_t)MEMF(esp + 0x34); /* cvttss2si */
    MEM8(esi + 0xE) = LO8(eax);
    goto loc_000769C4;

loc_000768B3: ;
    eax = MEM32(esp + 0x64);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(eax + 0x1D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000768C6u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_000768C6: ;
    SET_LO8(ecx, MEM8(eax + 5));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00076927; /* je: equal / zero */

loc_000768D0: ;
    _fa = (uint32_t)(MEM8(eax + 0xE)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xE), 0x12 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00076936; /* jg: greater (signed >) */

loc_000768D6: ;
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0x000768E6u); RECOMP_ABI_CALL(0x00028F57u, sub_00028F57); /* call 0x00028F57 */

loc_000768E6: ;
    edx = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x24);
    eax = edx + ebp * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM8(esi + 5) = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x7B69C8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x7B69C8) (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = MEM32(edi + 0x7B69C8);
    if (CMP_NE(_fa, _fb)) goto loc_00076960; /* jne: not equal / not zero */

loc_00076906: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B6944)); /* movss */
    ecx = ebx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0007691Bu); RECOMP_ABI_CALL(0x0001AF38u, sub_0001AF38); /* call 0x0001AF38 */

loc_0007691B: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    goto loc_00076998;

loc_00076927: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B6960); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000768D6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B6960)) */

loc_00076936: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(0x7AD314)); /* movss */
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00076958u); RECOMP_ABI_CALL(0x00033362u, sub_00033362); /* call 0x00033362 */

loc_00076958: ;
    edi = eax;
    MEM8(esi + 4) = 1;
    goto loc_000769C4;

loc_00076960: ;
    edx = MEM32(esp + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x7B69CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x7B69CC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00076985; /* jne: not equal / not zero */

loc_0007696C: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B6944)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    goto loc_00076998;

loc_00076985: ;
    ecx = MEM32(ebx + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x0007698Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007698Bu); } /* indirect call */
    }

loc_0007698E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7B6958)); /* fmul dword ptr [0x7b6958] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */

loc_00076998: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x34); /* cvttss2si */
    ecx = ebx;
    MEM8(esi + 0xE) = LO8(eax);
    PUSH32(esp, 0x000769B4u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_000769B4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000769C4; /* je: equal / zero */

loc_000769B8: ;
    PUSH32(esp, 0xD);
    ecx = 0x8EFCB8;
    PUSH32(esp, 0x000769C4u); RECOMP_ABI_CALL(0x00026DE7u, sub_00026DE7); /* call 0x00026DE7 */

loc_000769C4: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebx + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x000769D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000769D5u); } /* indirect call */
    }

loc_000769D8: ;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebx + 0x44);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000769EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000769E7u); } /* indirect call */
    }

loc_000769EA: ;
    eax = MEM32(esp + 0x3C);
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00076A01u); RECOMP_ABI_CALL(0x0002E6CDu, sub_0002E6CD); /* call 0x0002E6CD */

loc_00076A01: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00076A2B; /* je: equal / zero */

loc_00076A05: ;
    eax = MEM32(esp + 0x64);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x50)) >> 32) & 1);
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00076A2B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esi = MEM32(esp + 0x64);
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebx + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00076A3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076A3Cu); } /* indirect call */
    }

loc_00076A3F: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(ebx + 0x44);
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x00076A4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076A4Au); } /* indirect call */
    }

loc_00076A4D: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 0 || g_fp_cmp == 1) /* fcompi */) goto loc_00076A60; /* jae: above or equal (unsigned >=) */

loc_00076A5A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_00076A60: ;
    POP32(esp, edi);
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x50)) >> 32) & 1);
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
 * sub_00076C70
 * Original: 0x00076C70 - 0x00076C77 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076C70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00076C70: ;
    fp_push((double)SMEM32(0x896EA8)); /* fild */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00076C80
 * Original: 0x00076C80 - 0x00076CB1 (49 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076C80(void)
{
    int _flags = 0; /* fallback flag var */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00076C80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00076C89u); RECOMP_ABI_CALL(0x00021C61u, sub_00021C61); /* call 0x00021C61 */

loc_00076C89: ;
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0x34) - fp_top()); /* fsubr dword ptr [esi + 0x34] */
    POP32(esp, esi);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x7AA840)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_00076CA7; /* ja: above (unsigned >) */

loc_00076CA4: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_00076CA7: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
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
 * sub_00076CC0
 * Original: 0x00076CC0 - 0x00076CDC (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076CC0(void)
{

loc_00076CC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x00076CCCu); RECOMP_ABI_CALL(0x000167D5u, sub_000167D5); /* call 0x000167D5 */

loc_00076CCC: ;
    MEM32(esi) = 0x7B706C;
    MEM32(0x8EACC4) = esi;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00076CF0
 * Original: 0x00076CF0 - 0x00076CF5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00076CF0: ;
    g_seh_ebp = ebp; sub_00027F2B(); return; /* tail jmp 0x00027F2B */

}

/**
 * sub_00076D00
 * Original: 0x00076D00 - 0x00076D15 (21 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00076D00: ;
    MEM32(ecx) = 0x7B706C;
    MEM32(0x8EACC4) = 0;
    g_seh_ebp = ebp; sub_0001D251(); return; /* tail jmp 0x0001D251 */

}

/**
 * sub_00076D20
 * Original: 0x00076D20 - 0x00076D25 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00076D20: ;
    g_seh_ebp = ebp; sub_00021A90(); return; /* tail jmp 0x00021A90 */

}

/**
 * sub_00076D30
 * Original: 0x00076D30 - 0x00076D77 (71 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076D30(void)
{

loc_00076D30: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x20);
    eax = MEM32(eax + 0x3C);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 0x30);
    MEM32(esi + 0x94) = ecx;
    ecx = esi;
    PUSH32(esp, 0x00076D52u); RECOMP_ABI_CALL(0x00029EF2u, sub_00029EF2); /* call 0x00029EF2 */

loc_00076D52: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = esi;
    MEMF(esi + 0x94) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00076D69u); RECOMP_ABI_CALL(0x000237F5u, sub_000237F5); /* call 0x000237F5 */

loc_00076D69: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00076D71u); RECOMP_ABI_CALL(0x000315E9u, sub_000315E9); /* call 0x000315E9 */

loc_00076D71: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00076D90
 * Original: 0x00076D90 - 0x00076EA1 (273 bytes, 86 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00076D90: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD450)); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x28), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076DBB; /* jne: not equal / not zero */

loc_00076DB4: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00076DBB: ;
    PUSH32(esp, ebx);
    ecx = edi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00076DC5u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_00076DC5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076DD0; /* je: equal / zero */

loc_00076DC9: ;
    ebx = 2;
    goto loc_00076DE8;

loc_00076DD0: ;
    ecx = edi;
    PUSH32(esp, 0x00076DD7u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_00076DD7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076DE3; /* jne: not equal / not zero */

loc_00076DDB: ;
    eax = MEM32(edi + 0x54);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00076DE8; /* je: equal / zero */

loc_00076DE3: ;
    ebx = 1;

loc_00076DE8: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x8F95F4); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x897094)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00076E0A; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00076E05: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00076E35; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00076E0A: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00076E15; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00076E0F: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00076E35;

loc_00076E15: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00076E27; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00076E1E: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_00076E35;

loc_00076E27: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */

loc_00076E35: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(0x8F9608); /* divss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    edx = MEM32(edi);
    ecx = edi;
    esi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00076E52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076E4Fu); } /* indirect call */
    }

loc_00076E52: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076E6C; /* je: equal / zero */

loc_00076E56: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076E62; /* jne: not equal / not zero */

loc_00076E5B: ;
    esi = 3;
    goto loc_00076E6C;

loc_00076E62: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076E6C; /* jne: not equal / not zero */

loc_00076E67: ;
    esi = 1;

loc_00076E6C: ;
    eax = MEM32(edi + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AB1DC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00076E8F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AB1DC)) */

loc_00076E7D: ;
    ecx = ebx + esi * 2;
    POP32(esp, ebx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx * 4 + 0x7B6F54);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00076E8F: ;
    edx = ebx + esi * 2;
    POP32(esp, ebx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx * 4 + 0x7B6F18);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00076EF0
 * Original: 0x00076EF0 - 0x00076EFA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076EF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00076EF0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0x24)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00076F00
 * Original: 0x00076F00 - 0x00076F2E (46 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00076F00: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7B706C;
    MEM32(0x8EACC4) = 0;
    PUSH32(esp, 0x00076F18u); RECOMP_ABI_CALL(0x0001D251u, sub_0001D251); /* call 0x0001D251 */

loc_00076F18: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00076F28; /* je: equal / zero */

loc_00076F1F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00076F25u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00076F25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00076F28: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00076F40
 * Original: 0x00076F40 - 0x00076FDE (158 bytes, 61 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076F40(void)
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

loc_00076F40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 0x28);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x4C);
    if (CMP_EQ(_fa, _fb)) goto loc_00076FD5; /* je: equal / zero */

loc_00076F58: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00076FD5; /* jge: greater or equal (signed >=) */

loc_00076F62: ;
    ecx = edi;
    PUSH32(esp, 0x00076F69u); RECOMP_ABI_CALL(0x00021C61u, sub_00021C61); /* call 0x00021C61 */

loc_00076F69: ;
    fp_top() = RECOMP_FP_PC(MEMF(edi + 0x34) - fp_top()); /* fsubr dword ptr [edi + 0x34] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x7AA840)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00076F8F; /* jbe: below or equal (unsigned <=) */

loc_00076F80: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B70AC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00076FD5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x14)) */

loc_00076F8F: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8EACC4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x8EACC4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076FA7; /* je: equal / zero */

loc_00076F9A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00076FA0u); RECOMP_ABI_CALL(0x00016BBDu, sub_00016BBD); /* call 0x00016BBD */

loc_00076FA0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076FD5; /* je: equal / zero */

loc_00076FA7: ;
    eax = MEM32(edi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076FCC; /* je: equal / zero */

loc_00076FAE: ;
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00076FBBu); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_00076FBB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00076FD5; /* jl: less (signed <) */

loc_00076FC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00076FCC; /* jle: less or equal (signed <=) */

loc_00076FC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076FD5; /* jne: not equal / not zero */

loc_00076FCC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00076FD5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00077010
 * Original: 0x00077010 - 0x000770B3 (163 bytes, 59 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077010(void)
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

loc_00077010: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(ebx + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00077024u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077021u); } /* indirect call */
    }

loc_00077024: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x7B6F10)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00077058; /* jbe: below or equal (unsigned <=) */

loc_00077038: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00077040u); RECOMP_ABI_CALL(0x0001C018u, sub_0001C018); /* call 0x0001C018 */

loc_00077040: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00077058; /* jne: not equal / not zero */

loc_00077044: ;
    ecx = MEM32(0x8EACA4);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00077052u); RECOMP_ABI_CALL(0x00027EEAu, sub_00027EEA); /* call 0x00027EEA */

loc_00077052: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00077058: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD450)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00077087; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x10)) */

loc_00077067: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0007706Fu); RECOMP_ABI_CALL(0x0001C018u, sub_0001C018); /* call 0x0001C018 */

loc_0007706F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00077087; /* jne: not equal / not zero */

loc_00077073: ;
    edx = MEM32(0x8EACA4);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00077081u); RECOMP_ABI_CALL(0x00027EEAu, sub_00027EEA); /* call 0x00027EEA */

loc_00077081: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00077087: ;
    xmm0.f[0] = (float)(int32_t)MEM32(0x896EA8); /* cvtsi2ss */
    PUSH32(esp, ecx);
    ecx = ebx;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0007709Cu); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0007709C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000770AD; /* je: equal / zero */

loc_000770A0: ;
    eax = MEM32(0x8EACA4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000770ADu); RECOMP_ABI_CALL(0x00027EEAu, sub_00027EEA); /* call 0x00027EEA */

loc_000770AD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000770E0
 * Original: 0x000770E0 - 0x000770FC (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000770E0(void)
{

loc_000770E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x000770ECu); RECOMP_ABI_CALL(0x000167D5u, sub_000167D5); /* call 0x000167D5 */

loc_000770EC: ;
    MEM32(esi) = 0x7B754C;
    MEM32(0x8EACC8) = esi;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00077110
 * Original: 0x00077110 - 0x00077125 (21 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00077110: ;
    MEM32(ecx) = 0x7B754C;
    MEM32(0x8EACC8) = 0;
    g_seh_ebp = ebp; sub_0001D251(); return; /* tail jmp 0x0001D251 */

}

/**
 * sub_00077130
 * Original: 0x00077130 - 0x00077160 (48 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00077130: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007713Bu); RECOMP_ABI_CALL(0x00021A90u, sub_00021A90); /* call 0x00021A90 */

loc_0007713B: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007715C; /* jne: not equal / not zero */

loc_00077144: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x20);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0007715Cu); RECOMP_ABI_CALL(0x00034A1Eu, sub_00034A1E); /* call 0x00034A1E */

loc_0007715C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00077170
 * Original: 0x00077170 - 0x00077235 (197 bytes, 74 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00077170: ;
    ecx = MEM32(0x8EACA0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x4C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00077189u); RECOMP_ABI_CALL(0x0001BCFDu, sub_0001BCFD); /* call 0x0001BCFD */

loc_00077189: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000771A0; /* je: equal / zero */

loc_0007718D: ;
    eax = MEM32(0x8EACA0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0007719Au); RECOMP_ABI_CALL(0x00027EEAu, sub_00027EEA); /* call 0x00027EEA */

loc_0007719A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000771A0: ;
    ecx = MEM32(0x8EACBC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000771ACu); RECOMP_ABI_CALL(0x00024597u, sub_00024597); /* call 0x00024597 */

loc_000771AC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000771C4; /* je: equal / zero */

loc_000771B0: ;
    ecx = MEM32(0x8EACBC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000771BEu); RECOMP_ABI_CALL(0x00027EEAu, sub_00027EEA); /* call 0x00027EEA */

loc_000771BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000771C4: ;
    SET_LO8(eax, MEM8(edi + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000771EA; /* je: equal / zero */

loc_000771CB: ;
    ecx = edi;
    PUSH32(esp, 0x000771D2u); RECOMP_ABI_CALL(0x00032624u, sub_00032624); /* call 0x00032624 */

loc_000771D2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000771EA; /* jne: not equal / not zero */

loc_000771D6: ;
    edx = MEM32(0x8EAC94);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000771E4u); RECOMP_ABI_CALL(0x00031107u, sub_00031107); /* call 0x00031107 */

loc_000771E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000771EA: ;
    ecx = edi;
    PUSH32(esp, 0x000771F1u); RECOMP_ABI_CALL(0x00032624u, sub_00032624); /* call 0x00032624 */

loc_000771F1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00077208; /* je: equal / zero */

loc_000771F5: ;
    eax = MEM32(0x8EACA4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00077202u); RECOMP_ABI_CALL(0x00027EEAu, sub_00027EEA); /* call 0x00027EEA */

loc_00077202: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00077208: ;
    xmm0.f[0] = (float)(int32_t)MEM32(0x896EA8); /* cvtsi2ss */
    PUSH32(esp, ecx);
    ecx = ebx;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0007721Du); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_0007721D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007722F; /* je: equal / zero */

loc_00077221: ;
    ecx = MEM32(0x8EACC0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0007722Fu); RECOMP_ABI_CALL(0x00027EEAu, sub_00027EEA); /* call 0x00027EEA */

loc_0007722F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00077270
 * Original: 0x00077270 - 0x000772D3 (99 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077270(void)
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

loc_00077270: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0xC);
    ebp = MEM32(esi + 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00077286u); RECOMP_ABI_CALL(0x0002469Bu, sub_0002469B); /* call 0x0002469B */

loc_00077286: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00077298; /* jne: not equal / not zero */

loc_0007728C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x3F9;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00077298: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x40)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B70CC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000772AB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B70CC)) */

loc_000772A6: ;
    edi = 1;

loc_000772AB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = eax + edi * 2;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEMF(ebx + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD450)); /* movss */
    POP32(esp, esi);
    MEMF(ebx + 0x2C) = xmm0.f[0]; /* movss */
    eax = MEM32(eax * 4 + 0x7B7470);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000772F0
 * Original: 0x000772F0 - 0x000772FA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000772F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000772F0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0x24)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00077300
 * Original: 0x00077300 - 0x0007733B (59 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00077300: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007730Bu); RECOMP_ABI_CALL(0x00016BBDu, sub_00016BBD); /* call 0x00016BBD */

loc_0007730B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00077335; /* je: equal / zero */

loc_00077312: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 0x4C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x40); /* comiss */
    if ((_fca >= _fcb)) goto loc_00077335; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(eax + 0x40)) */

loc_00077321: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AB1CC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00077335; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AB1CC)) */

loc_0007732F: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00077335: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00077350
 * Original: 0x00077350 - 0x00077489 (313 bytes, 94 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00077350: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x8970D0)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007739B; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0007738E: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007739B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00077393: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    goto loc_000773CC;

loc_0007739B: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000773A9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000773A0: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    goto loc_000773C6;

loc_000773A9: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000773BB; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000773B2: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    goto loc_000773C6;

loc_000773BB: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_000773C6: ;
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */

loc_000773CC: ;
    xmm0 = XMM_SCALAR(MEMF(0x8F9610)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx + 0x4C);
    PUSH32(esp, 0x000773E2u); RECOMP_ABI_CALL(0x0002207Bu, sub_0002207B); /* call 0x0002207B */

loc_000773E2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00077402; /* je: equal / zero */

loc_000773E6: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000773F1u); RECOMP_ABI_CALL(0x000352F2u, sub_000352F2); /* call 0x000352F2 */

loc_000773F1: ;
    xmm0 = XMM_SCALAR(MEMF(0x8F95F0)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_00077402: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00077416u); RECOMP_ABI_CALL(0x0002AAFFu, sub_0002AAFF); /* call 0x0002AAFF */

loc_00077416: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x8970D0)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00077438; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00077433: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00077463; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00077438: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00077443; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0007743D: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00077463;

loc_00077443: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00077455; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0007744C: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_00077463;

loc_00077455: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */

loc_00077463: ;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    eax = esp;
    PUSH32(esp, esi);
    ecx = edi;
    MEMF(eax) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00077481u); RECOMP_ABI_CALL(0x0001EE94u, sub_0001EE94); /* call 0x0001EE94 */

loc_00077481: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000774E0
 * Original: 0x000774E0 - 0x0007750E (46 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000774E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000774E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7B754C;
    MEM32(0x8EACC8) = 0;
    PUSH32(esp, 0x000774F8u); RECOMP_ABI_CALL(0x0001D251u, sub_0001D251); /* call 0x0001D251 */

loc_000774F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00077508; /* je: equal / zero */

loc_000774FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00077505u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00077505: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00077508: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00077520
 * Original: 0x00077520 - 0x0007771C (508 bytes, 153 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077520(void)
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

loc_00077520: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    ebx = MEM32(edi + 0xC);
    esi = MEM32(ebx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x8970D0)); /* movss */
    ebp = ecx;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007755E; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_00077551: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007755E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00077556: ;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    goto loc_00077589;

loc_0007755E: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007756C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00077563: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm2 = xmm1; /* movaps */
    goto loc_00077583;

loc_0007756C: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00077583; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0007757F: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */

loc_00077583: ;
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */

loc_00077589: ;
    xmm1.f[0] = (float)(int32_t)MEM32(0x8970CC); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AB7C8); /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000775AB; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_0007759E: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000775AB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000775A3: ;
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    goto loc_000775DC;

loc_000775AB: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000775B9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_000775B0: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm2 = xmm1; /* movaps */
    goto loc_000775D6;

loc_000775B9: ;
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000775CB; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_000775C2: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    goto loc_000775D6;

loc_000775CB: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */

loc_000775D6: ;
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */

loc_000775DC: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000775F0u); RECOMP_ABI_CALL(0x0002AAFFu, sub_0002AAFF); /* call 0x0002AAFF */

loc_000775F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000775FBu); RECOMP_ABI_CALL(0x00011E6Fu, sub_00011E6F); /* call 0x00011E6F */

loc_000775FB: ;
    xmm0.f[0] = (float)(int32_t)MEM32(0x8970C8); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB7C8); /* mulss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x8970D0)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00077628; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0007761B: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00077628; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00077620: ;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    goto loc_00077659;

loc_00077628: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00077636; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0007762D: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    goto loc_00077653;

loc_00077636: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00077648; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0007763F: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    goto loc_00077653;

loc_00077648: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_00077653: ;
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */

loc_00077659: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00077678u); RECOMP_ABI_CALL(0x0002AAFFu, sub_0002AAFF); /* call 0x0002AAFF */

loc_00077678: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x8970D0)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007769E; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00077699: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000776CC; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007769E: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000776A9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000776A3: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_000776CC;

loc_000776A9: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000776BE; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_000776B5: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_000776CC;

loc_000776BE: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */

loc_000776CC: ;
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x1C);
    eax = esp;
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    PUSH32(esp, ebx);
    MEM32(eax) = ecx;
    PUSH32(esp, 0x000776FBu); RECOMP_ABI_CALL(0x00031CBAu, sub_00031CBA); /* call 0x00031CBA */

loc_000776FB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0007770Au); RECOMP_ABI_CALL(0x0001402Au, sub_0001402A); /* call 0x0001402A */

loc_0007770A: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x00077712u); RECOMP_ABI_CALL(0x000315E9u, sub_000315E9); /* call 0x000315E9 */

loc_00077712: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000777A0
 * Original: 0x000777A0 - 0x000777BB (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000777A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000777A0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(MEM32(edx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x28), 5 (32-bit) */
    MEM32(esp + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000777B6; /* jne: not equal / not zero */

loc_000777B1: ;
    g_seh_ebp = ebp; sub_0001D29C(); return; /* tail jmp 0x0001D29C */

loc_000777B6: ;
    g_seh_ebp = ebp; sub_0003754D(); return; /* tail jmp 0x0003754D */

}

/**
 * sub_000777D0
 * Original: 0x000777D0 - 0x000777E4 (20 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000777D0(void)
{

loc_000777D0: ;
    eax = ecx;
    MEM32(eax) = 0x7B7A0C;
    MEM32(eax + 8) = 0xA;
    MEM8(eax + 0xC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000777F0
 * Original: 0x000777F0 - 0x00077809 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000777F0(void)
{

loc_000777F0: ;
    SET_LO8(edx, MEM8(esp + 8));
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x7B7A0C;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0xC) = LO8(edx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00077810
 * Original: 0x00077810 - 0x00077817 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077810(void)
{

loc_00077810: ;
    MEM32(ecx) = 0x7B7A0C;
    esp += 4; return; /* ret */

}
