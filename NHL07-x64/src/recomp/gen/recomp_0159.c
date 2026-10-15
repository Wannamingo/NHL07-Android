/**
 * nhl_07_recomp - Recompiled code chunk 159
 * Functions: 250 (0x0030C680 - 0x003147B0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0030C680
 * Original: 0x0030C680 - 0x0030C694 (20 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C680(void)
{

loc_0030C680: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030C691u); RECOMP_ABI_CALL(0x0002B527u, sub_0002B527); /* call 0x0002B527 */

loc_0030C691: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0030C6A0
 * Original: 0x0030C6A0 - 0x0030C6F4 (84 bytes, 33 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C6A0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0030C6A0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    MEM32(esi) = edi;
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030C6D5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_0030C6BF: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030C6CC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_0030C6C8: ;
    eax = MEM32(eax);
    MEM32(esi) = eax;

loc_0030C6CC: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* comiss */
    goto loc_0030C6E9;

loc_0030C6D5: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030C6E2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_0030C6DE: ;
    eax = MEM32(eax);
    MEM32(esi) = eax;

loc_0030C6E2: ;
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */

loc_0030C6E9: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030C6EF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_0030C6EB: ;
    ecx = MEM32(edx);
    MEM32(esi) = ecx;

loc_0030C6EF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0030C710
 * Original: 0x0030C710 - 0x0030C727 (23 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C710(void)
{

loc_0030C710: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030C724u); RECOMP_ABI_CALL(0x00033C9Fu, sub_00033C9F); /* call 0x00033C9F */

loc_0030C724: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0030C730
 * Original: 0x0030C730 - 0x0030C762 (50 bytes, 21 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0030C730(void)
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

loc_0030C730: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(ecx);
    ecx = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(ecx);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    edx = MEM32(ecx);
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030C756u); RECOMP_ABI_CALL(0x00024EB1u, sub_00024EB1); /* call 0x00024EB1 */

loc_0030C756: ;
    edx = MEM32(esp + 0x1C);
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0030C770
 * Original: 0x0030C770 - 0x0030C794 (36 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C770(void)
{

loc_0030C770: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030C791u); RECOMP_ABI_CALL(0x00025726u, sub_00025726); /* call 0x00025726 */

loc_0030C791: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0030C7A0
 * Original: 0x0030C7A0 - 0x0030C851 (177 bytes, 48 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C7A0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0030C7A0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    edx = MEM32(eax + 0x14);
    xmm4 = XMM_SCALAR(MEMF(edx)); /* movss */
    edx = MEM32(eax + 0x10);
    xmm5 = XMM_SCALAR(MEMF(edx)); /* movss */
    edx = MEM32(eax + 0xC);
    xmm3 = XMM_SCALAR(MEMF(edx)); /* movss */
    edx = MEM32(eax + 8);
    ecx = MEM32(eax + 0x18);
    eax = MEM32(eax + 4);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(edx)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030C7D8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0030C7D5: ;
    xmm0 = xmm1; /* movaps */

loc_0030C7D8: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030C7E0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0030C7DD: ;
    xmm0 = xmm3; /* movaps */

loc_0030C7E0: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030C803; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0030C7F0: ;
    xmm6 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm6.f[0] = xmm6.f[0] / xmm1.f[0]; /* divss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm6; /* movaps */

loc_0030C803: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030C81B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0030C808: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm3.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */

loc_0030C81B: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    ecx = MEM32(esp + 8);
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
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0030C880
 * Original: 0x0030C880 - 0x0030C8AC (44 bytes, 19 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C880(void)
{

loc_0030C880: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030C8A9u); RECOMP_ABI_CALL(0x0001BE79u, sub_0001BE79); /* call 0x0001BE79 */

loc_0030C8A9: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0030C8C0
 * Original: 0x0030C8C0 - 0x0030C8F5 (53 bytes, 23 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C8C0(void)
{

loc_0030C8C0: ;
    eax = MEM32(esp + 4);
    edx = eax + 0x1C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030C8F2u); RECOMP_ABI_CALL(0x0001A948u, sub_0001A948); /* call 0x0001A948 */

loc_0030C8F2: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0030C910
 * Original: 0x0030C910 - 0x0030C938 (40 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030C910: ;
    _fa = (uint32_t)(MEM32(0x8E932C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8E932C), 2 (32-bit) */
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0030C92D; /* jne: not equal / not zero */

loc_0030C91F: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    esp += 16; return; /* ret 12 */

loc_0030C92D: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0030C950
 * Original: 0x0030C950 - 0x0030C986 (54 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030C950: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x825B48;
    if (CMP_EQ(_fa, _fb)) goto loc_0030C966; /* je: equal / zero */

loc_0030C960: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030C966u); RECOMP_ABI_CALL(0x000347B7u, sub_000347B7); /* call 0x000347B7 */

loc_0030C966: ;
    ecx = esi;
    PUSH32(esp, 0x0030C96Du); RECOMP_ABI_CALL(0x0001490Du, sub_0001490D); /* call 0x0001490D */

loc_0030C96D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030C980; /* je: equal / zero */

loc_0030C974: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030C980u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030C97Du); } /* indirect call */
    }

loc_0030C980: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030C9A0
 * Original: 0x0030C9A0 - 0x0030C9D6 (54 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C9A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030C9A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x825B7C;
    if (CMP_EQ(_fa, _fb)) goto loc_0030C9B6; /* je: equal / zero */

loc_0030C9B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030C9B6u); RECOMP_ABI_CALL(0x000347B7u, sub_000347B7); /* call 0x000347B7 */

loc_0030C9B6: ;
    ecx = esi;
    PUSH32(esp, 0x0030C9BDu); RECOMP_ABI_CALL(0x0001490Du, sub_0001490D); /* call 0x0001490D */

loc_0030C9BD: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030C9D0; /* je: equal / zero */

loc_0030C9C4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030C9D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030C9CDu); } /* indirect call */
    }

loc_0030C9D0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030C9F0
 * Original: 0x0030C9F0 - 0x0030CA26 (54 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C9F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030C9F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x825BB0;
    if (CMP_EQ(_fa, _fb)) goto loc_0030CA06; /* je: equal / zero */

loc_0030CA00: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030CA06u); RECOMP_ABI_CALL(0x000347B7u, sub_000347B7); /* call 0x000347B7 */

loc_0030CA06: ;
    ecx = esi;
    PUSH32(esp, 0x0030CA0Du); RECOMP_ABI_CALL(0x0001490Du, sub_0001490D); /* call 0x0001490D */

loc_0030CA0D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030CA20; /* je: equal / zero */

loc_0030CA14: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030CA20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030CA1Du); } /* indirect call */
    }

loc_0030CA20: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030CA40
 * Original: 0x0030CA40 - 0x0030CA76 (54 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030CA40: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x825BE4;
    if (CMP_EQ(_fa, _fb)) goto loc_0030CA56; /* je: equal / zero */

loc_0030CA50: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030CA56u); RECOMP_ABI_CALL(0x000347B7u, sub_000347B7); /* call 0x000347B7 */

loc_0030CA56: ;
    ecx = esi;
    PUSH32(esp, 0x0030CA5Du); RECOMP_ABI_CALL(0x0001490Du, sub_0001490D); /* call 0x0001490D */

loc_0030CA5D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030CA70; /* je: equal / zero */

loc_0030CA64: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030CA70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030CA6Du); } /* indirect call */
    }

loc_0030CA70: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030CA90
 * Original: 0x0030CA90 - 0x0030CAC6 (54 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CA90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030CA90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x825C18;
    if (CMP_EQ(_fa, _fb)) goto loc_0030CAA6; /* je: equal / zero */

loc_0030CAA0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030CAA6u); RECOMP_ABI_CALL(0x000347B7u, sub_000347B7); /* call 0x000347B7 */

loc_0030CAA6: ;
    ecx = esi;
    PUSH32(esp, 0x0030CAADu); RECOMP_ABI_CALL(0x0001490Du, sub_0001490D); /* call 0x0001490D */

loc_0030CAAD: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030CAC0; /* je: equal / zero */

loc_0030CAB4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030CAC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030CABDu); } /* indirect call */
    }

loc_0030CAC0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030CAE0
 * Original: 0x0030CAE0 - 0x0030CB16 (54 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CAE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030CAE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x825C4C;
    if (CMP_EQ(_fa, _fb)) goto loc_0030CAF6; /* je: equal / zero */

loc_0030CAF0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030CAF6u); RECOMP_ABI_CALL(0x000347B7u, sub_000347B7); /* call 0x000347B7 */

loc_0030CAF6: ;
    ecx = esi;
    PUSH32(esp, 0x0030CAFDu); RECOMP_ABI_CALL(0x0001490Du, sub_0001490D); /* call 0x0001490D */

loc_0030CAFD: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030CB10; /* je: equal / zero */

loc_0030CB04: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030CB10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030CB0Du); } /* indirect call */
    }

loc_0030CB10: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030CB30
 * Original: 0x0030CB30 - 0x0030CB66 (54 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030CB30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x825C80;
    if (CMP_EQ(_fa, _fb)) goto loc_0030CB46; /* je: equal / zero */

loc_0030CB40: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030CB46u); RECOMP_ABI_CALL(0x000347B7u, sub_000347B7); /* call 0x000347B7 */

loc_0030CB46: ;
    ecx = esi;
    PUSH32(esp, 0x0030CB4Du); RECOMP_ABI_CALL(0x0001490Du, sub_0001490D); /* call 0x0001490D */

loc_0030CB4D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030CB60; /* je: equal / zero */

loc_0030CB54: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030CB60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030CB5Du); } /* indirect call */
    }

loc_0030CB60: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030CB80
 * Original: 0x0030CB80 - 0x0030CBB6 (54 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CB80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030CB80: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x825CB4;
    if (CMP_EQ(_fa, _fb)) goto loc_0030CB96; /* je: equal / zero */

loc_0030CB90: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030CB96u); RECOMP_ABI_CALL(0x000347B7u, sub_000347B7); /* call 0x000347B7 */

loc_0030CB96: ;
    ecx = esi;
    PUSH32(esp, 0x0030CB9Du); RECOMP_ABI_CALL(0x0001490Du, sub_0001490D); /* call 0x0001490D */

loc_0030CB9D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030CBB0; /* je: equal / zero */

loc_0030CBA4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030CBB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030CBADu); } /* indirect call */
    }

loc_0030CBB0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030CBD0
 * Original: 0x0030CBD0 - 0x0030CC06 (54 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CBD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030CBD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x825CE8;
    if (CMP_EQ(_fa, _fb)) goto loc_0030CBE6; /* je: equal / zero */

loc_0030CBE0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030CBE6u); RECOMP_ABI_CALL(0x000347B7u, sub_000347B7); /* call 0x000347B7 */

loc_0030CBE6: ;
    ecx = esi;
    PUSH32(esp, 0x0030CBEDu); RECOMP_ABI_CALL(0x0001490Du, sub_0001490D); /* call 0x0001490D */

loc_0030CBED: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030CC00; /* je: equal / zero */

loc_0030CBF4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030CC00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030CBFDu); } /* indirect call */
    }

loc_0030CC00: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030CC20
 * Original: 0x0030CC20 - 0x0030CC56 (54 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030CC20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x825D1C;
    if (CMP_EQ(_fa, _fb)) goto loc_0030CC36; /* je: equal / zero */

loc_0030CC30: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030CC36u); RECOMP_ABI_CALL(0x000347B7u, sub_000347B7); /* call 0x000347B7 */

loc_0030CC36: ;
    ecx = esi;
    PUSH32(esp, 0x0030CC3Du); RECOMP_ABI_CALL(0x0001490Du, sub_0001490D); /* call 0x0001490D */

loc_0030CC3D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030CC50; /* je: equal / zero */

loc_0030CC44: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030CC50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030CC4Du); } /* indirect call */
    }

loc_0030CC50: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030CC70
 * Original: 0x0030CC70 - 0x0030CCA6 (54 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CC70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030CC70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x825D50;
    if (CMP_EQ(_fa, _fb)) goto loc_0030CC86; /* je: equal / zero */

loc_0030CC80: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030CC86u); RECOMP_ABI_CALL(0x000347B7u, sub_000347B7); /* call 0x000347B7 */

loc_0030CC86: ;
    ecx = esi;
    PUSH32(esp, 0x0030CC8Du); RECOMP_ABI_CALL(0x0001490Du, sub_0001490D); /* call 0x0001490D */

loc_0030CC8D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030CCA0; /* je: equal / zero */

loc_0030CC94: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030CCA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030CC9Du); } /* indirect call */
    }

loc_0030CCA0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030CCC0
 * Original: 0x0030CCC0 - 0x0030CCF6 (54 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CCC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030CCC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x825D84;
    if (CMP_EQ(_fa, _fb)) goto loc_0030CCD6; /* je: equal / zero */

loc_0030CCD0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030CCD6u); RECOMP_ABI_CALL(0x000347B7u, sub_000347B7); /* call 0x000347B7 */

loc_0030CCD6: ;
    ecx = esi;
    PUSH32(esp, 0x0030CCDDu); RECOMP_ABI_CALL(0x0001490Du, sub_0001490D); /* call 0x0001490D */

loc_0030CCDD: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030CCF0; /* je: equal / zero */

loc_0030CCE4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030CCF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030CCEDu); } /* indirect call */
    }

loc_0030CCF0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030CD10
 * Original: 0x0030CD10 - 0x0030CD46 (54 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CD10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030CD10: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x825DB8;
    if (CMP_EQ(_fa, _fb)) goto loc_0030CD26; /* je: equal / zero */

loc_0030CD20: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030CD26u); RECOMP_ABI_CALL(0x000347B7u, sub_000347B7); /* call 0x000347B7 */

loc_0030CD26: ;
    ecx = esi;
    PUSH32(esp, 0x0030CD2Du); RECOMP_ABI_CALL(0x0001490Du, sub_0001490D); /* call 0x0001490D */

loc_0030CD2D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030CD40; /* je: equal / zero */

loc_0030CD34: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030CD40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030CD3Du); } /* indirect call */
    }

loc_0030CD40: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030CD60
 * Original: 0x0030CD60 - 0x0030CD96 (54 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CD60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030CD60: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x825DEC;
    if (CMP_EQ(_fa, _fb)) goto loc_0030CD76; /* je: equal / zero */

loc_0030CD70: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030CD76u); RECOMP_ABI_CALL(0x000347B7u, sub_000347B7); /* call 0x000347B7 */

loc_0030CD76: ;
    ecx = esi;
    PUSH32(esp, 0x0030CD7Du); RECOMP_ABI_CALL(0x0001490Du, sub_0001490D); /* call 0x0001490D */

loc_0030CD7D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030CD90; /* je: equal / zero */

loc_0030CD84: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030CD90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030CD8Du); } /* indirect call */
    }

loc_0030CD90: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030CDB0
 * Original: 0x0030CDB0 - 0x0030CDE6 (54 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030CDB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x825E20;
    if (CMP_EQ(_fa, _fb)) goto loc_0030CDC6; /* je: equal / zero */

loc_0030CDC0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030CDC6u); RECOMP_ABI_CALL(0x000347B7u, sub_000347B7); /* call 0x000347B7 */

loc_0030CDC6: ;
    ecx = esi;
    PUSH32(esp, 0x0030CDCDu); RECOMP_ABI_CALL(0x0001490Du, sub_0001490D); /* call 0x0001490D */

loc_0030CDCD: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030CDE0; /* je: equal / zero */

loc_0030CDD4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030CDE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030CDDDu); } /* indirect call */
    }

loc_0030CDE0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030CE00
 * Original: 0x0030CE00 - 0x0030CE36 (54 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030CE00: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x825E54;
    if (CMP_EQ(_fa, _fb)) goto loc_0030CE16; /* je: equal / zero */

loc_0030CE10: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030CE16u); RECOMP_ABI_CALL(0x000347B7u, sub_000347B7); /* call 0x000347B7 */

loc_0030CE16: ;
    ecx = esi;
    PUSH32(esp, 0x0030CE1Du); RECOMP_ABI_CALL(0x0001490Du, sub_0001490D); /* call 0x0001490D */

loc_0030CE1D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030CE30; /* je: equal / zero */

loc_0030CE24: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030CE30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030CE2Du); } /* indirect call */
    }

loc_0030CE30: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030CE50
 * Original: 0x0030CE50 - 0x0030CE86 (54 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030CE50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x825E88;
    if (CMP_EQ(_fa, _fb)) goto loc_0030CE66; /* je: equal / zero */

loc_0030CE60: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030CE66u); RECOMP_ABI_CALL(0x000347B7u, sub_000347B7); /* call 0x000347B7 */

loc_0030CE66: ;
    ecx = esi;
    PUSH32(esp, 0x0030CE6Du); RECOMP_ABI_CALL(0x0001490Du, sub_0001490D); /* call 0x0001490D */

loc_0030CE6D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030CE80; /* je: equal / zero */

loc_0030CE74: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030CE80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030CE7Du); } /* indirect call */
    }

loc_0030CE80: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030CEA0
 * Original: 0x0030CEA0 - 0x0030CED6 (54 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CEA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030CEA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x825EBC;
    if (CMP_EQ(_fa, _fb)) goto loc_0030CEB6; /* je: equal / zero */

loc_0030CEB0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030CEB6u); RECOMP_ABI_CALL(0x000347B7u, sub_000347B7); /* call 0x000347B7 */

loc_0030CEB6: ;
    ecx = esi;
    PUSH32(esp, 0x0030CEBDu); RECOMP_ABI_CALL(0x0001490Du, sub_0001490D); /* call 0x0001490D */

loc_0030CEBD: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030CED0; /* je: equal / zero */

loc_0030CEC4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030CED0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030CECDu); } /* indirect call */
    }

loc_0030CED0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030CEF0
 * Original: 0x0030CEF0 - 0x0030CF26 (54 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030CEF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x825EF0;
    if (CMP_EQ(_fa, _fb)) goto loc_0030CF06; /* je: equal / zero */

loc_0030CF00: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030CF06u); RECOMP_ABI_CALL(0x000347B7u, sub_000347B7); /* call 0x000347B7 */

loc_0030CF06: ;
    ecx = esi;
    PUSH32(esp, 0x0030CF0Du); RECOMP_ABI_CALL(0x0001490Du, sub_0001490D); /* call 0x0001490D */

loc_0030CF0D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030CF20; /* je: equal / zero */

loc_0030CF14: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030CF20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030CF1Du); } /* indirect call */
    }

loc_0030CF20: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030CF40
 * Original: 0x0030CF40 - 0x0030CF76 (54 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CF40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030CF40: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x825F24;
    if (CMP_EQ(_fa, _fb)) goto loc_0030CF56; /* je: equal / zero */

loc_0030CF50: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030CF56u); RECOMP_ABI_CALL(0x000347B7u, sub_000347B7); /* call 0x000347B7 */

loc_0030CF56: ;
    ecx = esi;
    PUSH32(esp, 0x0030CF5Du); RECOMP_ABI_CALL(0x0001490Du, sub_0001490D); /* call 0x0001490D */

loc_0030CF5D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030CF70; /* je: equal / zero */

loc_0030CF64: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030CF70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030CF6Du); } /* indirect call */
    }

loc_0030CF70: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030CF90
 * Original: 0x0030CF90 - 0x0030CFC6 (54 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030CF90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x825F58;
    if (CMP_EQ(_fa, _fb)) goto loc_0030CFA6; /* je: equal / zero */

loc_0030CFA0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030CFA6u); RECOMP_ABI_CALL(0x000347B7u, sub_000347B7); /* call 0x000347B7 */

loc_0030CFA6: ;
    ecx = esi;
    PUSH32(esp, 0x0030CFADu); RECOMP_ABI_CALL(0x0001490Du, sub_0001490D); /* call 0x0001490D */

loc_0030CFAD: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030CFC0; /* je: equal / zero */

loc_0030CFB4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030CFC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030CFBDu); } /* indirect call */
    }

loc_0030CFC0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030CFE0
 * Original: 0x0030CFE0 - 0x0030D016 (54 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030CFE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x825F8C;
    if (CMP_EQ(_fa, _fb)) goto loc_0030CFF6; /* je: equal / zero */

loc_0030CFF0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030CFF6u); RECOMP_ABI_CALL(0x000347B7u, sub_000347B7); /* call 0x000347B7 */

loc_0030CFF6: ;
    ecx = esi;
    PUSH32(esp, 0x0030CFFDu); RECOMP_ABI_CALL(0x0001490Du, sub_0001490D); /* call 0x0001490D */

loc_0030CFFD: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030D010; /* je: equal / zero */

loc_0030D004: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030D010u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030D00Du); } /* indirect call */
    }

loc_0030D010: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030D030
 * Original: 0x0030D030 - 0x0030D066 (54 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030D030: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x825FC0;
    if (CMP_EQ(_fa, _fb)) goto loc_0030D046; /* je: equal / zero */

loc_0030D040: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030D046u); RECOMP_ABI_CALL(0x000347B7u, sub_000347B7); /* call 0x000347B7 */

loc_0030D046: ;
    ecx = esi;
    PUSH32(esp, 0x0030D04Du); RECOMP_ABI_CALL(0x0001490Du, sub_0001490D); /* call 0x0001490D */

loc_0030D04D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030D060; /* je: equal / zero */

loc_0030D054: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030D060u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030D05Du); } /* indirect call */
    }

loc_0030D060: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030D080
 * Original: 0x0030D080 - 0x0030D0AC (44 bytes, 10 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D080(void)
{

loc_0030D080: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = ecx;
    ecx = MEM32(esp + 0x10);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEM32(eax + 0xC) = ecx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0030D0C0
 * Original: 0x0030D0C0 - 0x0030D0C9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D0C0(void)
{

loc_0030D0C0: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0030D0D0
 * Original: 0x0030D0D0 - 0x0030D179 (169 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D0D0(void)
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

loc_0030D0D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    MEM32(eax + 0xC) = 0;
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
 * sub_0030D1B0
 * Original: 0x0030D1B0 - 0x0030D691 (1249 bytes, 314 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D1B0(void)
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

loc_0030D1B0: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x94);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030D1DC; /* jne: not equal / not zero */

loc_0030D1C8: ;
    PUSH32(esp, 2);
    ecx = edi;
    PUSH32(esp, 0x0030D1D1u); RECOMP_ABI_CALL(0x0001F2B3u, sub_0001F2B3); /* call 0x0001F2B3 */

loc_0030D1D1: ;
    MEM8(edi + 0x1C) = 1;
    MEM8(eax) = 1;
    MEM8(eax + 1) = 0;

loc_0030D1DC: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030D1E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030D1E6u); } /* indirect call */
    }

loc_0030D1E9: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x40);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esi);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x44);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(eax + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030D22Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030D22Bu); } /* indirect call */
    }

loc_0030D22E: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esi);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(eax + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    MEM32(esp + 0x48) = edx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030D273u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030D270u); } /* indirect call */
    }

loc_0030D273: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    SET_LO8(eax, MEM8(0x8FC448));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0030D2A6; /* je: equal / zero */

loc_0030D286: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030D293u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030D290u); } /* indirect call */
    }

loc_0030D293: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x64 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030D2A6; /* je: equal / zero */

loc_0030D298: ;
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x34); /* subss */
    goto loc_0030D2AF;

loc_0030D2A6: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */

loc_0030D2AF: ;
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x44); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x3C); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x40); /* subss */
    xmm3 = xmm2; /* movaps */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x2C); /* subss */
    PUSH32(esp, eax);
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030D370u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030D36Du); } /* indirect call */
    }

loc_0030D370: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 8); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030D397u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030D394u); } /* indirect call */
    }

loc_0030D397: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AD370); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x84); /* addss */
    eax = esp + 0x48;
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0030D41Au); RECOMP_ABI_CALL(0x0002E8B2u, sub_0002E8B2); /* call 0x0002E8B2 */

loc_0030D41A: ;
    eax = MEM32(0x8FC45C);
    ecx = MEM32(0x8FC454);
    edx = MEM32(0x8FC458);
    MEM32(esp + 0x34) = eax;
    SET_LO8(eax, MEM8(0x8FC448));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0030D460; /* je: equal / zero */

loc_0030D440: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030D44Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030D44Au); } /* indirect call */
    }

loc_0030D44D: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x64 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030D460; /* je: equal / zero */

loc_0030D452: ;
    xmm6 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x34); /* subss */
    goto loc_0030D469;

loc_0030D460: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm6 = XMM_ZERO(); /* xorps self = zero */

loc_0030D469: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x3C); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x44); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x40); /* subss */
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0x2C) = eax;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x54); /* mulss */
    MEM32(esp + 0x30) = ecx;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x58); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    MEM32(esp + 0x34) = edx;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    xmm3 = xmm6; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = xmm3; /* movaps */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = xmm3; /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x38); /* subss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AD370); /* mulss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm6.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0x48) = eax;
    eax = MEM32(esi);
    edi = esp + 0x48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x54) = edx;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0030D643u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030D640u); } /* indirect call */
    }

loc_0030D643: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    edi = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0030D655u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030D652u); } /* indirect call */
    }

loc_0030D655: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    edi = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0030D667u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030D664u); } /* indirect call */
    }

loc_0030D667: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    edi = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0030D679u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030D676u); } /* indirect call */
    }

loc_0030D679: ;
    esi = MEM32(esi);
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0030D686u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030D683u); } /* indirect call */
    }

loc_0030D686: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_0030D7D0
 * Original: 0x0030D7D0 - 0x0030D801 (49 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0030D7D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030D7D0: ;
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0030D7FE; /* jle: less or equal (signed <=) */

loc_0030D7E0: ;
    eax = MEM32(eax * 4 + 0x8E8EB8);
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030D7FE; /* je: equal / zero */

loc_0030D7ED: ;
    SET_LO8(edx, MEM8(eax + 0x64));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx + ecx + -1;
    eax = ecx;
    esp += 4; return; /* ret */

loc_0030D7FE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0030D810
 * Original: 0x0030D810 - 0x0030DBAB (923 bytes, 226 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0030D810(void)
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

loc_0030D810: ;
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
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x33) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x33 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_0030D925; /* ja: above (unsigned >) */

loc_0030D82B: ;
    eax = ZX8(MEM8(eax + 0x30DBBC));
    { uint32_t _jt = MEM32(eax * 4 + 0x30DBAC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0030D839u) goto loc_0030D839;
    if (_jt == 0x0030D88Au) goto loc_0030D88A;
    if (_jt == 0x0030D8FFu) goto loc_0030D8FF;
    if (_jt == 0x0030D925u) goto loc_0030D925;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0030D839: ;
    ecx = MEM32(0x8E8F84);
    eax = MEM32(ecx + 0x20);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030D84Du); RECOMP_ABI_CALL(0x000381D2u, sub_000381D2); /* call 0x000381D2 */

loc_0030D84D: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    edx = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    goto loc_0030DAC7;

loc_0030D88A: ;
    ecx = MEM32(0x8EADA0);
    eax = MEM32(ecx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030D8D9; /* je: equal / zero */

loc_0030D897: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030D89Cu); RECOMP_ABI_CALL(0x0002BFA9u, sub_0002BFA9); /* call 0x0002BFA9 */

loc_0030D89C: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x8EADA0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030D8ABu); RECOMP_ABI_CALL(0x00017793u, sub_00017793); /* call 0x00017793 */

loc_0030D8AB: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    goto loc_0030DACA;

loc_0030D8D9: ;
    eax = MEM32(esi * 4 + 0x8E8EB8);
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    goto loc_0030DACA;

loc_0030D8FF: ;
    edx = MEM32(esi * 4 + 0x8E8EB8);
    eax = MEM32(edx + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    goto loc_0030DACA;

loc_0030D925: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030DA7B; /* jl: less (signed <) */

loc_0030D92D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2F (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0030DA7B; /* jg: greater (signed >) */

loc_0030D936: ;
    _fa = (uint32_t)(MEM32(0x8C3840)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8C3840), 0x19 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030D992; /* jne: not equal / not zero */

loc_0030D93F: ;
    ecx = MEM32(esi * 4 + 0x8E8EB8);
    ecx = MEM32(ecx + 0x48);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030D94Eu); RECOMP_ABI_CALL(0x0001A17Du, sub_0001A17D); /* call 0x0001A17D */

loc_0030D94E: ;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x20) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x24) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEM32(esp + 0x28) = edx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEM32(esp + 0x2C) = eax;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    goto loc_0030DACA;

loc_0030D992: ;
    ebx = MEM32(esi * 4 + 0x8E8EB8);
    ecx = MEM32(ebx + 0x48);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030D9A1u); RECOMP_ABI_CALL(0x00029290u, sub_00029290); /* call 0x00029290 */

loc_0030D9A1: ;
    esi = MEM32(eax + 0x34);
    _fa = (uint32_t)(MEM32(0x8C3840)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8C3840), 0xE (32-bit) */
    eax = MEM32(0x901E28);
    edi = MEM32(eax + 0xF0);
    if (CMP_NE(_fa, _fb)) goto loc_0030D9BE; /* jne: not equal / not zero */

loc_0030D9B8: ;
    edi = MEM32(eax + 0xF4);

loc_0030D9BE: ;
    ebx = MEM32(ebx + 0x48);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030D9C8u); RECOMP_ABI_CALL(0x0001A17Du, sub_0001A17D); /* call 0x0001A17D */

loc_0030D9C8: ;
    ecx = ebx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030D9D3u); RECOMP_ABI_CALL(0x0002F4ECu, sub_0002F4EC); /* call 0x0002F4EC */

loc_0030D9D3: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esi + 0xF8);
    PUSH32(esp, 2);
    MEM32(esi + 0x10) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esi + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030D9EDu); RECOMP_ABI_CALL(0x00025B9Fu, sub_00025B9F); /* call 0x00025B9F */

loc_0030D9ED: ;
    edx = MEM32(esi + 0xC4);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi);
    ecx = MEM32(edi + 4);
    edx = MEM32(edi + 8);
    MEM32(esp + 0x10) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    eax = MEM32(edi + 0xC);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esi + 0xF8);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    PUSH32(esp, 3);
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x24) = eax;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030DA4Au); RECOMP_ABI_CALL(0x00025B9Fu, sub_00025B9F); /* call 0x00025B9F */

loc_0030DA4A: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x28);
    esi = MEM32(ebp + 0xC);
    MEM32(esp + 0x14) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AD448); /* addss */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x18) = ecx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    goto loc_0030DACA;

loc_0030DA7B: ;
    edx = MEM32(0x8E8F84);
    eax = MEM32(edx + 0x20);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030DA8Fu); RECOMP_ABI_CALL(0x000381D2u, sub_000381D2); /* call 0x000381D2 */

loc_0030DA8F: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;

loc_0030DAC7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0030DACA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x32 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030DAD8; /* je: equal / zero */

loc_0030DACF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030DB8B; /* jne: not equal / not zero */

loc_0030DAD8: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AB7D0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8E931C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x8C3860)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030DB16; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_0030DB06: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7AA7D8); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_0030DB30;

loc_0030DB16: ;
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030DB30; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_0030DB22: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(0x7DD1A8); /* subss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */

loc_0030DB30: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030DB4B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0030DB3B: ;
    xmm2.f[0] = xmm2.f[0] - MEMF(0x7AA7E0); /* subss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    goto loc_0030DB65;

loc_0030DB4B: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030DB65; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0030DB57: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x82609C); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_0030DB65: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030DB78; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_0030DB70: ;
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    goto loc_0030DB8B;

loc_0030DB78: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A99C0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030DB8B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0030DB85: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_0030DB8B: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(esp + 0x10);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x14);
    POP32(esp, esi);
    MEM32(ecx + 8) = edx;
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
 * sub_0030DCF0
 * Original: 0x0030DCF0 - 0x0030E1C0 (1232 bytes, 486 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030DCF0(void)
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

loc_0030DCF0: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0030DD1A; /* je: equal / zero */

loc_0030DCFC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0030DD0E; /* je: equal / zero */

loc_0030DCFF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0030DD24; /* jne: not equal / not zero */

loc_0030DD02: ;
    MEM32(0x8C3840) = 0x13;
    goto loc_0030DD24;

loc_0030DD0E: ;
    MEM32(0x8C3840) = 0xD;
    goto loc_0030DD24;

loc_0030DD1A: ;
    MEM32(0x8C3840) = 0x19;

loc_0030DD24: ;
    eax = MEM32(esp + 0x44);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x65 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_0030DD45; /* ja: above (unsigned >) */

loc_0030DD32: ;
    ecx = ZX8(MEM8(eax + 0x30E064));
    { uint32_t _jt = MEM32(ecx * 4 + 0x30E04C); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0030DD40u) goto loc_0030DD40;
    if (_jt == 0x0030DD45u) goto loc_0030DD45;
    if (_jt == 0x0030DDD7u) goto loc_0030DDD7;
    if (_jt == 0x0030DDE3u) goto loc_0030DDE3;
    if (_jt == 0x0030DE27u) goto loc_0030DE27;
    if (_jt == 0x0030DEBAu) goto loc_0030DEBA;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0030DD40: ;
    eax = 0x32;

loc_0030DD45: ;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030DD50u); RECOMP_ABI_CALL(0x00026216u, sub_00026216); /* call 0x00026216 */

loc_0030DD50: ;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0030DD74; /* jne: not equal / not zero */

loc_0030DD6E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_0030DD74: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x58); /* addss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */

loc_0030DD86: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x5C); /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */

loc_0030DD9E: ;
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 0x14);
    MEM32(0x8FC468) = esi;
    MEM32(0x8FC460) = ecx;
    MEM32(0x8FC464) = edx;
    edi = eax;
    MEM32(edi) = ecx;
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0030DDD7: ;
    eax = 0x32;
    SET_LO8(ebx, 1);
    goto loc_0030DD45;

loc_0030DDE3: ;
    eax = MEM32(0x8FC608);
    PUSH32(esp, eax);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030DDF3u); RECOMP_ABI_CALL(0x00026216u, sub_00026216); /* call 0x00026216 */

loc_0030DDF3: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x14) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x60); /* addss */
    MEM32(esp + 0x18) = edx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;
    goto loc_0030DD86;

loc_0030DE27: ;
    ecx = MEM32(0x8FC60C);
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030DE38u); RECOMP_ABI_CALL(0x000275E4u, sub_000275E4); /* call 0x000275E4 */

loc_0030DE38: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x1C) = eax;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030DE6B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0030DE63: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AACB4); /* mulss */

loc_0030DE6B: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x58); /* addss */
    eax = MEM32(esp + 0x4C);
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    edx = MEM32(esp + 0xC);
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x5C); /* addss */
    ecx = eax;
    MEM32(ecx) = edx;
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEM32(ecx + 4) = edx;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(ecx + 8) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0030DEBA: ;
    ecx = MEM32(0x8E8F84);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(ecx + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F (32-bit) */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0030DEE5; /* jne: not equal / not zero */

loc_0030DEE0: ;
    eax = 0x32;

loc_0030DEE5: ;
    edx = MEM32(0x8FC604);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030DFD8; /* jne: not equal / not zero */

loc_0030DEF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030DF87; /* je: equal / zero */

loc_0030DEFC: ;
    ecx = MEM32(eax * 4 + 0x8E8EB8);
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030DFD8; /* je: equal / zero */

loc_0030DF0D: ;
    SET_LO8(edx, MEM8(ecx + 0x64));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0030DF24; /* jne: not equal / not zero */

loc_0030DF1C: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_0030DF24: ;
    ecx = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x48)); /* movss */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = ecx;
    goto loc_0030DFD8;

loc_0030DF87: ;
    ecx = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x48)); /* movss */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    edx = MEM32(esp + 0xC);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    ecx = MEM32(esp + 0x10);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;

loc_0030DFD8: ;
    PUSH32(esp, eax);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030DFE3u); RECOMP_ABI_CALL(0x00026216u, sub_00026216); /* call 0x00026216 */

loc_0030DFE3: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEM32(esp + 0x1C) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    xmm3 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEM32(esp + 0x14) = ecx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x60); /* addss */
    MEM32(esp + 0x18) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x64); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    goto loc_0030DD9E;

    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* FPU: fnsave dword ptr [eax] */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(ebx, HI8(ebx) + LO8(edx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* FPU: fnsave dword ptr [eax] */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + HI8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* FPU: fnsave dword ptr [eax] */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edi) = MEM8(edi) + HI8(eax);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM16(eax)); /* fidiv word ptr [eax] */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx + 0x450030DE) = MEM8(edx + 0x450030DE) + HI8(ebx);
    _fa = (uint32_t)(MEM8(edx + 0x450030DE)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* FPU: fnsave dword ptr [eax] */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x5050505) = MEM32(0x5050505) + eax;
    _fa = (uint32_t)(MEM32(0x5050505)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x4040302) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4040302;
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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0030E1C0
 * Original: 0x0030E1C0 - 0x0030E338 (376 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030E1C0(void)
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

loc_0030E1C0: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8FC52C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEM32(0x8C3840) = 0xE;
    PUSH32(esp, 0x0030E1F6u); RECOMP_ABI_CALL(0x00026216u, sub_00026216); /* call 0x00026216 */

loc_0030E1F6: ;
    esi = MEM32(eax);
    edi = MEM32(eax + 4);
    ebx = MEM32(eax + 8);
    edx = MEM32(0x8FC530);
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = esi;
    MEM32(esp + 0x38) = edi;
    MEM32(esp + 0x3C) = ebx;
    PUSH32(esp, 0x0030E21Bu); RECOMP_ABI_CALL(0x00026216u, sub_00026216); /* call 0x00026216 */

loc_0030E21B: ;
    ebp = MEM32(eax);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    xmm5 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x28) = ebp;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    MEM32(esp + 0x2C) = ecx;
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */
    MEM32(esp + 0x30) = eax;
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm7.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x44) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x50);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(edx) = xmm3.f[0]; /* movss */
    edx = MEM32(0x8EB070);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030E2D6; /* jne: not equal / not zero */

loc_0030E2B1: ;
    edx = MEM32(0x8EB064);
    _fa = (uint32_t)(MEM8(edx + 0x20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x20), 0 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0030E2C3; /* jg: greater (signed >) */

loc_0030E2BD: ;
    ecx = edi;
    edx = ebx;
    goto loc_0030E322;

loc_0030E2C3: ;
    edx = MEM32(0x8EB068);
    SET_LO8(ebx, MEM8(edx + 0x20));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0030E316; /* jg: greater (signed >) */

loc_0030E2D0: ;
    esi = ebp;
    edx = eax;
    goto loc_0030E322;

loc_0030E2D6: ;
    xmm3 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm7.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    goto loc_0030E322;

loc_0030E316: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x38);
    esi = MEM32(esp + 0x30);

loc_0030E322: ;
    eax = MEM32(esp + 0x4C);
    edi = eax;
    MEM32(edi) = esi;
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_0030E3A0
 * Original: 0x0030E3A0 - 0x0030E642 (674 bytes, 177 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030E3A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_0030E3A0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(0x8E8F84);
    _fa = (uint32_t)(MEM32(eax + 0xA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xA8), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEM32(0x8C3840) = 0x19;
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0030E42E; /* jne: not equal / not zero */

loc_0030E3DE: ;
    ecx = MEM32(0x8EACE0);
    PUSH32(esp, 0x0030E3E9u); RECOMP_ABI_CALL(0x0002E86Cu, sub_0002E86C); /* call 0x0002E86C */

loc_0030E3E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0030E42B; /* je: equal / zero */

loc_0030E3ED: ;
    eax = MEM32(0x8EACE0);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0030E420; /* je: equal / zero */

loc_0030E3F9: ;
    esi = eax + 0x2C;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0030E420; /* je: equal / zero */

loc_0030E402: ;
    ecx = MEM32(eax + 0x1D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030E40Eu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0030E40E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0030E420; /* je: equal / zero */

loc_0030E415: ;
    esi = MEM32(esi);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    goto loc_0030E43A;

loc_0030E420: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    goto loc_0030E43A;

loc_0030E42B: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */

loc_0030E42E: ;
    edx = MEM32(0x8E8F84);
    ecx = MEM32(edx + 0xA8);

loc_0030E43A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0030E457; /* je: equal / zero */

loc_0030E43F: ;
    eax = MEM32(ecx * 4 + 0x8E8EB8);
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0030E4AE; /* je: equal / zero */

loc_0030E44C: ;
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    goto loc_0030E466;

loc_0030E457: ;
    edx = MEM32(0x8E8F84);
    eax = MEM32(edx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */

loc_0030E466: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x48)) >> 32) & 1);
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;

loc_0030E4AE: ;
    edi = MEM32(esp + 0x34);
    xmm4 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0030E525; /* jnp: not parity */

loc_0030E4CC: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_0030E4E1; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0030E4D9: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_0030E4E1: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8FC43C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x44); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030E504; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0030E4FF: ;
    xmm5 = xmm1; /* movaps */
    goto loc_0030E50B;

loc_0030E504: ;
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm1.f[0]; /* subss */

loc_0030E50B: ;
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030E519; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_0030E514: ;
    xmm2 = xmm3; /* movaps */
    goto loc_0030E51D;

loc_0030E519: ;
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */

loc_0030E51D: ;
    _fca = xmm5.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_0030E525; /* jae: above or equal (unsigned >=) (xmm5.f[0] vs xmm2.f[0]) */

loc_0030E522: ;
    xmm4 = xmm0; /* movaps */

loc_0030E525: ;
    MEMF(edi) = xmm4.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(0x8FC428)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8FC428), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0030E552; /* jne: not equal / not zero */

loc_0030E532: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);
    ecx = MEM32(0x8FC430);
    MEM32(esp + 8) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = edx;
    goto loc_0030E564;

loc_0030E552: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0030E55F; /* je: equal / zero */

loc_0030E557: ;
    MEM32(0x8FC430) = ecx;
    goto loc_0030E564;

loc_0030E55F: ;
    ecx = 0x32;

loc_0030E564: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030E570u); RECOMP_ABI_CALL(0x00026216u, sub_00026216); /* call 0x00026216 */

loc_0030E570: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    esi = MEM32(esp + 0x54);
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    MEM32(0x8FC5FC) = eax;
    MEM32(0x8FC5F4) = ecx;
    MEM32(0x8FC5F8) = edx;
    ebx = esi;
    MEM32(ebx) = ecx;
    MEM32(ebx + 4) = edx;
    MEM32(ebx + 8) = eax;
    MEM32(esp + 0x28) = eax;
    SET_LO8(eax, MEM8(0x8FC448));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0030E5C0; /* je: equal / zero */

loc_0030E5B3: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 8); /* subss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */

loc_0030E5C0: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esi + 4) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    SET_LO8(eax, MEM8(0x8FC448));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0030E610; /* je: equal / zero */

loc_0030E606: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */

loc_0030E610: ;
    esi = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x30);
    MEM32(0x8FC468) = esi;
    MEM32(0x8FC460) = ecx;
    MEM32(0x8FC464) = edx;
    edi = eax;
    MEM32(edi) = ecx;
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0030E6F0
 * Original: 0x0030E6F0 - 0x0030EA8E (926 bytes, 241 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0030E6F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    int _jf_0030E95F = 0; /* per-edge flags of joins */
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

loc_0030E6F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    SET_LO8(eax, MEM8(0x8C38A9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0030EA60; /* je: equal / zero */

loc_0030E71E: ;
    SET_LO8(eax, MEM8(0x8C38A8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ebx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_0030E72F; /* jne: not equal / not zero */

loc_0030E729: ;
    MEM8(0x8C38A8) = LO8(ebx);

loc_0030E72F: ;
    SET_LO8(eax, MEM8(ebp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm2 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0030E7B9; /* je: equal / zero */

loc_0030E752: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    xmm0 = xmm1; /* movaps */
    fp_top() = -fp_top(); /* fchs */
    xmm4 = xmm2; /* movaps */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm4.f[0]; /* movss */
    ecx = MEM32(esp + 0x34);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    fp_top() = cos(fp_top()); /* fcos */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 8)); /* fmul dword ptr [ebp + 8] */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x38);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x30);
    goto loc_0030E7C5;

loc_0030E7B9: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);

loc_0030E7C5: ;
    edi = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    MEM32(esp + 0x3C) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x3C); /* addss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    MEM32(esp + 0x40) = ecx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x40); /* addss */
    ecx = MEM32(esp + 0x30);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    MEM32(esp + 0x44) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x44); /* addss */
    edx = MEM32(esp + 0x34);
    eax = edi;
    MEM32(eax) = ecx;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 4) = edx;
    PUSH32(esp, edi);
    MEM32(eax + 8) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030E822u); RECOMP_ABI_CALL(0x00024DD0u, sub_00024DD0); /* call 0x00024DD0 */

loc_0030E822: ;
    edx = MEM32(0x8E8F84);
    eax = MEM32(edx + 0x20);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030E836u); RECOMP_ABI_CALL(0x000381D2u, sub_000381D2); /* call 0x000381D2 */

loc_0030E836: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AB7D0)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x8C3860)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x50);
    ecx = MEM32(esp + 0x54);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8E931C)); /* movss */
    edx = MEM32(esp + 0x58);
    MEM32(esp + 0x38) = eax;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030E8AF; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_0030E89F: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7AA7D8); /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    goto loc_0030E8C9;

loc_0030E8AF: ;
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030E8C9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_0030E8BB: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(0x7DD1A8); /* subss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */

loc_0030E8C9: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030E8E4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0030E8D4: ;
    xmm2.f[0] = xmm2.f[0] - MEMF(0x7AA7E0); /* subss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    goto loc_0030E8FE;

loc_0030E8E4: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030E8FE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0030E8F0: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x82609C); /* subss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */

loc_0030E8FE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030E911; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_0030E909: ;
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    goto loc_0030E924;

loc_0030E911: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A99C0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030E924; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0030E91E: ;
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */

loc_0030E924: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x38);
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x58) = ecx;
    MEM32(esp + 0x5C) = edx;
    MEM8(esp + 0x1B) = LO8(ebx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0030E942: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x28 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030E95C; /* jge: greater or equal (signed >=) */

loc_0030E947: ;
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030E953u); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_0030E953: ;
    SET_LO8(eax, MEM8(eax + 0x3B));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    _jf_0030E95F = (CMP_NE(_fa, _fb)) ? 1 : 0; /* flags of this edge */
    goto loc_0030E95F;

loc_0030E95C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x32 (32-bit) */
    _jf_0030E95F = (CMP_NE(_fa, _fb)) ? 1 : 0; /* flags of this edge */

loc_0030E95F: ;
    if (_jf_0030E95F /* jne: not equal / not zero */) goto loc_0030EA44;

loc_0030E965: ;
    ecx = esp + 0x30;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030E970u); RECOMP_ABI_CALL(0x00026216u, sub_00026216); /* call 0x00026216 */

loc_0030E970: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x32 (32-bit) */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0030E9B3; /* je: equal / zero */

loc_0030E98C: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x5C)); /* fsub dword ptr [esp + 0x5c] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x54)); /* fsub dword ptr [esp + 0x54] */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 0 || g_fp_cmp == 1) /* fcompi */) goto loc_0030EA44; /* jae: above or equal (unsigned >=) */

loc_0030E9B3: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x24); /* subss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    ebx = MEM32(esp + 0x48);
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x28); /* subss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x2C); /* subss */
    MEM32(esp + 0x3C) = ebx;
    ebx = MEM32(esp + 0x4C);
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEM32(esp + 0x40) = ebx;
    ebx = MEM32(esp + 0x50);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x44) = ebx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030EA44; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x1C)) */

loc_0030EA37: ;
    _fa = (uint32_t)(MEM32(0x8C38B0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8C38B0), esi (32-bit) */
    MEM8(esp + 0x1B) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0030EA67; /* jne: not equal / not zero */

loc_0030EA44: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x32 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0030E942; /* jle: less or equal (signed <=) */

loc_0030EA4E: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030EA60; /* je: equal / zero */

loc_0030EA56: ;
    MEM32(0x8C38B0) = 0xFFFFFFFFu;

loc_0030EA60: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0030EA67: ;
    MEM32(edi) = ecx;
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = eax;
    POP32(esp, edi);
    MEM32(0x8C38AC) = esi;
    MEM32(0x8C38B0) = esi;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM8(0x8C38A8) = LO8(eax);
    MEM8(0x8C38A9) = LO8(eax);
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
 * sub_0030EB80
 * Original: 0x0030EB80 - 0x0030EC9F (287 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030EB80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030EB80: ;
    _fb = (uint32_t)(0x15C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x15C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0030EB93u); RECOMP_ABI_CALL(0x0002775Bu, sub_0002775B); /* call 0x0002775B */

loc_0030EB93: ;
    eax = MEM32(0x8C38BC);
    ecx = MEM32(0x8C38C0);
    edx = MEM32(0x8C38C4);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0030EBB2: ;
    eax = esp + 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030EBBDu); RECOMP_ABI_CALL(0x00026216u, sub_00026216); /* call 0x00026216 */

loc_0030EBBD: ;
    ecx = eax;
    edi = MEM32(ecx);
    ebx = MEM32(ecx + 4);
    ebp = MEM32(ecx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030EBEF; /* jl: less (signed <) */

loc_0030EBCF: ;
    edi = MEM32(esp + 0x28);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = esp + edi + 0x2C;
    MEM32(edi) = esi;
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = edx;
    MEM32(edi + 0xC) = eax;
    goto loc_0030EC34;

loc_0030EBEF: ;
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030EBFBu); RECOMP_ABI_CALL(0x00035E41u, sub_00035E41); /* call 0x00035E41 */

loc_0030EBFB: ;
    SET_LO8(edx, MEM8(eax + 0x3B));
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030EC38; /* jne: not equal / not zero */

loc_0030EC06: ;
    eax = MEM32(eax + 8);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0030EC18; /* je: equal / zero */

loc_0030EC0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030EC18; /* je: equal / zero */

loc_0030EC13: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030EC38; /* jne: not equal / not zero */

loc_0030EC18: ;
    eax = edi;
    edi = MEM32(esp + 0x28);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = esp + edi + 0x2C;
    MEM32(edi) = esi;
    MEM32(edi + 4) = eax;
    ecx = ebx;
    edx = ebp;
    MEM32(edi + 8) = ecx;
    MEM32(edi + 0xC) = edx;

loc_0030EC34: ;
    MEM32(esp + 0x28) = MEM32(esp + 0x28) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0030EC38: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x33) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x33 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030EBB2; /* jl: less (signed <) */

loc_0030EC42: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, 0x1F4FC);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030EC58u); RECOMP_ABI_CALL(0x005CC050u, sub_005CC050); /* call 0x005CC050 */

loc_0030EC58: ;
    SET_LO8(eax, MEM8(0x8C38A8));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = esp + 0x18;
    if (CMP_EQ(_fa, _fb)) goto loc_0030EC88; /* je: equal / zero */

loc_0030EC6C: ;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030EC75u); RECOMP_ABI_CALL(0x0002E7B8u, sub_0002E7B8); /* call 0x0002E7B8 */

loc_0030EC75: ;
    MEM8(0x8C38A8) = 0;
    MEM32(0x8C38AC) = eax;
    _fb = (uint32_t)(0x15C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x15C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0030EC88: ;
    eax = MEM32(0x8C38AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030EC93u); RECOMP_ABI_CALL(0x00024641u, sub_00024641); /* call 0x00024641 */

loc_0030EC93: ;
    MEM32(0x8C38AC) = eax;
    _fb = (uint32_t)(0x15C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x15C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0030ECF0
 * Original: 0x0030ECF0 - 0x0030ED54 (100 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030ECF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030ECF0: ;
    eax = MEM32(0x8C38AC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(0x8C3840) = 0x13;
    PUSH32(esp, 0x0030ED0Du); RECOMP_ABI_CALL(0x00026216u, sub_00026216); /* call 0x00026216 */

loc_0030ED0D: ;
    ecx = MEM32(eax);
    edx = MEM32(esp + 0x18);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    ecx = MEM32(0x8C38AC);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEM32(0x8C3840) = 0x19;
    PUSH32(esp, 0x0030ED3Cu); RECOMP_ABI_CALL(0x00026216u, sub_00026216); /* call 0x00026216 */

loc_0030ED3C: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x24);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0030ED70
 * Original: 0x0030ED70 - 0x0030F22A (1210 bytes, 342 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030ED70(void)
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

loc_0030ED70: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x58));
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x68);
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030ED88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030ED85u); } /* indirect call */
    }

loc_0030ED88: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030ED9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030ED9Cu); } /* indirect call */
    }

loc_0030ED9F: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030EDB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030EDB3u); } /* indirect call */
    }

loc_0030EDB6: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030EDCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030EDCAu); } /* indirect call */
    }

loc_0030EDCD: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030EDE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030EDE1u); } /* indirect call */
    }

loc_0030EDE4: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030EDFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030EDF8u); } /* indirect call */
    }

loc_0030EDFB: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030EE12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030EE0Fu); } /* indirect call */
    }

loc_0030EE12: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030EE29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030EE26u); } /* indirect call */
    }

loc_0030EE29: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030EE40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030EE3Du); } /* indirect call */
    }

loc_0030EE40: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 9);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030EE57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030EE54u); } /* indirect call */
    }

loc_0030EE57: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030EE6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030EE6Bu); } /* indirect call */
    }

loc_0030EE6E: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB);
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030EE85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030EE82u); } /* indirect call */
    }

loc_0030EE85: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8C38A4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0030EEAB; /* jnp: not parity */

loc_0030EEA3: ;
    PUSH32(esp, 0x0030EEA8u); RECOMP_ABI_CALL(0x00011D39u, sub_00011D39); /* call 0x00011D39 */

loc_0030EEA8: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */

loc_0030EEAB: ;
    ecx = MEM32(esi);
    edi = MEM32(ecx + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esp + 0x6C) = 0;
    MEM32(esp + 0x40) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0030F02E; /* jne: not equal / not zero */

loc_0030EEC1: ;
    PUSH32(esp, 0x1C);
    MEM8(esp + 0x70) = 1;
    PUSH32(esp, 0x0030EECDu); RECOMP_ABI_CALL(0x0001F2B3u, sub_0001F2B3); /* call 0x0001F2B3 */

loc_0030EECD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x8C3888) = xmm0.f[0]; /* movss */
    MEMF(0x8C388C) = xmm0.f[0]; /* movss */
    MEMF(0x8C3890) = xmm0.f[0]; /* movss */
    MEMF(0x8C3898) = xmm0.f[0]; /* movss */
    MEMF(0x8C3894) = xmm0.f[0]; /* movss */
    MEMF(0x8C38A0) = xmm0.f[0]; /* movss */
    MEMF(0x8C389C) = xmm0.f[0]; /* movss */
    MEMF(0x8C38A4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    edi = eax;
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    ebx = edi + 4;
    eax = edi + 8;
    MEMF(ebx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEM32(esp + 0x14) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM32(edi + 0xC) = 0;

loc_0030EF41: ;
    ebp = edi + 0x10;
    PUSH32(esp, 0x8C38BC);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0030EF4Fu); RECOMP_ABI_CALL(0x00037DFEu, sub_00037DFE); /* call 0x00037DFE */

loc_0030EF4F: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0030EF55: ;
    ecx = MEM32(0x8C38C4);
    eax = MEM32(0x8C38C0);
    edx = MEM32(0x8C38BC);
    MEM32(esp + 0x58) = ecx;
    ecx = MEM32(0x8FCBB0);
    MEM32(esp + 0x54) = eax;
    _fb = (uint32_t)(0x908) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x908)) >> 32) & 1);
    ecx = ecx + 0x908;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x50;
    MEM32(esp + 0x50) = edx;
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0030EF8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030EF8Bu); } /* indirect call */
    }

loc_0030EF8E: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0030EF9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030EF98u); } /* indirect call */
    }

loc_0030EF9B: ;
    xmm0 = XMM_SCALAR(MEMF(ebp)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    eax = MEM32(esp + 0x44);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    ecx = MEM32(esp + 0x48);
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(esi);
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x4C);
    ebp = esp + 0x5C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM32(esp + 0x64) = ecx;
    MEM32(esp + 0x68) = edx;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0030EFE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030EFE3u); } /* indirect call */
    }

loc_0030EFE6: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0030EFF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030EFF1u); } /* indirect call */
    }

loc_0030EFF4: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0030F002u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030EFFFu); } /* indirect call */
    }

loc_0030F002: ;
    edx = MEM32(esp + 0x14);
    esi = MEM32(esi);
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0030F014u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030F011u); } /* indirect call */
    }

loc_0030F014: ;
    SET_LO8(eax, MEM8(esp + 0x6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0030F028; /* je: equal / zero */

loc_0030F020: ;
    eax = MEM32(esp + 0x30);
    MEM8(eax + 0x1C) = 1;

loc_0030F028: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x58)) >> 32) & 1);
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0030F02E: ;
    xmm0 = XMM_SCALAR(MEMF(0x8C3890)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 8); /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    eax = edi + 8;
    MEM32(esp + 0x14) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030F05B; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0030F057: ;
    MEMF(eax) = xmm2.f[0]; /* movss */

loc_0030F05B: ;
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030F06E; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0030F06A: ;
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_0030F06E: ;
    xmm0 = XMM_SCALAR(MEMF(0x8C3888)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 4); /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    ebx = edi + 4;
    MEMF(ebx) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030F097; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0030F093: ;
    MEMF(ebx) = xmm2.f[0]; /* movss */

loc_0030F097: ;
    xmm2 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030F0AA; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0030F0A6: ;
    MEMF(ebx) = xmm0.f[0]; /* movss */

loc_0030F0AA: ;
    xmm0 = XMM_SCALAR(MEMF(0x8C388C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(0x8C3848)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030F0D4; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0030F0CF: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0030F108; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_0030F0D4: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030F0DF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0030F0D9: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    goto loc_0030F102;

loc_0030F0DF: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030F0F4; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_0030F0EB: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    goto loc_0030F102;

loc_0030F0F4: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */

loc_0030F102: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_0030F108: ;
    ebp = MEM32(esp + 0x38);
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8C3894)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x8C3898)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0030F132; /* jp: parity */

loc_0030F129: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0030F165; /* jnp: not parity */

loc_0030F132: ;
    ecx = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    PUSH32(esp, 1);
    eax = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0030F15Fu); RECOMP_ABI_CALL(0x00037606u, sub_00037606); /* call 0x00037606 */

loc_0030F15F: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0030F165: ;
    xmm0 = XMM_SCALAR(MEMF(0x8C389C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x8C38A0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0030F187; /* jp: parity */

loc_0030F17E: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0030F1BA; /* jnp: not parity */

loc_0030F187: ;
    eax = MEM32(edi);
    xmm0.f[0] = xmm0.f[0] - MEMF(0x8C38BC); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(0x8C38C4); /* subss */
    PUSH32(esp, 0);
    edx = edi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x0030F1B4u); RECOMP_ABI_CALL(0x00037606u, sub_00037606); /* call 0x00037606 */

loc_0030F1B4: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0030F1BA: ;
    SET_LO8(eax, MEM8(0x8C38A8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(0x8C3888) = xmm1.f[0]; /* movss */
    MEMF(0x8C388C) = xmm1.f[0]; /* movss */
    MEMF(0x8C3890) = xmm1.f[0]; /* movss */
    MEMF(0x8C3898) = xmm1.f[0]; /* movss */
    MEMF(0x8C3894) = xmm1.f[0]; /* movss */
    MEMF(0x8C38A0) = xmm1.f[0]; /* movss */
    MEMF(0x8C389C) = xmm1.f[0]; /* movss */
    MEMF(0x8C38A4) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0030EF41; /* je: equal / zero */

loc_0030F207: ;
    ebp = edi + 0x10;
    ecx = ebp;
    edx = MEM32(ecx);
    MEM32(0x8C38BC) = edx;
    eax = MEM32(ecx + 4);
    MEM32(0x8C38C0) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(0x8C38C4) = ecx;
    goto loc_0030EF55;

}

/**
 * sub_0030F360
 * Original: 0x0030F360 - 0x0030F3E0 (128 bytes, 34 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F360(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030F360: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    ecx = MEM32(esp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    edx = MEM32(esp + 0x10);
    eax = esp;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 8) = ecx;
    eax = MEM32(edx);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030F3B6u); RECOMP_ABI_CALL(0x00024F9Cu, sub_00024F9C); /* call 0x00024F9C */

loc_0030F3B6: ;
    eax = MEM32(esp + 0x34);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0030F400
 * Original: 0x0030F400 - 0x0030F5F4 (500 bytes, 114 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0030F400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030F400: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    ecx = MEM32(esp);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    edx = MEM32(esp + 4);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(esp + 8) = eax;
    eax = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0xC);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + 0x18);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEM32(esp) = ecx;
    SET_LO8(ecx, MEM8(0x8FC44A));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    MEM32(esp + 4) = edx;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0030F4EE; /* je: equal / zero */

loc_0030F4D8: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(esp) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM8(0x8FC44A) = LO8(eax);
    goto loc_0030F508;

loc_0030F4EE: ;
    edx = MEM32(0x8EB070);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030F510; /* jne: not equal / not zero */

loc_0030F4F9: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    MEM32(esp) = ecx;
    ecx = MEM32(esp + 0x20);

loc_0030F508: ;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;

loc_0030F510: ;
    xmm0 = XMM_MEM(0x8F9620); /* movaps */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9630); /* movaps */
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9640); /* movaps */
    XMM_STORE(esp + 0x60, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9650); /* movaps */
    edx = esp + 0x40;
    XMM_STORE(esp + 0x70, xmm0); /* movaps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edx);
    ecx = esp + 0x34;
    MEM32(0x8FC430) = eax;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x40) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030F56Cu); RECOMP_ABI_CALL(0x00019944u, sub_00019944); /* call 0x00019944 */

loc_0030F56C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, ecx);
    ecx = esp + 8;
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030F5A5u); RECOMP_ABI_CALL(0x00033E66u, sub_00033E66); /* call 0x00033E66 */

loc_0030F5A5: ;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(ebp + 0x1C);
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    MEM32(esp + 0x1C) = ecx;
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x1C); /* addss */
    MEM32(esp + 0x20) = edx;
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0030F680
 * Original: 0x0030F680 - 0x0030F690 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F680(void)
{

loc_0030F680: ;
    eax = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0030F6A0
 * Original: 0x0030F6A0 - 0x0030FB65 (1221 bytes, 387 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F6A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030F6A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FB60; /* je: equal / zero */

loc_0030F6B1: ;
    PUSH32(esp, 0x0030F6B6u); RECOMP_ABI_CALL(0x00016465u, sub_00016465); /* call 0x00016465 */

loc_0030F6B6: ;
    eax = esi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    MEM32(edi + 4) = esi;
    if (CMP_A(_fa, _fb)) goto loc_0030FB59; /* ja: above (unsigned >) */

loc_0030F6C5: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x30FB68); /* switch: 23 entries, 23 targets */
    if (_jt == 0x0030F6CCu) goto loc_0030F6CC;
    if (_jt == 0x0030F6FFu) goto loc_0030F6FF;
    if (_jt == 0x0030F732u) goto loc_0030F732;
    if (_jt == 0x0030F765u) goto loc_0030F765;
    if (_jt == 0x0030F798u) goto loc_0030F798;
    if (_jt == 0x0030F7CBu) goto loc_0030F7CB;
    if (_jt == 0x0030F7FEu) goto loc_0030F7FE;
    if (_jt == 0x0030F831u) goto loc_0030F831;
    if (_jt == 0x0030F864u) goto loc_0030F864;
    if (_jt == 0x0030F897u) goto loc_0030F897;
    if (_jt == 0x0030F8CAu) goto loc_0030F8CA;
    if (_jt == 0x0030F8FDu) goto loc_0030F8FD;
    if (_jt == 0x0030F930u) goto loc_0030F930;
    if (_jt == 0x0030F963u) goto loc_0030F963;
    if (_jt == 0x0030F996u) goto loc_0030F996;
    if (_jt == 0x0030F9C9u) goto loc_0030F9C9;
    if (_jt == 0x0030F9FCu) goto loc_0030F9FC;
    if (_jt == 0x0030FA2Fu) goto loc_0030FA2F;
    if (_jt == 0x0030FA62u) goto loc_0030FA62;
    if (_jt == 0x0030FA95u) goto loc_0030FA95;
    if (_jt == 0x0030FAC8u) goto loc_0030FAC8;
    if (_jt == 0x0030FAF7u) goto loc_0030FAF7;
    if (_jt == 0x0030FB26u) goto loc_0030FB26;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0030F6CC: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0030F6DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030F6DBu); } /* indirect call */
    }

loc_0030F6DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FB55; /* je: equal / zero */

loc_0030F6E5: ;
    PUSH32(esp, 0x8FC540);
    ecx = eax;
    PUSH32(esp, 0x0030F6F1u); RECOMP_ABI_CALL(0x00013E72u, sub_00013E72); /* call 0x00013E72 */

loc_0030F6F1: ;
    ecx = edi;
    MEM32(edi) = eax;
    PUSH32(esp, 0x0030F6FAu); RECOMP_ABI_CALL(0x0001A5D8u, sub_0001A5D8); /* call 0x0001A5D8 */

loc_0030F6FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0030F6FF: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0030F710u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030F70Eu); } /* indirect call */
    }

loc_0030F710: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FB55; /* je: equal / zero */

loc_0030F718: ;
    PUSH32(esp, 0x8FC540);
    ecx = eax;
    PUSH32(esp, 0x0030F724u); RECOMP_ABI_CALL(0x0002B10Du, sub_0002B10D); /* call 0x0002B10D */

loc_0030F724: ;
    ecx = edi;
    MEM32(edi) = eax;
    PUSH32(esp, 0x0030F72Du); RECOMP_ABI_CALL(0x0001A5D8u, sub_0001A5D8); /* call 0x0001A5D8 */

loc_0030F72D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0030F732: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0030F743u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030F741u); } /* indirect call */
    }

loc_0030F743: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FB55; /* je: equal / zero */

loc_0030F74B: ;
    PUSH32(esp, 0x8FC540);
    ecx = eax;
    PUSH32(esp, 0x0030F757u); RECOMP_ABI_CALL(0x00033A15u, sub_00033A15); /* call 0x00033A15 */

loc_0030F757: ;
    ecx = edi;
    MEM32(edi) = eax;
    PUSH32(esp, 0x0030F760u); RECOMP_ABI_CALL(0x0001A5D8u, sub_0001A5D8); /* call 0x0001A5D8 */

loc_0030F760: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0030F765: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0030F776u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030F774u); } /* indirect call */
    }

loc_0030F776: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FB55; /* je: equal / zero */

loc_0030F77E: ;
    PUSH32(esp, 0x8FC540);
    ecx = eax;
    PUSH32(esp, 0x0030F78Au); RECOMP_ABI_CALL(0x00013A85u, sub_00013A85); /* call 0x00013A85 */

loc_0030F78A: ;
    ecx = edi;
    MEM32(edi) = eax;
    PUSH32(esp, 0x0030F793u); RECOMP_ABI_CALL(0x0001A5D8u, sub_0001A5D8); /* call 0x0001A5D8 */

loc_0030F793: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0030F798: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0030F7A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030F7A7u); } /* indirect call */
    }

loc_0030F7A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FB55; /* je: equal / zero */

loc_0030F7B1: ;
    PUSH32(esp, 0x8FC540);
    ecx = eax;
    PUSH32(esp, 0x0030F7BDu); RECOMP_ABI_CALL(0x0001D567u, sub_0001D567); /* call 0x0001D567 */

loc_0030F7BD: ;
    ecx = edi;
    MEM32(edi) = eax;
    PUSH32(esp, 0x0030F7C6u); RECOMP_ABI_CALL(0x0001A5D8u, sub_0001A5D8); /* call 0x0001A5D8 */

loc_0030F7C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0030F7CB: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0030F7DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030F7DAu); } /* indirect call */
    }

loc_0030F7DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FB55; /* je: equal / zero */

loc_0030F7E4: ;
    PUSH32(esp, 0x8FC540);
    ecx = eax;
    PUSH32(esp, 0x0030F7F0u); RECOMP_ABI_CALL(0x0001C22Au, sub_0001C22A); /* call 0x0001C22A */

loc_0030F7F0: ;
    ecx = edi;
    MEM32(edi) = eax;
    PUSH32(esp, 0x0030F7F9u); RECOMP_ABI_CALL(0x0001A5D8u, sub_0001A5D8); /* call 0x0001A5D8 */

loc_0030F7F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0030F7FE: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0030F80Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030F80Du); } /* indirect call */
    }

loc_0030F80F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FB55; /* je: equal / zero */

loc_0030F817: ;
    PUSH32(esp, 0x8FC540);
    ecx = eax;
    PUSH32(esp, 0x0030F823u); RECOMP_ABI_CALL(0x0001397Cu, sub_0001397C); /* call 0x0001397C */

loc_0030F823: ;
    ecx = edi;
    MEM32(edi) = eax;
    PUSH32(esp, 0x0030F82Cu); RECOMP_ABI_CALL(0x0001A5D8u, sub_0001A5D8); /* call 0x0001A5D8 */

loc_0030F82C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0030F831: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0030F842u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030F840u); } /* indirect call */
    }

loc_0030F842: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FB55; /* je: equal / zero */

loc_0030F84A: ;
    PUSH32(esp, 0x8FC540);
    ecx = eax;
    PUSH32(esp, 0x0030F856u); RECOMP_ABI_CALL(0x0001984Fu, sub_0001984F); /* call 0x0001984F */

loc_0030F856: ;
    ecx = edi;
    MEM32(edi) = eax;
    PUSH32(esp, 0x0030F85Fu); RECOMP_ABI_CALL(0x0001A5D8u, sub_0001A5D8); /* call 0x0001A5D8 */

loc_0030F85F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0030F864: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0030F875u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030F873u); } /* indirect call */
    }

loc_0030F875: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FB55; /* je: equal / zero */

loc_0030F87D: ;
    PUSH32(esp, 0x8FC540);
    ecx = eax;
    PUSH32(esp, 0x0030F889u); RECOMP_ABI_CALL(0x000185F8u, sub_000185F8); /* call 0x000185F8 */

loc_0030F889: ;
    ecx = edi;
    MEM32(edi) = eax;
    PUSH32(esp, 0x0030F892u); RECOMP_ABI_CALL(0x0001A5D8u, sub_0001A5D8); /* call 0x0001A5D8 */

loc_0030F892: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0030F897: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0030F8A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030F8A6u); } /* indirect call */
    }

loc_0030F8A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FB55; /* je: equal / zero */

loc_0030F8B0: ;
    PUSH32(esp, 0x8FC540);
    ecx = eax;
    PUSH32(esp, 0x0030F8BCu); RECOMP_ABI_CALL(0x000136F7u, sub_000136F7); /* call 0x000136F7 */

loc_0030F8BC: ;
    ecx = edi;
    MEM32(edi) = eax;
    PUSH32(esp, 0x0030F8C5u); RECOMP_ABI_CALL(0x0001A5D8u, sub_0001A5D8); /* call 0x0001A5D8 */

loc_0030F8C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0030F8CA: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0030F8DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030F8D9u); } /* indirect call */
    }

loc_0030F8DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FB55; /* je: equal / zero */

loc_0030F8E3: ;
    PUSH32(esp, 0x8FC540);
    ecx = eax;
    PUSH32(esp, 0x0030F8EFu); RECOMP_ABI_CALL(0x0002095Bu, sub_0002095B); /* call 0x0002095B */

loc_0030F8EF: ;
    ecx = edi;
    MEM32(edi) = eax;
    PUSH32(esp, 0x0030F8F8u); RECOMP_ABI_CALL(0x0001A5D8u, sub_0001A5D8); /* call 0x0001A5D8 */

loc_0030F8F8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0030F8FD: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0030F90Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030F90Cu); } /* indirect call */
    }

loc_0030F90E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FB55; /* je: equal / zero */

loc_0030F916: ;
    PUSH32(esp, 0x8FC540);
    ecx = eax;
    PUSH32(esp, 0x0030F922u); RECOMP_ABI_CALL(0x0002E4F7u, sub_0002E4F7); /* call 0x0002E4F7 */

loc_0030F922: ;
    ecx = edi;
    MEM32(edi) = eax;
    PUSH32(esp, 0x0030F92Bu); RECOMP_ABI_CALL(0x0001A5D8u, sub_0001A5D8); /* call 0x0001A5D8 */

loc_0030F92B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0030F930: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0030F941u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030F93Fu); } /* indirect call */
    }

loc_0030F941: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FB55; /* je: equal / zero */

loc_0030F949: ;
    PUSH32(esp, 0x8FC540);
    ecx = eax;
    PUSH32(esp, 0x0030F955u); RECOMP_ABI_CALL(0x00015065u, sub_00015065); /* call 0x00015065 */

loc_0030F955: ;
    ecx = edi;
    MEM32(edi) = eax;
    PUSH32(esp, 0x0030F95Eu); RECOMP_ABI_CALL(0x0001A5D8u, sub_0001A5D8); /* call 0x0001A5D8 */

loc_0030F95E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0030F963: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0030F974u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030F972u); } /* indirect call */
    }

loc_0030F974: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FB55; /* je: equal / zero */

loc_0030F97C: ;
    PUSH32(esp, 0x8FC540);
    ecx = eax;
    PUSH32(esp, 0x0030F988u); RECOMP_ABI_CALL(0x0002CFA8u, sub_0002CFA8); /* call 0x0002CFA8 */

loc_0030F988: ;
    ecx = edi;
    MEM32(edi) = eax;
    PUSH32(esp, 0x0030F991u); RECOMP_ABI_CALL(0x0001A5D8u, sub_0001A5D8); /* call 0x0001A5D8 */

loc_0030F991: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0030F996: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0030F9A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030F9A5u); } /* indirect call */
    }

loc_0030F9A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FB55; /* je: equal / zero */

loc_0030F9AF: ;
    PUSH32(esp, 0x8FC540);
    ecx = eax;
    PUSH32(esp, 0x0030F9BBu); RECOMP_ABI_CALL(0x00029EBBu, sub_00029EBB); /* call 0x00029EBB */

loc_0030F9BB: ;
    ecx = edi;
    MEM32(edi) = eax;
    PUSH32(esp, 0x0030F9C4u); RECOMP_ABI_CALL(0x0001A5D8u, sub_0001A5D8); /* call 0x0001A5D8 */

loc_0030F9C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0030F9C9: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0030F9DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030F9D8u); } /* indirect call */
    }

loc_0030F9DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FB55; /* je: equal / zero */

loc_0030F9E2: ;
    PUSH32(esp, 0x8FC540);
    ecx = eax;
    PUSH32(esp, 0x0030F9EEu); RECOMP_ABI_CALL(0x0002EDD0u, sub_0002EDD0); /* call 0x0002EDD0 */

loc_0030F9EE: ;
    ecx = edi;
    MEM32(edi) = eax;
    PUSH32(esp, 0x0030F9F7u); RECOMP_ABI_CALL(0x0001A5D8u, sub_0001A5D8); /* call 0x0001A5D8 */

loc_0030F9F7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0030F9FC: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0030FA0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030FA0Bu); } /* indirect call */
    }

loc_0030FA0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FB55; /* je: equal / zero */

loc_0030FA15: ;
    PUSH32(esp, 0x8FC540);
    ecx = eax;
    PUSH32(esp, 0x0030FA21u); RECOMP_ABI_CALL(0x0002B883u, sub_0002B883); /* call 0x0002B883 */

loc_0030FA21: ;
    ecx = edi;
    MEM32(edi) = eax;
    PUSH32(esp, 0x0030FA2Au); RECOMP_ABI_CALL(0x0001A5D8u, sub_0001A5D8); /* call 0x0001A5D8 */

loc_0030FA2A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0030FA2F: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0030FA40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030FA3Eu); } /* indirect call */
    }

loc_0030FA40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FB55; /* je: equal / zero */

loc_0030FA48: ;
    PUSH32(esp, 0x8FC540);
    ecx = eax;
    PUSH32(esp, 0x0030FA54u); RECOMP_ABI_CALL(0x0003144Fu, sub_0003144F); /* call 0x0003144F */

loc_0030FA54: ;
    ecx = edi;
    MEM32(edi) = eax;
    PUSH32(esp, 0x0030FA5Du); RECOMP_ABI_CALL(0x0001A5D8u, sub_0001A5D8); /* call 0x0001A5D8 */

loc_0030FA5D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0030FA62: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0030FA73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030FA71u); } /* indirect call */
    }

loc_0030FA73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FB55; /* je: equal / zero */

loc_0030FA7B: ;
    PUSH32(esp, 0x8FC540);
    ecx = eax;
    PUSH32(esp, 0x0030FA87u); RECOMP_ABI_CALL(0x0001D233u, sub_0001D233); /* call 0x0001D233 */

loc_0030FA87: ;
    ecx = edi;
    MEM32(edi) = eax;
    PUSH32(esp, 0x0030FA90u); RECOMP_ABI_CALL(0x0001A5D8u, sub_0001A5D8); /* call 0x0001A5D8 */

loc_0030FA90: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0030FA95: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0030FAA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030FAA4u); } /* indirect call */
    }

loc_0030FAA6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FB55; /* je: equal / zero */

loc_0030FAAE: ;
    PUSH32(esp, 0x8FC540);
    ecx = eax;
    PUSH32(esp, 0x0030FABAu); RECOMP_ABI_CALL(0x00020EC4u, sub_00020EC4); /* call 0x00020EC4 */

loc_0030FABA: ;
    ecx = edi;
    MEM32(edi) = eax;
    PUSH32(esp, 0x0030FAC3u); RECOMP_ABI_CALL(0x0001A5D8u, sub_0001A5D8); /* call 0x0001A5D8 */

loc_0030FAC3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0030FAC8: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0030FAD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030FAD7u); } /* indirect call */
    }

loc_0030FAD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FB55; /* je: equal / zero */

loc_0030FADD: ;
    PUSH32(esp, 0x8FC540);
    ecx = eax;
    PUSH32(esp, 0x0030FAE9u); RECOMP_ABI_CALL(0x0002111Cu, sub_0002111C); /* call 0x0002111C */

loc_0030FAE9: ;
    ecx = edi;
    MEM32(edi) = eax;
    PUSH32(esp, 0x0030FAF2u); RECOMP_ABI_CALL(0x0001A5D8u, sub_0001A5D8); /* call 0x0001A5D8 */

loc_0030FAF2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0030FAF7: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0030FB08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030FB06u); } /* indirect call */
    }

loc_0030FB08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FB55; /* je: equal / zero */

loc_0030FB0C: ;
    PUSH32(esp, 0x8FC540);
    ecx = eax;
    PUSH32(esp, 0x0030FB18u); RECOMP_ABI_CALL(0x0002F4CEu, sub_0002F4CE); /* call 0x0002F4CE */

loc_0030FB18: ;
    ecx = edi;
    MEM32(edi) = eax;
    PUSH32(esp, 0x0030FB21u); RECOMP_ABI_CALL(0x0001A5D8u, sub_0001A5D8); /* call 0x0001A5D8 */

loc_0030FB21: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0030FB26: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0030FB37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030FB35u); } /* indirect call */
    }

loc_0030FB37: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FB55; /* je: equal / zero */

loc_0030FB3B: ;
    PUSH32(esp, 0x8FC540);
    ecx = eax;
    PUSH32(esp, 0x0030FB47u); RECOMP_ABI_CALL(0x00019F8Eu, sub_00019F8E); /* call 0x00019F8E */

loc_0030FB47: ;
    ecx = edi;
    MEM32(edi) = eax;
    PUSH32(esp, 0x0030FB50u); RECOMP_ABI_CALL(0x0001A5D8u, sub_0001A5D8); /* call 0x0001A5D8 */

loc_0030FB50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0030FB55: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax;

loc_0030FB59: ;
    ecx = edi;
    PUSH32(esp, 0x0030FB60u); RECOMP_ABI_CALL(0x0001A5D8u, sub_0001A5D8); /* call 0x0001A5D8 */

loc_0030FB60: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030FD20
 * Original: 0x0030FD20 - 0x0030FD23 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FD20(void)
{

loc_0030FD20: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030FD30
 * Original: 0x0030FD30 - 0x0030FD57 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030FD30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = esi * 8 + 0x8FC508;
    PUSH32(esp, 0x0030FD47u); RECOMP_ABI_CALL(0x00030888u, sub_00030888); /* call 0x00030888 */

loc_0030FD47: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030FD54; /* jne: not equal / not zero */

loc_0030FD4B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030FD51u); RECOMP_ABI_CALL(0x00030A4Au, sub_00030A4A); /* call 0x00030A4A */

loc_0030FD51: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0030FD54: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030FD60
 * Original: 0x0030FD60 - 0x0030FDC2 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FD60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030FD60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi * 8 + 0x8FC50C);
    esi = esi * 8 + 0x8FC508;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030FD7Au); RECOMP_ABI_CALL(0x00030A4Au, sub_00030A4A); /* call 0x00030A4A */

loc_0030FD7A: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FD99; /* je: equal / zero */

loc_0030FD84: ;
    ecx = esi;
    PUSH32(esp, 0x0030FD8Bu); RECOMP_ABI_CALL(0x00016465u, sub_00016465); /* call 0x00016465 */

loc_0030FD8B: ;
    ecx = esi;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x0030FD99u); RECOMP_ABI_CALL(0x0001A5D8u, sub_0001A5D8); /* call 0x0001A5D8 */

loc_0030FD99: ;
    PUSH32(esp, 0x3C23D70A);
    ecx = 0x8FC540;
    PUSH32(esp, 0x0030FDA8u); RECOMP_ABI_CALL(0x00027EEFu, sub_00027EEF); /* call 0x00027EEF */

loc_0030FDA8: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0030FDB0u); RECOMP_ABI_CALL(0x00030888u, sub_00030888); /* call 0x00030888 */

loc_0030FDB0: ;
    PUSH32(esp, 0x3C23D70A);
    ecx = 0x8FC540;
    PUSH32(esp, 0x0030FDBFu); RECOMP_ABI_CALL(0x00027EEFu, sub_00027EEF); /* call 0x00027EEF */

loc_0030FDBF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030FDE0
 * Original: 0x0030FDE0 - 0x0030FDFE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030FDE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0030FDE8u); RECOMP_ABI_CALL(0x00027BB1u, sub_00027BB1); /* call 0x00027BB1 */

loc_0030FDE8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030FDF8; /* je: equal / zero */

loc_0030FDEF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030FDF5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0030FDF5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0030FDF8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030FE10
 * Original: 0x0030FE10 - 0x0030FE4C (60 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FE10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030FE10: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FE1F; /* je: equal / zero */

loc_0030FE17: ;
    ecx = esi + 0xFC;
    goto loc_0030FE21;

loc_0030FE1F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0030FE21: ;
    PUSH32(esp, 0x0030FE26u); RECOMP_ABI_CALL(0x0001B4CEu, sub_0001B4CE); /* call 0x0001B4CE */

loc_0030FE26: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030FE3D; /* je: equal / zero */

loc_0030FE2A: ;
    ecx = esi + 0xE0;
    PUSH32(esp, 0x0030FE35u); RECOMP_ABI_CALL(0x000323C2u, sub_000323C2); /* call 0x000323C2 */

loc_0030FE35: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00031A80(); return; /* tail jmp 0x00031A80 */

loc_0030FE3D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0030FE44u); RECOMP_ABI_CALL(0x000323C2u, sub_000323C2); /* call 0x000323C2 */

loc_0030FE44: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00031A80(); return; /* tail jmp 0x00031A80 */

}

/**
 * sub_0030FE60
 * Original: 0x0030FE60 - 0x00310072 (530 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FE60(void)
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

loc_0030FE60: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(0x8FC5F0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, ebp);
    ebp = ecx;
    MEM32(esp + 8) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_0030FEA0; /* jne: not equal / not zero */

loc_0030FE73: ;
    eax = MEM32(0x8FC514);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0030FE86; /* jne: not equal / not zero */

loc_0030FE7C: ;
    ecx = 0x8FC508;
    PUSH32(esp, 0x0030FE86u); RECOMP_ABI_CALL(0x000378D1u, sub_000378D1); /* call 0x000378D1 */

loc_0030FE86: ;
    ecx = 0x8FC510;
    PUSH32(esp, 0x0030FE90u); RECOMP_ABI_CALL(0x000378D1u, sub_000378D1); /* call 0x000378D1 */

loc_0030FE90: ;
    eax = MEM32(0x8FC43C);
    PUSH32(esp, eax);
    ecx = 0x8FC540;
    PUSH32(esp, 0x0030FEA0u); RECOMP_ABI_CALL(0x00027EEFu, sub_00027EEF); /* call 0x00027EEF */

loc_0030FEA0: ;
    eax = MEM32(0x8FC514);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = XMM_SCALAR(MEMF(0x8FC498)); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(0x8FC490);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x8FC494);
    if (CMP_NE(_fa, _fb)) goto loc_0030FEF3; /* jne: not equal / not zero */

loc_0030FEC0: ;
    esi = MEM32(0x8FC488);
    eax = MEM32(0x8FC47C);
    ecx = MEM32(0x8FC480);
    edx = MEM32(0x8FC484);
    MEM32(esp + 0x18) = esi;
    esi = MEM32(0x8FC48C);
    MEM32(esp + 0x1C) = esi;
    esi = ebx;
    MEM32(esp + 0x24) = edi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_0030FF3A;

loc_0030FEF3: ;
    esi = MEM32(0x8FC4AC);
    ebp = MEM32(0x8FC4B8);
    xmm1 = XMM_SCALAR(MEMF(0x8FC4BC)); /* movss */
    eax = MEM32(0x8FC4A0);
    ecx = MEM32(0x8FC4A4);
    edx = MEM32(0x8FC4A8);
    MEM32(esp + 0x18) = esi;
    esi = MEM32(0x8FC4B0);
    MEM32(esp + 0x1C) = esi;
    esi = MEM32(0x8FC4B4);
    MEM32(esp + 0x24) = ebp;
    ebp = MEM32(esp + 0x14);
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */

loc_0030FF3A: ;
    _fa = (uint32_t)(MEM32(0x8FC604)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8FC604), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0030FFB8; /* jne: not equal / not zero */

loc_0030FF43: ;
    _fa = (uint32_t)(MEM8(0x907E70)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x907E70), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0030FF75; /* jne: not equal / not zero */

loc_0030FF4C: ;
    esi = MEM32(0x8FC488);
    eax = MEM32(0x8FC47C);
    ecx = MEM32(0x8FC480);
    edx = MEM32(0x8FC484);
    MEM32(esp + 0x18) = esi;
    esi = MEM32(0x8FC48C);
    MEM32(esp + 0x1C) = esi;
    esi = ebx;
    goto loc_0030FFAE;

loc_0030FF75: ;
    esi = MEM32(0x8FC4F4);
    eax = MEM32(0x8FC4E8);
    ecx = MEM32(0x8FC4EC);
    edx = MEM32(0x8FC4F0);
    edi = MEM32(0x8FC500);
    xmm0 = XMM_SCALAR(MEMF(0x8FC504)); /* movss */
    MEM32(esp + 0x18) = esi;
    esi = MEM32(0x8FC4F8);
    MEM32(esp + 0x1C) = esi;
    esi = MEM32(0x8FC4FC);

loc_0030FFAE: ;
    MEM32(esp + 0x24) = edi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_0030FFB8: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0030FFC2u); RECOMP_ABI_CALL(0x00027F0Du, sub_00027F0D); /* call 0x00027F0D */

loc_0030FFC2: ;
    xmm0 = XMM_SCALAR(MEMF(0x8260B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    PUSH32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x24); /* subss */
    ecx = ebp;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0030FFEFu); RECOMP_ABI_CALL(0x0002C1E3u, sub_0002C1E3); /* call 0x0002C1E3 */

loc_0030FFEF: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x7AD340)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    POP32(esp, ebx);
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_00310012; /* ja: above (unsigned >) */

loc_0031000C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */

loc_00310012: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8260AC); /* mulss */
    PUSH32(esp, ecx);
    ecx = ebp;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00310027u); RECOMP_ABI_CALL(0x00031B0Cu, sub_00031B0C); /* call 0x00031B0C */

loc_00310027: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    _cf = (int)(_fa < _fb);
    xmm0 = XMM_SCALAR(MEMF(0x8260A8)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00310042; /* je: equal / zero */

loc_0031003E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00310050; /* jne: not equal / not zero */

loc_00310042: ;
    xmm0 = XMM_SCALAR(MEMF(0x8260A4)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_00310050: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x42C80000);
    ecx = ebp;
    PUSH32(esp, 0x00310061u); RECOMP_ABI_CALL(0x00037A2Au, sub_00037A2A); /* call 0x00037A2A */

loc_00310061: ;
    PUSH32(esp, 0x3FAA3D71);
    ecx = ebp;
    PUSH32(esp, 0x0031006Du); RECOMP_ABI_CALL(0x000151EBu, sub_000151EB); /* call 0x000151EB */

loc_0031006D: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
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
 * sub_0030FFEF
 * Original: 0x0030FFEF - 0x00310072 (131 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FFEF(void)
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

loc_0030FFEF: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x7AD340)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    POP32(esp, ebx);
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_00310012; /* ja: above (unsigned >) */

loc_0031000C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */

loc_00310012: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8260AC); /* mulss */
    PUSH32(esp, ecx);
    ecx = ebp;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00310027u); RECOMP_ABI_CALL(0x00031B0Cu, sub_00031B0C); /* call 0x00031B0C */

loc_00310027: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x8260A8)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00310042; /* je: equal / zero */

loc_0031003E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00310050; /* jne: not equal / not zero */

loc_00310042: ;
    xmm0 = XMM_SCALAR(MEMF(0x8260A4)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_00310050: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x42C80000);
    ecx = ebp;
    PUSH32(esp, 0x00310061u); RECOMP_ABI_CALL(0x00037A2Au, sub_00037A2A); /* call 0x00037A2A */

loc_00310061: ;
    PUSH32(esp, 0x3FAA3D71);
    ecx = ebp;
    PUSH32(esp, 0x0031006Du); RECOMP_ABI_CALL(0x000151EBu, sub_000151EB); /* call 0x000151EB */

loc_0031006D: ;
    POP32(esp, ebp);
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
 * sub_0031002E
 * Original: 0x0031002E - 0x00310072 (68 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031002E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031002E: ;
    xmm0 = XMM_SCALAR(MEMF(0x8260A8)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if (_flags /* je: equal / zero */) goto loc_00310042;

loc_0031003E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00310050; /* jne: not equal / not zero */

loc_00310042: ;
    xmm0 = XMM_SCALAR(MEMF(0x8260A4)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_00310050: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x42C80000);
    ecx = ebp;
    PUSH32(esp, 0x00310061u); RECOMP_ABI_CALL(0x00037A2Au, sub_00037A2A); /* call 0x00037A2A */

loc_00310061: ;
    PUSH32(esp, 0x3FAA3D71);
    ecx = ebp;
    PUSH32(esp, 0x0031006Du); RECOMP_ABI_CALL(0x000151EBu, sub_000151EB); /* call 0x000151EB */

loc_0031006D: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00310100
 * Original: 0x00310100 - 0x003101F2 (242 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310100(void)
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

loc_00310100: ;
    SET_LO8(eax, MEM8(0x8FC450));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003101EB; /* je: equal / zero */

loc_00310113: ;
    ecx = MEM32(esp + 0x18);
    MEM32(0x8FC444) = 0;
    PUSH32(esp, 0x00310126u); RECOMP_ABI_CALL(0x0001FCBDu, sub_0001FCBD); /* call 0x0001FCBD */

loc_00310126: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x00310130u); RECOMP_ABI_CALL(0x0001BE6Au, sub_0001BE6A); /* call 0x0001BE6A */

loc_00310130: ;
    SET_LO8(ecx, MEM8(0x8FC5D0));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00310169; /* jne: not equal / not zero */

loc_0031013F: ;
    ecx = MEM32(0x8FC5D0);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esp + 4;
    MEM32(0x8FC5D0) = ecx;
    PUSH32(esp, eax);
    ecx = 0x8FC5C4;
    PUSH32(esp, 0x0031015Cu); RECOMP_ABI_CALL(0x0001BE6Au, sub_0001BE6A); /* call 0x0001BE6A */

loc_0031015C: ;
    PUSH32(esp, 0x6B6A70);
    PUSH32(esp, 0x00310166u); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_00310166: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00310169: ;
    PUSH32(esp, 0x8FC5C4);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0031017Cu); RECOMP_ABI_CALL(0x00024844u, sub_00024844); /* call 0x00024844 */

loc_0031017C: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = 0x8FC5C4;
    PUSH32(esp, 0x0031018Bu); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_0031018B: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x00310194u); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_00310194: ;
    MEMF(0x8FC43C) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x7AA840)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_003101AD; /* jb: below (unsigned <) */

loc_003101A6: ;
    eax = MEM32(0x8FC604);
    goto loc_003101BE;

loc_003101AD: ;
    xmm0 = XMM_SCALAR(MEMF(0x8FC43C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AB868); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003101CE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AB868)) */

loc_003101BE: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(0x8FC43C) = xmm0.f[0]; /* movss */

loc_003101CE: ;
    ecx = esi + -252;
    PUSH32(esp, 0x003101D9u); RECOMP_ABI_CALL(0x00023368u, sub_00023368); /* call 0x00023368 */

loc_003101D9: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x003101E2u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003101E2: ;
    ecx = esp + 4;
    PUSH32(esp, 0x003101EBu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003101EB: ;
    POP32(esp, esi);
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
 * sub_00310230
 * Original: 0x00310230 - 0x00310280 (80 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00310230: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 4);
    MEM32(esp + 4) = eax;
    if ((_fa == 0)) goto loc_0031026C; /* je: equal / zero */

loc_00310241: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0031025F; /* je: equal / zero */

loc_00310244: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00310269; /* jne: not equal / not zero */

loc_00310247: ;
    MEM8(eax + 0x1C) = 0;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    MEM32(esp + 8) = 2;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

loc_0031025F: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00310269u); RECOMP_ABI_CALL(0x0002790Eu, sub_0002790E); /* call 0x0002790E */

loc_00310269: ;
    esp += 12; return; /* ret 8 */

loc_0031026C: ;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    MEM32(esp + 8) = 0;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

}

/**
 * sub_003102A0
 * Original: 0x003102A0 - 0x003102D9 (57 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003102A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003102A0: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 4);
    MEM32(esp + 4) = eax;
    if ((_fa == 0)) goto loc_003102CC; /* je: equal / zero */

loc_003102B1: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003102D6; /* jne: not equal / not zero */

loc_003102B4: ;
    MEM8(eax + 0x1C) = 0;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    MEM32(esp + 8) = 1;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

loc_003102CC: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003102D6u); RECOMP_ABI_CALL(0x00019228u, sub_00019228); /* call 0x00019228 */

loc_003102D6: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003102F0
 * Original: 0x003102F0 - 0x00310370 (128 bytes, 35 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003102F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003102F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    edx = MEM32(esp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = esp;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 4) = edx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(eax + 8) = edx;
    eax = MEM32(ecx + 4);
    edx = MEM32(eax);
    eax = MEM32(ecx);
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00310346u); RECOMP_ABI_CALL(0x00024F9Cu, sub_00024F9C); /* call 0x00024F9C */

loc_00310346: ;
    eax = MEM32(esp + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00310390
 * Original: 0x00310390 - 0x003103B4 (36 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310390(void)
{

loc_00310390: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003103B1u); RECOMP_ABI_CALL(0x00032EE4u, sub_00032EE4); /* call 0x00032EE4 */

loc_003103B1: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003103C0
 * Original: 0x003103C0 - 0x00310413 (83 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003103C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003103C0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    SET_LO8(edx, 1);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax + 0x21) = LO8(edx);
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = 0xFFFFFFFFu;
    MEM8(eax + 0x20) = LO8(ecx);
    MEM8(eax + 0x22) = LO8(edx);
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00310430
 * Original: 0x00310430 - 0x0031047D (77 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00310430: ;
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031046D; /* jle: less or equal (signed <=) */

loc_00310440: ;
    eax = MEM32(eax * 4 + 0x8E8EB8);
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031046D; /* je: equal / zero */

loc_0031044D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x64));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    edx = edx + edx + -1;
    eax = edx;
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

loc_0031046D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = eax;
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00310490
 * Original: 0x00310490 - 0x00310507 (119 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00310490: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x8FC43C); /* addss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003104D3; /* jle: less or equal (signed <=) */

loc_003104B2: ;
    eax = MEM32(eax * 4 + 0x8E8EB8);
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003104D3; /* je: equal / zero */

loc_003104BF: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x64));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    edx = edx + edx + -1;
    eax = edx;
    goto loc_003104D5;

loc_003104D3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003104D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    MEM32(ecx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003104E7; /* jne: not equal / not zero */

loc_003104DC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_003104E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003104F1; /* je: equal / zero */

loc_003104EB: ;
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

loc_003104F1: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00310504; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 4)) */

loc_003104FD: ;
    MEM32(ecx + 4) = 0;

loc_00310504: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00310530
 * Original: 0x00310530 - 0x003108E5 (949 bytes, 299 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310530(void)
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

loc_00310530: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x44));
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x54);
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0031055Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031055Au); } /* indirect call */
    }

loc_0031055D: ;
    eax = MEM32(eax);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00310570u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031056Du); } /* indirect call */
    }

loc_00310570: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00310587u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00310584u); } /* indirect call */
    }

loc_00310587: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0031059Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031059Bu); } /* indirect call */
    }

loc_0031059E: ;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003105AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003105ACu); } /* indirect call */
    }

loc_003105AF: ;
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003105C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003105BDu); } /* indirect call */
    }

loc_003105C0: ;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003105D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003105CEu); } /* indirect call */
    }

loc_003105D1: ;
    ebp = eax;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003105E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003105DDu); } /* indirect call */
    }

loc_003105E0: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003105EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003105ECu); } /* indirect call */
    }

loc_003105EF: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    ebx = eax;
    SET_LO8(eax, MEM8(0x8FC448));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00310625; /* je: equal / zero */

loc_003105FD: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x58); /* subss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    eax = edi;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    edi = ebx;
    MEMF(esp + 0x58) = xmm2.f[0]; /* movss */
    ebx = eax;

loc_00310625: ;
    ecx = MEM32(esi);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    eax = MEM32(ecx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x2C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0031070E; /* jne: not equal / not zero */

loc_00310640: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00310647u); RECOMP_ABI_CALL(0x0001F2B3u, sub_0001F2B3); /* call 0x0001F2B3 */

loc_00310647: ;
    ecx = MEM32(esp + 0x14);
    MEM8(ecx + 0x1C) = 1;
    edx = MEM32(0x8E8F84);
    ecx = MEM32(edx + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0031067F; /* jle: less or equal (signed <=) */

loc_00310660: ;
    ecx = MEM32(ecx * 4 + 0x8E8EB8);
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0031067F; /* je: equal / zero */

loc_0031066D: ;
    SET_LO8(ebx, MEM8(ecx + 0x64));
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = edx + edx + -1;
    ecx = edx;
    goto loc_00310681;

loc_0031067F: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00310681: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(0x8FC3C8) = ecx;
    MEM32(0x8FC3C4) = ecx;
    MEMF(0x8FC3CC) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_003106AD; /* je: equal / zero */

loc_0031069C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_003106AD; /* je: equal / zero */

loc_003106A7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_003106AD: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_003106E9; /* jne: not equal / not zero */

loc_003106BE: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003106CDu); RECOMP_ABI_CALL(0x000357B6u, sub_000357B6); /* call 0x000357B6 */

loc_003106CD: ;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(eax + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;
    goto loc_00310803;

loc_003106E9: ;
    edx = MEM32(esp + 0x1C);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    edx = MEM32(esp + 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    goto loc_003107E2;

loc_0031070E: ;
    ecx = MEM32(ebp);
    PUSH32(esp, ecx);
    ecx = 0x8FC3C4;
    PUSH32(esp, 0x0031071Cu); RECOMP_ABI_CALL(0x000326A1u, sub_000326A1); /* call 0x000326A1 */

loc_0031071C: ;
    eax = MEM32(0x8FC3C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_NE(_fa, _fb)) goto loc_0031072D; /* jne: not equal / not zero */

loc_00310728: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0031073E;

loc_0031072D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0031073E; /* je: equal / zero */

loc_00310738: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_0031073E: ;
    edx = MEM32(esp + 0x1C);
    xmm2 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003107A5; /* jp: parity */

loc_0031075B: ;
    eax = MEM32(esp + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm2 = xmm3; /* movaps */
    if ((_fca >= _fcb)) goto loc_0031077E; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0031077B: ;
    xmm2 = xmm0; /* movaps */

loc_0031077E: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0031078C; /* jb: below (unsigned <) (xmm4.f[0] vs xmm1.f[0]) */

loc_00310789: ;
    xmm0 = xmm3; /* movaps */

loc_0031078C: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0031079B; /* jp: parity */

loc_00310795: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    goto loc_0031079F;

loc_0031079B: ;
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */

loc_0031079F: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_003107A5: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003107C0; /* jne: not equal / not zero */

loc_003107AC: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003107BBu); RECOMP_ABI_CALL(0x000357B6u, sub_000357B6); /* call 0x000357B6 */

loc_003107BB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003107EF;

loc_003107C0: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x24);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    eax = MEM32(edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);

loc_003107E2: ;
    eax = esp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003107ECu); RECOMP_ABI_CALL(0x0002B360u, sub_0002B360); /* call 0x0002B360 */

loc_003107EC: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003107EF: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = edx;

loc_00310803: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x40);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEM32(0x8FC45C) = eax;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEM32(0x8FC454) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(0x8FC458) = edx;
    edx = MEM32(esp + 0x4C);
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x50);
    MEM32(esp + 0x38) = eax;
    eax = MEM32(esi);
    edi = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0031086Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031086Bu); } /* indirect call */
    }

loc_0031086E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    eax = MEM32(esp + 0x48);
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    ecx = MEM32(esp + 0x4C);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esi);
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x50);
    edi = esp + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x48) = edx;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003108BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003108B9u); } /* indirect call */
    }

loc_003108BC: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    edi = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003108CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003108CBu); } /* indirect call */
    }

loc_003108CE: ;
    esi = MEM32(esi);
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003108DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003108D8u); } /* indirect call */
    }

loc_003108DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x44)) >> 32) & 1);
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003109E0
 * Original: 0x003109E0 - 0x00310A22 (66 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003109E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003109E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    MEM32(0x8FC440) = eax;
    PUSH32(esp, 0x003109F0u); RECOMP_ABI_CALL(0x0002E894u, sub_0002E894); /* call 0x0002E894 */

loc_003109F0: ;
    SET_LO8(eax, MEM8(0x8FC450));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00310A21; /* je: equal / zero */

loc_003109FC: ;
    ecx = 0x8FC508;
    MEM32(0x8FC43C) = 0x3A83126F;
    PUSH32(esp, 0x00310A10u); RECOMP_ABI_CALL(0x000378D1u, sub_000378D1); /* call 0x000378D1 */

loc_00310A10: ;
    ecx = MEM32(0x8FC43C);
    PUSH32(esp, ecx);
    ecx = 0x8FC540;
    PUSH32(esp, 0x00310A21u); RECOMP_ABI_CALL(0x00027EEFu, sub_00027EEF); /* call 0x00027EEF */

loc_00310A21: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00310A40
 * Original: 0x00310A40 - 0x00310BB2 (370 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00310A40: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x909800);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(0x8FC42C) = eax;
    PUSH32(esp, 0x00310A56u); RECOMP_ABI_CALL(0x00027E09u, sub_00027E09); /* call 0x00027E09 */

loc_00310A56: ;
    eax = MEM32(0x904C14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8FC440) = eax;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    MEM32(0x8FC50C) = ebx;
    MEM32(0x8FC508) = ebx;
    MEM32(0x8FC514) = ebx;
    MEM32(0x8FC510) = ebx;
    MEM32(0x8FC51C) = ebx;
    MEM32(0x8FC518) = ebx;
    MEM32(0x8FC524) = ebx;
    MEM32(0x8FC520) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00310A9F; /* je: equal / zero */

loc_00310A9B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00310AA5; /* jne: not equal / not zero */

loc_00310A9F: ;
    MEM8(0x8FC448) = LO8(ebx);

loc_00310AA5: ;
    PUSH32(esp, 0x3C23D70A);
    ecx = 0x8FC540;
    PUSH32(esp, 0x00310AB4u); RECOMP_ABI_CALL(0x00027EEFu, sub_00027EEF); /* call 0x00027EEF */

loc_00310AB4: ;
    PUSH32(esp, ebx);
    ecx = 0x8FC508;
    PUSH32(esp, 0x00310ABFu); RECOMP_ABI_CALL(0x00030888u, sub_00030888); /* call 0x00030888 */

loc_00310ABF: ;
    PUSH32(esp, 0x3C23D70A);
    ecx = 0x8FC540;
    PUSH32(esp, 0x00310ACEu); RECOMP_ABI_CALL(0x00027EEFu, sub_00027EEF); /* call 0x00027EEF */

loc_00310ACE: ;
    _fa = (uint32_t)(MEM8(0x8FC450)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8FC450), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00310AFB; /* je: equal / zero */

loc_00310AD6: ;
    ecx = 0x8FC508;
    MEM32(0x8FC43C) = 0x3A83126F;
    PUSH32(esp, 0x00310AEAu); RECOMP_ABI_CALL(0x000378D1u, sub_000378D1); /* call 0x000378D1 */

loc_00310AEA: ;
    ecx = MEM32(0x8FC43C);
    PUSH32(esp, ecx);
    ecx = 0x8FC540;
    PUSH32(esp, 0x00310AFBu); RECOMP_ABI_CALL(0x00027EEFu, sub_00027EEF); /* call 0x00027EEF */

loc_00310AFB: ;
    _fa = (uint32_t)(MEM32(0x8FC50C)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8FC50C), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00310B50; /* je: equal / zero */

loc_00310B04: ;
    ecx = 0x8FC508;
    PUSH32(esp, 0x00310B0Eu); RECOMP_ABI_CALL(0x00016465u, sub_00016465); /* call 0x00016465 */

loc_00310B0E: ;
    ecx = MEM32(0x907BA4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    MEM32(0x8FC50C) = 3;
    edx = MEM32(ecx);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00310B29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00310B27u); } /* indirect call */
    }

loc_00310B29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00310B40; /* je: equal / zero */

loc_00310B2D: ;
    PUSH32(esp, 0x8FC540);
    ecx = eax;
    PUSH32(esp, 0x00310B39u); RECOMP_ABI_CALL(0x00033A15u, sub_00033A15); /* call 0x00033A15 */

loc_00310B39: ;
    MEM32(0x8FC508) = eax;
    goto loc_00310B46;

loc_00310B40: ;
    MEM32(0x8FC508) = ebx;

loc_00310B46: ;
    ecx = 0x8FC508;
    PUSH32(esp, 0x00310B50u); RECOMP_ABI_CALL(0x0001A5D8u, sub_0001A5D8); /* call 0x0001A5D8 */

loc_00310B50: ;
    _fa = (uint32_t)(MEM32(0x8FC514)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8FC514), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00310B72; /* je: equal / zero */

loc_00310B58: ;
    ecx = 0x8FC510;
    PUSH32(esp, 0x00310B62u); RECOMP_ABI_CALL(0x00016465u, sub_00016465); /* call 0x00016465 */

loc_00310B62: ;
    ecx = 0x8FC510;
    MEM32(0x8FC514) = ebx;
    PUSH32(esp, 0x00310B72u); RECOMP_ABI_CALL(0x0001A5D8u, sub_0001A5D8); /* call 0x0001A5D8 */

loc_00310B72: ;
    _fa = (uint32_t)(MEM32(0x8FC51C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8FC51C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00310B94; /* je: equal / zero */

loc_00310B7A: ;
    ecx = 0x8FC518;
    PUSH32(esp, 0x00310B84u); RECOMP_ABI_CALL(0x00016465u, sub_00016465); /* call 0x00016465 */

loc_00310B84: ;
    ecx = 0x8FC518;
    MEM32(0x8FC51C) = ebx;
    PUSH32(esp, 0x00310B94u); RECOMP_ABI_CALL(0x0001A5D8u, sub_0001A5D8); /* call 0x0001A5D8 */

loc_00310B94: ;
    ecx = 0x8FC5D8;
    MEM8(0x8FC450) = 1;
    PUSH32(esp, 0x00310BA5u); RECOMP_ABI_CALL(0x000376E2u, sub_000376E2); /* call 0x000376E2 */

loc_00310BA5: ;
    PUSH32(esp, ebx);
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x00310BB0u); RECOMP_ABI_CALL(0x00026DB0u, sub_00026DB0); /* call 0x00026DB0 */

loc_00310BB0: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00310C10
 * Original: 0x00310C10 - 0x00310C49 (57 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00310C10: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 4);
    MEM32(esp + 4) = eax;
    if ((_fa == 0)) goto loc_00310C3C; /* je: equal / zero */

loc_00310C21: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00310C46; /* jne: not equal / not zero */

loc_00310C24: ;
    MEM8(eax + 0x1C) = 0;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    MEM32(esp + 8) = 1;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

loc_00310C3C: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00310C46u); RECOMP_ABI_CALL(0x000191E2u, sub_000191E2); /* call 0x000191E2 */

loc_00310C46: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00310C60
 * Original: 0x00310C60 - 0x00310C83 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310C60(void)
{

loc_00310C60: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x8260B4);
    PUSH32(esp, 0x00310C74u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00310C74: ;
    ecx = eax;
    PUSH32(esp, 0x00310C7Bu); RECOMP_ABI_CALL(0x0002DBE2u, sub_0002DBE2); /* call 0x0002DBE2 */

loc_00310C7B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00310C81u); RECOMP_ABI_CALL(0x0003328Bu, sub_0003328B); /* call 0x0003328B */

loc_00310C81: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00310C90
 * Original: 0x00310C90 - 0x00310CA5 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310C90(void)
{

loc_00310C90: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00310CB0
 * Original: 0x00310CB0 - 0x00310CB4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310CB0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00310CB0: ;
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00310CC0
 * Original: 0x00310CC0 - 0x00310CC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310CC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00310CC0: ;
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00310CD0
 * Original: 0x00310CD0 - 0x00310CED (29 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00310CD0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00310CDD; /* je: equal / zero */

loc_00310CD8: ;
    edx = MEM32(ecx + 0x30);
    MEM32(eax) = edx;

loc_00310CDD: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00310CEA; /* je: equal / zero */

loc_00310CE5: ;
    ecx = MEM32(ecx + 0x34);
    MEM32(eax) = ecx;

loc_00310CEA: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00310D00
 * Original: 0x00310D00 - 0x00310D22 (34 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310D00(void)
{

loc_00310D00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx + 0x90;
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
    POP32(esp, edi);
    MEM32(eax) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00310D30
 * Original: 0x00310D30 - 0x00310D3F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310D30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00310D30: ;
    eax = MEM32(ecx);
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 4 + 4) = edx;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00310D50
 * Original: 0x00310D50 - 0x00310D76 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310D50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00310D50: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 1;
    MEM8(ecx + 0x18) = LO8(edx);
    MEM8(ecx + 0x19) = LO8(eax);
    MEM8(ecx + 0x1A) = LO8(eax);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0x28) = 0xFFFFFFFFu;
    MEM32(ecx + 0xC) = edx;
    MEM8(ecx) = LO8(eax);
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00310D80
 * Original: 0x00310D80 - 0x00310D97 (23 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310D80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00310D80: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00310D8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00310D8Cu); } /* indirect call */
    }

loc_00310D8F: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00310DA0
 * Original: 0x00310DA0 - 0x00310DA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310DA0(void)
{

loc_00310DA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00310DB0
 * Original: 0x00310DB0 - 0x00310DBC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00310DB0: ;
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00310DC0
 * Original: 0x00310DC0 - 0x00310DC9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310DC0(void)
{

loc_00310DC0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00310DC7u); RECOMP_ABI_CALL(0x0002E894u, sub_0002E894); /* call 0x0002E894 */

loc_00310DC7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00310DD0
 * Original: 0x00310DD0 - 0x00310E12 (66 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310DD0(void)
{

loc_00310DD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    ecx = MEM32(0x8FCBE0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00310DEAu); RECOMP_ABI_CALL(0x0002EC04u, sub_0002EC04); /* call 0x0002EC04 */

loc_00310DEA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    MEM32(0x8FC52C) = eax;
    MEM32(0x8FC530) = ecx;
    MEM32(0x8FC528) = 2;
    MEM32(esi + 0x28) = 7;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00310E30
 * Original: 0x00310E30 - 0x00310E39 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310E30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00310E30: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ecx + 0x19) = LO8(eax);
    MEM8(ecx + 0x1A) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00310E40
 * Original: 0x00310E40 - 0x00310E45 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310E40(void)
{

loc_00310E40: ;
    MEM8(ecx + 0x18) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00310E50
 * Original: 0x00310E50 - 0x00310E55 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310E50(void)
{

loc_00310E50: ;
    MEM8(ecx + 0x18) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00310E60
 * Original: 0x00310E60 - 0x00310E75 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00310E60: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00310E67u); RECOMP_ABI_CALL(0x0002C620u, sub_0002C620); /* call 0x0002C620 */

loc_00310E67: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_00310E80
 * Original: 0x00310E80 - 0x00310E91 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310E80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00310E80: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00310E87u); RECOMP_ABI_CALL(0x0002C620u, sub_0002C620); /* call 0x0002C620 */

loc_00310E87: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

}

/**
 * sub_00310EA0
 * Original: 0x00310EA0 - 0x00310EA4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310EA0(void)
{

loc_00310EA0: ;
    SET_LO8(eax, MEM8(ecx + 0x19));
    esp += 4; return; /* ret */

}

/**
 * sub_00310EB0
 * Original: 0x00310EB0 - 0x00310ECD (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00310EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00310EB0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00310EB7u); RECOMP_ABI_CALL(0x0002C620u, sub_0002C620); /* call 0x0002C620 */

loc_00310EB7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00310ECA; /* jl: less (signed <) */

loc_00310EBF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00310ECA; /* jg: greater (signed >) */

loc_00310EC4: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00310ECA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00310EE0
 * Original: 0x00310EE0 - 0x00310EF3 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310EE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00310EE0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00310EE7u); RECOMP_ABI_CALL(0x0002C620u, sub_0002C620); /* call 0x0002C620 */

loc_00310EE7: ;
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(7));
    eax = eax - 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_00310F00
 * Original: 0x00310F00 - 0x00310F85 (133 bytes, 42 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310F00(void)
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

loc_00310F00: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x00310F08u); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_00310F08: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x00310F33u); RECOMP_ABI_CALL(0x00557980u, sub_00557980); /* call 0x00557980 */

loc_00310F33: ;
    fp_push((double)SMEM32(esp)); /* fild */
    edx = MEM32(esp);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00310F43; /* jge: greater or equal (signed >=) */

loc_00310F3D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00310F43: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x24) / fp_top()); /* fdivr dword ptr [esp + 0x24] */
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00310F5D; /* jge: greater or equal (signed >=) */

loc_00310F57: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00310F5D: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x28) / fp_top()); /* fdivr dword ptr [esp + 0x28] */
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    ecx = eax;
    MEM32(ecx) = edx;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x28);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(ecx + 8) = edx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00310FB0
 * Original: 0x00310FB0 - 0x003110EC (316 bytes, 81 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00310FB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00310FB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031100Du); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_0031100D: ;
    eax = MEM32(eax + 0xC);
    esi = eax + 0x50;
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00311023u); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_00311023: ;
    eax = MEM32(eax + 0xC);
    esi = eax + 0x90;
    ecx = 0x10;
    edi = esp + 0x90;
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
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031104Du); RECOMP_ABI_CALL(0x00012B99u, sub_00012B99); /* call 0x00012B99 */

loc_0031104D: ;
    edx = MEM32(eax);
    MEM32(esp + 0x10) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x14) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x18) = edx;
    eax = MEM32(eax + 0xC);
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    MEM32(esp + 0x24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031107Eu); RECOMP_ABI_CALL(0x00012B99u, sub_00012B99); /* call 0x00012B99 */

loc_0031107E: ;
    edx = MEM32(eax + 4);
    ecx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(eax + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp + 0x2C) = edx;
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x2C); /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x24); /* mulss */
    MEM32(esp + 0x28) = ecx;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    ecx = eax;
    MEM32(ecx) = edx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx + 4) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(ecx + 8) = edx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00311140
 * Original: 0x00311140 - 0x003113C2 (642 bytes, 152 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00311140(void)
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

loc_00311140: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x8FC44C);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    fp_push((double)SMEM32(ecx + 0x40)); /* fild */
    eax = MEM32(ecx + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB7C8); /* mulss */
    PUSH32(esp, esi);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_00311198; /* jge: greater or equal (signed >=) */

loc_00311192: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00311198: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    edx = MEM32(ecx + 0x44);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(ecx + 0x44)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_003111B2; /* jge: greater or equal (signed >=) */

loc_003111AC: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_003111B2: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003111C1u); RECOMP_ABI_CALL(0x00018E31u, sub_00018E31); /* call 0x00018E31 */

loc_003111C1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AA820); /* mulss */
    ecx = 0x10;
    esi = eax;
    edi = esp + 0x70;
    xmm3 = xmm0; /* movaps */
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
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    { fp_top() = tan(fp_top()); fp_push(1.0); } /* fptan */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] / MEMF(esp + 0x58); /* divss */
    xmm2 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x3C); /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    { fp_top() = tan(fp_top()); fp_push(1.0); } /* fptan */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm3.f[0] = xmm3.f[0] / MEMF(esp + 0x30); /* divss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    eax = esp + 0x70;
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    ecx = esp + 0x18;
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003112B1u); RECOMP_ABI_CALL(0x00012B99u, sub_00012B99); /* call 0x00012B99 */

loc_003112B1: ;
    edx = MEM32(eax);
    MEM32(esp + 0x10) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x14) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x18) = edx;
    eax = MEM32(eax + 0xC);
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    MEM32(esp + 0x24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003112DFu); RECOMP_ABI_CALL(0x00012B99u, sub_00012B99); /* call 0x00012B99 */

loc_003112DF: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x20) = ecx;
    edx = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    MEM32(esp + 0x24) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x28) = ecx;
    edx = MEM32(eax + 0xC);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    MEM32(esp + 0x2C) = edx;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x44;
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031134Au); RECOMP_ABI_CALL(0x00018288u, sub_00018288); /* call 0x00018288 */

loc_0031134A: ;
    fp_pop(); /* fstp st(0) */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    ecx = eax;
    MEM32(ecx) = edx;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    MEM32(ecx + 4) = edx;
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(ecx + 8) = edx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00311470
 * Original: 0x00311470 - 0x003114EF (127 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00311470: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031149B; /* jne: not equal / not zero */

loc_00311478: ;
    edx = MEM32(0x8FC4E8);
    eax = MEM32(esp + 4);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(0x8FC4EC);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x8FC4F0);
    MEM32(ecx + 8) = edx;
    esp += 8; return; /* ret 4 */

loc_0031149B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003114A9; /* je: equal / zero */

loc_003114A0: ;
    _fa = (uint32_t)(MEM8(0x907E70)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x907E70), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003114CC; /* jne: not equal / not zero */

loc_003114A9: ;
    edx = MEM32(0x8FC4A0);
    eax = MEM32(esp + 4);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(0x8FC4A4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x8FC4A8);
    MEM32(ecx + 8) = edx;
    esp += 8; return; /* ret 4 */

loc_003114CC: ;
    edx = MEM32(0x8FC47C);
    eax = MEM32(esp + 4);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(0x8FC480);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x8FC484);
    MEM32(ecx + 8) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00311510
 * Original: 0x00311510 - 0x003115AA (154 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00311510: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00311544; /* jne: not equal / not zero */

loc_00311518: ;
    edx = MEM32(0x8FC4F4);
    eax = MEM32(esp + 4);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(0x8FC4F8);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x8FC4FC);
    MEM32(ecx + 8) = edx;
    edx = MEM32(0x8FC500);
    MEM32(ecx + 0xC) = edx;
    esp += 8; return; /* ret 4 */

loc_00311544: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00311552; /* je: equal / zero */

loc_00311549: ;
    _fa = (uint32_t)(MEM8(0x907E70)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x907E70), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031157E; /* jne: not equal / not zero */

loc_00311552: ;
    edx = MEM32(0x8FC4AC);
    eax = MEM32(esp + 4);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(0x8FC4B0);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x8FC4B4);
    MEM32(ecx + 8) = edx;
    edx = MEM32(0x8FC4B8);
    MEM32(ecx + 0xC) = edx;
    esp += 8; return; /* ret 4 */

loc_0031157E: ;
    edx = MEM32(0x8FC488);
    eax = MEM32(esp + 4);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(0x8FC48C);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x8FC490);
    MEM32(ecx + 8) = edx;
    edx = MEM32(0x8FC494);
    MEM32(ecx + 0xC) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003115D0
 * Original: 0x003115D0 - 0x00311633 (99 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003115D0(void)
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

loc_003115D0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x8FC498)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_003115F3; /* jne: not equal / not zero */

loc_003115E6: ;
    xmm0 = XMM_SCALAR(MEMF(0x8FC504)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_003115F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00311601; /* je: equal / zero */

loc_003115F8: ;
    _fa = (uint32_t)(MEM8(0x907E70)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x907E70), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031160E; /* jne: not equal / not zero */

loc_00311601: ;
    xmm0 = XMM_SCALAR(MEMF(0x8FC4BC)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_0031160E: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AD340)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00311628; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0031161B: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD410)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_00311628: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x8260AC)); /* fmul dword ptr [0x8260ac] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00311650
 * Original: 0x00311650 - 0x00311688 (56 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00311650: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x30) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00311682; /* jne: not equal / not zero */

loc_00311660: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031167A; /* jl: less (signed <) */

loc_00311664: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031167A; /* jge: greater or equal (signed >=) */

loc_00311669: ;
    eax = MEM32(eax * 4 + 0x8E8EB8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    MEM32(ecx + 0x34) = eax;
    esp += 12; return; /* ret 8 */

loc_0031167A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x34) = eax;
    esp += 12; return; /* ret 8 */

loc_00311682: ;
    MEM32(ecx + 0x34) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003116A0
 * Original: 0x003116A0 - 0x003116C3 (35 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003116A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003116A0: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM8(ecx + 0x19) = LO8(edx);
    MEM8(ecx + 0x1A) = LO8(edx);
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x28) = 0xFFFFFFFFu;
    PUSH32(esp, 0x003116BDu); RECOMP_ABI_CALL(0x00017103u, sub_00017103); /* call 0x00017103 */

loc_003116BD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003116D0
 * Original: 0x003116D0 - 0x00311706 (54 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003116D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003116D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    ecx = MEM32(0x8FCBE0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003116EAu); RECOMP_ABI_CALL(0x0002EC04u, sub_0002EC04); /* call 0x0002EC04 */

loc_003116EA: ;
    SET_LO8(eax, MEM8(esi + 0x19));
    PUSH32(esp, 1);
    PUSH32(esp, 0x17);
    MEM8(esi + 0x1A) = LO8(eax);
    MEM8(esi + 0x19) = 0;
    PUSH32(esp, 0x003116FDu); RECOMP_ABI_CALL(0x00017103u, sub_00017103); /* call 0x00017103 */

loc_003116FD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x18) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00311720
 * Original: 0x00311720 - 0x00311773 (83 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00311720: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    ecx = MEM32(0x8FCBE0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0031173Au); RECOMP_ABI_CALL(0x0002EC04u, sub_0002EC04); /* call 0x0002EC04 */

loc_0031173A: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0031174D; /* je: equal / zero */

loc_00311746: ;
    MEM32(esi + 0x28) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0031174D: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031176F; /* je: equal / zero */

loc_00311752: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM8(esi + 0x19) = 0;
    MEM8(esi + 0x1A) = 0;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x28) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0031176Cu); RECOMP_ABI_CALL(0x00017103u, sub_00017103); /* call 0x00017103 */

loc_0031176C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0031176F: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00311790
 * Original: 0x00311790 - 0x003117B8 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311790(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00311790: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEM8(esi + 0x18) = LO8(eax);
    MEM8(esi + 0x19) = LO8(eax);
    MEM8(esi + 0x1A) = LO8(eax);
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x28) = 0xFFFFFFFFu;
    PUSH32(esp, 0x003117AFu); RECOMP_ABI_CALL(0x00017103u, sub_00017103); /* call 0x00017103 */

loc_003117AF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x19) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003117D0
 * Original: 0x003117D0 - 0x003117F7 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003117D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003117D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x003117D8u); RECOMP_ABI_CALL(0x0002C620u, sub_0002C620); /* call 0x0002C620 */

loc_003117D8: ;
    PUSH32(esp, 0);
    esi = eax;
    PUSH32(esp, 0x003117E1u); RECOMP_ABI_CALL(0x0002C620u, sub_0002C620); /* call 0x0002C620 */

loc_003117E1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_003117F1; /* jne: not equal / not zero */

loc_003117E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003117F1; /* jge: greater or equal (signed >=) */

loc_003117EE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_003117F1: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00311800
 * Original: 0x00311800 - 0x00311896 (150 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00311800: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00311894; /* jne: not equal / not zero */

loc_0031180E: ;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031183C; /* je: equal / zero */

loc_00311819: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00311820u); RECOMP_ABI_CALL(0x0002E894u, sub_0002E894); /* call 0x0002E894 */

loc_00311820: ;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM8(esi + 0x19) = 0;
    MEM8(esi + 0x1A) = 0;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x28) = edi;
    PUSH32(esp, 0x00311839u); RECOMP_ABI_CALL(0x00017103u, sub_00017103); /* call 0x00017103 */

loc_00311839: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0031183C: ;
    SET_LO8(eax, MEM8(esi + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031184D; /* je: equal / zero */

loc_00311843: ;
    POP32(esp, edi);
    MEM32(esi + 0x2C) = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031184D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00311854u); RECOMP_ABI_CALL(0x0002C620u, sub_0002C620); /* call 0x0002C620 */

loc_00311854: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00311866; /* jne: not equal / not zero */

loc_0031185C: ;
    POP32(esp, edi);
    MEM32(esi + 0x2C) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00311866: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0031186Du); RECOMP_ABI_CALL(0x0002C620u, sub_0002C620); /* call 0x0002C620 */

loc_0031186D: ;
    PUSH32(esp, 0);
    edi = eax;
    PUSH32(esp, 0x00311876u); RECOMP_ABI_CALL(0x0002C620u, sub_0002C620); /* call 0x0002C620 */

loc_00311876: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00311882; /* jne: not equal / not zero */

loc_0031187D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031188C; /* jl: less (signed <) */

loc_00311882: ;
    POP32(esp, edi);
    MEM32(esi + 0x2C) = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031188C: ;
    MEM32(esi + 0x2C) = 0;
    POP32(esp, edi);

loc_00311894: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003118C0
 * Original: 0x003118C0 - 0x0031195A (154 bytes, 59 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003118C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003118C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    esi = ecx;
    ecx = MEM32(0x8FCBE0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003118D7u); RECOMP_ABI_CALL(0x0002EC04u, sub_0002EC04); /* call 0x0002EC04 */

loc_003118D7: ;
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1A), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00311902; /* je: equal / zero */

loc_003118DC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM8(esi + 0x18) = LO8(ebx);
    MEM8(esi + 0x19) = LO8(ebx);
    MEM8(esi + 0x1A) = LO8(ebx);
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x28) = 0xFFFFFFFFu;
    PUSH32(esp, 0x003118F6u); RECOMP_ABI_CALL(0x00017103u, sub_00017103); /* call 0x00017103 */

loc_003118F6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x19) = 1;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00311902: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031190E; /* jne: not equal / not zero */

loc_00311908: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xC), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00311955; /* je: equal / zero */

loc_0031190E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00311915u); RECOMP_ABI_CALL(0x0002C620u, sub_0002C620); /* call 0x0002C620 */

loc_00311915: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00311932; /* je: equal / zero */

loc_0031191C: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00311924u); RECOMP_ABI_CALL(0x00017103u, sub_00017103); /* call 0x00017103 */

loc_00311924: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x19) = LO8(ebx);
    MEM8(esi + 0x1A) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00311932: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM8(esi + 0x19) = LO8(ebx);
    MEM8(esi + 0x1A) = LO8(ebx);
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x28) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0031194Cu); RECOMP_ABI_CALL(0x00017103u, sub_00017103); /* call 0x00017103 */

loc_0031194C: ;
    MEM8(esi + 0x19) = LO8(ebx);
    MEM8(esi + 0x1A) = LO8(ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00311955: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00311980
 * Original: 0x00311980 - 0x00311A28 (168 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00311980: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 8) = eax;
    _fa = (uint32_t)(MEM8(esi + 0x19)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x19), LO8(ebx) (8-bit) */
    MEM8(esi + 0x18) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00311A23; /* jne: not equal / not zero */

loc_0031199A: ;
    ecx = MEM32(0x8FCBE0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003119ABu); RECOMP_ABI_CALL(0x0002EC04u, sub_0002EC04); /* call 0x0002EC04 */

loc_003119AB: ;
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1A), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003119D6; /* je: equal / zero */

loc_003119B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM8(esi + 0x18) = LO8(ebx);
    MEM8(esi + 0x19) = LO8(ebx);
    MEM8(esi + 0x1A) = LO8(ebx);
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x28) = 0xFFFFFFFFu;
    PUSH32(esp, 0x003119CAu); RECOMP_ABI_CALL(0x00017103u, sub_00017103); /* call 0x00017103 */

loc_003119CA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x19) = 1;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003119D6: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00311A23; /* je: equal / zero */

loc_003119DC: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x003119E3u); RECOMP_ABI_CALL(0x0002C620u, sub_0002C620); /* call 0x0002C620 */

loc_003119E3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00311A00; /* je: equal / zero */

loc_003119EA: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003119F2u); RECOMP_ABI_CALL(0x00017103u, sub_00017103); /* call 0x00017103 */

loc_003119F2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x19) = LO8(ebx);
    MEM8(esi + 0x1A) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00311A00: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM8(esi + 0x19) = LO8(ebx);
    MEM8(esi + 0x1A) = LO8(ebx);
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x28) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00311A1Au); RECOMP_ABI_CALL(0x00017103u, sub_00017103); /* call 0x00017103 */

loc_00311A1A: ;
    MEM8(esi + 0x19) = LO8(ebx);
    MEM8(esi + 0x1A) = LO8(ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00311A23: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00311A60
 * Original: 0x00311A60 - 0x00311AA7 (71 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00311A60: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x30) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00311A80; /* jl: less (signed <) */

loc_00311A6E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00311A80; /* jge: greater or equal (signed >=) */

loc_00311A73: ;
    eax = MEM32(eax * 4 + 0x8E8EB8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    goto loc_00311A82;

loc_00311A80: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00311A82: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esi + 0x34) = eax;
    ecx = MEM32(0x8FCBE0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00311A9Cu); RECOMP_ABI_CALL(0x0002EC04u, sub_0002EC04); /* call 0x0002EC04 */

loc_00311A9C: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x28) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00311AC0
 * Original: 0x00311AC0 - 0x00311AD1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311AC0(void)
{

loc_00311AC0: ;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x8C3930);
    PUSH32(esp, 0x00311AD0u); RECOMP_ABI_CALL(0x0002F613u, sub_0002F613); /* call 0x0002F613 */

loc_00311AD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00311AE0
 * Original: 0x00311AE0 - 0x00311AE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311AE0(void)
{

loc_00311AE0: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_00311AF0
 * Original: 0x00311AF0 - 0x00311B12 (34 bytes, 13 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311AF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00311AF0: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x00311B0Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00311B09u); } /* indirect call */
    }

loc_00311B0C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00311B20
 * Original: 0x00311B20 - 0x00311B2C (12 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311B20(void)
{

loc_00311B20: ;
    eax = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x00311B28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00311B25u); } /* indirect call */
    }

loc_00311B28: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00311B30
 * Original: 0x00311B30 - 0x00311B3E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00311B30: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    esp += 4; return; /* ret */

}

/**
 * sub_00311B50
 * Original: 0x00311B50 - 0x00311B6B (27 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311B50(void)
{

loc_00311B50: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00311B65u); RECOMP_ABI_CALL(0x00574C39u, sub_00574C39); /* call 0x00574C39 */

loc_00311B65: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00311B80
 * Original: 0x00311B80 - 0x00311BA0 (32 bytes, 13 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311B80(void)
{

loc_00311B80: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00311B9Au); RECOMP_ABI_CALL(0x00574CE7u, sub_00574CE7); /* call 0x00574CE7 */

loc_00311B9A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00311BB0
 * Original: 0x00311BB0 - 0x00311BB1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311BB0(void)
{

loc_00311BB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00311BC0
 * Original: 0x00311BC0 - 0x00311BC7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311BC0(void)
{

loc_00311BC0: ;
    SET_LO8(eax, MEM8(ecx + 0x300));
    esp += 4; return; /* ret */

}

/**
 * sub_00311BD0
 * Original: 0x00311BD0 - 0x00311BE2 (18 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311BD0(void)
{

loc_00311BD0: ;
    SET_LO8(eax, MEM8(esp + 8));
    edx = MEM32(esp + 4);
    MEM8(edx + ecx + 0x1A4) = LO8(eax);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00311BF0
 * Original: 0x00311BF0 - 0x00311BF3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311BF0(void)
{

loc_00311BF0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00311C00
 * Original: 0x00311C00 - 0x00311C04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311C00(void)
{

loc_00311C00: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00311C10
 * Original: 0x00311C10 - 0x00311C14 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311C10(void)
{

loc_00311C10: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00311C20
 * Original: 0x00311C20 - 0x00311C24 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311C20(void)
{

loc_00311C20: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_00311C30
 * Original: 0x00311C30 - 0x00311C34 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311C30(void)
{

loc_00311C30: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00311C40
 * Original: 0x00311C40 - 0x00311C5E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311C40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00311C40: ;
    eax = MEM32(0x8D7E98);
    ecx = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(0x8D7E90); PUSH32(esp, 0x00311C5Au); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00311C54u); } /* indirect call */
    }

loc_00311C5A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00311C70
 * Original: 0x00311C70 - 0x00311C76 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311C70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00311C70: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x8D7E94)); return; /* indirect tail jmp */

}

/**
 * sub_00311C80
 * Original: 0x00311C80 - 0x00311C92 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311C80(void)
{

loc_00311C80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00311C8Au); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00311C8A: ;
    ecx = eax;
    PUSH32(esp, 0x00311C91u); RECOMP_ABI_CALL(0x00012C0Cu, sub_00012C0C); /* call 0x00012C0C */

loc_00311C91: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00311CA0
 * Original: 0x00311CA0 - 0x00311CBC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00311CA0: ;
    ecx = MEM32(0x8FC61C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00311CBB; /* je: equal / zero */

loc_00311CAA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00311CB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00311CAEu); } /* indirect call */
    }

loc_00311CB1: ;
    MEM32(0x8FC61C) = 0;

loc_00311CBB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00311CD0
 * Original: 0x00311CD0 - 0x00311CD6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311CD0(void)
{

loc_00311CD0: ;
    eax = MEM32(0x8FC61C);
    esp += 4; return; /* ret */

}

/**
 * sub_00311CE0
 * Original: 0x00311CE0 - 0x00311CE9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311CE0(void)
{

loc_00311CE0: ;
    eax = ecx;
    MEM32(eax) = 0x8269BC;
    esp += 4; return; /* ret */

}

/**
 * sub_00311CF0
 * Original: 0x00311CF0 - 0x00311CF3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311CF0(void)
{

loc_00311CF0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00311D00
 * Original: 0x00311D00 - 0x00311D03 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311D00(void)
{

loc_00311D00: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00311D10
 * Original: 0x00311D10 - 0x00311D13 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311D10(void)
{

loc_00311D10: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00311D20
 * Original: 0x00311D20 - 0x00311D23 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311D20(void)
{

loc_00311D20: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00311D30
 * Original: 0x00311D30 - 0x00311D33 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311D30(void)
{

loc_00311D30: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00311D40
 * Original: 0x00311D40 - 0x00311D43 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311D40(void)
{

loc_00311D40: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00311D50
 * Original: 0x00311D50 - 0x00311D53 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311D50(void)
{

loc_00311D50: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00311D60
 * Original: 0x00311D60 - 0x00311DF0 (144 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311D60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00311D60: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4B64A38) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4B64A38 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00311DB4; /* ja: above (unsigned >) */

loc_00311D6D: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00311DA8; /* je: equal / zero */

loc_00311D6F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB656EA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB656EA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00311D9C; /* je: equal / zero */

loc_00311D76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4B640DD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4B640DD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00311D90; /* je: equal / zero */

loc_00311D7D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4B64613) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4B64613 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00311DED; /* jne: not equal / not zero */

loc_00311D84: ;
    edx = MEM32(edx + 4);
    eax = MEM32(ecx);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

loc_00311D90: ;
    edx = MEM32(edx + 4);
    eax = MEM32(ecx);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

loc_00311D9C: ;
    edx = MEM32(edx + 4);
    eax = MEM32(ecx);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

loc_00311DA8: ;
    edx = MEM32(edx + 4);
    eax = MEM32(ecx);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

loc_00311DB4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4B64ADB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4B64ADB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00311DE1; /* je: equal / zero */

loc_00311DBB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4B6580F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4B6580F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00311DD5; /* je: equal / zero */

loc_00311DC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4B65AF5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4B65AF5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00311DED; /* jne: not equal / not zero */

loc_00311DC9: ;
    edx = MEM32(edx + 4);
    eax = MEM32(ecx);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x1C)); return; /* indirect tail jmp */

loc_00311DD5: ;
    edx = MEM32(edx + 4);
    eax = MEM32(ecx);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

loc_00311DE1: ;
    edx = MEM32(edx + 4);
    eax = MEM32(ecx);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

loc_00311DED: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00311E20
 * Original: 0x00311E20 - 0x00311E30 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311E20(void)
{

loc_00311E20: ;
    MEM32(ecx) = 0x8269E4;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 0x1C);
    PUSH32(esp, 0x00311E2Fu); RECOMP_ABI_CALL(0x00033551u, sub_00033551); /* call 0x00033551 */

loc_00311E2F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00311E40
 * Original: 0x00311E40 - 0x00311E4B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311E40(void)
{

loc_00311E40: ;
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00311E4Au); RECOMP_ABI_CALL(0x00019E7Bu, sub_00019E7B); /* call 0x00019E7B */

loc_00311E4A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00311E50
 * Original: 0x00311E50 - 0x00311E5E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311E50(void)
{

loc_00311E50: ;
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x00311E5Du); RECOMP_ABI_CALL(0x00019E7Bu, sub_00019E7B); /* call 0x00019E7B */

loc_00311E5D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00311E70
 * Original: 0x00311E70 - 0x00311E91 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00311E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00311E70: ;
    SET_LO8(eax, MEM8(ecx + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00311E8E; /* je: equal / zero */

loc_00311E77: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00311E8E; /* je: equal / zero */

loc_00311E7E: ;
    SET_LO8(ecx, MEM8(eax + 0x300));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00311E8E; /* jne: not equal / not zero */

loc_00311E88: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00311E8E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00311EA0
 * Original: 0x00311EA0 - 0x00311EA5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311EA0(void)
{

loc_00311EA0: ;
    MEM8(ecx + 0x21) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00311EB0
 * Original: 0x00311EB0 - 0x00311EBE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00311EB0: ;
    SET_LO8(eax, MEM8(ecx + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00311EBB; /* je: equal / zero */

loc_00311EB7: ;
    SET_LO8(eax, MEM8(ecx + 0x23));
    esp += 4; return; /* ret */

loc_00311EBB: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00311ED0
 * Original: 0x00311ED0 - 0x00311F73 (163 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00311ED0: ;
    eax = 0x1110;
    PUSH32(esp, 0x00311EDAu); RECOMP_ABI_CALL(0x005CC470u, sub_005CC470); /* call 0x005CC470 */

loc_00311EDA: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00311EE8; /* jle: less or equal (signed <=) */

loc_00311EE4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x24) = eax;

loc_00311EE8: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00311F6B; /* jg: greater (signed >) */

loc_00311EEF: ;
    SET_LO8(eax, MEM8(esi + 0x22));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi + 0x24) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00311F13; /* je: equal / zero */

loc_00311EFD: ;
    PUSH32(esp, 1);
    ecx = 0x8B22D0;
    PUSH32(esp, 0x00311F09u); RECOMP_ABI_CALL(0x000354FFu, sub_000354FF); /* call 0x000354FF */

loc_00311F09: ;
    ecx = 0x8B22D0;
    PUSH32(esp, 0x00311F13u); RECOMP_ABI_CALL(0x0001D3CDu, sub_0001D3CD); /* call 0x0001D3CD */

loc_00311F13: ;
    ecx = esp + 4;
    eax = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C);
    MEM32(esp + 0x10) = 3;
    MEM32(esp + 8) = 0x4B6580F;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x00311F38u); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_00311F38: ;
    ecx = MEM32(esi + 0x1C);
    eax = esp + 4;
    edx = esp + 0x110;
    PUSH32(esp, eax);
    MEM32(esp + 0x114) = 0x15;
    MEM8(esp + 0x118) = 0;
    MEM32(esp + 8) = 0x4B64ADB;
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, 0x00311F6Bu); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_00311F6B: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00311FA0
 * Original: 0x00311FA0 - 0x00311FAD (13 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00311FA0: ;
    MEM32(esp + 0xC) = 0x80;
    g_seh_ebp = ebp; sub_0059D322(); return; /* tail jmp 0x0059D322 */

}

/**
 * sub_00311FB0
 * Original: 0x00311FB0 - 0x00311FCE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00311FB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00311FB8u); RECOMP_ABI_CALL(0x00035ED7u, sub_00035ED7); /* call 0x00035ED7 */

loc_00311FB8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00311FC8; /* je: equal / zero */

loc_00311FBF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00311FC5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00311FC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00311FC8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00311FE0
 * Original: 0x00311FE0 - 0x00311FF9 (25 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00311FE0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00311FF3; /* je: equal / zero */

loc_00311FEA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00311FF0u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00311FF0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00311FF3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00312000
 * Original: 0x00312000 - 0x0031201F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00312000: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00312008u); RECOMP_ABI_CALL(0x004EF8CEu, sub_004EF8CE); /* call 0x004EF8CE */

loc_00312008: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00312019; /* je: equal / zero */

loc_0031200F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x8D7E94); PUSH32(esp, 0x00312016u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00312010u); } /* indirect call */
    }

loc_00312016: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00312019: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00312030
 * Original: 0x00312030 - 0x00312373 (835 bytes, 247 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312030(void)
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

loc_00312030: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0031203Bu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0031203B: ;
    PUSH32(esp, 0x00312040u); RECOMP_ABI_CALL(0x0001B339u, sub_0001B339); /* call 0x0001B339 */

loc_00312040: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031236C; /* jne: not equal / not zero */

loc_00312049: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x5C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031236B; /* je: equal / zero */

loc_00312056: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x64);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031236A; /* je: equal / zero */

loc_00312063: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x826B18);
    PUSH32(esp, 0x0031206Fu); RECOMP_ABI_CALL(0x0001908Eu, sub_0001908E); /* call 0x0001908E */

loc_0031206F: ;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x8D7E98);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00312081u); RECOMP_ABI_CALL(0x0002B3D3u, sub_0002B3D3); /* call 0x0002B3D3 */

loc_00312081: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0x0031208Cu); RECOMP_ABI_CALL(0x0059EE6Eu, sub_0059EE6E); /* call 0x0059EE6E */

loc_0031208C: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0x00312097u); RECOMP_ABI_CALL(0x0059ED4Du, sub_0059ED4D); /* call 0x0059ED4D */

loc_00312097: ;
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003120A4u); RECOMP_ABI_CALL(0x0059ED93u, sub_0059ED93); /* call 0x0059ED93 */

loc_003120A4: ;
    eax = MEM32(0x8D7E98);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003120B5u); RECOMP_ABI_CALL(0x0002B3D3u, sub_0002B3D3); /* call 0x0002B3D3 */

loc_003120B5: ;
    ecx = MEM32(0x8D7E98);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x7B891F);
    edi = eax;
    { uint32_t _icall_target = MEM32(0x8D7E90); PUSH32(esp, 0x003120CFu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003120C9u); } /* indirect call */
    }

loc_003120CF: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003120DF; /* je: equal / zero */

loc_003120D6: ;
    ecx = eax;
    PUSH32(esp, 0x003120DDu); RECOMP_ABI_CALL(0x004EED21u, sub_004EED21); /* call 0x004EED21 */

loc_003120DD: ;
    goto loc_003120E1;

loc_003120DF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003120E1: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = eax;
    MEM32(esi + 0x34) = eax;
    PUSH32(esp, 0x003120F2u); RECOMP_ABI_CALL(0x004EF14Fu, sub_004EF14F); /* call 0x004EF14F */

loc_003120F2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003120F8u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003120F8: ;
    eax = MEM32(0x909394);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esp + 0x18) = 0;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x500);
    PUSH32(esp, 0x826B04);
    PUSH32(esp, 0x00312128u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00312128: ;
    ecx = eax;
    PUSH32(esp, 0x0031212Fu); RECOMP_ABI_CALL(0x00018837u, sub_00018837); /* call 0x00018837 */

loc_0031212F: ;
    ebp = MEM32(esp + 0x10);
    edi = eax;
    MEM32(esi + 0x2C) = edi;
    PUSH32(esp, 0x0031213Du); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_0031213D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0031214Bu); RECOMP_ABI_CALL(0x00574C39u, sub_00574C39); /* call 0x00574C39 */

loc_0031214B: ;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00312154u); RECOMP_ABI_CALL(0x005B3297u, sub_005B3297); /* call 0x005B3297 */

loc_00312154: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esi + 0x30) = eax;
    SET_LO8(eax, MEM8(0x8FC1CD));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x64) = 0;
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0031220C; /* je: equal / zero */

loc_0031217B: ;
    eax = 0x826AF4;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = 0x826AE4;
    MEM32(esp + 0x30) = 0x826AD4;
    MEM32(esp + 0x34) = 0x826AC4;
    MEM32(esp + 0x38) = 0x826AB4;
    MEM32(esp + 0x3C) = 0x826AA4;
    MEM32(esp + 0x40) = 0x826A94;
    MEM32(esp + 0x44) = 0x826A84;
    MEM32(esp + 0x48) = 0x826A74;
    MEM32(esp + 0x4C) = 0x826A68;
    MEM32(esp + 0x50) = 0x826A58;
    MEM32(esp + 0x54) = 0x826A48;
    MEM32(esp + 0x58) = 0;
    edi = esp + 0x28;

loc_003121E8: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003121EFu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_003121EF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00312202; /* je: equal / zero */

loc_003121F6: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003121E8; /* jne: not equal / not zero */

loc_00312200: ;
    goto loc_0031225E;

loc_00312202: ;
    xmm0 = XMM_SCALAR(MEMF(0x826A44)); /* movss */
    goto loc_00312253;

loc_0031220C: ;
    eax = 0x826A34;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = 0x826A24;
    MEM32(esp + 0x20) = 0x826A14;
    MEM32(esp + 0x24) = 0;
    edi = esp + 0x18;

loc_00312231: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00312238u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00312238: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031224B; /* je: equal / zero */

loc_0031223F: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00312231; /* jne: not equal / not zero */

loc_00312249: ;
    goto loc_0031225E;

loc_0031224B: ;
    xmm0 = XMM_SCALAR(MEMF(0x826A10)); /* movss */

loc_00312253: ;
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x60) = 1;

loc_0031225E: ;
    ecx = MEM32(esi + 0x34);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00312268u); RECOMP_ABI_CALL(0x004EEDACu, sub_004EEDAC); /* call 0x004EEDAC */

loc_00312268: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00312343; /* jle: less or equal (signed <=) */

loc_00312270: ;
    SET_LO8(ebx, MEM8(esp + 0x60));

loc_00312274: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003122A6; /* je: equal / zero */

loc_00312278: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00312281u); RECOMP_ABI_CALL(0x004EED2Bu, sub_004EED2B); /* call 0x004EED2B */

loc_00312281: ;
    ecx = MEM32(eax + 0x14);
    MEM32(esp + 0x60) = ecx;
    fp_push((double)SMEM32(esp + 0x60)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x64)); /* fmul dword ptr [esp + 0x64] */
    PUSH32(esp, 0x00312295u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00312295: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031229Fu); RECOMP_ABI_CALL(0x004EED2Bu, sub_004EED2B); /* call 0x004EED2B */

loc_0031229F: ;
    ecx = eax;
    PUSH32(esp, 0x003122A6u); RECOMP_ABI_CALL(0x004EF07Au, sub_004EF07A); /* call 0x004EF07A */

loc_003122A6: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003122AFu); RECOMP_ABI_CALL(0x004EED2Bu, sub_004EED2B); /* call 0x004EED2B */

loc_003122AF: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00312332; /* jne: not equal / not zero */

loc_003122B4: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003122BDu); RECOMP_ABI_CALL(0x004EED2Bu, sub_004EED2B); /* call 0x004EED2B */

loc_003122BD: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00312332; /* jne: not equal / not zero */

loc_003122C4: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003122CDu); RECOMP_ABI_CALL(0x004EED2Bu, sub_004EED2B); /* call 0x004EED2B */

loc_003122CD: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00312332; /* jne: not equal / not zero */

loc_003122D4: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003122DDu); RECOMP_ABI_CALL(0x004EED2Bu, sub_004EED2B); /* call 0x004EED2B */

loc_003122DD: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00312332; /* jne: not equal / not zero */

loc_003122E4: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003122EFu); RECOMP_ABI_CALL(0x004EED2Bu, sub_004EED2B); /* call 0x004EED2B */

loc_003122EF: ;
    ecx = eax;
    PUSH32(esp, 0x003122F6u); RECOMP_ABI_CALL(0x004EF049u, sub_004EF049); /* call 0x004EF049 */

loc_003122F6: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, 0x15E);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00312304u); RECOMP_ABI_CALL(0x004EED2Bu, sub_004EED2B); /* call 0x004EED2B */

loc_00312304: ;
    ecx = eax;
    PUSH32(esp, 0x0031230Bu); RECOMP_ABI_CALL(0x004EF052u, sub_004EF052); /* call 0x004EF052 */

loc_0031230B: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, 0x258);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00312319u); RECOMP_ABI_CALL(0x004EED2Bu, sub_004EED2B); /* call 0x004EED2B */

loc_00312319: ;
    ecx = eax;
    PUSH32(esp, 0x00312320u); RECOMP_ABI_CALL(0x004EF05Cu, sub_004EF05C); /* call 0x004EF05C */

loc_00312320: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, 0x32);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031232Bu); RECOMP_ABI_CALL(0x004EED2Bu, sub_004EED2B); /* call 0x004EED2B */

loc_0031232B: ;
    ecx = eax;
    PUSH32(esp, 0x00312332u); RECOMP_ABI_CALL(0x004EF066u, sub_004EF066); /* call 0x004EF066 */

loc_00312332: ;
    ecx = MEM32(esi + 0x34);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0031233Bu); RECOMP_ABI_CALL(0x004EEDACu, sub_004EEDAC); /* call 0x004EEDAC */

loc_0031233B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00312274; /* jl: less (signed <) */

loc_00312343: ;
    edx = MEM32(esi + 0x34);
    eax = MEM32(esi + 0x30);
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x0031235Bu); RECOMP_ABI_CALL(0x0002DE53u, sub_0002DE53); /* call 0x0002DE53 */

loc_0031235B: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00312367u); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_00312367: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0031236A: ;
    POP32(esp, ebx);

loc_0031236B: ;
    POP32(esp, edi);

loc_0031236C: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00312065
 * Original: 0x00312065 - 0x00312373 (782 bytes, 231 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312065(void)
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

loc_00312065: ;
    PUSH32(esp, 0x826B18);
    PUSH32(esp, 0x0031206Fu); RECOMP_ABI_CALL(0x0001908Eu, sub_0001908E); /* call 0x0001908E */

loc_0031206F: ;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x8D7E98);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00312081u); RECOMP_ABI_CALL(0x0002B3D3u, sub_0002B3D3); /* call 0x0002B3D3 */

loc_00312081: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0x0031208Cu); RECOMP_ABI_CALL(0x0059EE6Eu, sub_0059EE6E); /* call 0x0059EE6E */

loc_0031208C: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0x00312097u); RECOMP_ABI_CALL(0x0059ED4Du, sub_0059ED4D); /* call 0x0059ED4D */

loc_00312097: ;
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003120A4u); RECOMP_ABI_CALL(0x0059ED93u, sub_0059ED93); /* call 0x0059ED93 */

loc_003120A4: ;
    eax = MEM32(0x8D7E98);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003120B5u); RECOMP_ABI_CALL(0x0002B3D3u, sub_0002B3D3); /* call 0x0002B3D3 */

loc_003120B5: ;
    ecx = MEM32(0x8D7E98);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x7B891F);
    edi = eax;
    { uint32_t _icall_target = MEM32(0x8D7E90); PUSH32(esp, 0x003120CFu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003120C9u); } /* indirect call */
    }

loc_003120CF: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003120DF; /* je: equal / zero */

loc_003120D6: ;
    ecx = eax;
    PUSH32(esp, 0x003120DDu); RECOMP_ABI_CALL(0x004EED21u, sub_004EED21); /* call 0x004EED21 */

loc_003120DD: ;
    goto loc_003120E1;

loc_003120DF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003120E1: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = eax;
    MEM32(esi + 0x34) = eax;
    PUSH32(esp, 0x003120F2u); RECOMP_ABI_CALL(0x004EF14Fu, sub_004EF14F); /* call 0x004EF14F */

loc_003120F2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003120F8u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003120F8: ;
    eax = MEM32(0x909394);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esp + 0x18) = 0;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x500);
    PUSH32(esp, 0x826B04);
    PUSH32(esp, 0x00312128u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00312128: ;
    ecx = eax;
    PUSH32(esp, 0x0031212Fu); RECOMP_ABI_CALL(0x00018837u, sub_00018837); /* call 0x00018837 */

loc_0031212F: ;
    ebp = MEM32(esp + 0x10);
    edi = eax;
    MEM32(esi + 0x2C) = edi;
    PUSH32(esp, 0x0031213Du); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_0031213D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0031214Bu); RECOMP_ABI_CALL(0x00574C39u, sub_00574C39); /* call 0x00574C39 */

loc_0031214B: ;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00312154u); RECOMP_ABI_CALL(0x005B3297u, sub_005B3297); /* call 0x005B3297 */

loc_00312154: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esi + 0x30) = eax;
    SET_LO8(eax, MEM8(0x8FC1CD));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x64) = 0;
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0031220C; /* je: equal / zero */

loc_0031217B: ;
    eax = 0x826AF4;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = 0x826AE4;
    MEM32(esp + 0x30) = 0x826AD4;
    MEM32(esp + 0x34) = 0x826AC4;
    MEM32(esp + 0x38) = 0x826AB4;
    MEM32(esp + 0x3C) = 0x826AA4;
    MEM32(esp + 0x40) = 0x826A94;
    MEM32(esp + 0x44) = 0x826A84;
    MEM32(esp + 0x48) = 0x826A74;
    MEM32(esp + 0x4C) = 0x826A68;
    MEM32(esp + 0x50) = 0x826A58;
    MEM32(esp + 0x54) = 0x826A48;
    MEM32(esp + 0x58) = 0;
    edi = esp + 0x28;

loc_003121E8: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003121EFu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_003121EF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00312202; /* je: equal / zero */

loc_003121F6: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003121E8; /* jne: not equal / not zero */

loc_00312200: ;
    goto loc_0031225E;

loc_00312202: ;
    xmm0 = XMM_SCALAR(MEMF(0x826A44)); /* movss */
    goto loc_00312253;

loc_0031220C: ;
    eax = 0x826A34;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = 0x826A24;
    MEM32(esp + 0x20) = 0x826A14;
    MEM32(esp + 0x24) = 0;
    edi = esp + 0x18;

loc_00312231: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00312238u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00312238: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031224B; /* je: equal / zero */

loc_0031223F: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00312231; /* jne: not equal / not zero */

loc_00312249: ;
    goto loc_0031225E;

loc_0031224B: ;
    xmm0 = XMM_SCALAR(MEMF(0x826A10)); /* movss */

loc_00312253: ;
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x60) = 1;

loc_0031225E: ;
    ecx = MEM32(esi + 0x34);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00312268u); RECOMP_ABI_CALL(0x004EEDACu, sub_004EEDAC); /* call 0x004EEDAC */

loc_00312268: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00312343; /* jle: less or equal (signed <=) */

loc_00312270: ;
    SET_LO8(ebx, MEM8(esp + 0x60));

loc_00312274: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003122A6; /* je: equal / zero */

loc_00312278: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00312281u); RECOMP_ABI_CALL(0x004EED2Bu, sub_004EED2B); /* call 0x004EED2B */

loc_00312281: ;
    ecx = MEM32(eax + 0x14);
    MEM32(esp + 0x60) = ecx;
    fp_push((double)SMEM32(esp + 0x60)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x64)); /* fmul dword ptr [esp + 0x64] */
    PUSH32(esp, 0x00312295u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00312295: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031229Fu); RECOMP_ABI_CALL(0x004EED2Bu, sub_004EED2B); /* call 0x004EED2B */

loc_0031229F: ;
    ecx = eax;
    PUSH32(esp, 0x003122A6u); RECOMP_ABI_CALL(0x004EF07Au, sub_004EF07A); /* call 0x004EF07A */

loc_003122A6: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003122AFu); RECOMP_ABI_CALL(0x004EED2Bu, sub_004EED2B); /* call 0x004EED2B */

loc_003122AF: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00312332; /* jne: not equal / not zero */

loc_003122B4: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003122BDu); RECOMP_ABI_CALL(0x004EED2Bu, sub_004EED2B); /* call 0x004EED2B */

loc_003122BD: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00312332; /* jne: not equal / not zero */

loc_003122C4: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003122CDu); RECOMP_ABI_CALL(0x004EED2Bu, sub_004EED2B); /* call 0x004EED2B */

loc_003122CD: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00312332; /* jne: not equal / not zero */

loc_003122D4: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003122DDu); RECOMP_ABI_CALL(0x004EED2Bu, sub_004EED2B); /* call 0x004EED2B */

loc_003122DD: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00312332; /* jne: not equal / not zero */

loc_003122E4: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003122EFu); RECOMP_ABI_CALL(0x004EED2Bu, sub_004EED2B); /* call 0x004EED2B */

loc_003122EF: ;
    ecx = eax;
    PUSH32(esp, 0x003122F6u); RECOMP_ABI_CALL(0x004EF049u, sub_004EF049); /* call 0x004EF049 */

loc_003122F6: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, 0x15E);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00312304u); RECOMP_ABI_CALL(0x004EED2Bu, sub_004EED2B); /* call 0x004EED2B */

loc_00312304: ;
    ecx = eax;
    PUSH32(esp, 0x0031230Bu); RECOMP_ABI_CALL(0x004EF052u, sub_004EF052); /* call 0x004EF052 */

loc_0031230B: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, 0x258);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00312319u); RECOMP_ABI_CALL(0x004EED2Bu, sub_004EED2B); /* call 0x004EED2B */

loc_00312319: ;
    ecx = eax;
    PUSH32(esp, 0x00312320u); RECOMP_ABI_CALL(0x004EF05Cu, sub_004EF05C); /* call 0x004EF05C */

loc_00312320: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, 0x32);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031232Bu); RECOMP_ABI_CALL(0x004EED2Bu, sub_004EED2B); /* call 0x004EED2B */

loc_0031232B: ;
    ecx = eax;
    PUSH32(esp, 0x00312332u); RECOMP_ABI_CALL(0x004EF066u, sub_004EF066); /* call 0x004EF066 */

loc_00312332: ;
    ecx = MEM32(esi + 0x34);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0031233Bu); RECOMP_ABI_CALL(0x004EEDACu, sub_004EEDAC); /* call 0x004EEDAC */

loc_0031233B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00312274; /* jl: less (signed <) */

loc_00312343: ;
    edx = MEM32(esi + 0x34);
    eax = MEM32(esi + 0x30);
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x0031235Bu); RECOMP_ABI_CALL(0x0002DE53u, sub_0002DE53); /* call 0x0002DE53 */

loc_0031235B: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00312367u); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_00312367: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00312450
 * Original: 0x00312450 - 0x0031264B (507 bytes, 159 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00312450: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031245Fu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0031245F: ;
    PUSH32(esp, 0x00312464u); RECOMP_ABI_CALL(0x0001B339u, sub_0001B339); /* call 0x0001B339 */

loc_00312464: ;
    ebx = MEM32(esp + 0x120);
    ebp = eax;
    edi = 0x826CA4;
    esi = ebx;
    ecx = 0xD;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_003124AC; /* jne: not equal / not zero */

loc_0031247F: ;
    PUSH32(esp, 0x00312484u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_00312484: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x2C;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = esp + 0x1C;
    edx = MEM32(edx * 4 + 0x826BD0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x826BC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003124A4u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003124A4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003125FA;

loc_003124AC: ;
    PUSH32(esp, 0x826BB4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003124B7u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_003124B7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00312500; /* jne: not equal / not zero */

loc_003124BE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003124E1; /* jne: not equal / not zero */

loc_003124C3: ;
    ecx = MEM32(0x8C4270);
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003124D9u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003124D9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003125FA;

loc_003124E1: ;
    eax = MEM32(ebp * 4 + 0x8C4270);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003124F8u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003124F8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003125FA;

loc_00312500: ;
    PUSH32(esp, 0x826BA8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031250Bu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_0031250B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031253A; /* jne: not equal / not zero */

loc_00312512: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    eax = 0x826BA4;
    if (CMP_EQ(_fa, _fb)) goto loc_00312521; /* je: equal / zero */

loc_0031251C: ;
    eax = 0x7B891F;

loc_00312521: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    edx = esp + 0x24;
    PUSH32(esp, 0x7E0928);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00312532u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00312532: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003125FA;

loc_0031253A: ;
    PUSH32(esp, 0x826B98);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00312545u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00312545: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00312574; /* jne: not equal / not zero */

loc_0031254C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    eax = 0x826BA4;
    if (CMP_EQ(_fa, _fb)) goto loc_0031255B; /* je: equal / zero */

loc_00312556: ;
    eax = 0x7B891F;

loc_0031255B: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = esp + 0x24;
    PUSH32(esp, 0x7E0928);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031256Cu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0031256C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003125FA;

loc_00312574: ;
    PUSH32(esp, 0x826B8C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0031257Fu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_0031257F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003125AA; /* jne: not equal / not zero */

loc_00312586: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    eax = 0x826BA4;
    if (CMP_EQ(_fa, _fb)) goto loc_00312595; /* je: equal / zero */

loc_00312590: ;
    eax = 0x7B891F;

loc_00312595: ;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x826B80);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003125A5u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003125A5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003125FA;

loc_003125AA: ;
    PUSH32(esp, 0x826B78);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003125B5u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_003125B5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003125E3; /* jne: not equal / not zero */

loc_003125BC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003125E3; /* jne: not equal / not zero */

loc_003125C1: ;
    SET_LO8(eax, MEM8(0x8FC1CD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003125E3; /* je: equal / zero */

loc_003125CA: ;
    PUSH32(esp, 0x826B74);
    edx = esp + 0x20;
    PUSH32(esp, 0x826B6C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003125DEu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003125DE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003125FA;

loc_003125E3: ;
    edx = esp + 0x1C;
    eax = ebx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_003125F0;

    /* nop */

loc_003125F0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003125F0; /* jne: not equal / not zero */

loc_003125FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);

loc_00312600: ;
    SET_LO8(ecx, MEM8(eax + 0x826B64));
    MEM8(esp + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00312600; /* jne: not equal / not zero */

loc_0031260E: ;
    SET_LO8(eax, MEM8(0x8FC1CD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = 0x826B5C;
    if (CMP_NE(_fa, _fb)) goto loc_00312621; /* jne: not equal / not zero */

loc_0031261C: ;
    eax = 0x826B54;

loc_00312621: ;
    ecx = esp;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x120);
    PUSH32(esp, 0x826B48);
    PUSH32(esp, 0x826B3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00312642u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00312642: ;
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003126D0
 * Original: 0x003126D0 - 0x003127C0 (240 bytes, 63 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003126D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003126D0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x826D50;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x50);
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = 0x826D44;
    MEM32(esp + 0x14) = 0x826D38;
    MEM32(esp + 0x18) = 0x7E04E8;
    MEM32(esp + 0x1C) = 0x826D2C;
    MEM32(esp + 0x20) = 0x826D20;
    MEM32(esp + 0x24) = 0x7E1894;
    MEM32(esp + 0x28) = 0x826D14;
    MEM32(esp + 0x2C) = 0x826D08;
    MEM32(esp + 0x30) = 0x826CFC;
    MEM32(esp + 0x34) = 0x826CF0;
    MEM32(esp + 0x38) = 0x826CE4;
    MEM32(esp + 0x3C) = 0x826CDC;
    MEM32(esp + 0x40) = 0x826CD0;
    MEM32(esp + 0x44) = 0x826CC4;
    MEM32(esp + 0x48) = ebx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00312760;

    /* nop */

loc_00312760: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00312767u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00312767: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00312782; /* je: equal / zero */

loc_0031276E: ;
    eax = MEM32(esp + esi * 4 + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00312760; /* jne: not equal / not zero */

loc_00312777: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00312782: ;
    esi = MEM32(esp + esi * 4 + 0xC);
    eax = MEM32(esp + 0x54);
    PUSH32(esp, 0x826CBC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E0928);
    PUSH32(esp, eax);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x0031279Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0031279D: ;
    ecx = MEM32(esp + 0x68);
    PUSH32(esp, 0x826CB4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E0928);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003127B2u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003127B2: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00312800
 * Original: 0x00312800 - 0x0031281F (31 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00312800: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x826BB4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031280Fu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_0031280F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFF6u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x64)) >> 32) & 1);
    eax = eax + 0x64;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00312830
 * Original: 0x00312830 - 0x0031284B (27 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312830(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00312830: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x826B78);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031283Fu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_0031283F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00312860
 * Original: 0x00312860 - 0x003128CF (111 bytes, 36 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00312860: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00312871u); RECOMP_ABI_CALL(0x0055A1EFu, sub_0055A1EF); /* call 0x0055A1EF */

loc_00312871: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 4;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00312885u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00312885: ;
    ecx = eax;
    PUSH32(esp, 0x0031288Cu); RECOMP_ABI_CALL(0x0055D468u, sub_0055D468); /* call 0x0055D468 */

loc_0031288C: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = 0;
    MEM32(eax) = 0;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003128B3u); RECOMP_ABI_CALL(0x0055A5F2u, sub_0055A5F2); /* call 0x0055A5F2 */

loc_003128B3: ;
    ecx = MEM32(esp);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003128C5u); RECOMP_ABI_CALL(0x00559AD5u, sub_00559AD5); /* call 0x00559AD5 */

loc_003128C5: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003128F0
 * Original: 0x003128F0 - 0x0031293C (76 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003128F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003128F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esi) = 0x8269E4;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = ecx;
    MEM8(esi + 0x20) = LO8(eax);
    MEM8(esi + 0x21) = LO8(eax);
    MEM8(esi + 0x22) = LO8(eax);
    MEM8(esi + 0x23) = LO8(eax);
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    PUSH32(esp, 0x00312936u); RECOMP_ABI_CALL(0x00037C91u, sub_00037C91); /* call 0x00037C91 */

loc_00312936: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00312950
 * Original: 0x00312950 - 0x00312978 (40 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00312950: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, esi);
    MEM32(esi) = 0x8269E4;
    PUSH32(esp, 0x00312962u); RECOMP_ABI_CALL(0x00033551u, sub_00033551); /* call 0x00033551 */

loc_00312962: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00312972; /* je: equal / zero */

loc_00312969: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031296Fu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0031296F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00312972: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00312990
 * Original: 0x00312990 - 0x003129C3 (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00312990: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003129C1; /* je: equal / zero */

loc_0031299A: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003129C1; /* je: equal / zero */

loc_003129A1: ;
    SET_LO8(ecx, MEM8(eax + 0x300));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003129C1; /* jne: not equal / not zero */

loc_003129AB: ;
    PUSH32(esp, 0x003129B0u); RECOMP_ABI_CALL(0x00561155u, sub_00561155); /* call 0x00561155 */

loc_003129B0: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x003129B8u); RECOMP_ABI_CALL(0x0001AA29u, sub_0001AA29); /* call 0x0001AA29 */

loc_003129B8: ;
    ecx = MEM32(esi + 0x14);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00028B1A(); return; /* tail jmp 0x00028B1A */

loc_003129C1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003129D0
 * Original: 0x003129D0 - 0x00312C00 (560 bytes, 181 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003129D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003129D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ebp = esi + 4;
    eax = esp + 0x18;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003129E7u); RECOMP_ABI_CALL(0x005737D9u, sub_005737D9); /* call 0x005737D9 */

loc_003129E7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp);
    PUSH32(esp, 0x7FC4F0);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00312A01u); RECOMP_ABI_CALL(0x00572A41u, sub_00572A41); /* call 0x00572A41 */

loc_00312A01: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00312A10u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00312A10: ;
    ecx = eax;
    PUSH32(esp, 0x00312A17u); RECOMP_ABI_CALL(0x0055D4AAu, sub_0055D4AA); /* call 0x0055D4AA */

loc_00312A17: ;
    edx = MEM32(esp + 0x10);
    edi = esi + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00312A2Cu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00312A2C: ;
    ecx = eax;
    PUSH32(esp, 0x00312A33u); RECOMP_ABI_CALL(0x0055D26Du, sub_0055D26D); /* call 0x0055D26D */

loc_00312A33: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00312A43u); RECOMP_ABI_CALL(0x0056141Bu, sub_0056141B); /* call 0x0056141B */

loc_00312A43: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00312A4Du); RECOMP_ABI_CALL(0x00561417u, sub_00561417); /* call 0x00561417 */

loc_00312A4D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    PUSH32(esp, 0x00312A5Eu); RECOMP_ABI_CALL(0x0055852Du, sub_0055852D); /* call 0x0055852D */

loc_00312A5E: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0x461C4000);
    PUSH32(esp, 0xC1200000u);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00312A74u); RECOMP_ABI_CALL(0x00557D90u, sub_00557D90); /* call 0x00557D90 */

loc_00312A74: ;
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
    PUSH32(esp, 0x7FC4E8);
    MEM32(eax) = 0;
    PUSH32(esp, 0x00312A9Au); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00312A9A: ;
    ecx = MEM32(esp + 0x24);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00312AA8u); RECOMP_ABI_CALL(0x0001806Cu, sub_0001806C); /* call 0x0001806C */

loc_00312AA8: ;
    ebx = esi + 8;
    eax = esp + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00312AB6u); RECOMP_ABI_CALL(0x0055A37Eu, sub_0055A37E); /* call 0x0055A37E */

loc_00312AB6: ;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00312AC0u); RECOMP_ABI_CALL(0x00558A33u, sub_00558A33); /* call 0x00558A33 */

loc_00312AC0: ;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 2);
    ecx = eax;
    PUSH32(esp, 0x00312ACDu); RECOMP_ABI_CALL(0x005589ADu, sub_005589AD); /* call 0x005589AD */

loc_00312ACD: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x7E6F5C);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00312ADEu); RECOMP_ABI_CALL(0x00036A8Au, sub_00036A8A); /* call 0x00036A8A */

loc_00312ADE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 7);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x00312AF1u); RECOMP_ABI_CALL(0x00560D03u, sub_00560D03); /* call 0x00560D03 */

loc_00312AF1: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00312B02u); RECOMP_ABI_CALL(0x00560D03u, sub_00560D03); /* call 0x00560D03 */

loc_00312B02: ;
    PUSH32(esp, 5);
    PUSH32(esp, 8);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x00312B13u); RECOMP_ABI_CALL(0x00560D03u, sub_00560D03); /* call 0x00560D03 */

loc_00312B13: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 3);
    PUSH32(esp, 0xC);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00312B24u); RECOMP_ABI_CALL(0x00560D03u, sub_00560D03); /* call 0x00560D03 */

loc_00312B24: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 3);
    PUSH32(esp, 0xD);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00312B35u); RECOMP_ABI_CALL(0x00560D03u, sub_00560D03); /* call 0x00560D03 */

loc_00312B35: ;
    PUSH32(esp, 0x826D5C);
    PUSH32(esp, 0x00312B3Fu); RECOMP_ABI_CALL(0x00027864u, sub_00027864); /* call 0x00027864 */

loc_00312B3F: ;
    MEM32(esp + 0x1C) = eax;
    MEM32(0x8D7E90) = 0x245E7;
    MEM32(0x8D7E94) = 0x59D40F;
    MEM32(0x8D7E98) = 0;
    PUSH32(esp, 0x00312B66u); RECOMP_ABI_CALL(0x0059E895u, sub_0059E895); /* call 0x0059E895 */

loc_00312B66: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x330);
    PUSH32(esp, 0x00312B72u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00312B72: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00312B82; /* je: equal / zero */

loc_00312B79: ;
    ecx = eax;
    PUSH32(esp, 0x00312B80u); RECOMP_ABI_CALL(0x0003178Du, sub_0003178D); /* call 0x0003178D */

loc_00312B80: ;
    goto loc_00312B84;

loc_00312B82: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00312B84: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp);
    MEM32(esi + 0x14) = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00312B9Du); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_00312B9D: ;
    edx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00312BA6u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00312BA6: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00312BAFu); RECOMP_ABI_CALL(0x00017D1Au, sub_00017D1A); /* call 0x00017D1A */

loc_00312BAF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00312BB8u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00312BB8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00312BC8; /* je: equal / zero */

loc_00312BBF: ;
    ecx = eax;
    PUSH32(esp, 0x00312BC6u); RECOMP_ABI_CALL(0x00011CDFu, sub_00011CDF); /* call 0x00011CDF */

loc_00312BC6: ;
    goto loc_00312BCA;

loc_00312BC8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00312BCA: ;
    MEM32(esi + 0x18) = eax;
    eax = MEM32(esi + 0x14);
    MEM8(eax + 0x1A6) = 1;
    ecx = MEM32(esi + 0x14);
    SET_LO8(edx, MEM8(0x8FC1CD));
    MEM8(ecx + 0x1A8) = LO8(edx);
    eax = MEM32(esi + 0x14);
    MEM8(eax + 0x1AF) = 1;
    ecx = MEM32(ebp);
    PUSH32(esp, 0x00312BF8u); RECOMP_ABI_CALL(0x00573960u, sub_00573960); /* call 0x00573960 */

loc_00312BF8: ;
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
 * sub_00312C90
 * Original: 0x00312C90 - 0x00312D95 (261 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00312C90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00312CB3; /* je: equal / zero */

loc_00312C9E: ;
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00312CA9u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00312CA9: ;
    ecx = eax;
    PUSH32(esp, 0x00312CB0u); RECOMP_ABI_CALL(0x0055D70Fu, sub_0055D70F); /* call 0x0055D70F */

loc_00312CB0: ;
    MEM32(esi + 0xC) = edi;

loc_00312CB3: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00312CCB; /* je: equal / zero */

loc_00312CBA: ;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00312CC5u); RECOMP_ABI_CALL(0x0055A927u, sub_0055A927); /* call 0x0055A927 */

loc_00312CC5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = edi;

loc_00312CCB: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00312CE3; /* je: equal / zero */

loc_00312CD2: ;
    PUSH32(esp, eax);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00312CDDu); RECOMP_ABI_CALL(0x00573946u, sub_00573946); /* call 0x00573946 */

loc_00312CDD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = edi;

loc_00312CE3: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00312CFF; /* je: equal / zero */

loc_00312CEA: ;
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00312CF5u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00312CF5: ;
    ecx = eax;
    PUSH32(esp, 0x00312CFCu); RECOMP_ABI_CALL(0x0055D588u, sub_0055D588); /* call 0x0055D588 */

loc_00312CFC: ;
    MEM32(esi + 0x10) = edi;

loc_00312CFF: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00312D1A; /* je: equal / zero */

loc_00312D07: ;
    ecx = ebx;
    PUSH32(esp, 0x00312D0Eu); RECOMP_ABI_CALL(0x00035ED7u, sub_00035ED7); /* call 0x00035ED7 */

loc_00312D0E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00312D14u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00312D14: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = edi;

loc_00312D1A: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00312D2D; /* je: equal / zero */

loc_00312D21: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00312D27u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00312D27: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = edi;

loc_00312D2D: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00312D40; /* je: equal / zero */

loc_00312D34: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00312D3Au); RECOMP_ABI_CALL(0x005B329Cu, sub_005B329C); /* call 0x005B329C */

loc_00312D3A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x30) = edi;

loc_00312D40: ;
    ebx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00312D62; /* je: equal / zero */

loc_00312D47: ;
    PUSH32(esp, 0x00312D4Cu); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_00312D4C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x311C80);
    PUSH32(esp, ebx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00312D5Fu); RECOMP_ABI_CALL(0x00574CE7u, sub_00574CE7); /* call 0x00574CE7 */

loc_00312D5F: ;
    MEM32(esi + 0x2C) = edi;

loc_00312D62: ;
    ebx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00312D7D; /* je: equal / zero */

loc_00312D69: ;
    ecx = ebx;
    PUSH32(esp, 0x00312D70u); RECOMP_ABI_CALL(0x004EF8CEu, sub_004EF8CE); /* call 0x004EF8CE */

loc_00312D70: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x8D7E94); PUSH32(esp, 0x00312D77u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00312D71u); } /* indirect call */
    }

loc_00312D77: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x34) = edi;

loc_00312D7D: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00312D91; /* je: equal / zero */

loc_00312D85: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00312D8Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00312D8B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x28) = edi;

loc_00312D91: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00312DE0
 * Original: 0x00312DE0 - 0x00312E16 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00312DE0: ;
    eax = MEM32(0x8FC61C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00312E15; /* jne: not equal / not zero */

loc_00312DE9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x00312DF2u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00312DF2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00312E0B; /* je: equal / zero */

loc_00312DF9: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00312E05u); RECOMP_ABI_CALL(0x000134B8u, sub_000134B8); /* call 0x000134B8 */

loc_00312E05: ;
    MEM32(0x8FC61C) = eax;
    esp += 4; return; /* ret */

loc_00312E0B: ;
    MEM32(0x8FC61C) = 0;

loc_00312E15: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00312E30
 * Original: 0x00312E30 - 0x00312ECF (159 bytes, 54 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00312E30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00312E40u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00312E40: ;
    ecx = eax;
    PUSH32(esp, 0x00312E47u); RECOMP_ABI_CALL(0x00025983u, sub_00025983); /* call 0x00025983 */

loc_00312E47: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00312EC2; /* je: equal / zero */

loc_00312E4B: ;
    ecx = 0x8B22D0;
    PUSH32(esp, 0x00312E55u); RECOMP_ABI_CALL(0x0001BBAEu, sub_0001BBAE); /* call 0x0001BBAE */

loc_00312E55: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00312E73; /* je: equal / zero */

loc_00312E59: ;
    ecx = 0x8B22D0;
    PUSH32(esp, 0x00312E63u); RECOMP_ABI_CALL(0x0001F64Bu, sub_0001F64B); /* call 0x0001F64B */

loc_00312E63: ;
    PUSH32(esp, 0);
    ecx = 0x8B22D0;
    PUSH32(esp, 0x00312E6Fu); RECOMP_ABI_CALL(0x000354FFu, sub_000354FF); /* call 0x000354FF */

loc_00312E6F: ;
    MEM8(esi + 0x22) = 1;

loc_00312E73: ;
    ecx = esi;
    PUSH32(esp, 0x00312E7Au); RECOMP_ABI_CALL(0x00029D62u, sub_00029D62); /* call 0x00029D62 */

loc_00312E7A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00312E81u); RECOMP_ABI_CALL(0x0059CEB4u, sub_0059CEB4); /* call 0x0059CEB4 */

loc_00312E81: ;
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00312E8Du); RECOMP_ABI_CALL(0x0002B964u, sub_0002B964); /* call 0x0002B964 */

loc_00312E8D: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00312EA6; /* je: equal / zero */

loc_00312E95: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00312EA6; /* je: equal / zero */

loc_00312E9D: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00312EA6u); RECOMP_ABI_CALL(0x00024B78u, sub_00024B78); /* call 0x00024B78 */

loc_00312EA6: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00312EBAu); RECOMP_ABI_CALL(0x0003135Au, sub_0003135A); /* call 0x0003135A */

loc_00312EBA: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x00312EC2u); RECOMP_ABI_CALL(0x00033493u, sub_00033493); /* call 0x00033493 */

loc_00312EC2: ;
    POP32(esp, edi);
    MEM8(esi + 0x20) = 1;
    MEM8(esi + 0x21) = 0;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00312F00
 * Original: 0x00312F00 - 0x00312F2F (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00312F00: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(esi + 0x20));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00312F2D; /* je: equal / zero */

loc_00312F0C: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM8(esi + 0x20) = LO8(eax);
    MEM8(esi + 0x21) = LO8(eax);
    MEM32(esi + 0x24) = 5;
    if (CMP_EQ(_fa, _fb)) goto loc_00312F2D; /* je: equal / zero */

loc_00312F20: ;
    PUSH32(esp, 0x00312F25u); RECOMP_ABI_CALL(0x000211C6u, sub_000211C6); /* call 0x000211C6 */

loc_00312F25: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002F3F7(); return; /* tail jmp 0x0002F3F7 */

loc_00312F2D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00312F40
 * Original: 0x00312F40 - 0x00313046 (262 bytes, 85 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00312F40: ;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x400));
    esp = esp - 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x408);
    eax = MEM32(ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00312F6A; /* je: equal / zero */

loc_00312F55: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0031303C; /* jne: not equal / not zero */

loc_00312F5C: ;
    MEM8(edi + 0x21) = 1;
    POP32(esp, edi);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x400)) >> 32) & 1);
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00312F6A: ;
    PUSH32(esp, esi);
    esi = ecx + 4;
    PUSH32(esp, 0x826D68);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00312F79u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00312F79: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00312F95; /* jne: not equal / not zero */

loc_00312F80: ;
    eax = MEM32(0x826B78);
    SET_LO8(ecx, MEM8(0x826B7C));
    MEM32(esp + 8) = eax;
    MEM8(esp + 0xC) = LO8(ecx);
    goto loc_00312FAA;

loc_00312F95: ;
    edx = esp + 8;
    eax = esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(esi));
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00312FA0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00312FA0; /* jne: not equal / not zero */

loc_00312FAA: ;
    edx = esp + 0x108;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00312FBEu); RECOMP_ABI_CALL(0x000233FEu, sub_000233FE); /* call 0x000233FE */

loc_00312FBE: ;
    ecx = esp + 8;
    PUSH32(esp, 0x826BB4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00312FCDu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00312FCD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    edx = esp + 0x208;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, edx);
    eax = esp + 0x30C;
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    _cf = 0; /* logical op clears CF */
    esi = esi & 0xFFFFFFF6u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edi;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x64)) >> 32) & 1);
    esi = esi + 0x64;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00312FF8u); RECOMP_ABI_CALL(0x00012464u, sub_00012464); /* call 0x00012464 */

loc_00312FF8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00313027; /* je: equal / zero */

loc_00312FFC: ;
    edx = esp + 0x208;
    PUSH32(esp, edx);
    eax = esp + 0x30C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x114;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0031301Cu); RECOMP_ABI_CALL(0x00033600u, sub_00033600); /* call 0x00033600 */

loc_0031301C: ;
    POP32(esp, esi);
    POP32(esp, edi);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x400)) >> 32) & 1);
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00313027: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    edx = esp + 0x114;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0031303Bu); RECOMP_ABI_CALL(0x00033600u, sub_00033600); /* call 0x00033600 */

loc_0031303B: ;
    POP32(esp, esi);

loc_0031303C: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x400)) >> 32) & 1);
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00313090
 * Original: 0x00313090 - 0x003130DD (77 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00313090: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(esi + 0x20));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003130CE; /* je: equal / zero */

loc_0031309C: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003130B0; /* je: equal / zero */

loc_003130A3: ;
    _fa = (uint32_t)(MEM8(ecx + 0x300)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x300), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003130B0; /* jne: not equal / not zero */

loc_003130AB: ;
    _fa = (uint32_t)(MEM8(esi + 0x21)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x21), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003130DB; /* je: equal / zero */

loc_003130B0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM8(esi + 0x20) = LO8(eax);
    MEM8(esi + 0x21) = LO8(eax);
    MEM32(esi + 0x24) = 5;
    if (CMP_EQ(_fa, _fb)) goto loc_003130DB; /* je: equal / zero */

loc_003130C1: ;
    PUSH32(esp, 0x003130C6u); RECOMP_ABI_CALL(0x000211C6u, sub_000211C6); /* call 0x000211C6 */

loc_003130C6: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002F3F7(); return; /* tail jmp 0x0002F3F7 */

loc_003130CE: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003130DB; /* jle: less or equal (signed <=) */

loc_003130D3: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0003595F(); return; /* tail jmp 0x0003595F */

loc_003130DB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003130F0
 * Original: 0x003130F0 - 0x003130F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003130F0(void)
{

loc_003130F0: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_00313100
 * Original: 0x00313100 - 0x00313104 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313100(void)
{

loc_00313100: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_00313110
 * Original: 0x00313110 - 0x00313115 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00313110: ;
    g_seh_ebp = ebp; sub_005A1E5E(); return; /* tail jmp 0x005A1E5E */

}

/**
 * sub_00313120
 * Original: 0x00313120 - 0x00313129 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313120(void)
{

loc_00313120: ;
    PUSH32(esp, 0x00313125u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00313125: ;
    eax = MEM32(eax + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_00313130
 * Original: 0x00313130 - 0x00313139 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313130(void)
{

loc_00313130: ;
    PUSH32(esp, 0x00313135u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00313135: ;
    eax = MEM32(eax + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_00313140
 * Original: 0x00313140 - 0x0031314D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313140(void)
{

loc_00313140: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x00313149u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00313149: ;
    eax = MEM32(eax + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_00313150
 * Original: 0x00313150 - 0x0031315D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313150(void)
{

loc_00313150: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x00313159u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00313159: ;
    eax = MEM32(eax + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_00313160
 * Original: 0x00313160 - 0x00313169 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00313160: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_005A2481(); return; /* tail jmp 0x005A2481 */

}

/**
 * sub_00313170
 * Original: 0x00313170 - 0x00313173 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313170(void)
{

loc_00313170: ;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    esp += 4; return; /* ret */

}

/**
 * sub_00313180
 * Original: 0x00313180 - 0x00313184 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313180(void)
{

loc_00313180: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00313190
 * Original: 0x00313190 - 0x003131AE (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00313190: ;
    eax = MEM32(0x8D7E98);
    ecx = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(0x8D7E90); PUSH32(esp, 0x003131AAu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003131A4u); } /* indirect call */
    }

loc_003131AA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003131C0
 * Original: 0x003131C0 - 0x003131C6 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003131C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003131C0: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x8D7E94)); return; /* indirect tail jmp */

}

/**
 * sub_003131D0
 * Original: 0x003131D0 - 0x003131D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003131D0(void)
{

loc_003131D0: ;
    eax = MEM32(ecx + 0x44);
    esp += 4; return; /* ret */

}

/**
 * sub_003131E0
 * Original: 0x003131E0 - 0x003131E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003131E0(void)
{

loc_003131E0: ;
    eax = MEM32(ecx + 0x68);
    esp += 4; return; /* ret */

}

/**
 * sub_003131F0
 * Original: 0x003131F0 - 0x003131F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003131F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003131F0: ;
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00313200
 * Original: 0x00313200 - 0x00313201 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313200(void)
{

loc_00313200: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00313210
 * Original: 0x00313210 - 0x0031321E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313210(void)
{

loc_00313210: ;
    eax = MEM32(esp + 4);
    SET_LO8(eax, MEM8(eax + ecx + 0x1A4));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00313230
 * Original: 0x00313230 - 0x00313234 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313230(void)
{

loc_00313230: ;
    eax = MEM32(ecx + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_00313240
 * Original: 0x00313240 - 0x00313244 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313240(void)
{

loc_00313240: ;
    eax = MEM32(ecx + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_00313250
 * Original: 0x00313250 - 0x00313254 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313250(void)
{

loc_00313250: ;
    eax = MEM32(ecx + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_00313260
 * Original: 0x00313260 - 0x00313264 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313260(void)
{

loc_00313260: ;
    eax = MEM32(ecx + 0x30);
    esp += 4; return; /* ret */

}

/**
 * sub_00313270
 * Original: 0x00313270 - 0x00313274 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313270(void)
{

loc_00313270: ;
    eax = MEM32(ecx + 0x34);
    esp += 4; return; /* ret */

}

/**
 * sub_00313280
 * Original: 0x00313280 - 0x00313284 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313280(void)
{

loc_00313280: ;
    eax = MEM32(ecx + 0x38);
    esp += 4; return; /* ret */

}

/**
 * sub_00313290
 * Original: 0x00313290 - 0x00313294 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313290(void)
{

loc_00313290: ;
    eax = MEM32(ecx + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_003132A0
 * Original: 0x003132A0 - 0x003132A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003132A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003132A0: ;
    g_seh_ebp = ebp; sub_0059E42F(); return; /* tail jmp 0x0059E42F */

}

/**
 * sub_003132B0
 * Original: 0x003132B0 - 0x003132DB (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003132B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003132B0: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    MEM32(esp + 4) = 0x50;
    PUSH32(esp, 0x003132C4u); RECOMP_ABI_CALL(0x00598D5Du, sub_00598D5D); /* call 0x00598D5D */

loc_003132C4: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 0x58);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003132D7u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003132D4u); } /* indirect call */
    }

loc_003132D7: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003132F0
 * Original: 0x003132F0 - 0x003132FC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003132F0(void)
{

loc_003132F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003132FAu); RECOMP_ABI_CALL(0x005A1E5Eu, sub_005A1E5E); /* call 0x005A1E5E */

loc_003132FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00313300
 * Original: 0x00313300 - 0x00313308 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00313300: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004F2DF9(); return; /* tail jmp 0x004F2DF9 */

}

/**
 * sub_00313310
 * Original: 0x00313310 - 0x00313311 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313310(void)
{

loc_00313310: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00313320
 * Original: 0x00313320 - 0x0031332A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313320(void)
{

loc_00313320: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00313330
 * Original: 0x00313330 - 0x00313364 (52 bytes, 15 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313330(void)
{

loc_00313330: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x24) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x28) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0x2C) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(ecx + 0x30) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 0x34) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(ecx + 0x38) = edx;
    MEM32(ecx + 0x3C) = eax;
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00313380
 * Original: 0x00313380 - 0x0031338C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313380(void)
{

loc_00313380: ;
    MEM32(ecx + 0x1C) = 0x235;
    MEM8(ecx + 0x20) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00313390
 * Original: 0x00313390 - 0x003133B6 (38 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313390(void)
{

loc_00313390: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x24);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003133A1u); RECOMP_ABI_CALL(0x0055DB68u, sub_0055DB68); /* call 0x0055DB68 */

loc_003133A1: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0xF);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x28);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003133B3u); RECOMP_ABI_CALL(0x00557F14u, sub_00557F14); /* call 0x00557F14 */

loc_003133B3: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003133C0
 * Original: 0x003133C0 - 0x00313473 (179 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003133C0(void)
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

loc_003133C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x2F8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esi + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_003133D8; /* je: equal / zero */

loc_003133D1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x003133D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003133D3u); } /* indirect call */
    }

loc_003133D6: ;
    goto loc_003133E1;

loc_003133D8: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003133E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003133DEu); } /* indirect call */
    }

loc_003133E1: ;
    SET_LO8(eax, MEM8(esi + 0x1AB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00313444; /* je: equal / zero */

loc_003133EB: ;
    ecx = MEM32(esi + 0x2FC);
    PUSH32(esp, edi);
    edi = esi + 0x70;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003133FDu); RECOMP_ABI_CALL(0x004F2E63u, sub_004F2E63); /* call 0x004F2E63 */

loc_003133FD: ;
    edx = MEM32(esi + 8);
    fp_push(MEMF(edx + 0x48)); /* fld float */
    PUSH32(esp, 0x00313408u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00313408: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x2FC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00313417u); RECOMP_ABI_CALL(0x004F2E8Cu, sub_004F2E8C); /* call 0x004F2E8C */

loc_00313417: ;
    SET_LO8(eax, MEM8(esi + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0031345F; /* je: equal / zero */

loc_0031341F: ;
    ecx = MEM32(esi + 0x38);
    eax = MEM32(esi + 0x2FC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x28);
    edx = esp + 8;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    MEM32(esi + 0x2FC) = eax;
    MEM8(esi + 0x54) = 0;
    PUSH32(esp, 0x00313441u); RECOMP_ABI_CALL(0x00557EA3u, sub_00557EA3); /* call 0x00557EA3 */

loc_00313441: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00313444: ;
    SET_LO8(eax, MEM8(esi + 0x1AC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031345F; /* jne: not equal / not zero */

loc_0031344E: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x00313456u); RECOMP_ABI_CALL(0x004EFDABu, sub_004EFDAB); /* call 0x004EFDAB */

loc_00313456: ;
    PUSH32(esp, eax);
    ecx = esi + 0x70;
    PUSH32(esp, 0x0031345Fu); RECOMP_ABI_CALL(0x004F2C4Bu, sub_004F2C4B); /* call 0x004F2C4B */

loc_0031345F: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x28);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00313470u); RECOMP_ABI_CALL(0x00557EA3u, sub_00557EA3); /* call 0x00557EA3 */

loc_00313470: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003134A0
 * Original: 0x003134A0 - 0x003134AF (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003134A0(void)
{

loc_003134A0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 0x24);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003134ADu); RECOMP_ABI_CALL(0x0055DBF5u, sub_0055DBF5); /* call 0x0055DBF5 */

loc_003134AD: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003134C0
 * Original: 0x003134C0 - 0x003134C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003134C0(void)
{

loc_003134C0: ;
    MEM8(ecx + 0x2F8) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003134D0
 * Original: 0x003134D0 - 0x003134EF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003134D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003134D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003134D8u); RECOMP_ABI_CALL(0x004F00CFu, sub_004F00CF); /* call 0x004F00CF */

loc_003134D8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003134E9; /* je: equal / zero */

loc_003134DF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x8D7E94); PUSH32(esp, 0x003134E6u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003134E0u); } /* indirect call */
    }

loc_003134E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003134E9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00313500
 * Original: 0x00313500 - 0x0031353E (62 bytes, 24 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313500(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00313500: ;
    edx = MEM32(ecx + 0x3C);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x38);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x34);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    MEM32(ecx + 0x1A0) = eax;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0031353Bu); RECOMP_ABI_CALL(0x004F26DDu, sub_004F26DD); /* call 0x004F26DD */

loc_0031353B: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00313550
 * Original: 0x00313550 - 0x0031357E (46 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313550(void)
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

loc_00313550: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031357A; /* je: equal / zero */

loc_00313558: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x826D70)); /* fmul dword ptr [0x826d70] */
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00313572u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00313572: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0031357Au); RECOMP_ABI_CALL(0x004EFDE2u, sub_004EFDE2); /* call 0x004EFDE2 */

loc_0031357A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00313590
 * Original: 0x00313590 - 0x00313594 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313590(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00313590: ;
    fp_push(MEMF(ecx + 0x50)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003135A0
 * Original: 0x003135A0 - 0x003135BA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003135A0(void)
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

loc_003135A0: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003135B3; /* je: equal / zero */

loc_003135A7: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x003135AFu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_003135AF: ;
    fp_push((double)SMEM32(eax + 0x18)); /* fild */
    esp += 4; return; /* ret */

loc_003135B3: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003135C0
 * Original: 0x003135C0 - 0x003135DA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003135C0(void)
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

loc_003135C0: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003135D3; /* je: equal / zero */

loc_003135C7: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x003135CFu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_003135CF: ;
    fp_push((double)SMEM32(eax + 0x1C)); /* fild */
    esp += 4; return; /* ret */

loc_003135D3: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003135E0
 * Original: 0x003135E0 - 0x003136FA (282 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003135E0(void)
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

loc_003135E0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003136F5; /* je: equal / zero */

loc_003135F1: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00313607; /* je: equal / zero */

loc_003135F8: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x00313600u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00313600: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x18); /* cvtsi2ss */
    goto loc_0031360A;

loc_00313607: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0031360A: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00313626; /* je: equal / zero */

loc_00313617: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x0031361Fu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0031361F: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x1C); /* cvtsi2ss */
    goto loc_00313629;

loc_00313626: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_00313629: ;
    ecx = MEM32(esi + 0x24);
    eax = esp + 4;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00313641u); RECOMP_ABI_CALL(0x0055D4AAu, sub_0055D4AA); /* call 0x0055D4AA */

loc_00313641: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x0031364Au); RECOMP_ABI_CALL(0x00561417u, sub_00561417); /* call 0x00561417 */

loc_0031364A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0031365C; /* jge: greater or equal (signed >=) */

loc_00313656: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_0031365C: ;
    ecx = MEM32(esp + 4);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00313669u); RECOMP_ABI_CALL(0x0056141Bu, sub_0056141B); /* call 0x0056141B */

loc_00313669: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0031367B; /* jge: greater or equal (signed >=) */

loc_00313675: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_0031367B: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 8); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    edx = MEM32(esi + 0x60);
    ecx = MEM32(esi + 0xC);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x68); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    MEMF(esi + 0x5C) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003136E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003136E2u); } /* indirect call */
    }

loc_003136E5: ;
    edx = MEM32(esi + 0x68);
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x64);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x003136F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003136F2u); } /* indirect call */
    }

loc_003136F5: ;
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
 * sub_00313740
 * Original: 0x00313740 - 0x0031375F (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00313740: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031375E; /* je: equal / zero */

loc_00313747: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(ecx + 0x64) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x68) = xmm0.f[0]; /* movss */
    g_seh_ebp = ebp; sub_0002A77B(); return; /* tail jmp 0x0002A77B */

loc_0031375E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00313770
 * Original: 0x00313770 - 0x00313859 (233 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313770(void)
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

loc_00313770: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00313854; /* je: equal / zero */

loc_00313781: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00313797; /* je: equal / zero */

loc_00313788: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x00313790u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00313790: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x18); /* cvtsi2ss */
    goto loc_0031379A;

loc_00313797: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0031379A: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_003137B6; /* je: equal / zero */

loc_003137A7: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x003137AFu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_003137AF: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x1C); /* cvtsi2ss */
    goto loc_003137B9;

loc_003137B6: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_003137B9: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x28);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003137EAu); RECOMP_ABI_CALL(0x00557980u, sub_00557980); /* call 0x00557980 */

loc_003137EA: ;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003137FC; /* jge: greater or equal (signed >=) */

loc_003137F6: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_003137FC: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 4)); /* fdiv dword ptr [esp + 4] */
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEMF(esi + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00313815; /* jge: greater or equal (signed >=) */

loc_0031380F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00313815: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 8)); /* fdiv dword ptr [esp + 8] */
    edx = MEM32(esi + 0x60);
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    ecx = MEM32(esi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0xBF800000u);
    MEMF(esi + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x5C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0xBF800000u);
    MEMF(esi + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00313844u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00313841u); } /* indirect call */
    }

loc_00313844: ;
    edx = MEM32(esi + 0x68);
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x64);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00313854u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00313851u); } /* indirect call */
    }

loc_00313854: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003138A0
 * Original: 0x003138A0 - 0x003138A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003138A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003138A0: ;
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003138B0
 * Original: 0x003138B0 - 0x003138DB (43 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003138B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003138B0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(eax + 0x58) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_003138D8; /* je: equal / zero */

loc_003138C4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x60);
    eax = MEM32(eax + 0x5C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003138D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003138D4u); } /* indirect call */
    }

loc_003138D7: ;
    POP32(esp, esi);

loc_003138D8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003138F0
 * Original: 0x003138F0 - 0x003138F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003138F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003138F0: ;
    fp_push(MEMF(ecx + 0x5C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00313900
 * Original: 0x00313900 - 0x0031392B (43 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00313900: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00313928; /* je: equal / zero */

loc_00313914: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x60);
    eax = MEM32(eax + 0x58);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00313927u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00313924u); } /* indirect call */
    }

loc_00313927: ;
    POP32(esp, esi);

loc_00313928: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00313940
 * Original: 0x00313940 - 0x00313944 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313940(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00313940: ;
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00313950
 * Original: 0x00313950 - 0x00313975 (37 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00313950: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(eax + 0x64) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00313972; /* je: equal / zero */

loc_00313964: ;
    eax = MEM32(eax + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00313972u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031396Fu); } /* indirect call */
    }

loc_00313972: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00313980
 * Original: 0x00313980 - 0x00313984 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313980(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00313980: ;
    fp_push(MEMF(ecx + 0x68)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00313990
 * Original: 0x00313990 - 0x003139B7 (39 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00313990: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_003139B4; /* je: equal / zero */

loc_003139A4: ;
    eax = MEM32(eax + 0x64);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003139B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003139B0u); } /* indirect call */
    }

loc_003139B3: ;
    POP32(esp, esi);

loc_003139B4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003139C0
 * Original: 0x003139C0 - 0x003139CE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003139C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003139C0: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003139CB; /* je: equal / zero */

loc_003139C7: ;
    eax = MEM32(eax + 0x44);
    esp += 4; return; /* ret */

loc_003139CB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003139E0
 * Original: 0x003139E0 - 0x003139F2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003139E0(void)
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

loc_003139E0: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003139EB; /* je: equal / zero */

loc_003139E7: ;
    fp_push(MEMF(eax + 0x48)); /* fld float */
    esp += 4; return; /* ret */

loc_003139EB: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00313A00
 * Original: 0x00313A00 - 0x00313A09 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313A00(void)
{

loc_00313A00: ;
    SET_LO8(eax, 1);
    MEM8(ecx + 0x48) = LO8(eax);
    MEM8(ecx + 0x49) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00313A10
 * Original: 0x00313A10 - 0x00313A15 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313A10(void)
{

loc_00313A10: ;
    MEM8(ecx + 0x4A) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00313A20
 * Original: 0x00313A20 - 0x00313A25 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313A20(void)
{

loc_00313A20: ;
    MEM8(ecx + 0x49) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00313A30
 * Original: 0x00313A30 - 0x00313A35 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313A30(void)
{

loc_00313A30: ;
    MEM8(ecx + 0x54) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00313A40
 * Original: 0x00313A40 - 0x00313A46 (6 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313A40(void)
{

loc_00313A40: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x00313A44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00313A41u); } /* indirect call */
    }

loc_00313A44: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00313A50
 * Original: 0x00313A50 - 0x00313A77 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313A50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00313A50: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00313A80
 * Original: 0x00313A80 - 0x00313AC4 (68 bytes, 16 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313A80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00313A80: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    edx = MEM32(ecx + 0x18);
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x18);
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x1C) = edx;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00313AE0
 * Original: 0x00313AE0 - 0x00313AEA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313AE0(void)
{

loc_00313AE0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x18) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00313AF0
 * Original: 0x00313AF0 - 0x00313AF4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313AF0(void)
{

loc_00313AF0: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_00313B00
 * Original: 0x00313B00 - 0x00313B01 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313B00(void)
{

loc_00313B00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00313B10
 * Original: 0x00313B10 - 0x00313B6E (94 bytes, 28 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00313B10(void)
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

loc_00313B10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00313B1Bu); RECOMP_ABI_CALL(0x0059E8B1u, sub_0059E8B1); /* call 0x0059E8B1 */

loc_00313B1B: ;
    eax = MEM32(eax);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = 0;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    ecx = MEM32(esi + 0x10);
    MEM32(esi) = eax;
    eax = MEM32(esi + 0x14);
    MEM32(esp + 4) = ecx;
    ecx = eax;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM64(esp + 4)); /* fild */
    ecx = ecx & 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = 0;
    fp_push((double)SMEM64(esp + 4)); /* fild */
    eax = esi;
    fp_top() = -fp_top(); /* fchs */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x7C3A80) / fp_top()); /* fdivr dword ptr [0x7c3a80] */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_00313B90
 * Original: 0x00313B90 - 0x00313B95 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313B90(void)
{

loc_00313B90: ;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00313BA0
 * Original: 0x00313BA0 - 0x00313BB6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313BA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00313BA0: ;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x18); /* mulss */
    MEM32(ecx + 4) = eax;
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00313BC0
 * Original: 0x00313BC0 - 0x00313BC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313BC0(void)
{

loc_00313BC0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00313BD0
 * Original: 0x00313BD0 - 0x00313BD4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313BD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00313BD0: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00313BE0
 * Original: 0x00313BE0 - 0x00313CA5 (197 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313BE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00313BE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x70;
    PUSH32(esp, 0x00313BEBu); RECOMP_ABI_CALL(0x004F234Cu, sub_004F234C); /* call 0x004F234C */

loc_00313BEB: ;
    ecx = esi + 0x2B8;
    PUSH32(esp, 0x00313BF6u); RECOMP_ABI_CALL(0x0002120Cu, sub_0002120C); /* call 0x0002120C */

loc_00313BF6: ;
    ecx = esi + 0x2D8;
    PUSH32(esp, 0x00313C01u); RECOMP_ABI_CALL(0x0002120Cu, sub_0002120C); /* call 0x0002120C */

loc_00313C01: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esi + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esi + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x826D7C)); /* movss */
    MEMF(esi + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x826D78)); /* movss */
    MEMF(esi + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x826D74)); /* movss */
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x1A0) = eax;
    MEM8(esi + 0x54) = LO8(eax);
    MEM8(esi + 0x48) = LO8(eax);
    MEM8(esi + 0x49) = LO8(eax);
    MEM8(esi + 0x4A) = LO8(eax);
    MEM8(esi + 2) = LO8(eax);
    MEM8(esi + 1) = LO8(eax);
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    MEMF(esi + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    MEM8(esi + 3) = 0xFF;
    MEM8(esi) = 0x7E;
    MEM32(esi + 0x1A4) = eax;
    MEM32(esi + 0x1A8) = eax;
    MEM32(esi + 0x1AC) = eax;
    MEM8(esi + 0x300) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00313CE0
 * Original: 0x00313CE0 - 0x00314075 (917 bytes, 275 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313CE0(void)
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

loc_00313CE0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0031406C; /* je: equal / zero */

loc_00313CF6: ;
    SET_LO8(eax, MEM8(esi + 0x1A4));
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM8(esp + 0x18) = LO8(eax);
    _fa = (uint32_t)(MEM8(esi + 0x1A6)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1A6), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, MEM8(esi + 0x1A7));
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    MEMF(esi + 0x304) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x308) = ebx;
    MEMF(esi + 0x30C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x310) = ebx;
    MEMF(esi + 0x314) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x318) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x31C) = ebx;
    MEM32(esi + 0x320) = ebx;
    MEMF(esi + 0x324) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x2F8) = LO8(ebx);
    MEM8(esi + 0x300) = LO8(ebx);
    MEM32(esi + 0x2FC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM8(esi + 0x49) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00313D76; /* jne: not equal / not zero */

loc_00313D71: ;
    edi = 1;

loc_00313D76: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00313E07; /* je: equal / zero */

loc_00313D7E: ;
    ecx = MEM32(0x8D7E98);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x00313D98u); RECOMP_ABI_CALL(0x00598723u, sub_00598723); /* call 0x00598723 */

loc_00313D98: ;
    MEM32(esi + 0x14) = eax;
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00313DC2; /* je: equal / zero */

loc_00313DA6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00313DC2; /* jne: not equal / not zero */

loc_00313DAA: ;
    ecx = MEM32(0x8D7E98);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00313DBCu); RECOMP_ABI_CALL(0x00598723u, sub_00598723); /* call 0x00598723 */

loc_00313DBC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;

loc_00313DC2: ;
    eax = MEM32(0x8D7E98);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x98);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(0x8D7E90); PUSH32(esp, 0x00313DDAu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00313DD4u); } /* indirect call */
    }

loc_00313DDA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00313E43; /* je: equal / zero */

loc_00313DE1: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0x32000);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, 0x100000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00313E05u); RECOMP_ABI_CALL(0x004F008Au, sub_004F008A); /* call 0x004F008A */

loc_00313E05: ;
    goto loc_00313E45;

loc_00313E07: ;
    eax = MEM32(0x8D7E98);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x98);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(0x8D7E90); PUSH32(esp, 0x00313E1Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00313E19u); } /* indirect call */
    }

loc_00313E1F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00313E43; /* je: equal / zero */

loc_00313E26: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x32000);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x100000);
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x00313E41u); RECOMP_ABI_CALL(0x004EFFFEu, sub_004EFFFE); /* call 0x004EFFFE */

loc_00313E41: ;
    goto loc_00313E45;

loc_00313E43: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00313E45: ;
    edx = MEM32(esi + 0x1A0);
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x00313E56u); RECOMP_ABI_CALL(0x004EFD6Cu, sub_004EFD6C); /* call 0x004EFD6C */

loc_00313E56: ;
    _fa = (uint32_t)(MEM8(esi + 0x1A8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1A8), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    xmm0 = XMM_SCALAR(MEMF(0x826D80)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00313E6E; /* je: equal / zero */

loc_00313E66: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD318)); /* movss */

loc_00313E6E: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABE28); /* mulss */
    ecx = MEM32(esi + 8);
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00313E85u); RECOMP_ABI_CALL(0x004F0188u, sub_004F0188); /* call 0x004F0188 */

loc_00313E85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0031406B; /* je: equal / zero */

loc_00313E90: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x00313E98u); RECOMP_ABI_CALL(0x004EFE14u, sub_004EFE14); /* call 0x004EFE14 */

loc_00313E98: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00313EAD; /* je: equal / zero */

loc_00313E9F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    MEMF(esi + 0x50) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00313EADu); RECOMP_ABI_CALL(0x004EFDE2u, sub_004EFDE2); /* call 0x004EFDE2 */

loc_00313EAD: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00313EBAu); RECOMP_ABI_CALL(0x004EFE27u, sub_004EFE27); /* call 0x004EFE27 */

loc_00313EBA: ;
    _fa = (uint32_t)(MEM8(esi + 0x1AA)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1AA), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x1B0) = ebx;
    MEM32(esi + 0x1B4) = ebx;
    MEM32(esi + 0x1C) = 0x235;
    MEM8(esi + 0x20) = 1;
    MEM32(esp + 0x20) = 3;
    if (CMP_EQ(_fa, _fb)) goto loc_00313EEB; /* je: equal / zero */

loc_00313EE1: ;
    MEM32(esp + 0x20) = 1;
    goto loc_00313EF8;

loc_00313EEB: ;
    _fa = (uint32_t)(MEM8(esi + 0x21)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x21), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00313EF8; /* je: equal / zero */

loc_00313EF0: ;
    MEM32(esp + 0x20) = 4;

loc_00313EF8: ;
    ebp = MEM32(esi + 8);
    ebp = MEM32(ebp + 0x68);
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(esi + 0x38);
    edx = MEM32(esi + 0x34);
    edi = MEM32(esi + 0x2C);
    MEM32(esp + 0x28) = ebp;
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    ebp = esi + 0x44;
    PUSH32(esp, ebp);
    ebp = esi + 0x40;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00313F31u); RECOMP_ABI_CALL(0x004F3AABu, sub_004F3AAB); /* call 0x004F3AAB */

loc_00313F31: ;
    ecx = MEM32(esi + 0x30);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x00313F3Fu); RECOMP_ABI_CALL(0x00573960u, sub_00573960); /* call 0x00573960 */

loc_00313F3F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x58)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x826D7C); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00313F93; /* jp: parity */

loc_00313F51: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x5C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x826D78); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00313F93; /* jp: parity */

loc_00313F63: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00313F93; /* jp: parity */

loc_00313F79: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00313F93; /* jp: parity */

loc_00313F87: ;
    ecx = esi;
    PUSH32(esp, 0x00313F8Eu); RECOMP_ABI_CALL(0x0001F5CEu, sub_0001F5CE); /* call 0x0001F5CE */

loc_00313F8E: ;
    goto loc_0031401B;

loc_00313F93: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x58)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00313FB7; /* je: equal / zero */

loc_00313FA5: ;
    edx = MEM32(esi + 0x60);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x5C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00313FB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00313FB4u); } /* indirect call */
    }

loc_00313FB7: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x5C)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00313FDB; /* je: equal / zero */

loc_00313FC9: ;
    edx = MEM32(esi + 0x60);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x58);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00313FDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00313FD8u); } /* indirect call */
    }

loc_00313FDB: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00313FFB; /* je: equal / zero */

loc_00313FED: ;
    edx = MEM32(esi + 0x68);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00313FFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00313FF8u); } /* indirect call */
    }

loc_00313FFB: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0031401B; /* je: equal / zero */

loc_0031400D: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x64);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0031401Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00314018u); } /* indirect call */
    }

loc_0031401B: ;
    _fa = (uint32_t)(MEM8(esp + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x1C), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0031402A; /* je: equal / zero */

loc_00314021: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00314027u); RECOMP_ABI_CALL(0x0059CEB4u, sub_0059CEB4); /* call 0x0059CEB4 */

loc_00314027: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0031402A: ;
    _fa = (uint32_t)(MEM8(esi + 0x1AB)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1AB), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00314058; /* jne: not equal / not zero */

loc_00314032: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x0031403Au); RECOMP_ABI_CALL(0x004EFE1Cu, sub_004EFE1C); /* call 0x004EFE1C */

loc_0031403A: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00314058; /* je: equal / zero */

loc_00314041: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, 0x1000);
    MEMF(esi + 0x50) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00314058u); RECOMP_ABI_CALL(0x004EFDE2u, sub_004EFDE2); /* call 0x004EFDE2 */

loc_00314058: ;
    eax = MEM32(0x8BFE70);
    ecx = 0x8BFE70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00314065u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00314062u); } /* indirect call */
    }

loc_00314065: ;
    MEM32(esi + 0x31C) = eax;

loc_0031406B: ;
    POP32(esp, edi);

loc_0031406C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00314160
 * Original: 0x00314160 - 0x003141B9 (89 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00314160: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x1A9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003141AD; /* je: equal / zero */

loc_0031416D: ;
    edx = MEM32(esi + 0x1B0);
    PUSH32(esp, ebx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    eax = edx;
    PUSH32(esp, eax);
    edi = esi + 0x1B8;
    PUSH32(esp, 0x826D84);
    PUSH32(esp, edi);
    MEM32(esi + 0x1B0) = edx;
    PUSH32(esp, 0x00314190u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00314190: ;
    eax = MEM32(esi + 0x10);
    ebx = MEM32(eax + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    PUSH32(esp, 0x003141A0u); RECOMP_ABI_CALL(0x005A2481u, sub_005A2481); /* call 0x005A2481 */

loc_003141A0: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003141A8u); RECOMP_ABI_CALL(0x00598BB5u, sub_00598BB5); /* call 0x00598BB5 */

loc_003141A8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);

loc_003141AD: ;
    ecx = esi + 0x2B8;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000339A2(); return; /* tail jmp 0x000339A2 */

}

/**
 * sub_003141D0
 * Original: 0x003141D0 - 0x003142F6 (294 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003141D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003141D0: ;
    { extern void nhl07_trace_movie_request(uint32_t,uint32_t,uint32_t); nhl07_trace_movie_request(0,ecx,0); }
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003141F8; /* jne: not equal / not zero */

loc_003141DE: ;
    ecx = MEM32(esi + 8);
    MEM8(esi + 0x2F8) = 1;
    PUSH32(esp, 0x003141EDu); RECOMP_ABI_CALL(0x004EFDD4u, sub_004EFDD4); /* call 0x004EFDD4 */

loc_003141ED: ;
    MEM8(esi + 0x300) = LO8(eax);
    goto loc_003142D8;

loc_003141F8: ;
    _fa = (uint32_t)(MEM8(esi + 0x4A)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x4A), LO8(ebx) (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00314291; /* jne: not equal / not zero */

loc_00314202: ;
    _fa = (uint32_t)(MEM8(esi + 0x1AE)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1AE), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00314291; /* jne: not equal / not zero */

loc_0031420E: ;
    _fa = (uint32_t)(MEM8(esi + 0x1AF)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1AF), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031425E; /* je: equal / zero */

loc_00314216: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x0031421Eu); RECOMP_ABI_CALL(0x004F0392u, sub_004F0392); /* call 0x004F0392 */

loc_0031421E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00314255; /* je: equal / zero */

loc_00314222: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0031422Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00314227u); } /* indirect call */
    }

loc_0031422A: ;
    edi = esi + 0x2D8;
    ecx = edi;
    PUSH32(esp, 0x00314237u); RECOMP_ABI_CALL(0x000339A2u, sub_000339A2); /* call 0x000339A2 */

loc_00314237: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 0x48);
    eax = edx;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x00314249u); RECOMP_ABI_CALL(0x004EFD76u, sub_004EFD76); /* call 0x004EFD76 */

loc_00314249: ;
    ecx = edi;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x00314253u); RECOMP_ABI_CALL(0x0002F037u, sub_0002F037); /* call 0x0002F037 */

loc_00314253: ;
    goto loc_003142D1;

loc_00314255: ;
    MEM8(esi + 0x2F8) = 1;
    goto loc_003142D7;

loc_0031425E: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00314266u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00314263u); } /* indirect call */
    }

loc_00314266: ;
    edi = esi + 0x2D8;
    ecx = edi;
    PUSH32(esp, 0x00314273u); RECOMP_ABI_CALL(0x000339A2u, sub_000339A2); /* call 0x000339A2 */

loc_00314273: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx + 0x48);
    edx = eax;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00314285u); RECOMP_ABI_CALL(0x004EFD76u, sub_004EFD76); /* call 0x004EFD76 */

loc_00314285: ;
    ecx = edi;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x0031428Fu); RECOMP_ABI_CALL(0x0002F037u, sub_0002F037); /* call 0x0002F037 */

loc_0031428F: ;
    goto loc_003142D1;

loc_00314291: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    ecx = MEM32(esi + 0xC);
    MEMF(esi + 0x4C) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003142ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003142A8u); } /* indirect call */
    }

loc_003142AB: ;
    edi = esi + 0x2D8;
    ecx = edi;
    PUSH32(esp, 0x003142B8u); RECOMP_ABI_CALL(0x000339A2u, sub_000339A2); /* call 0x000339A2 */

loc_003142B8: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x003142C4u); RECOMP_ABI_CALL(0x004EFD76u, sub_004EFD76); /* call 0x004EFD76 */

loc_003142C4: ;
    ecx = edi;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x003142CEu); RECOMP_ABI_CALL(0x0002F037u, sub_0002F037); /* call 0x0002F037 */

loc_003142CE: ;
    MEM8(esi + 0x4A) = LO8(ebx);

loc_003142D1: ;
    MEM8(esi + 0x2F8) = LO8(ebx);

loc_003142D7: ;
    POP32(esp, edi);

loc_003142D8: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003142F2; /* jne: not equal / not zero */

loc_003142DD: ;
    ecx = MEM32(esi + 8);
    MEM8(esi + 0x2F8) = 1;
    PUSH32(esp, 0x003142ECu); RECOMP_ABI_CALL(0x004EFDD4u, sub_004EFDD4); /* call 0x004EFDD4 */

loc_003142EC: ;
    MEM8(esi + 0x300) = LO8(eax);

loc_003142F2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00314340
 * Original: 0x00314340 - 0x0031443F (255 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00314340: ;
    eax = MEM32(0x8BFE70);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0x8BFE70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00314354u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00314351u); } /* indirect call */
    }

loc_00314354: ;
    MEM32(esi + 0x320) = eax;
    PUSH32(esp, 0x0031435Fu); RECOMP_ABI_CALL(0x0059E42Fu, sub_0059E42F); /* call 0x0059E42F */

loc_0031435F: ;
    ecx = MEM32(esi + 0x320);
    _fb = (uint32_t)(MEM32(esi + 0x31C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esi + 0x31C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esi + 0xC);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esi + 0x324) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00314391; /* je: equal / zero */

loc_00314388: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0031438Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031438Cu); } /* indirect call */
    }

loc_0031438E: ;
    MEM32(esi + 0xC) = ebp;

loc_00314391: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003143AD; /* je: equal / zero */

loc_00314399: ;
    ecx = edi;
    PUSH32(esp, 0x003143A0u); RECOMP_ABI_CALL(0x004F00CFu, sub_004F00CF); /* call 0x004F00CF */

loc_003143A0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x8D7E94); PUSH32(esp, 0x003143A7u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003143A1u); } /* indirect call */
    }

loc_003143A7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = ebp;

loc_003143AD: ;
    edi = MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003143D7; /* je: equal / zero */

loc_003143B4: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = 0x50;
    PUSH32(esp, 0x003143C6u); RECOMP_ABI_CALL(0x00598D5Du, sub_00598D5D); /* call 0x00598D5D */

loc_003143C6: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003143D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003143D1u); } /* indirect call */
    }

loc_003143D4: ;
    MEM32(esi + 0x14) = ebp;

loc_003143D7: ;
    edi = MEM32(esi + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00314401; /* je: equal / zero */

loc_003143DE: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = 0x50;
    PUSH32(esp, 0x003143F0u); RECOMP_ABI_CALL(0x00598D5Du, sub_00598D5D); /* call 0x00598D5D */

loc_003143F0: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003143FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003143FBu); } /* indirect call */
    }

loc_003143FE: ;
    MEM32(esi + 0x18) = ebp;

loc_00314401: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0031441A; /* je: equal / zero */

loc_00314409: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00314417u); RECOMP_ABI_CALL(0x0055D5A6u, sub_0055D5A6); /* call 0x0055D5A6 */

loc_00314417: ;
    MEM32(esi + 0x44) = ebp;

loc_0031441A: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00314432; /* je: equal / zero */

loc_00314421: ;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x0031442Fu); RECOMP_ABI_CALL(0x0055DAC8u, sub_0055DAC8); /* call 0x0055DAC8 */

loc_0031442F: ;
    MEM32(esi + 0x40) = ebp;

loc_00314432: ;
    MEM8(esi + 0x300) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00314480
 * Original: 0x00314480 - 0x00314521 (161 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00314480: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 4); PUSH32(esp, 0x00314487u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00314484u); } /* indirect call */
    }

loc_00314487: ;
    PUSH32(esp, 0x0031448Cu); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0031448C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00314493u); RECOMP_ABI_CALL(0x0059E4E7u, sub_0059E4E7); /* call 0x0059E4E7 */

loc_00314493: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0031449Du); RECOMP_ABI_CALL(0x00028B1Au, sub_00028B1A); /* call 0x00028B1A */

loc_0031449D: ;
    SET_LO8(eax, MEM8(esi + 0x300));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031451F; /* jne: not equal / not zero */

loc_003144A7: ;
    SET_LO8(eax, MEM8(esi + 0x49));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031451F; /* jne: not equal / not zero */

loc_003144AE: ;
    ecx = esi + 0x2B8;
    PUSH32(esp, 0x003144B9u); RECOMP_ABI_CALL(0x0002F037u, sub_0002F037); /* call 0x0002F037 */

loc_003144B9: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x304); /* comiss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x318)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esi + 0x314) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x318) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003144FA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x304)) */

loc_003144E6: ;
    eax = MEM32(esi + 0x310);
    MEMF(esi + 0x304) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x308) = eax;

loc_003144FA: ;
    eax = MEM32(esi + 0x310);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7C3A80); /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEM32(esi + 0x310) = eax;
    MEMF(esi + 0x30C) = xmm0.f[0]; /* movss */

loc_0031451F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00314550
 * Original: 0x00314550 - 0x00314596 (70 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314550(void)
{

loc_00314550: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00314559u); RECOMP_ABI_CALL(0x0001EDB3u, sub_0001EDB3); /* call 0x0001EDB3 */

loc_00314559: ;
    ecx = MEM32(esi + 0x24);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00314566u); RECOMP_ABI_CALL(0x0055DB68u, sub_0055DB68); /* call 0x0055DB68 */

loc_00314566: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0xF);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x28);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00314578u); RECOMP_ABI_CALL(0x00557F14u, sub_00557F14); /* call 0x00557F14 */

loc_00314578: ;
    ecx = esi;
    PUSH32(esp, 0x0031457Fu); RECOMP_ABI_CALL(0x0001AA29u, sub_0001AA29); /* call 0x0001AA29 */

loc_0031457F: ;
    ecx = MEM32(esi + 0x24);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031458Cu); RECOMP_ABI_CALL(0x0055DBF5u, sub_0055DBF5); /* call 0x0055DBF5 */

loc_0031458C: ;
    ecx = esi;
    PUSH32(esp, 0x00314593u); RECOMP_ABI_CALL(0x00030B53u, sub_00030B53); /* call 0x00030B53 */

loc_00314593: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00314552
 * Original: 0x00314552 - 0x00314596 (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314552(void)
{

loc_00314552: ;
    esi = ecx;
    PUSH32(esp, 0x00314559u); RECOMP_ABI_CALL(0x0001EDB3u, sub_0001EDB3); /* call 0x0001EDB3 */

loc_00314559: ;
    ecx = MEM32(esi + 0x24);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00314566u); RECOMP_ABI_CALL(0x0055DB68u, sub_0055DB68); /* call 0x0055DB68 */

loc_00314566: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0xF);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x28);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00314578u); RECOMP_ABI_CALL(0x00557F14u, sub_00557F14); /* call 0x00557F14 */

loc_00314578: ;
    ecx = esi;
    PUSH32(esp, 0x0031457Fu); RECOMP_ABI_CALL(0x0001AA29u, sub_0001AA29); /* call 0x0001AA29 */

loc_0031457F: ;
    ecx = MEM32(esi + 0x24);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031458Cu); RECOMP_ABI_CALL(0x0055DBF5u, sub_0055DBF5); /* call 0x0055DBF5 */

loc_0031458C: ;
    ecx = esi;
    PUSH32(esp, 0x00314593u); RECOMP_ABI_CALL(0x00030B53u, sub_00030B53); /* call 0x00030B53 */

loc_00314593: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003145B0
 * Original: 0x003145B0 - 0x00314691 (225 bytes, 73 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003145B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003145B0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x64);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003145CBu); RECOMP_ABI_CALL(0x0003135Au, sub_0003135A); /* call 0x0003135A */

loc_003145CB: ;
    SET_LO8(eax, MEM8(esi + 0x300));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00314686; /* jne: not equal / not zero */

loc_003145D9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    goto loc_003145E0;

    /* nop */

loc_003145E0: ;
    SET_LO8(eax, MEM8(esi + 0x49));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00314684; /* jne: not equal / not zero */

loc_003145EB: ;
    SET_LO8(eax, MEM8(esi + 0x1A9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00314631; /* je: equal / zero */

loc_003145F5: ;
    edx = MEM32(esi + 0x1B0);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    PUSH32(esp, eax);
    edi = esi + 0x1B8;
    PUSH32(esp, 0x826D84);
    PUSH32(esp, edi);
    MEM32(esi + 0x1B0) = edx;
    PUSH32(esp, 0x00314616u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00314616: ;
    eax = MEM32(esi + 0x10);
    ebx = MEM32(eax + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    PUSH32(esp, 0x00314626u); RECOMP_ABI_CALL(0x005A2481u, sub_005A2481); /* call 0x005A2481 */

loc_00314626: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031462Eu); RECOMP_ABI_CALL(0x00598BB5u, sub_00598BB5); /* call 0x00598BB5 */

loc_0031462E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00314631: ;
    ecx = esi + 0x2B8;
    PUSH32(esp, 0x0031463Cu); RECOMP_ABI_CALL(0x000339A2u, sub_000339A2); /* call 0x000339A2 */

loc_0031463C: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x00314649u); RECOMP_ABI_CALL(0x0055DB68u, sub_0055DB68); /* call 0x0055DB68 */

loc_00314649: ;
    edx = MEM32(esi);
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, 0xF);
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031465Bu); RECOMP_ABI_CALL(0x00557F14u, sub_00557F14); /* call 0x00557F14 */

loc_0031465B: ;
    ecx = esi;
    PUSH32(esp, 0x00314662u); RECOMP_ABI_CALL(0x0001AA29u, sub_0001AA29); /* call 0x0001AA29 */

loc_00314662: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x0031466Fu); RECOMP_ABI_CALL(0x0055DBF5u, sub_0055DBF5); /* call 0x0055DBF5 */

loc_0031466F: ;
    ecx = esi;
    PUSH32(esp, 0x00314676u); RECOMP_ABI_CALL(0x00030B53u, sub_00030B53); /* call 0x00030B53 */

loc_00314676: ;
    SET_LO8(eax, MEM8(esi + 0x300));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003145E0; /* je: equal / zero */

loc_00314684: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00314686: ;
    ecx = esi;
    PUSH32(esp, 0x0031468Du); RECOMP_ABI_CALL(0x000211C6u, sub_000211C6); /* call 0x000211C6 */

loc_0031468D: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003146D0
 * Original: 0x003146D0 - 0x003146D3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003146D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003146D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003146E0
 * Original: 0x003146E0 - 0x003146E8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003146E0(void)
{

loc_003146E0: ;
    PUSH32(esp, 0x003146E5u); RECOMP_ABI_CALL(0x0059E463u, sub_0059E463); /* call 0x0059E463 */

loc_003146E5: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_003146F0
 * Original: 0x003146F0 - 0x003146F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003146F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003146F0: ;
    g_seh_ebp = ebp; sub_0059E46E(); return; /* tail jmp 0x0059E46E */

}

/**
 * sub_00314700
 * Original: 0x00314700 - 0x00314705 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00314700: ;
    g_seh_ebp = ebp; sub_0059E46F(); return; /* tail jmp 0x0059E46F */

}

/**
 * sub_00314710
 * Original: 0x00314710 - 0x00314715 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00314710: ;
    g_seh_ebp = ebp; sub_0059E47A(); return; /* tail jmp 0x0059E47A */

}

/**
 * sub_00314720
 * Original: 0x00314720 - 0x0031477D (93 bytes, 41 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00314720: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM32(edx) = 0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031473A; /* je: equal / zero */

loc_00314734: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0031473A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0031475D; /* jle: less or equal (signed <=) */

loc_00314743: ;
    edi = MEM32(ecx + 4);
    ebp = MEM32(esp + 0x14);
    /* nop */

loc_00314750: ;
    SET_LO8(ebx, MEM8(edi + eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + ebp)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(eax + ebp) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00314774; /* jne: not equal / not zero */

loc_00314758: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00314750; /* jl: less (signed <) */

loc_0031475D: ;
    eax = MEM32(ecx + 4);
    esi = MEM32(esp + 0x1C);
    POP32(esp, edi);
    MEM32(esi) = eax;
    ecx = MEM32(ecx + 8);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(edx) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00314774: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003147A0
 * Original: 0x003147A0 - 0x003147A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003147A0(void)
{

loc_003147A0: ;
    eax = MEM32(ecx + 0x80);
    esp += 4; return; /* ret */

}

/**
 * sub_003147B0
 * Original: 0x003147B0 - 0x003147B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003147B0(void)
{

loc_003147B0: ;
    eax = MEM32(0x8FC628);
    esp += 4; return; /* ret */

}
