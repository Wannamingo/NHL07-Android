/**
 * nhl_07_recomp - Recompiled code chunk 81
 * Functions: 250 (0x0007FF60 - 0x000873F0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0007FF60
 * Original: 0x0007FF60 - 0x0007FF67 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007FF60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0007FF60: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0007FF70
 * Original: 0x0007FF70 - 0x0007FF8B (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0007FF70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0007FF70: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_top()); /* fmul st(0), st(0) */
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_top() - fp_st1()); fp_pop(); /* fsubrp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_push(MEMF(esp + 8)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
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
 * sub_0007FFA0
 * Original: 0x0007FFA0 - 0x00080003 (99 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007FFA0(void)
{

loc_0007FFA0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 4); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0007FFDA
 * Original: 0x0007FFDA - 0x00080003 (41 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0007FFDA(void)
{

loc_0007FFDA: ;
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00080000
 * Original: 0x00080000 - 0x00080003 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080000(void)
{

loc_00080000: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00080008
 * Original: 0x00080008 - 0x00080010 (8 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080008(void)
{

loc_00080008: ;
    (void)0;
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
 * sub_00080009
 * Original: 0x00080009 - 0x00080010 (7 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080009(void)
{

loc_00080009: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0008000C
 * Original: 0x0008000C - 0x00080010 (4 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008000C(void)
{

loc_0008000C: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0008000E
 * Original: 0x0008000E - 0x00080010 (2 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008000E(void)
{

loc_0008000E: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0008000F
 * Original: 0x0008000F - 0x00080010 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008000F(void)
{

loc_0008000F: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00080010
 * Original: 0x00080010 - 0x00080011 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080010(void)
{

loc_00080010: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00080011
 * Original: 0x00080011 - 0x00080020 (15 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080011(void)
{

loc_00080011: ;
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

}

/**
 * sub_00080017
 * Original: 0x00080017 - 0x00080020 (9 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080017(void)
{

loc_00080017: ;
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

}

/**
 * sub_0008001A
 * Original: 0x0008001A - 0x00080020 (6 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008001A(void)
{

loc_0008001A: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0008001E
 * Original: 0x0008001E - 0x00080020 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008001E(void)
{

loc_0008001E: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00080020
 * Original: 0x00080020 - 0x00080067 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00080020(void)
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

loc_00080020: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B9808); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080038; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7B9808)) */

loc_00080030: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00080038: ;
    xmm1 = XMM_SCALAR(MEMF(0x7B9804)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008004D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00080045: ;
    fp_push(MEMF(0x7B9344)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0008004D: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_top()); /* fmul st(0), st(0) */
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_top() - fp_st1()); fp_pop(); /* fsubrp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_push(MEMF(esp + 8)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
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
 * sub_00080030
 * Original: 0x00080030 - 0x00080067 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00080030(void)
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

loc_00080030: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    fp_push(MEMF(0x7B9344)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0008004D: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_top()); /* fmul st(0), st(0) */
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_top() - fp_st1()); fp_pop(); /* fsubrp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_push(MEMF(esp + 8)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
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
 * sub_00080045
 * Original: 0x00080045 - 0x00080067 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00080045(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00080045: ;
    fp_push(MEMF(0x7B9344)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00080051
 * Original: 0x00080051 - 0x00080067 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00080051(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00080051: ;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_top()); /* fmul st(0), st(0) */
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_top() - fp_st1()); fp_pop(); /* fsubrp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_push(MEMF(esp + 8)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
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
 * sub_00080053
 * Original: 0x00080053 - 0x00080067 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00080053(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00080053: ;
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_top() - fp_st1()); fp_pop(); /* fsubrp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_push(MEMF(esp + 8)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
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
 * sub_00080059
 * Original: 0x00080059 - 0x00080067 (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00080059(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00080059: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
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
 * sub_0008005D
 * Original: 0x0008005D - 0x00080067 (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0008005D(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008005D: ;
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
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
 * sub_0008005F
 * Original: 0x0008005F - 0x00080067 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0008005F(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008005F: ;
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
 * sub_00080062
 * Original: 0x00080062 - 0x00080067 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080062(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00080062: ;
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
 * sub_00080065
 * Original: 0x00080065 - 0x00080067 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080065(void)
{

loc_00080065: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00080066
 * Original: 0x00080066 - 0x00080067 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080066(void)
{

loc_00080066: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00080080
 * Original: 0x00080080 - 0x00080093 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080080: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008008Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0008008F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00080088
 * Original: 0x00080088 - 0x00080093 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080088(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080088: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008008Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0008008F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008008A
 * Original: 0x0008008A - 0x00080093 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008008A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008008A: ;
    PUSH32(esp, 0x0008008Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0008008F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000800A0
 * Original: 0x000800A0 - 0x000800A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000800A0: ;
    g_seh_ebp = ebp; sub_00020951(); return; /* tail jmp 0x00020951 */

}

/**
 * sub_000800B0
 * Original: 0x000800B0 - 0x000800B3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800B0(void)
{

loc_000800B0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000800C0
 * Original: 0x000800C0 - 0x000800C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000800C0: ;
    fp_push(MEMF(0x7B96C8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000800C6
 * Original: 0x000800C6 - 0x000800C7 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800C6(void)
{

loc_000800C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000800D0
 * Original: 0x000800D0 - 0x000800E9 (25 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800D0(void)
{

loc_000800D0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000800E0
 * Original: 0x000800E0 - 0x000800E9 (9 bytes, 3 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800E0(void)
{

loc_000800E0: ;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000800E3
 * Original: 0x000800E3 - 0x000800E9 (6 bytes, 2 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800E3(void)
{

loc_000800E3: ;
    MEM32(eax + 8) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000800E6
 * Original: 0x000800E6 - 0x000800E9 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800E6(void)
{

loc_000800E6: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000800F0
 * Original: 0x000800F0 - 0x000800F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000800F0(void)
{

loc_000800F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00080100
 * Original: 0x00080100 - 0x0008011B (27 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080100(void)
{

loc_00080100: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEM32(ecx + 0x3E4) = eax;
    MEMF(ecx + 0x3E8) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00080130
 * Original: 0x00080130 - 0x0008013F (15 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080130(void)
{

loc_00080130: ;
    ecx = MEM32(ecx + 0x3E8);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00080140
 * Original: 0x00080140 - 0x00080150 (16 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080140(void)
{

loc_00080140: ;
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

}

/**
 * sub_00080150
 * Original: 0x00080150 - 0x00080157 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080150(void)
{

loc_00080150: ;
    eax = MEM32(ecx + 0x3E4);
    esp += 4; return; /* ret */

}

/**
 * sub_00080160
 * Original: 0x00080160 - 0x00080163 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080160(void)
{

loc_00080160: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00080170
 * Original: 0x00080170 - 0x00080175 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080170(void)
{

loc_00080170: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00080180
 * Original: 0x00080180 - 0x0008018E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080180: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 8), 1 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000801A0
 * Original: 0x000801A0 - 0x000801BC (28 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000801A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000801A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000801B8; /* jne: not equal / not zero */

loc_000801AA: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000801AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000801ACu); } /* indirect call */
    }

loc_000801AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000801B8; /* jne: not equal / not zero */

loc_000801B4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000801B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000801D0
 * Original: 0x000801D0 - 0x000801EC (28 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000801D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000801D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000801E8; /* jne: not equal / not zero */

loc_000801DA: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000801DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000801DCu); } /* indirect call */
    }

loc_000801DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000801E8; /* jne: not equal / not zero */

loc_000801E4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000801E8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00080200
 * Original: 0x00080200 - 0x0008020E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080200: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx + 8)) & 0xFFFFu; _fb = (uint32_t)(5) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 8), 5 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00080220
 * Original: 0x00080220 - 0x0008022E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080220: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx + 8)) & 0xFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 8), 0xB (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00080240
 * Original: 0x00080240 - 0x0008024E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080240: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx + 8)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 8), 0x13 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00080260
 * Original: 0x00080260 - 0x00080264 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080260(void)
{

loc_00080260: ;
    eax = ecx + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00080270
 * Original: 0x00080270 - 0x0008028B (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080270: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00080286; /* jne: not equal / not zero */

loc_0008027A: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00080283u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00080283: ;
    MEM32(esi + 8) = eax;

loc_00080286: ;
    eax = MEM32(esi + 8);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000802A0
 * Original: 0x000802A0 - 0x000802C8 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000802A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000802A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000802B6; /* jne: not equal / not zero */

loc_000802AA: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000802B3u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_000802B3: ;
    MEM32(esi + 8) = eax;

loc_000802B6: ;
    eax = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 1 (16-bit) */
    POP32(esp, esi);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000802E0
 * Original: 0x000802E0 - 0x00080308 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000802E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000802E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000802F6; /* jne: not equal / not zero */

loc_000802EA: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000802F3u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_000802F3: ;
    MEM32(esi + 8) = eax;

loc_000802F6: ;
    eax = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(5) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 5 (16-bit) */
    POP32(esp, esi);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00080318
 * Original: 0x00080318 - 0x00080320 (8 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080318(void)
{

loc_00080318: ;
    (void)0;
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
 * sub_00080320
 * Original: 0x00080320 - 0x00080348 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080320: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00080336; /* jne: not equal / not zero */

loc_0008032A: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00080333u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00080333: ;
    MEM32(esi + 8) = eax;

loc_00080336: ;
    eax = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0xB (16-bit) */
    POP32(esp, esi);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00080360
 * Original: 0x00080360 - 0x00080388 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080360: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00080376; /* jne: not equal / not zero */

loc_0008036A: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00080373u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00080373: ;
    MEM32(esi + 8) = eax;

loc_00080376: ;
    eax = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0x13 (16-bit) */
    POP32(esp, esi);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0008038C
 * Original: 0x0008038C - 0x00080394 (8 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008038C(void)
{

loc_0008038C: ;
    (void)0;
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
 * sub_00080394
 * Original: 0x00080394 - 0x000803A0 (12 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080394(void)
{

loc_00080394: ;
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

}

/**
 * sub_000803A0
 * Original: 0x000803A0 - 0x000803AF (15 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000803A0(void)
{

loc_000803A0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000803C0
 * Original: 0x000803C0 - 0x000803C3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000803C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000803C0: ;
    fp_push(MEMF(ecx)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000803D0
 * Original: 0x000803D0 - 0x000803D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000803D0(void)
{

loc_000803D0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_000803E0
 * Original: 0x000803E0 - 0x000803E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000803E0(void)
{

loc_000803E0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_000803F0
 * Original: 0x000803F0 - 0x000803F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000803F0(void)
{

loc_000803F0: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_00080400
 * Original: 0x00080400 - 0x00080404 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080400(void)
{

loc_00080400: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_00080410
 * Original: 0x00080410 - 0x00080439 (41 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080410: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax);
    MEM32(ecx + 0xC) = edx;
    eax = MEM32(eax + 4);
    MEM32(ecx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00080450
 * Original: 0x00080450 - 0x00080453 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080450(void)
{

loc_00080450: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00080460
 * Original: 0x00080460 - 0x00080464 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080460(void)
{

loc_00080460: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00080470
 * Original: 0x00080470 - 0x00080474 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080470(void)
{

loc_00080470: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00080480
 * Original: 0x00080480 - 0x00080484 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080480(void)
{

loc_00080480: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_00080490
 * Original: 0x00080490 - 0x00080494 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080490(void)
{

loc_00080490: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_000804A0
 * Original: 0x000804A0 - 0x000804A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000804A0(void)
{

loc_000804A0: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_000804B0
 * Original: 0x000804B0 - 0x000804E1 (49 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000804B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000804B0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax);
    MEM32(ecx + 0x10) = edx;
    eax = MEM32(eax + 4);
    MEM32(ecx + 0x14) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000804F0
 * Original: 0x000804F0 - 0x000804F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000804F0(void)
{

loc_000804F0: ;
    eax = MEM32(0x8F9CCC);
    esp += 4; return; /* ret */

}

/**
 * sub_00080500
 * Original: 0x00080500 - 0x00080522 (34 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080500: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0008051C; /* jbe: below or equal (unsigned <=) */

loc_00080508: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7D0 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0008051C; /* jae: above or equal (unsigned >=) */

loc_0008050F: ;
    ecx = MEM32(ecx + 0x1014);
    eax = (uint32_t)(int32_t)SMEM16(ecx + eax * 2);
    esp += 8; return; /* ret 4 */

loc_0008051C: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00080530
 * Original: 0x00080530 - 0x00080534 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080530(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00080530: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00080540
 * Original: 0x00080540 - 0x00080544 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080540(void)
{

loc_00080540: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_00080550
 * Original: 0x00080550 - 0x00080554 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080550(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00080550: ;
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00080560
 * Original: 0x00080560 - 0x00080567 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080560(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00080560: ;
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x24)); /* fsub dword ptr [ecx + 0x24] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00080570
 * Original: 0x00080570 - 0x0008059B (43 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00080570: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x14);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00080589; /* jne: not equal / not zero */

loc_0008057B: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00080586u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00080586: ;
    MEM32(esi + 8) = eax;

loc_00080589: ;
    esi = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 1 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000805B0
 * Original: 0x000805B0 - 0x000805B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000805B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000805B0: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000805C0
 * Original: 0x000805C0 - 0x000805EB (43 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000805C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000805C0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x34);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000805D9; /* jne: not equal / not zero */

loc_000805CB: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000805D6u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_000805D6: ;
    MEM32(esi + 8) = eax;

loc_000805D9: ;
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
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00080600
 * Original: 0x00080600 - 0x00080657 (87 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080600(void)
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

loc_00080600: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x34);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0008062A; /* jne: not equal / not zero */

loc_0008061C: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00080627u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00080627: ;
    MEM32(edi + 8) = eax;

loc_0008062A: ;
    eax = MEM32(edi + 8);
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x24)); /* fsub dword ptr [esi + 0x24] */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0x13 (16-bit) */
    POP32(esp, edi);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x24)); /* fadd dword ptr [esi + 0x24] */
    POP32(esp, esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x7A9980)); /* fsub dword ptr [0x7a9980] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00080670
 * Original: 0x00080670 - 0x00080676 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080670(void)
{

loc_00080670: ;
    eax = MEM32(0x8EACD8);
    esp += 4; return; /* ret */

}

/**
 * sub_00080680
 * Original: 0x00080680 - 0x0008068F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00080680(void)
{

loc_00080680: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000806A0
 * Original: 0x000806A0 - 0x000806A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000806A0(void)
{

loc_000806A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000806B0
 * Original: 0x000806B0 - 0x000806B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000806B0(void)
{

loc_000806B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000806C0
 * Original: 0x000806C0 - 0x000806C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000806C0(void)
{

loc_000806C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000806D0
 * Original: 0x000806D0 - 0x000806DF (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000806D0(void)
{

loc_000806D0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000806F0
 * Original: 0x000806F0 - 0x00080721 (49 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000806F0(void)
{

loc_000806F0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00080730
 * Original: 0x00080730 - 0x000808DE (430 bytes, 130 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00080730(void)
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

loc_00080730: ;
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
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00080748u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00080745u); } /* indirect call */
    }

loc_00080748: ;
    ebx = eax;
    eax = MEM32(edi + 0x18);
    PUSH32(esp, 0x3F000000);
    ecx = eax + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00080761u); RECOMP_ABI_CALL(0x00013260u, sub_00013260); /* call 0x00013260 */

loc_00080761: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x0008076Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00080768u); } /* indirect call */
    }

loc_0008076B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x897388)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000807C5; /* je: equal / zero */

loc_0008077A: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AACB4); /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008079A; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_0008078D: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008079A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00080792: ;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    goto loc_000807C5;

loc_0008079A: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000807A8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_0008079F: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm2 = xmm1; /* movaps */
    goto loc_000807BF;

loc_000807A8: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000807BF; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_000807BB: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */

loc_000807BF: ;
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */

loc_000807C5: ;
    ecx = MEM32(ebx + 0x20);
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x60)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x18); /* subss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000807DD; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_000807D8: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00080802; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_000807DD: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000807E8; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_000807E2: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    goto loc_00080802;

loc_000807E8: ;
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000807FF; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm1.f[0]) */

loc_000807FB: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_000807FF: ;
    xmm2 = xmm1; /* movaps */

loc_00080802: ;
    xmm1 = XMM_SCALAR(MEMF(0x8F95EC)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008081E; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_00080819: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0008084F; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0008081E: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080829; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00080823: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_00080849;

loc_00080829: ;
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008083B; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_00080832: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    goto loc_00080849;

loc_0008083B: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm1 = xmm2; /* movaps */

loc_00080849: ;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */

loc_0008084F: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(0x7B980C)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    eax = MEM32(esi + 0x20);
    edx = MEM32(0x8E8F84);
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x3C);
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000808CBu); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000808CB: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x34) = 2;
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
 * sub_00080950
 * Original: 0x00080950 - 0x00080F9C (1612 bytes, 449 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00080950(void)
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

loc_00080950: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x30); /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x34); /* addss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x38); /* addss */
    eax = MEM32(esp + 0x20);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    edx = MEM32(esp + 0x28);
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x24);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    ebx = MEM32(esp + 0x2C);
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(edi);
    MEM32(esp + 0x24) = ecx;
    ecx = edi;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x000809E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000809E3u); } /* indirect call */
    }

loc_000809E6: ;
    xmm0 = XMM_SCALAR(MEMF(0x897388)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esi + 0x1C);
    if (CMP_EQ(_fa, _fb)) goto loc_00080B18; /* je: equal / zero */

loc_000809FC: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0xC); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080A0E; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00080A09: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00080A2D; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00080A0E: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080A19; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00080A13: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_00080A2D;

loc_00080A19: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00080A2D; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00080A29: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_00080A2D: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080A37; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00080A32: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00080A56; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00080A37: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080A42; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00080A3C: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_00080A56;

loc_00080A42: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00080A56; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00080A52: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_00080A56: ;
    xmm5 = xmm1; /* movaps */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x14); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080A6B; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00080A66: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00080A8A; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00080A6B: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080A76; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00080A70: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_00080A8A;

loc_00080A76: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00080A8A; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00080A86: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_00080A8A: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080A94; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00080A8F: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00080AB3; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00080A94: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080A9F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00080A99: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_00080AB3;

loc_00080A9F: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00080AB3; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00080AAF: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_00080AB3: ;
    xmm4 = xmm1; /* movaps */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x1C); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080AC8; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00080AC3: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00080AE7; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00080AC8: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080AD3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00080ACD: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_00080AE7;

loc_00080AD3: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00080AE7; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00080AE3: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_00080AE7: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080AF1; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00080AEC: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00080B13; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00080AF1: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080AFF; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00080AF6: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm3 = xmm1; /* movaps */
    goto loc_00080B27;

loc_00080AFF: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00080B13; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00080B0F: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_00080B13: ;
    xmm3 = xmm1; /* movaps */
    goto loc_00080B27;

loc_00080B18: ;
    xmm5 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */

loc_00080B27: ;
    edx = MEM32(edi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(edx + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080B43; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00080B3E: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00080B68; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00080B43: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080B4E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00080B48: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_00080B62;

loc_00080B4E: ;
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm5.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00080B62; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm5.f[0]) */

loc_00080B5E: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_00080B62: ;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */

loc_00080B68: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    ecx = MEM32(edi + 0x3C);
    fp_top() = sin(fp_top()); /* fsin */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x30)); /* fmul dword ptr [ecx + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x24)); /* fmul dword ptr [esi + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x30)); /* fmul dword ptr [ecx + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x24)); /* fmul dword ptr [esi + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080BAE; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00080BA9: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00080BD3; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00080BAE: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080BB9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00080BB3: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_00080BCD;

loc_00080BB9: ;
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00080BCD; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm4.f[0]) */

loc_00080BC9: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_00080BCD: ;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */

loc_00080BD3: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    ecx = MEM32(edi + 0x3C);
    fp_top() = sin(fp_top()); /* fsin */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x30)); /* fmul dword ptr [ecx + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x30)); /* fmul dword ptr [ecx + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080C17; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00080C12: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00080C39; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00080C17: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080C22; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00080C1C: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_00080C33;

loc_00080C22: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00080C33; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00080C2F: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_00080C33: ;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */

loc_00080C39: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x30); /* subss */
    edx = MEM32(edi);
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x38); /* subss */
    ecx = edi;
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00080C78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00080C75u); } /* indirect call */
    }

loc_00080C78: ;
    eax = MEM32(eax + 0x20);
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x30); /* subss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x38); /* subss */
    xmm0 = xmm3; /* movaps */
    xmm1 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm7 = xmm4; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABE28); /* mulss */
    xmm7 = xmm4; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    xmm7 = xmm5; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    xmm5 = xmm6; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm6.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm5.f[0]; /* addss */
    xmm7.f[0] = xmm7.f[0] - MEMF(esp + 0x18); /* subss */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * MEMF(0x7AB82C); /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm7.f[0]; /* subss */
    xmm7 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm4.f[0]; _fcb = xmm7.f[0]; /* comiss */
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080E67; /* jb: below (unsigned <) (xmm4.f[0] vs xmm7.f[0]) */

loc_00080D43: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7ABE28); /* mulss */
    xmm5 = xmm7; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm5.f[0] = xmm5.f[0] / xmm1.f[0]; /* divss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    _fca = xmm5.f[0]; _fcb = xmm7.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] / xmm1.f[0]; /* divss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080D8B; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm7.f[0]) */

loc_00080D83: ;
    _fca = xmm4.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080D8B; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm5.f[0]) */

loc_00080D88: ;
    xmm4 = xmm5; /* movaps */

loc_00080D8B: ;
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x40); /* mulss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x48); /* mulss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 0x58); /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 0x18); /* divss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x7B9808); /* comiss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080DD0; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(0x7B9808)) */

loc_00080DCB: ;
    xmm1 = xmm7; /* movaps */
    goto loc_00080E03;

loc_00080DD0: ;
    xmm5 = XMM_SCALAR(MEMF(0x7B9804)); /* movss */
    _fca = xmm5.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080DE7; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm1.f[0]) */

loc_00080DDD: ;
    xmm1 = XMM_SCALAR(MEMF(0x7B9344)); /* movss */
    goto loc_00080E03;

loc_00080DE7: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_top()); /* fmul st(0), st(0) */
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_top() - fp_st1()); fp_pop(); /* fsubrp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */

loc_00080E03: ;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm7.f[0]; /* comiss */
    MEMF(esi + 0x3C) = xmm1.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080E25; /* jb: below (unsigned <) (xmm0.f[0] vs xmm7.f[0]) */

loc_00080E19: ;
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */

loc_00080E25: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm7.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x897388)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080E3C; /* jb: below (unsigned <) (xmm0.f[0] vs xmm7.f[0]) */

loc_00080E37: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00080E60; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00080E3C: ;
    _fca = xmm0.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080E4C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm7.f[0]) */

loc_00080E41: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    goto loc_00080E74;

loc_00080E4C: ;
    xmm2 = xmm7; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00080E60; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00080E5C: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00080E60: ;
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    goto loc_00080E74;

loc_00080E67: ;
    xmm1 = XMM_SCALAR(MEMF(0x897388)); /* movss */
    MEMF(esi + 0x3C) = xmm7.f[0]; /* movss */

loc_00080E74: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B9344); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080EBB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7B9344)) */

loc_00080E82: ;
    xmm0 = XMM_SCALAR(MEMF(0x897398)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7B970C)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esi + 0x3C); /* subss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080EAB; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_00080E9F: ;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi + 0x3C) = xmm3.f[0]; /* movss */

loc_00080EAB: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x3C) = xmm2.f[0]; /* movss */
    goto loc_00080ED2;

loc_00080EBB: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B970C)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080ED2; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00080ECD: ;
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */

loc_00080ED2: ;
    ecx = MEM32(edi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x3C); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080EE9; /* jb: below (unsigned <) (xmm0.f[0] vs xmm7.f[0]) */

loc_00080EE4: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00080F08; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00080EE9: ;
    _fca = xmm0.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00080EF4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm7.f[0]) */

loc_00080EEE: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00080F08;

loc_00080EF4: ;
    xmm2 = xmm7; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00080F08; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00080F04: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00080F08: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x7B9810)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00080F7C; /* jbe: below or equal (unsigned <=) */

loc_00080F1F: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    edi = MEM32(edi + 0x3C);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = MEM32(esi + 0x1C);
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x30)); /* fmul dword ptr [edi + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x24)); /* fmul dword ptr [esi + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x38)); /* fadd dword ptr [esp + 0x38] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x7B9810)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00080F7A; /* jbe: below or equal (unsigned <=) */

loc_00080F49: ;
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x30)); /* fmul dword ptr [edi + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x24)); /* fmul dword ptr [esi + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x7B70AC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00080F7C; /* jbe: below or equal (unsigned <=) */

loc_00080F66: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AD404); /* mulss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    goto loc_00080F7C;

loc_00080F7A: ;
    fp_pop(); /* fstp st(0) */

loc_00080F7C: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AEBC8); /* mulss */
    POP32(esp, edi);
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x40) = xmm7.f[0]; /* movss */
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
 * sub_00081130
 * Original: 0x00081130 - 0x000814E7 (951 bytes, 258 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00081130(void)
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

loc_00081130: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000814DE; /* jne: not equal / not zero */

loc_0008114C: ;
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    ecx = MEM32(esp + 0x30);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    edx = MEM32(esp + 0x34);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x38);
    MEMF(esp + 0x3C) = xmm4.f[0]; /* movss */
    MEM32(esp + 0x48) = eax;
    eax = MEM32(esi + 0x1C);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 0x28); /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(esp + 0x3C);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x20); /* subss */
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x4C) = ecx;
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x897388)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00081201; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_000811FC: ;
    _fca = xmm5.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00081220; /* ja: above (unsigned >) (xmm5.f[0] vs xmm1.f[0]) */

loc_00081201: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008120C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00081206: ;
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    goto loc_00081220;

loc_0008120C: ;
    xmm6 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm5.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm6.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00081220; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm6.f[0]) */

loc_0008121C: ;
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */

loc_00081220: ;
    edx = MEM32(esi + 0x1C);
    MEMF(edx + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi + 0x3C);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x24); /* mulss */
    ecx = MEM32(esi + 0x1C);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    MEMF(ecx + 0x10) = xmm2.f[0]; /* movss */
    edx = MEM32(edi);
    ebx = MEM32(edi + 0x20);
    ecx = edi;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm4.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000812A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000812A0u); } /* indirect call */
    }

loc_000812A3: ;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000812B2u); RECOMP_ABI_CALL(0x0001AD35u, sub_0001AD35); /* call 0x0001AD35 */

loc_000812B2: ;
    edx = MEM32(edi);
    ebx = MEM32(edi + 0x20);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000812BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000812B9u); } /* indirect call */
    }

loc_000812BC: ;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000812CBu); RECOMP_ABI_CALL(0x0001AD35u, sub_0001AD35); /* call 0x0001AD35 */

loc_000812CB: ;
    ecx = MEM32(0x8E8F84);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    eax = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B970C); /* mulss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x28); /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x7B970C); /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x50) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm3.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00081374; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_00081358: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x50) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm5.f[0]; /* movss */

loc_00081374: ;
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x40); /* subss */
    xmm7.f[0] = xmm7.f[0] - MEMF(esp + 0x48); /* subss */
    MEMF(esp + 0x14) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm7.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x897388)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000813BC; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_000813B7: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000813DB; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000813BC: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000813C7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000813C1: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_000813DB;

loc_000813C7: ;
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000813DB; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm4.f[0]) */

loc_000813D7: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000813DB: ;
    edx = MEM32(esi + 0x1C);
    MEMF(edx + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = xmm7; /* movaps */
    xmm4 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi + 0x3C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    ecx = MEM32(esi + 0x1C);
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x30); /* divss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00081439; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_00081434: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00081458; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00081439: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00081444; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0008143E: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00081458;

loc_00081444: ;
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00081458; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm4.f[0]) */

loc_00081454: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00081458: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00081466; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_00081461: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00081482; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00081466: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00081471; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0008146B: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00081482;

loc_00081471: ;
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00081482; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0008147E: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00081482: ;
    edx = MEM32(esi + 0x1C);
    MEMF(edx + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    MEM8(eax + 4) = 1;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x00081498u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00081495u); } /* indirect call */
    }

loc_00081498: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000814DE; /* je: equal / zero */

loc_0008149C: ;
    eax = MEM32(esi + 0x1C);
    edi = eax + 0x1C;
    eax = esp + 0x1C;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000814ADu); RECOMP_ABI_CALL(0x0002F109u, sub_0002F109); /* call 0x0002F109 */

loc_000814AD: ;
    ecx = MEM32(eax);
    MEM32(edi) = ecx;
    eax = MEM32(esi + 0x1C);
    edi = eax + 0x14;
    edx = esp + 0x24;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000814C2u); RECOMP_ABI_CALL(0x0002F109u, sub_0002F109); /* call 0x0002F109 */

loc_000814C2: ;
    eax = MEM32(eax);
    MEM32(edi) = eax;
    esi = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x2C;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000814D7u); RECOMP_ABI_CALL(0x0002F109u, sub_0002F109); /* call 0x0002F109 */

loc_000814D7: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edx;

loc_000814DE: ;
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
 * sub_000815E0
 * Original: 0x000815E0 - 0x000816CD (237 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000815E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000815E0: ;
    ecx = MEM32(0x8EACD8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x3C);
    esi = MEM32(edi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x24); /* mulss */
    ecx = esi;
    MEMF(esi + 0x94) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008160Bu); RECOMP_ABI_CALL(0x00029EF2u, sub_00029EF2); /* call 0x00029EF2 */

loc_0008160B: ;
    edx = MEM32(0x8EACD8);
    xmm0 = XMM_SCALAR(MEMF(0x7B96C8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x40); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000816AA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx + 0x40)) */

loc_00081623: ;
    ecx = esi;
    PUSH32(esp, 0x0008162Au); RECOMP_ABI_CALL(0x0002AA14u, sub_0002AA14); /* call 0x0002AA14 */

loc_0008162A: ;
    ecx = MEM32(0x8EACD8);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x897388)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00081656; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00081649: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00081656; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008164E: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    goto loc_00081687;

loc_00081656: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00081664; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008165B: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    goto loc_00081681;

loc_00081664: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00081676; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008166D: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    goto loc_00081681;

loc_00081676: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_00081681: ;
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */

loc_00081687: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00081693u); RECOMP_ABI_CALL(0x000152A4u, sub_000152A4); /* call 0x000152A4 */

loc_00081693: ;
    eax = MEM32(0x8EACD8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */

loc_000816AA: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = esi;
    MEMF(esi + 0x94) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000816C1u); RECOMP_ABI_CALL(0x000237F5u, sub_000237F5); /* call 0x000237F5 */

loc_000816C1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000816C7u); RECOMP_ABI_CALL(0x00014719u, sub_00014719); /* call 0x00014719 */

loc_000816C7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00081710
 * Original: 0x00081710 - 0x00081722 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00081710: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x2C) = eax;
    MEM32(ecx + 0x34) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x18) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00081730
 * Original: 0x00081730 - 0x000819D9 (681 bytes, 201 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081730(void)
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

loc_00081730: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x18) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000819CF; /* je: equal / zero */

loc_0008174C: ;
    edi = MEM32(esp + 0x20);
    ecx = edi;
    PUSH32(esp, 0x00081757u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_00081757: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000819CF; /* je: equal / zero */

loc_0008175F: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00081766u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00081763u); } /* indirect call */
    }

loc_00081766: ;
    ecx = MEM32(edi + 0x20);
    fp_push(MEMF(ecx + 0x38)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    edx = MEM32(eax + 0x20);
    fp_top() = fabs(fp_top()); /* fabs */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x897388)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x60); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008179F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_0008179A: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000817C4; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008179F: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000817AA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000817A4: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_000817C4;

loc_000817AA: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000817C1; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000817BD: ;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_000817C1: ;
    xmm0 = xmm2; /* movaps */

loc_000817C4: ;
    xmm2 = XMM_SCALAR(MEMF(0x8F95EC)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000817E0; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_000817DB: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0008181D; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_000817E0: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000817F1; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_000817E5: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    goto loc_00081817;

loc_000817F1: ;
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00081806; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_000817FA: ;
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    goto loc_00081817;

loc_00081806: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */

loc_00081817: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */

loc_0008181D: ;
    eax = MEM32(edi);
    ecx = edi;
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x0008182Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00081827u); } /* indirect call */
    }

loc_0008182A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00081899; /* je: equal / zero */

loc_0008182E: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x897388)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AACB4); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00081868; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008185B: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00081868; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00081860: ;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    goto loc_00081899;

loc_00081868: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00081876; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008186D: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    goto loc_00081893;

loc_00081876: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00081888; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008187F: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    goto loc_00081893;

loc_00081888: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_00081893: ;
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */

loc_00081899: ;
    ecx = edi;
    PUSH32(esp, 0x000818A0u); RECOMP_ABI_CALL(0x0002152Cu, sub_0002152C); /* call 0x0002152C */

loc_000818A0: ;
    fp_push(MEMF(0x7B935C)); /* fld float */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000818C0; /* jbe: below or equal (unsigned <=) */

loc_000818B1: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */

loc_000818C0: ;
    ecx = MEM32(edi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000818D9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000818CD: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_000818D9: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebx (32-bit) */
    MEM32(esp + 0x20) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_000819CF; /* jle: less or equal (signed <=) */

loc_000818E6: ;
    goto loc_000818F0;

    /* nop */
    /* nop */

loc_000818F0: ;
    edx = MEM32(esi);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + edx); /* comiss */
    eax = ebx + edx;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000819B1; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ebx + edx)) */

loc_00081905: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000819B1; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00081913: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000819B1; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_00081923: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000819B1; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00081931: ;
    ebp = ZX8(MEM8(eax + 0x10));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000819B1; /* je: equal / zero */

loc_0008193D: ;
    /* nop */

loc_00081940: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0x2C);
    edi = ebp;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = ZX16(MEM16(eax + edi + 0xC));
    edx = eax;
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00081982; /* jne: not equal / not zero */

loc_00081958: ;
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00081982; /* jne: not equal / not zero */

loc_0008195F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    PUSH32(esp, ecx);
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008197Bu); RECOMP_ABI_CALL(0x00020E1Fu, sub_00020E1F); /* call 0x00020E1F */

loc_0008197B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00081994; /* jne: not equal / not zero */

loc_00081982: ;
    edx = MEM32(esi + 8);
    ebp = ZX8(MEM8(edx + edi + 0xF));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00081940; /* jne: not equal / not zero */

loc_00081992: ;
    goto loc_000819B1;

loc_00081994: ;
    eax = MEM32(esi + 8);
    { uint32_t _sv=(uint32_t)(ebp), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ebp = _sv << _sc;
        _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    eax = ZX8(MEM8(eax + 0xE));
    ecx = eax + eax * 2;
    eax = MEM32(esi + 0x10);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = ecx;

loc_000819B1: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000819CF; /* jne: not equal / not zero */

loc_000819B8: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000818F0; /* jl: less (signed <) */

loc_000819CF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00081A90
 * Original: 0x00081A90 - 0x00081AD4 (68 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00081A90: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00081A9Eu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00081A9E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00081AA5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00081AA2u); } /* indirect call */
    }

loc_00081AA5: ;
    esi = MEM32(esp + 0x10);
    ecx = eax;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    edi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x2C); PUSH32(esp, 0x00081AC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00081AC1u); } /* indirect call */
    }

loc_00081AC4: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x23 (32-bit) */
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00081AF0
 * Original: 0x00081AF0 - 0x00081B97 (167 bytes, 53 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081AF0(void)
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

loc_00081AF0: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_SCALAR(MEMF(0x7B9728)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x8F9CCC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00081B10u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00081B10: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00081B17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00081B14u); } /* indirect call */
    }

loc_00081B17: ;
    esi = MEM32(esp + 0x18);
    ecx = eax;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebp = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    ebx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 0x2C); PUSH32(esp, 0x00081B36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00081B33u); } /* indirect call */
    }

loc_00081B36: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x23 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00081B59; /* jl: less (signed <) */

loc_00081B3B: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7B9724)); /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_00081B53; /* jne: not equal / not zero */

loc_00081B4B: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */

loc_00081B53: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_00081B59: ;
    PUSH32(esp, 0x3D7);
    PUSH32(esp, 0x7B9814);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, 0x00081B6Du); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_00081B6D: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AD340); /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00081B91; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00081B8B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00081B91: ;
    SET_LO8(eax, 1);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00081BC0
 * Original: 0x00081BC0 - 0x00081BCE (14 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081BC0(void)
{

loc_00081BC0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00081BE0
 * Original: 0x00081BE0 - 0x00081DF0 (528 bytes, 148 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00081BE0(void)
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

loc_00081BE0: ;
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
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00081BF7u); RECOMP_ABI_CALL(0x00037598u, sub_00037598); /* call 0x00037598 */

loc_00081BF7: ;
    SET_LO8(eax, MEM8(esi + 0x38));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00081DD8; /* jne: not equal / not zero */

loc_00081C04: ;
    eax = MEM32(0x8E8F84);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(eax + 0x20);
    edx = MEM32(edi);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    ecx = edi;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x00081C42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00081C3Fu); } /* indirect call */
    }

loc_00081C42: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm1 = XMM_SCALAR(MEMF(0x897388)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00081C60; /* je: equal / zero */

loc_00081C51: ;
    eax = MEM32(esi + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x1C); /* subss */
    goto loc_00081C6D;

loc_00081C60: ;
    ecx = MEM32(esi + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x20); /* addss */

loc_00081C6D: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00081C77; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00081C72: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00081C93; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00081C77: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00081C82; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00081C7C: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00081C93;

loc_00081C82: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00081C93; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00081C8F: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00081C93: ;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    edx = MEM32(edi);
    fp_top() = sin(fp_top()); /* fsin */
    ecx = edi;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00081CB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00081CB1u); } /* indirect call */
    }

loc_00081CB4: ;
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    xmm1 = XMM_SCALAR(MEMF(0x7B9734)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_00081CDA; /* jne: not equal / not zero */

loc_00081CD2: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */

loc_00081CDA: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00081D4D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00081CF2: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00081D4D; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_00081D08: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x28)); /* fdiv dword ptr [esp + 0x28] */
    MEM32(edi + 0x3E4) = 1;
    MEMF(edi + 0x3E8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x7B972C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00081DA1; /* jbe: below or equal (unsigned <=) */

loc_00081D45: ;
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    goto loc_00081DA1;

loc_00081D4D: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x897388)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00081D73; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00081D6E: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00081D8F; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00081D73: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00081D7E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00081D78: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00081D8F;

loc_00081D7E: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00081D8F; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00081D8B: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00081D8F: ;
    MEM32(edi + 0x3E4) = 2;
    MEMF(edi + 0x3E8) = xmm0.f[0]; /* movss */

loc_00081DA1: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00081DA8u); RECOMP_ABI_CALL(0x0001AF38u, sub_0001AF38); /* call 0x0001AF38 */

loc_00081DA8: ;
    ecx = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B96C8); /* mulss */
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM32(esp + 0x2C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00081DCEu); RECOMP_ABI_CALL(0x0002CAF3u, sub_0002CAF3); /* call 0x0002CAF3 */

loc_00081DCE: ;
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x2C) = eax;

loc_00081DD8: ;
    POP32(esp, edi);
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x18) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_00081E74
 * Original: 0x00081E74 - 0x00081E80 (12 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081E74(void)
{

loc_00081E74: ;
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

}

/**
 * sub_00081E80
 * Original: 0x00081E80 - 0x00081E84 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081E80(void)
{

loc_00081E80: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00081E90
 * Original: 0x00081E90 - 0x00081EAC (28 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00081E90: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00081EA6; /* jl: less (signed <) */

loc_00081E98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00081EA6; /* jge: greater or equal (signed >=) */

loc_00081E9D: ;
    ecx = MEM32(ecx + 0xC);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

loc_00081EA6: ;
    eax = MEM32(ecx + 0xC);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00081EC0
 * Original: 0x00081EC0 - 0x00081EE3 (35 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00081EC0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 0x10) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_00081EDD; /* jl: less (signed <) */

loc_00081ECF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00081EDD; /* jge: greater or equal (signed >=) */

loc_00081ED4: ;
    ecx = MEM32(ecx + 0xC);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

loc_00081EDD: ;
    eax = MEM32(ecx + 0xC);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00081EF0
 * Original: 0x00081EF0 - 0x00081F1B (43 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081EF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00081EF0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 0x10) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00081F30
 * Original: 0x00081F30 - 0x00081F63 (51 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081F30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00081F30: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = ecx + 4;
    ecx = MEM32(edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = ecx;
    ecx = MEM32(edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(edx);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(edx + 4);
    MEM32(eax + 0x14) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00081F70
 * Original: 0x00081F70 - 0x00081F74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081F70(void)
{

loc_00081F70: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_00081F80
 * Original: 0x00081F80 - 0x00081FCB (75 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00081F80: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 0x20) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_00081F9C; /* jl: less (signed <) */

loc_00081F8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x18) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00081F9C; /* jge: greater or equal (signed >=) */

loc_00081F94: ;
    ecx = MEM32(ecx + 0x1C);
    ecx = ecx + eax * 4;
    goto loc_00081F9F;

loc_00081F9C: ;
    ecx = MEM32(ecx + 0x1C);

loc_00081F9F: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00081FB7; /* jne: not equal / not zero */

loc_00081FA9: ;
    edx = esi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00081FB4u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00081FB4: ;
    MEM32(esi + 8) = eax;

loc_00081FB7: ;
    esi = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(5) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 5 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00081FE0
 * Original: 0x00081FE0 - 0x00082024 (68 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00081FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00081FE0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00081FF5; /* jl: less (signed <) */

loc_00081FE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x54) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00081FF5; /* jge: greater or equal (signed >=) */

loc_00081FED: ;
    ecx = MEM32(ecx + 0x58);
    ecx = ecx + eax * 4;
    goto loc_00081FF8;

loc_00081FF5: ;
    ecx = MEM32(ecx + 0x58);

loc_00081FF8: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00082010; /* jne: not equal / not zero */

loc_00082002: ;
    edx = esi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0008200Du); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_0008200D: ;
    MEM32(esi + 8) = eax;

loc_00082010: ;
    esi = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 1 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00082040
 * Original: 0x00082040 - 0x00082044 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082040(void)
{

loc_00082040: ;
    eax = MEM32(ecx + 0x54);
    esp += 4; return; /* ret */

}

/**
 * sub_00082050
 * Original: 0x00082050 - 0x00082071 (33 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00082050: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0008205E; /* je: equal / zero */

loc_0008205B: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFFCu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008205E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008206B; /* je: equal / zero */

loc_00082062: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00082068u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00082068: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008206B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00082080
 * Original: 0x00082080 - 0x000820A1 (33 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00082080: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0008208E; /* je: equal / zero */

loc_0008208B: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFF0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008208E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008209B; /* je: equal / zero */

loc_00082092: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00082098u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00082098: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008209B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000820B0
 * Original: 0x000820B0 - 0x00082431 (897 bytes, 289 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000820B0(void)
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

loc_000820B0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x7B9850);
    esi = ecx;
    PUSH32(esp, 0x000820CAu); RECOMP_ABI_CALL(0x0002B3D3u, sub_0002B3D3); /* call 0x0002B3D3 */

loc_000820CA: ;
    edi = eax;
    eax = MEM32(edi + 8);
    MEM32(esi + 4) = eax;
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = edi;
    PUSH32(esp, 0x000820E4u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000820E4: ;
    MEM32(esi) = eax;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00082150; /* jle: less or equal (signed <=) */

loc_000820F2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi + 0x18;

loc_000820F7: ;
    edi = MEM32(ecx + -8);
    ebx = MEM32(ecx);
    ebp = MEM32(ecx + -4);
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    edi = MEM32(esi);
    MEM32(esp + 0x2C) = ebx;
    ebx = MEM32(ecx + 4);
    MEMF(eax + edi) = xmm0.f[0]; /* movss */
    edi = MEM32(esi);
    xmm0.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    MEMF(eax + edi + 4) = xmm0.f[0]; /* movss */
    edi = MEM32(esi);
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x2C); /* cvtsi2ss */
    MEMF(eax + edi + 8) = xmm0.f[0]; /* movss */
    edi = MEM32(esi);
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    MEMF(eax + edi + 0xC) = xmm0.f[0]; /* movss */
    edi = MEM32(esi);
    MEM8(eax + edi + 0x10) = 0xFF;
    edi = MEM32(esi + 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000820F7; /* jl: less (signed <) */

loc_0008214C: ;
    edi = MEM32(esp + 0x14);

loc_00082150: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00082156u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00082156: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x7B9840);
    PUSH32(esp, 0x00082167u); RECOMP_ABI_CALL(0x0002B3D3u, sub_0002B3D3); /* call 0x0002B3D3 */

loc_00082167: ;
    edi = MEM32(eax + 8);
    ebx = eax + 0xC;
    MEM32(esp + 0x24) = eax;
    eax = edi;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi + 0xC) = edi;
    MEM32(esp + 0x34) = ebx;
    PUSH32(esp, 0x00082188u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00082188: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000821B4; /* je: equal / zero */

loc_0008218F: ;
    MEM32(eax) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    if ((_fas < 0)) goto loc_000821B6; /* js: sign (negative) */

loc_00082199: ;
    edx = edi + 1;
    /* nop */

loc_000821A0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000821A0; /* jne: not equal / not zero */

loc_000821B2: ;
    goto loc_000821B6;

loc_000821B4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000821B6: ;
    MEM32(esi + 8) = eax;
    eax = MEM32(esi + 0xC);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000821CAu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000821CA: ;
    ecx = MEM32(esi + 0xC);
    ebp = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x18) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_000821F0; /* jle: less or equal (signed <=) */

loc_000821DC: ;
    /* nop */

loc_000821E0: ;
    MEM32(ebp + eax * 4) = 0xFFFFFFFFu;
    ecx = MEM32(esi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000821E0; /* jl: less (signed <) */

loc_000821F0: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00082351; /* jle: less or equal (signed <=) */

loc_00082203: ;
    xmm1 = XMM_SCALAR(MEMF(0x897388)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7AB7C8)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx + 0x10;
    goto loc_00082220;

    /* nop */

loc_00082220: ;
    edx = MEM32(edi + -8);
    ecx = MEM32(ebx);
    xmm0.f[0] = (float)(int32_t)MEM32(edi + -12); /* cvtsi2ss */
    ebx = MEM32(edi + 4);
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    ebp = MEM32(edi);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(edi + -4);
    MEM32(esp + 0x34) = ebx;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008224B; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00082246: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0008226A; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008224B: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00082256; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00082250: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0008226A;

loc_00082256: ;
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0008226A; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm4.f[0]) */

loc_00082266: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_0008226A: ;
    ebx = MEM32(esi + 8);
    MEMF(eax + ebx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x28); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00082286; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00082281: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000822A2; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00082286: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00082291; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008228B: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_000822A2;

loc_00082291: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000822A2; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008229E: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000822A2: ;
    ebx = MEM32(esi + 8);
    MEMF(eax + ebx + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esi + 8);
    MEMF(eax + edx + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 8);
    MEM16(eax + edx + 0xC) = LO16(ebp);
    edx = MEM32(esi);
    ebx = MEM32(esi + 8);
    ebp = MEM32(esp + 0x18);
    ecx = ecx + ecx * 4;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(edx, MEM8(ecx + edx + 0x10));
    MEM8(eax + ebx + 0xF) = LO8(edx);
    edx = MEM32(esi + 8);
    SET_LO8(ebx, MEM8(esp + 0x10));
    MEM8(eax + edx + 0xE) = 0xFF;
    edx = MEM32(esi);
    MEM8(ecx + edx + 0x10) = LO8(ebx);
    edx = MEM32(esi + 0xC);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008232C; /* jle: less or equal (signed <=) */

loc_000822F2: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000822F4: ;
    edx = MEM32(ebp + edx * 4);
    _fa = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x34), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00082311; /* je: equal / zero */

loc_000822FE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008231A; /* je: equal / zero */

loc_00082303: ;
    ebx = MEM32(esi + 0xC);
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = ZX8(LO8(ecx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000822F4; /* jl: less (signed <) */

loc_0008230F: ;
    goto loc_0008232C;

loc_00082311: ;
    edx = MEM32(esi + 8);
    MEM8(eax + edx + 0xE) = LO8(ecx);
    goto loc_0008232C;

loc_0008231A: ;
    edx = MEM32(esi + 8);
    MEM8(eax + edx + 0xE) = LO8(ecx);
    edx = MEM32(esp + 0x34);
    ecx = ZX8(LO8(ecx));
    MEM32(ebp + ecx * 4) = edx;

loc_0008232C: ;
    ebx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00082220; /* jl: less (signed <) */

loc_00082351: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x14) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00082373; /* jle: less or equal (signed <=) */

loc_0008235F: ;
    /* nop */

loc_00082360: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(MEM32(ebp + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + eax * 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00082373; /* je: equal / zero */

loc_0008236A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x14) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00082360; /* jl: less (signed <) */

loc_00082373: ;
    edi = MEM32(esi + 0x14);
    ecx = edi + edi * 2;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00082387u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00082387: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000823DF; /* je: equal / zero */

loc_0008238E: ;
    MEM32(eax) = edi;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = eax + 0x10;
    if ((_fas < 0)) goto loc_000823DB; /* js: sign (negative) */

loc_00082396: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = edx + 0x28;
    ecx = edi + 1;
    goto loc_000823B0;

    /* nop */
    /* nop */

loc_000823B0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + -28) = xmm0.f[0]; /* movss */
    MEMF(eax + -20) = xmm0.f[0]; /* movss */
    MEMF(eax + -12) = xmm0.f[0]; /* movss */
    MEMF(eax + -8) = xmm0.f[0]; /* movss */
    MEMF(eax + -4) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000823B0; /* jne: not equal / not zero */

loc_000823DB: ;
    eax = edx;
    goto loc_000823E1;

loc_000823DF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000823E1: ;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esi + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00082416; /* jle: less or equal (signed <=) */

loc_000823ED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000823F2: ;
    edi = MEM32(esi + 0x10);
    ebx = MEM32(ebp + ecx * 4);
    MEM32(eax + edi) = ebx;
    edi = MEM32(esi + 0x10);
    MEM8(eax + edi + 4) = 0;
    edi = MEM32(esi + 0x10);
    MEM32(eax + edi + 8) = edx;
    edi = MEM32(esi + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000823F2; /* jl: less (signed <) */

loc_00082416: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0008241Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0008241C: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00082426u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00082426: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00082520
 * Original: 0x00082520 - 0x00082A08 (1256 bytes, 397 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082520(void)
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

loc_00082520: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0x0008252Eu); RECOMP_ABI_CALL(0x0002C567u, sub_0002C567); /* call 0x0002C567 */

loc_0008252E: ;
    esi = MEM32(eax + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    ecx = esp + 0x44;
    PUSH32(esp, 0x0008253Eu); RECOMP_ABI_CALL(0x00019133u, sub_00019133); /* call 0x00019133 */

loc_0008253E: ;
    PUSH32(esp, 0);
    edi = 1;
    PUSH32(esp, edi);
    ecx = esp + 0x30;
    PUSH32(esp, 0x0008254Fu); RECOMP_ABI_CALL(0x00019133u, sub_00019133); /* call 0x00019133 */

loc_0008254F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xB);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0008255Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008255Cu); } /* indirect call */
    }

loc_0008255F: ;
    edx = MEM32(esi);
    eax = esp + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7B9860);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00082575u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00082572u); } /* indirect call */
    }

loc_00082575: ;
    edx = MEM32(esp + 0x34);
    MEM32(esp + 0x38) = 0;
    esi = MEM32(edx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000829F0; /* je: equal / zero */

loc_0008258B: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000825A0; /* jne: not equal / not zero */

loc_00082592: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008259Du); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_0008259D: ;
    MEM32(esi + 8) = eax;

loc_000825A0: ;
    esi = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 0xB (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(eax + 0x14);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000825C8; /* jne: not equal / not zero */

loc_000825BA: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000825C5u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_000825C5: ;
    MEM32(esi + 8) = eax;

loc_000825C8: ;
    esi = MEM32(esi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(edi) (16-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(edi) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000825E9; /* jne: not equal / not zero */

loc_000825DD: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000825E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000825E1u); } /* indirect call */
    }

loc_000825E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000825EB; /* je: equal / zero */

loc_000825E9: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000825EB: ;
    ecx = MEM32(esi + 0x54);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_000829F0; /* jle: less or equal (signed <=) */

loc_00082600: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    goto loc_00082611;

loc_00082604: ;
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    edi = 1;

loc_00082611: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00082622; /* jl: less (signed <) */

loc_00082615: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x54) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00082622; /* jge: greater or equal (signed >=) */

loc_0008261A: ;
    ecx = MEM32(esi + 0x58);
    eax = ecx + eax * 4;
    goto loc_00082625;

loc_00082622: ;
    eax = MEM32(esi + 0x58);

loc_00082625: ;
    esi = MEM32(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008263C; /* jne: not equal / not zero */

loc_0008262E: ;
    edx = esi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00082639u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00082639: ;
    MEM32(esi + 8) = eax;

loc_0008263C: ;
    esi = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(edi) (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(edi) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000829D6; /* jne: not equal / not zero */

loc_00082655: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0008265Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00082659u); } /* indirect call */
    }

loc_0008265C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000829D6; /* jne: not equal / not zero */

loc_00082665: ;
    eax = MEM32(esi + 0x54);
    esi = MEM32(esi + 0x58);
    esi = MEM32(esi);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00082682; /* jne: not equal / not zero */

loc_00082674: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008267Fu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_0008267F: ;
    MEM32(esi + 8) = eax;

loc_00082682: ;
    esi = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 1;
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(eax) (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000826A8; /* jne: not equal / not zero */

loc_0008269C: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000826A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000826A0u); } /* indirect call */
    }

loc_000826A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000826AA; /* je: equal / zero */

loc_000826A8: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000826AA: ;
    edi = MEM32(esi + 0x34);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000826C2; /* jne: not equal / not zero */

loc_000826B4: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000826BFu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_000826BF: ;
    MEM32(edi + 8) = eax;

loc_000826C2: ;
    eax = MEM32(edi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0x13 (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000826F6; /* jbe: below or equal (unsigned <=) */

loc_000826D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7D0 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000826F6; /* jae: above or equal (unsigned >=) */

loc_000826E0: ;
    edx = MEM32(0x8F0680);
    ecx = MEM32(edx + 0x1014);
    edx = (uint32_t)(int32_t)SMEM16(ecx + eax * 2);
    MEM32(esp + 0x20) = edx;
    goto loc_000826FE;

loc_000826F6: ;
    MEM32(esp + 0x20) = 0xFFFFFFFFu;

loc_000826FE: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x24) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_000829D6; /* jle: less or equal (signed <=) */

loc_00082715: ;
    xmm0 = XMM_SCALAR(MEMF(0x897388)); /* movss */
    MEM32(esp + 0x10) = 0;

loc_00082725: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x20);
    ebp = edx + eax;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000829B3; /* jne: not equal / not zero */

loc_00082740: ;
    eax = MEM32(esi + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000829B3; /* jle: less or equal (signed <=) */

loc_0008274D: ;
    /* nop */

loc_00082750: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esi + 0x20) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_00082768; /* jl: less (signed <) */

loc_0008275B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x18) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00082768; /* jge: greater or equal (signed >=) */

loc_00082760: ;
    edx = MEM32(esi + 0x1C);
    eax = edx + ebx * 4;
    goto loc_0008276B;

loc_00082768: ;
    eax = MEM32(esi + 0x1C);

loc_0008276B: ;
    edi = MEM32(eax);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008278A; /* jne: not equal / not zero */

loc_00082774: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0008277Fu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_0008277F: ;
    xmm0 = XMM_SCALAR(MEMF(0x897388)); /* movss */
    MEM32(edi + 8) = eax;

loc_0008278A: ;
    eax = MEM32(edi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(5) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 5 (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax + 0x1C);
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEB2CC4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xEB2CC4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00082933; /* je: equal / zero */

loc_000827AB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14EB35E9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x14EB35E9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000829A7; /* jne: not equal / not zero */

loc_000827B7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000829A7; /* je: equal / zero */

loc_000827BF: ;
    edx = MEM32(edx + 4);
    xmm3 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000827D4; /* jb: below (unsigned <) (xmm3.f[0] vs xmm2.f[0]) */

loc_000827CF: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000827F3; /* ja: above (unsigned >) (xmm0.f[0] vs xmm3.f[0]) */

loc_000827D4: ;
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000827DF; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_000827D9: ;
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    goto loc_000827F3;

loc_000827DF: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000827F3; /* jae: above or equal (unsigned >=) (xmm3.f[0] vs xmm1.f[0]) */

loc_000827EF: ;
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */

loc_000827F3: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00082804; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_000827FF: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00082823; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00082804: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008280F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00082809: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_00082823;

loc_0008280F: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00082823; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm3.f[0]) */

loc_0008281F: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_00082823: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008282D; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00082828: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0008284C; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0008282D: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00082838; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00082832: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_0008284C;

loc_00082838: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0008284C; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00082848: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_0008284C: ;
    MEMF(ebp + 0x14) = xmm1.f[0]; /* movss */
    eax = MEM32(edx + 8);
    MEM32(ebp + 0x18) = eax;
    xmm1 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00082866; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00082861: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00082885; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00082866: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00082871; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0008286B: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_00082885;

loc_00082871: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00082885; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00082881: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_00082885: ;
    MEMF(ebp + 0xC) = xmm1.f[0]; /* movss */
    ecx = MEM32(edx + 0x10);
    MEM32(ebp + 0x10) = ecx;
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008289E; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00082899: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000828BD; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0008289E: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000828A9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_000828A3: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_000828BD;

loc_000828A9: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000828BD; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm3.f[0]) */

loc_000828B9: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_000828BD: ;
    MEMF(ebp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + 0x14); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000828D4; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_000828CF: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000828F3; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000828D4: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000828DF; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_000828D9: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_000828F3;

loc_000828DF: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000828F3; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm3.f[0]) */

loc_000828EF: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_000828F3: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000828FD; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_000828F8: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00082925; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000828FD: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00082914; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00082902: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(ebp + 0x14) = xmm1.f[0]; /* movss */
    MEM8(ebp + 4) = 1;
    goto loc_000829A7;

loc_00082914: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00082925; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00082921: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_00082925: ;
    MEMF(ebp + 0x14) = xmm1.f[0]; /* movss */
    MEM8(ebp + 4) = 1;
    goto loc_000829A7;

loc_00082933: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000829A7; /* je: equal / zero */

loc_00082937: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    edi = MEM32(esi + 0x34);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00082962; /* jne: not equal / not zero */

loc_0008294C: ;
    edx = edi + 4;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00082957u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_00082957: ;
    xmm0 = XMM_SCALAR(MEMF(0x897388)); /* movss */
    MEM32(edi + 8) = eax;

loc_00082962: ;
    eax = MEM32(edi + 8);
    xmm1 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x24); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x24); /* addss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0x13 (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm2 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(0x7A9980); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x2C); /* cvttss2si */
    MEM32(ebp + 8) = eax;

loc_000829A7: ;
    eax = MEM32(esi + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00082750; /* jl: less (signed <) */

loc_000829B3: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(edx + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00082725; /* jl: less (signed <) */

loc_000829D6: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 0x54);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00082604; /* jl: less (signed <) */

loc_000829EE: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000829F0: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x000829F9u); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_000829F9: ;
    ecx = esp + 0x3C;
    PUSH32(esp, 0x00082A02u); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_00082A02: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00082B50
 * Original: 0x00082B50 - 0x00082B81 (49 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00082B50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    PUSH32(esp, 0x00082B5Cu); RECOMP_ABI_CALL(0x00031391u, sub_00031391); /* call 0x00031391 */

loc_00082B5C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00082B76; /* je: equal / zero */

loc_00082B60: ;
    eax = MEM32(0x8EACD8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x18) = ecx;

loc_00082B76: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00082B7Cu); RECOMP_ABI_CALL(0x0001231Fu, sub_0001231F); /* call 0x0001231F */

loc_00082B7C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00082B90
 * Original: 0x00082B90 - 0x00082E9B (779 bytes, 239 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082B90(void)
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

loc_00082B90: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00082BA4u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00082BA4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00082BABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00082BA8u); } /* indirect call */
    }

loc_00082BAB: ;
    esi = MEM32(esp + 0x20);
    ecx = eax;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebp = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    edi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x2C); PUSH32(esp, 0x00082BCAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00082BC7u); } /* indirect call */
    }

loc_00082BCA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x23 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00082DE3; /* jl: less (signed <) */

loc_00082BD3: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00082BDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00082BD7u); } /* indirect call */
    }

loc_00082BDA: ;
    ecx = MEM32(esi + 0x20);
    fp_push(MEMF(ecx + 0x38)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    edx = MEM32(eax + 0x20);
    fp_top() = fabs(fp_top()); /* fabs */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x897388)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x60); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00082C13; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00082C0E: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00082C32; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00082C13: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00082C1E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00082C18: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00082C32;

loc_00082C1E: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00082C32; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00082C2E: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00082C32: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x8F95EC); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00082C4A; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00082C45: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00082C6C; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00082C4A: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00082C55; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00082C4F: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00082C66;

loc_00082C55: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00082C66; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00082C62: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00082C66: ;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */

loc_00082C6C: ;
    eax = MEM32(esi);
    ecx = esi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x00082C79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00082C76u); } /* indirect call */
    }

loc_00082C79: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00082CFC; /* je: equal / zero */

loc_00082C80: ;
    xmm1 = XMM_SCALAR(MEMF(0x897388)); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    xmm4 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AACB4); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00082CBA; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_00082CAD: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00082CBA; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00082CB2: ;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    goto loc_00082D02;

loc_00082CBA: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00082CCE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00082CBF: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    goto loc_00082D02;

loc_00082CCE: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00082CE9; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00082CDA: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    goto loc_00082D02;

loc_00082CE9: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    goto loc_00082D02;

loc_00082CFC: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_00082D02: ;
    ecx = MEM32(esi + 0xF0);
    xmm0 = XMM_SCALAR(MEMF(0x7B9364)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00082D27; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x1C)) */

loc_00082D16: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    goto loc_00082D2D;

loc_00082D27: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */

loc_00082D2D: ;
    edx = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00082D47; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00082D3A: ;
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    xmm4 = xmm3; /* movaps */

loc_00082D47: ;
    eax = MEM32(ebx + 4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x20) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_00082DE3; /* jle: less or equal (signed <=) */

loc_00082D58: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm4.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00082DCC; /* jb: below (unsigned <) (xmm4.f[0] vs MEMF(eax)) */

loc_00082D61: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00082DCC; /* jb: below (unsigned <) (xmm1.f[0] vs xmm4.f[0]) */

loc_00082D6B: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00082DCC; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_00082D71: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00082DCC; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00082D7B: ;
    edi = ZX8(MEM8(eax + 0x10));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00082DCC; /* je: equal / zero */

loc_00082D87: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    PUSH32(esp, ecx);
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebx + 8);
    esi = edi;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = esi + ecx;
    edx = eax + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00082DA9u); RECOMP_ABI_CALL(0x00020E1Fu, sub_00020E1F); /* call 0x00020E1F */

loc_00082DA9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00082DEF; /* jne: not equal / not zero */

loc_00082DB0: ;
    eax = MEM32(ebx + 8);
    edi = ZX8(MEM8(esi + eax + 0xF));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00082D87; /* jne: not equal / not zero */

loc_00082DC0: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */

loc_00082DCC: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(ebx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00082D58; /* jl: less (signed <) */

loc_00082DE3: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00082DEF: ;
    ecx = MEM32(ebx + 8);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = edi + ecx;
    PUSH32(esp, 0x3E19999A);
    edx = eax + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00082E0Cu); RECOMP_ABI_CALL(0x00013260u, sub_00013260); /* call 0x00013260 */

loc_00082E0C: ;
    ecx = MEM32(ebx + 8);
    eax = edi + ecx;
    PUSH32(esp, 0x3F59999A);
    edx = eax + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00082E26u); RECOMP_ABI_CALL(0x00013260u, sub_00013260); /* call 0x00013260 */

loc_00082E26: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    MEMF(eax) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00082E44u); RECOMP_ABI_CALL(0x00020E1Fu, sub_00020E1F); /* call 0x00020E1F */

loc_00082E44: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00082DE3; /* je: equal / zero */

loc_00082E4B: ;
    eax = MEM32(ebx + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F000000);
    ecx = eax + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00082E64u); RECOMP_ABI_CALL(0x00013260u, sub_00013260); /* call 0x00013260 */

loc_00082E64: ;
    eax = MEM32(eax);
    ecx = MEM32(esp + 0x34);
    MEM32(ecx) = eax;
    edx = MEM32(ebx + 8);
    eax = ZX8(MEM8(edi + edx + 0xE));
    ecx = MEM32(ebx + 0x10);
    eax = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = MEM32(eax + ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2A8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2A8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00082DE3; /* je: equal / zero */

loc_00082E8F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00082F60
 * Original: 0x00082F60 - 0x00082FB5 (85 bytes, 29 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00082F60: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00082F6F; /* je: equal / zero */

loc_00082F6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00082FB1; /* jne: not equal / not zero */

loc_00082F6F: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x100 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00082F93; /* je: equal / zero */

loc_00082F81: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00082F89u); RECOMP_ABI_CALL(0x0002ED21u, sub_0002ED21); /* call 0x0002ED21 */

loc_00082F89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00082F93; /* jne: not equal / not zero */

loc_00082F8D: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x100;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00082F93: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0x28) = ebx;
    POP32(esp, edi);
    MEM32(esi + 0x34) = 1;
    MEM8(esi + 0x38) = 0;
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);

loc_00082FB1: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00082FD0
 * Original: 0x00082FD0 - 0x00083001 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00082FD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00082FD0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00082FE5u); RECOMP_ABI_CALL(0x00028B01u, sub_00028B01); /* call 0x00028B01 */

loc_00082FE5: ;
    ecx = esi;
    PUSH32(esp, 0x00082FECu); RECOMP_ABI_CALL(0x0001FFECu, sub_0001FFEC); /* call 0x0001FFEC */

loc_00082FEC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x18) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00083010
 * Original: 0x00083010 - 0x00083046 (54 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083010: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008301Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0008301B: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00083031; /* je: equal / zero */

loc_00083025: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008302Eu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0008302E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00083031: ;
    esi = MEM32(esi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00083044; /* je: equal / zero */

loc_00083038: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFF0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00083041u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00083041: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00083044: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00083060
 * Original: 0x00083060 - 0x000831C5 (357 bytes, 103 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00083060: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000830A9; /* jne: not equal / not zero */

loc_00083071: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(eax + 0x3E8);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = MEM32(eax + 0x3E4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008308Eu); RECOMP_ABI_CALL(0x000151C3u, sub_000151C3); /* call 0x000151C3 */

loc_0008308E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x18) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000830A9: ;
    eax = MEM32(esi + 0x18);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B9728); /* comiss */
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    edi = MEM32(esp + 0x1C);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000830F9; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7B9728)) */

loc_000830C6: ;
    edx = MEM32(edi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x6C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7B9700)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000830E5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000830E0: ;
    MEMF(esi + 0x24) = xmm1.f[0]; /* movss */

loc_000830E5: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B9874); /* mulss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    goto loc_000830FE;

loc_000830F9: ;
    MEMF(esi + 0x24) = xmm3.f[0]; /* movss */

loc_000830FE: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 4), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083170; /* jne: not equal / not zero */

loc_00083103: ;
    eax = MEM32(edi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x30); /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x34); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x38); /* addss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 0x24) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x28) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x2C) = xmm3.f[0]; /* movss */
    eax = MEM32(edi + 0x20);
    edx = MEM32(eax + 0x60);
    ecx = MEM32(esi + 0x1C);
    MEM32(ecx + 0xC) = edx;
    eax = MEM32(edi + 0x20);
    edx = MEM32(eax + 0x6C);
    ecx = MEM32(esi + 0x1C);
    MEM32(ecx + 0x10) = edx;
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB8B0)); /* movss */
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */
    eax = MEM32(edi + 0x20);
    ecx = MEM32(eax + 0x60);
    MEM32(esi + 0x20) = ecx;
    goto loc_00083178;

loc_00083170: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00083178u); RECOMP_ABI_CALL(0x0002A26Cu, sub_0002A26C); /* call 0x0002A26C */

loc_00083178: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, ebx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x32525);
    PUSH32(esp, 0x1BD11);
    MEM32(esp + 0x24) = 1;
    MEM32(esp + 0x28) = 3;
    MEM32(esp + 0x2C) = ebx;
    eax = MEM32(ecx);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000831B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000831B2u); } /* indirect call */
    }

loc_000831B5: ;
    POP32(esp, edi);
    MEM32(esi + 0x34) = 3;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00083220
 * Original: 0x00083220 - 0x00083368 (328 bytes, 120 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00083220(void)
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

loc_00083220: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    ecx = edi;
    PUSH32(esp, 0x00083230u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_00083230: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008324C; /* je: equal / zero */

loc_00083234: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008324C; /* je: equal / zero */

loc_00083239: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x2C) = ebp;
    MEM32(esi + 0x34) = ebp;
    MEM32(esi + 0x28) = ebp;
    MEM32(esi + 0x1C) = ebp;
    MEM32(esi + 0x18) = ebp;
    goto loc_0008324E;

loc_0008324C: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0008324E: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083362; /* jne: not equal / not zero */

loc_00083257: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0008325Fu); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_0008325F: ;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), 3 (32-bit) */
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(esi + 0x1C);
    MEM8(esp + 0x14) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00083284; /* je: equal / zero */

loc_00083271: ;
    ecx = MEM32(edi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00083279u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00083276u); } /* indirect call */
    }

loc_00083279: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083284; /* jne: not equal / not zero */

loc_00083280: ;
    SET_LO8(eax, 1);
    goto loc_00083286;

loc_00083284: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00083286: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00083296; /* je: equal / zero */

loc_0008328A: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000832A5; /* je: equal / zero */

loc_00083292: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000832A5; /* jne: not equal / not zero */

loc_00083296: ;
    MEM32(esi + 0x2C) = ebp;
    MEM32(esi + 0x34) = ebp;
    MEM32(esi + 0x28) = ebp;
    MEM32(esi + 0x1C) = ebp;
    MEM32(esi + 0x18) = ebp;

loc_000832A5: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008330F; /* je: equal / zero */

loc_000832A9: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008330F; /* je: equal / zero */

loc_000832B1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008330F; /* je: equal / zero */

loc_000832B5: ;
    ecx = MEM32(edi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x000832BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000832BAu); } /* indirect call */
    }

loc_000832BD: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (int32_t)MEMF(esp + 0x14); /* cvttss2si */
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008330F; /* jne: not equal / not zero */

loc_000832CF: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000832D7u); RECOMP_ABI_CALL(0x00029DC6u, sub_00029DC6); /* call 0x00029DC6 */

loc_000832D7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000832E6; /* jne: not equal / not zero */

loc_000832DB: ;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2A8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x2A8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008330F; /* jne: not equal / not zero */

loc_000832E6: ;
    ebx = 5;
    PUSH32(esp, ebx);
    ecx = 0x8EFCB8;
    PUSH32(esp, 0x000832F6u); RECOMP_ABI_CALL(0x00026DE7u, sub_00026DE7); /* call 0x00026DE7 */

loc_000832F6: ;
    ecx = edi;
    PUSH32(esp, 0x000832FDu); RECOMP_ABI_CALL(0x0001AF38u, sub_0001AF38); /* call 0x0001AF38 */

loc_000832FD: ;
    MEM32(edi + 0x2C) = eax;
    eax = MEM32(0x8E8F84);
    MEM32(eax + 0x2C) = ebx;
    MEM8(edi + 0x38) = LO8(ebx);
    MEM8(esi + 0x38) = 1;

loc_0008330F: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00083344; /* jne: not equal / not zero */

loc_00083318: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00083320u); RECOMP_ABI_CALL(0x00022486u, sub_00022486); /* call 0x00022486 */

loc_00083320: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00083336; /* je: equal / zero */

loc_00083325: ;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(edi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x6C); /* comiss */
    if ((_fca > _fcb)) goto loc_0008335A; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ecx + 0x6C)) */

loc_00083336: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0008333Eu); RECOMP_ABI_CALL(0x00011CA8u, sub_00011CA8); /* call 0x00011CA8 */

loc_0008333E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00083344: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083362; /* jne: not equal / not zero */

loc_00083349: ;
    eax = MEM32(edi + 0x20);
    ecx = MEM32(esi + 0x18);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 8); /* comiss */
    if ((_fca >= _fcb)) goto loc_00083336; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(ecx + 8)) */

loc_0008335A: ;
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00083362u); RECOMP_ABI_CALL(0x00024E52u, sub_00024E52); /* call 0x00024E52 */

loc_00083362: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000833C0
 * Original: 0x000833C0 - 0x00083419 (89 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000833C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000833C0: ;
    eax = MEM32(0x8EACD8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00083417; /* jne: not equal / not zero */

loc_000833CC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x000833D4u); RECOMP_ABI_CALL(0x0001AF42u, sub_0001AF42); /* call 0x0001AF42 */

loc_000833D4: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00083410; /* je: equal / zero */

loc_000833DD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    ecx = esi;
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000833F1u); RECOMP_ABI_CALL(0x00028B01u, sub_00028B01); /* call 0x00028B01 */

loc_000833F1: ;
    ecx = esi;
    PUSH32(esp, 0x000833F8u); RECOMP_ABI_CALL(0x0001FFECu, sub_0001FFEC); /* call 0x0001FFEC */

loc_000833F8: ;
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(0x8EACD8) = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00083410: ;
    MEM32(0x8EACD8) = edi;
    POP32(esp, esi);

loc_00083417: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00083430
 * Original: 0x00083430 - 0x0008347A (74 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083430: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008343Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0008343B: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00083451; /* je: equal / zero */

loc_00083445: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008344Eu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0008344E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00083451: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00083464; /* je: equal / zero */

loc_00083458: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00083461u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00083461: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00083464: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00083474; /* je: equal / zero */

loc_0008346B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00083471u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00083471: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00083474: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00083490
 * Original: 0x00083490 - 0x000834E1 (81 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083490: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8EACD8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000834DF; /* je: equal / zero */

loc_0008349B: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000834A3u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000834A3: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000834B9; /* je: equal / zero */

loc_000834AD: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000834B6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000834B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000834B9: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000834CC; /* je: equal / zero */

loc_000834C0: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000834C9u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000834C9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000834CC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000834D2u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000834D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8EACD8) = 0;

loc_000834DF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00083500
 * Original: 0x00083500 - 0x0008352E (46 bytes, 9 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083500(void)
{

loc_00083500: ;
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
 * sub_00083540
 * Original: 0x00083540 - 0x0008355F (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00083540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083540: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(eax, xmm1); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00083570
 * Original: 0x00083570 - 0x000835AC (60 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083570(void)
{

loc_00083570: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000835C0
 * Original: 0x000835C0 - 0x000835DF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000835C0(void)
{

loc_000835C0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000835F0
 * Original: 0x000835F0 - 0x000835F3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000835F0(void)
{

loc_000835F0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00083600
 * Original: 0x00083600 - 0x0008361F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083600(void)
{

loc_00083600: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00083630
 * Original: 0x00083630 - 0x00083658 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083630: ;
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
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00083654u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00083652u); } /* indirect call */
    }

loc_00083654: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00083670
 * Original: 0x00083670 - 0x00083692 (34 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083670: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = 2;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = 1;
    MEM8(eax + 0x10) = LO8(ecx);
    MEM8(eax + 0x11) = LO8(ecx);
    MEM32(eax) = 0x7B9D08;
    esp += 4; return; /* ret */

}

/**
 * sub_000836A0
 * Original: 0x000836A0 - 0x000836A7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000836A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000836A0: ;
    fp_push(MEMF(ecx + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x70)); /* fadd dword ptr [ecx + 0x70] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000836B0
 * Original: 0x000836B0 - 0x000836D3 (35 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000836B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000836B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000836B8u); RECOMP_ABI_CALL(0x00013F62u, sub_00013F62); /* call 0x00013F62 */

loc_000836B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000836CD; /* je: equal / zero */

loc_000836BF: ;
    ecx = MEM32(0x9092A0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000836CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000836CAu); } /* indirect call */
    }

loc_000836CD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000836E0
 * Original: 0x000836E0 - 0x00083712 (50 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000836E0(void)
{

loc_000836E0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_MEM(eax); /* movaps */
    XMM_STORE(ecx + 0x80, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(ecx + 0x90, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    XMM_STORE(ecx + 0xA0, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    XMM_STORE(ecx + 0xB0, xmm0); /* movaps */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00083720
 * Original: 0x00083720 - 0x0008372B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083720(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00083720: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7B9D18)); /* fmul dword ptr [0x7b9d18] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00083730
 * Original: 0x00083730 - 0x0008373B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083730(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00083730: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7B9D1C)); /* fmul dword ptr [0x7b9d1c] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00083740
 * Original: 0x00083740 - 0x0008374B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083740(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00083740: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7B1DE8)); /* fmul dword ptr [0x7b1de8] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00083750
 * Original: 0x00083750 - 0x0008375B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083750(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00083750: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7B8E28)); /* fmul dword ptr [0x7b8e28] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00083760
 * Original: 0x00083760 - 0x0008376B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083760(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00083760: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7B9D20)); /* fmul dword ptr [0x7b9d20] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00083770
 * Original: 0x00083770 - 0x0008377B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083770(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00083770: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7B9D24)); /* fmul dword ptr [0x7b9d24] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00083780
 * Original: 0x00083780 - 0x00083786 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083780(void)
{

loc_00083780: ;
    eax = MEM32(0x8FCBB0);
    esp += 4; return; /* ret */

}

/**
 * sub_00083790
 * Original: 0x00083790 - 0x00083794 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083790(void)
{

loc_00083790: ;
    eax = ecx + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_000837A0
 * Original: 0x000837A0 - 0x000839EB (587 bytes, 128 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000837A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000837A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000837BAu); RECOMP_ABI_CALL(0x000362ECu, sub_000362EC); /* call 0x000362EC */

loc_000837BA: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B9C34)); /* movss */
    edx = MEM32(0x8973F8);
    xmm1 = XMM_SCALAR(MEMF(0x7B9D60)); /* movss */
    MEM32(ebx) = 0x7B9D30;
    edi = ebx + 0x80;
    ecx = 0x10;
    esi = 0x8F9620;
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
    ecx = MEM32(0x8973FC);
    PUSH32(esp, ecx);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B9C38)); /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x20;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7B9C40)); /* movss */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(ebx + 0xC0) = esi;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00083845u); RECOMP_ABI_CALL(0x00018788u, sub_00018788); /* call 0x00018788 */

loc_00083845: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x8B54C0);
    eax = MEM32(0x8B54C8);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    edx = MEM32(0x8B54C4);
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B9C34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEM32(esp + 0x7C) = ecx;
    ecx = MEM32(0x8B54CC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x74) = edx;
    edx = MEM32(0x8B5500);
    MEM32(esp + 0x78) = eax;
    eax = MEM32(0x8B5504);
    MEM32(esp + 0x7C) = ecx;
    ecx = MEM32(0x8B5508);
    PUSH32(esp, 0x7B9D28);
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEM32(esp + 0x88) = eax;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD448)); /* movss */
    MEM32(esp + 0x84) = edx;
    edx = MEM32(0x8B550C);
    PUSH32(esp, 3);
    eax = esp + 0x38;
    MEM32(esp + 0x90) = ecx;
    ecx = MEM32(0x9092C8);
    PUSH32(esp, eax);
    MEMF(esp + 0x70) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x98) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00083929u); RECOMP_ABI_CALL(0x00023516u, sub_00023516); /* call 0x00023516 */

loc_00083929: ;
    MEM32(ebx + 0xC0) = eax;
    ecx = MEM32(0x9092A0);
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x2C) = esi;
    edx = MEM32(ecx);
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008394Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008394Du); } /* indirect call */
    }

loc_0008394F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00083974; /* je: equal / zero */

loc_00083953: ;
    MEM32(eax + 4) = 2;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = 1;
    MEM8(eax + 0x10) = 0;
    MEM8(eax + 0x11) = 0;
    MEM32(eax) = 0x7B9D08;
    goto loc_00083976;

loc_00083974: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00083976: ;
    xmm0 = XMM_SCALAR(MEMF(0x8973FC)); /* movss */
    MEM32(ebx + 0xC4) = eax;
    MEMF(eax + 0x70) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebx + 0xC4);
    xmm0 = XMM_SCALAR(MEMF(0x8973F8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B9C34); /* mulss */
    MEMF(ecx + 0x74) = xmm0.f[0]; /* movss */
    edx = MEM32(ebx + 0xC4);
    eax = MEM32(0x8B54A0);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x60;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = eax;
    ecx = MEM32(0x8B54A4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x8B54A8);
    MEM32(edx + 8) = eax;
    ecx = MEM32(0x8B54AC);
    MEM32(edx + 0xC) = ecx;
    edx = MEM32(ebx + 0xC4);
    ecx = MEM32(ebx + 0xC0);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000839E0u); RECOMP_ABI_CALL(0x0001A038u, sub_0001A038); /* call 0x0001A038 */

loc_000839E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00083A80
 * Original: 0x00083A80 - 0x00083AB3 (51 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00083A80: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC0);
    MEM32(esi) = 0x7B9D30;
    ecx = MEM32(0x9092C8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00083A9Bu); RECOMP_ABI_CALL(0x00016CBCu, sub_00016CBC); /* call 0x00016CBC */

loc_00083A9B: ;
    ecx = MEM32(esi + 0xC4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00083AAB; /* je: equal / zero */

loc_00083AA5: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00083AABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00083AA9u); } /* indirect call */
    }

loc_00083AAB: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002563B(); return; /* tail jmp 0x0002563B */

}

/**
 * sub_00083AC0
 * Original: 0x00083AC0 - 0x00083AC5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00083AC0: ;
    g_seh_ebp = ebp; sub_000370B1(); return; /* tail jmp 0x000370B1 */

}

/**
 * sub_00083AD0
 * Original: 0x00083AD0 - 0x00083AD1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083AD0(void)
{

loc_00083AD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00083AE0
 * Original: 0x00083AE0 - 0x00083B12 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00083AE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = MEM32(esi);
    edx = ecx + 0x20;
    MEM32(edx) = edi;
    edi = MEM32(esi + 4);
    MEM32(edx + 4) = edi;
    edi = MEM32(esi + 8);
    MEM32(edx + 8) = edi;
    esi = MEM32(esi + 0xC);
    POP32(esp, edi);
    MEM32(edx + 0xC) = esi;
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    ecx = MEM32(ecx + 0xC0);
    g_seh_ebp = ebp; sub_00023BE2(); return; /* tail jmp 0x00023BE2 */

}

/**
 * sub_00083B20
 * Original: 0x00083B20 - 0x00083B8A (106 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00083B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083B20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC0);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00083B3Cu); RECOMP_ABI_CALL(0x00035B53u, sub_00035B53); /* call 0x00035B53 */

loc_00083B3C: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(esp + 0x18);
    MEM32(esi) = ecx;
    MEM32(esi + 4) = edx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00083BB0
 * Original: 0x00083BB0 - 0x00083C96 (230 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00083BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083BB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7B9D18)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x30;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x10) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x14) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x18) = eax;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    ecx = esi + 0x48;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x24) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B9D20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x28) = eax;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esi + 0xC0);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00083C81u); RECOMP_ABI_CALL(0x000139C7u, sub_000139C7); /* call 0x000139C7 */

loc_00083C81: ;
    ecx = MEM32(esi + 0xC0);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00083C91u); RECOMP_ABI_CALL(0x0002DD9Au, sub_0002DD9A); /* call 0x0002DD9A */

loc_00083C91: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00083CD0
 * Original: 0x00083CD0 - 0x00083D45 (117 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00083CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083CD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = esp + 0x10;
    esi = ecx;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00083CEAu); RECOMP_ABI_CALL(0x0059F7D7u, sub_0059F7D7); /* call 0x0059F7D7 */

loc_00083CEA: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00083CF8u); RECOMP_ABI_CALL(0x000173F6u, sub_000173F6); /* call 0x000173F6 */

loc_00083CF8: ;
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(esi + 0x80, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    XMM_STORE(esi + 0x90, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    XMM_STORE(esi + 0xA0, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x50); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    XMM_STORE(esi + 0xB0, xmm0); /* movaps */
    ecx = MEM32(0x8FCBB0);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00083D3Eu); RECOMP_ABI_CALL(0x000159D9u, sub_000159D9); /* call 0x000159D9 */

loc_00083D3E: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00083D70
 * Original: 0x00083D70 - 0x00083E2C (188 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00083D70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00083D70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC0);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00083D8Cu); RECOMP_ABI_CALL(0x00035B53u, sub_00035B53); /* call 0x00035B53 */

loc_00083D8C: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00083DC6u); RECOMP_ABI_CALL(0x0059F99Au, sub_0059F99A); /* call 0x0059F99A */

loc_00083DC6: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00083DF3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00083DE3: ;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    goto loc_00083E01;

loc_00083DF3: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */

loc_00083E01: ;
    ecx = MEM32(esi + 0xC0);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00083E17u); RECOMP_ABI_CALL(0x00023BE2u, sub_00023BE2); /* call 0x00023BE2 */

loc_00083E17: ;
    ecx = MEM32(esi + 0xC0);
    PUSH32(esp, 0x8F95C0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00083E27u); RECOMP_ABI_CALL(0x000150E7u, sub_000150E7); /* call 0x000150E7 */

loc_00083E27: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00083E60
 * Original: 0x00083E60 - 0x00083E9C (60 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083E60(void)
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

loc_00083E60: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8973FC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B9D1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB82C); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00083E95; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esp + 0xC)) */

loc_00083E88: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B9C3C)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_00083E95: ;
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00083EB0
 * Original: 0x00083EB0 - 0x00083EBB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00083EB0: ;
    ecx = MEM32(ecx + 0xC0);
    g_seh_ebp = ebp; sub_000150E7(); return; /* tail jmp 0x000150E7 */

}

/**
 * sub_00083EC0
 * Original: 0x00083EC0 - 0x00083F08 (72 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00083EC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC0);
    MEM32(esi) = 0x7B9D30;
    ecx = MEM32(0x9092C8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00083EDBu); RECOMP_ABI_CALL(0x00016CBCu, sub_00016CBC); /* call 0x00016CBC */

loc_00083EDB: ;
    ecx = MEM32(esi + 0xC4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00083EEB; /* je: equal / zero */

loc_00083EE5: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00083EEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00083EE9u); } /* indirect call */
    }

loc_00083EEB: ;
    ecx = esi;
    PUSH32(esp, 0x00083EF2u); RECOMP_ABI_CALL(0x0002563Bu, sub_0002563B); /* call 0x0002563B */

loc_00083EF2: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00083F02; /* je: equal / zero */

loc_00083EF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00083EFFu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00083EFF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00083F02: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00083F20
 * Original: 0x00083F20 - 0x00083F68 (72 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00083F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00083F20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00083F28u); RECOMP_ABI_CALL(0x0001C75Cu, sub_0001C75C); /* call 0x0001C75C */

loc_00083F28: ;
    ecx = MEM32(esi + 0xC0);
    PUSH32(esp, 0x8B5500);
    PUSH32(esp, 0x00083F38u); RECOMP_ABI_CALL(0x00023BE2u, sub_00023BE2); /* call 0x00023BE2 */

loc_00083F38: ;
    ecx = MEM32(esi + 0xC0);
    PUSH32(esp, 0x8F95C0);
    PUSH32(esp, 0x00083F48u); RECOMP_ABI_CALL(0x000150E7u, sub_000150E7); /* call 0x000150E7 */

loc_00083F48: ;
    PUSH32(esp, 0x8F95D0);
    ecx = esi;
    PUSH32(esp, 0x00083F54u); RECOMP_ABI_CALL(0x0002E862u, sub_0002E862); /* call 0x0002E862 */

loc_00083F54: ;
    PUSH32(esp, 0x8F95D0);
    ecx = esi;
    PUSH32(esp, 0x00083F60u); RECOMP_ABI_CALL(0x0001402Au, sub_0001402A); /* call 0x0001402A */

loc_00083F60: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002FA1E(); return; /* tail jmp 0x0002FA1E */

}

/**
 * sub_00083F80
 * Original: 0x00083F80 - 0x000841B4 (564 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00083F80(void)
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

loc_00083F80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E8F84);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(eax + 0xA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xA8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000841AF; /* jne: not equal / not zero */

loc_00083F9E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esi + 0xC0);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00083FCCu); RECOMP_ABI_CALL(0x00016C71u, sub_00016C71); /* call 0x00016C71 */

loc_00083FCC: ;
    xmm3 = XMM_SCALAR(MEMF(0x7B9D1C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    ecx = MEM32(esi + 0xC0);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008400Bu); RECOMP_ABI_CALL(0x0002F06Eu, sub_0002F06E); /* call 0x0002F06E */

loc_0008400B: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7B9D24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008404Du); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_0008404D: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00084054u); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_00084054: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00084167; /* je: equal / zero */

loc_0008405C: ;
    ecx = esi + 0x48;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x1C) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x14) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEM32(esp + 0x18) = eax;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(0x8973FC)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x7B9D1C); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(0x7AB82C); /* addss */
    _fca = xmm2.f[0]; _fcb = MEMF(esp + 0x34); /* comiss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = xmm1; /* movaps */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000840CE; /* jb: below (unsigned <) (xmm2.f[0] vs MEMF(esp + 0x34)) */

loc_000840C6: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B9C3C)); /* movss */

loc_000840CE: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm2.f[0]; _fcb = MEMF(0x7B9888); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008414F; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(0x7B9888)) */

loc_0008412E: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    ecx = esp + 0x24;
    MEMF(esp) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008414Bu); RECOMP_ABI_CALL(0x00018288u, sub_00018288); /* call 0x00018288 */

loc_0008414B: ;
    fp_pop(); /* fstp st(0) */
    goto loc_0008415B;

loc_0008414F: ;
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */

loc_0008415B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */

loc_00084167: ;
    edx = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x34);
    MEM32(esp + 0x14) = edx;
    edx = esp + 0x14;
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008418Bu); RECOMP_ABI_CALL(0x0002E862u, sub_0002E862); /* call 0x0002E862 */

loc_0008418B: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0x14) = eax;
    eax = esp + 0x14;
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x20) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000841AFu); RECOMP_ABI_CALL(0x0001402Au, sub_0001402A); /* call 0x0001402A */

loc_000841AF: ;
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
 * sub_00084250
 * Original: 0x00084250 - 0x0008425E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084250(void)
{

loc_00084250: ;
    eax = ecx + 0x20;
    PUSH32(esp, eax);
    edx = ecx + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008425Du); RECOMP_ABI_CALL(0x00032C55u, sub_00032C55); /* call 0x00032C55 */

loc_0008425D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00084270
 * Original: 0x00084270 - 0x00084511 (673 bytes, 152 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00084270(void)
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

loc_00084270: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8F95C0);
    edx = MEM32(0x8F95C8);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esp + 0xC) = eax;
    eax = MEM32(0x8F95CC);
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    esi = ecx;
    ecx = MEM32(0x8F95C4);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if (CMP_A(_fa, _fb)) goto loc_0008447E; /* ja: above (unsigned >) */

loc_000842BC: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x84514); /* switch: 4 entries, 3 targets */
    if (_jt == 0x000842C3u) goto loc_000842C3;
    if (_jt == 0x00084344u) goto loc_00084344;
    if (_jt == 0x0008439Du) goto loc_0008439D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000842C3: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x4C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AD44C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000842DF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AD44C)) */

loc_000842D1: ;
    xmm0 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_000842DF: ;
    PUSH32(esp, 0x105);
    PUSH32(esp, 0x7B9D68);
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000842F0u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_000842F0: ;
    PUSH32(esp, 0x106);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x18); /* mulss */
    PUSH32(esp, 0x7B9D68);
    PUSH32(esp, 0x18);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00084311u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_00084311: ;
    PUSH32(esp, 0x107);
    PUSH32(esp, 0x7B9D68);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, 4);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008432Cu); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0008432C: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x2C); /* mulss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    goto loc_00084484;

loc_00084344: ;
    PUSH32(esp, 0x10B);
    PUSH32(esp, 0x7B9D68);
    PUSH32(esp, 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00084355u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_00084355: ;
    PUSH32(esp, 0x10C);
    PUSH32(esp, 0x7B9D68);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, 0xC);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00084370u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_00084370: ;
    PUSH32(esp, 0x10D);
    PUSH32(esp, 0x7B9D68);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, 0xC);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008438Bu); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0008438B: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    goto loc_00084484;

loc_0008439D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AB7D0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00084477; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AB7D0)) */

loc_000843AF: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7ABD78); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000843C6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7ABD78)) */

loc_000843B8: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB1C8)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_000843C6: ;
    PUSH32(esp, 0x118);
    PUSH32(esp, 0x7B9D68);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000843D7u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_000843D7: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB82C)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000843EE; /* je: equal / zero */

loc_000843E6: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B9D64)); /* movss */

loc_000843EE: ;
    PUSH32(esp, 0x11A);
    PUSH32(esp, 0x7B9D68);
    PUSH32(esp, 0x1E);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00084405u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_00084405: ;
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x11B);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    PUSH32(esp, 0x7B9D68);
    PUSH32(esp, 0x1E);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008442Fu); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0008442F: ;
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x11C);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    PUSH32(esp, 0x7B9D68);
    PUSH32(esp, 0x1E);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00084459u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_00084459: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    goto loc_00084484;

loc_00084477: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008447Eu); RECOMP_ABI_CALL(0x0002FA1Eu, sub_0002FA1E); /* call 0x0002FA1E */

loc_0008447E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */

loc_00084484: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD3D4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000844FA; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000844E1: ;
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_MEM(esp + 0x10); /* movaps */
    xmm0.f[0] = xmm0.f[0]; /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esp + 0x10, xmm1); /* movaps */

loc_000844FA: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008450Au); RECOMP_ABI_CALL(0x000150E7u, sub_000150E7); /* call 0x000150E7 */

loc_0008450A: ;
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
 * sub_0008448A
 * Original: 0x0008448A - 0x00084511 (135 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008448A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008448A: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD3D4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000844FA; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000844E1: ;
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_MEM(esp + 0x10); /* movaps */
    xmm0.f[0] = xmm0.f[0]; /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esp + 0x10, xmm1); /* movaps */

loc_000844FA: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC0);
    PUSH32(esp, 0x0008450Au); RECOMP_ABI_CALL(0x000150E7u, sub_000150E7); /* call 0x000150E7 */

loc_0008450A: ;
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
 * sub_00084600
 * Original: 0x00084600 - 0x00084618 (24 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084600(void)
{

loc_00084600: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00084620
 * Original: 0x00084620 - 0x0008462A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00084620: ;
    ecx = 0x8E9304;
    g_seh_ebp = ebp; sub_00022BED(); return; /* tail jmp 0x00022BED */

}

/**
 * sub_00084630
 * Original: 0x00084630 - 0x00084695 (101 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084630(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00084630: ;
    eax = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x897540)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00084653; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008464E: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0008468C; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00084653: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00084665; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00084658: ;
    eax = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_00084665: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008467E; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008466E: ;
    eax = MEM32(esp + 4);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_0008467E: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */

loc_0008468C: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000846B0
 * Original: 0x000846B0 - 0x000846C3 (19 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000846B0(void)
{

loc_000846B0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000846D0
 * Original: 0x000846D0 - 0x000846F2 (34 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000846D0(void)
{

loc_000846D0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 0xC) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00084700
 * Original: 0x00084700 - 0x00084704 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084700(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00084700: ;
    fp_push(MEMF(ecx + 0x6C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00084710
 * Original: 0x00084710 - 0x00084714 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084710(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00084710: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00084720
 * Original: 0x00084720 - 0x00084723 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084720(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00084720: ;
    fp_push(MEMF(ecx)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00084730
 * Original: 0x00084730 - 0x00084734 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084730(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00084730: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00084740
 * Original: 0x00084740 - 0x00084747 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084740(void)
{

loc_00084740: ;
    eax = MEM32(ecx + 0x2C0);
    esp += 4; return; /* ret */

}

/**
 * sub_00084750
 * Original: 0x00084750 - 0x00084757 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084750(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00084750: ;
    fp_push(MEMF(ecx + 0x2C8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00084760
 * Original: 0x00084760 - 0x00084767 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084760(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00084760: ;
    fp_push(MEMF(ecx + 0x2CC)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00084770
 * Original: 0x00084770 - 0x00084777 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084770(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00084770: ;
    fp_push(MEMF(ecx + 0x2D0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00084780
 * Original: 0x00084780 - 0x00084787 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084780(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00084780: ;
    fp_push(MEMF(ecx + 0x2D4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00084790
 * Original: 0x00084790 - 0x00084797 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084790(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00084790: ;
    fp_push(MEMF(ecx + 0x2DC)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000847A0
 * Original: 0x000847A0 - 0x000847A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000847A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000847A0: ;
    fp_push(MEMF(ecx + 0x2E4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000847B0
 * Original: 0x000847B0 - 0x000847B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000847B0(void)
{

loc_000847B0: ;
    eax = MEM32(ecx + 0x2EC);
    esp += 4; return; /* ret */

}

/**
 * sub_000847C0
 * Original: 0x000847C0 - 0x000847C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000847C0(void)
{

loc_000847C0: ;
    eax = MEM32(ecx + 0x2F8);
    esp += 4; return; /* ret */

}

/**
 * sub_000847D0
 * Original: 0x000847D0 - 0x000847D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000847D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000847D0: ;
    fp_push(MEMF(ecx + 0x300)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000847E0
 * Original: 0x000847E0 - 0x000847E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000847E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000847E0: ;
    fp_push(MEMF(ecx + 0x308)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000847F0
 * Original: 0x000847F0 - 0x000847F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000847F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000847F0: ;
    fp_push(MEMF(ecx + 0x288)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00084800
 * Original: 0x00084800 - 0x00084807 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084800(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00084800: ;
    fp_push(MEMF(ecx + 0x28C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00084810
 * Original: 0x00084810 - 0x00084817 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084810(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00084810: ;
    fp_push(MEMF(ecx + 0x290)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00084820
 * Original: 0x00084820 - 0x00084827 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084820(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00084820: ;
    fp_push(MEMF(ecx + 0x294)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00084830
 * Original: 0x00084830 - 0x00084837 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084830(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00084830: ;
    fp_push(MEMF(ecx + 0x298)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00084840
 * Original: 0x00084840 - 0x00084847 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084840(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00084840: ;
    fp_push(MEMF(ecx + 0x2AC)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00084850
 * Original: 0x00084850 - 0x00084857 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084850(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00084850: ;
    fp_push(MEMF(ecx + 0x33C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00084860
 * Original: 0x00084860 - 0x0008486D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084860(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00084860: ;
    fp_push(MEMF(0x8E989C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7BA0F8)); /* fmul dword ptr [0x7ba0f8] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00084870
 * Original: 0x00084870 - 0x00084877 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084870(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00084870: ;
    fp_push(MEMF(0x7BA118)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00084880
 * Original: 0x00084880 - 0x00084889 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084880(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00084880: ;
    fp_push(MEMF(0x8E99B4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00084890
 * Original: 0x00084890 - 0x00084894 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084890(void)
{

loc_00084890: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_000848A0
 * Original: 0x000848A0 - 0x000848B4 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000848A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000848A0: ;
    edx = MEM32(ecx + 0x58);
    eax = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000848B1; /* jne: not equal / not zero */

loc_000848AC: ;
    _fa = (uint32_t)(MEM32(ecx + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x5C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000848B3; /* je: equal / zero */

loc_000848B1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000848B3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000848C0
 * Original: 0x000848C0 - 0x000848C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000848C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000848C0: ;
    fp_push(MEMF(ecx + 0x198)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000848D0
 * Original: 0x000848D0 - 0x000848D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000848D0(void)
{

loc_000848D0: ;
    eax = MEM32(ecx + 0x240);
    esp += 4; return; /* ret */

}

/**
 * sub_000848E0
 * Original: 0x000848E0 - 0x000848E5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000848E0(void)
{

loc_000848E0: ;
    MEM8(ecx + 4) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000848F0
 * Original: 0x000848F0 - 0x0008490A (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000848F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000848F0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00084910
 * Original: 0x00084910 - 0x00084914 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084910(void)
{

loc_00084910: ;
    eax = ecx + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00084920
 * Original: 0x00084920 - 0x0008492A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084920(void)
{

loc_00084920: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x2C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00084930
 * Original: 0x00084930 - 0x0008493A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084930(void)
{

loc_00084930: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x20) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00084940
 * Original: 0x00084940 - 0x00084947 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084940(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00084940: ;
    fp_push(MEMF(ecx + 0xB4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00084950
 * Original: 0x00084950 - 0x00084965 (21 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084950(void)
{

loc_00084950: ;
    eax = MEM32(ecx + 0x404);
    edx = MEM32(esp + 4);
    MEM32(edx) = eax;
    SET_LO8(eax, MEM8(ecx + 0x400));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00084970
 * Original: 0x00084970 - 0x000849F7 (135 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084970(void)
{

loc_00084970: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 4); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 8); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ecx); /* mulss */
    eax = MEM32(esp + 4);
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00084A20
 * Original: 0x00084A20 - 0x00084A56 (54 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084A20(void)
{

loc_00084A20: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x2C); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x28); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x24); /* subss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00084A70
 * Original: 0x00084A70 - 0x00084B0D (157 bytes, 36 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084A70(void)
{

loc_00084A70: ;
    eax = MEM32(esp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x28); /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x2C); /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x24); /* subss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    eax = MEM32(esp + 4);
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(ecx + 0x18); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm5.f[0]; /* movss */
    MEMF(eax + 4) = xmm4.f[0]; /* movss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00084B40
 * Original: 0x00084B40 - 0x00084B47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084B40(void)
{

loc_00084B40: ;
    eax = MEM32(ecx + 0x438);
    esp += 4; return; /* ret */

}

/**
 * sub_00084B50
 * Original: 0x00084B50 - 0x00084B65 (21 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084B50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084B50: ;
    edx = MEM32(ecx + 0x42C);
    eax = MEM32(esp + 4);
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x42C) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00084B70
 * Original: 0x00084B70 - 0x00084B86 (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084B70(void)
{

loc_00084B70: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = ecx;
    MEM32(eax) = 0;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00084B90
 * Original: 0x00084B90 - 0x00084B93 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084B90(void)
{

loc_00084B90: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00084BA0
 * Original: 0x00084BA0 - 0x00084BC8 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00084BA0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00084BBC; /* jl: less (signed <) */

loc_00084BA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00084BBF; /* jle: less or equal (signed <=) */

loc_00084BAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00084BBC; /* jne: not equal / not zero */

loc_00084BB2: ;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = 0xFFFFFFFFu;

loc_00084BBC: ;
    esp += 8; return; /* ret 4 */

loc_00084BBF: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0002CE9A(); return; /* tail jmp 0x0002CE9A */

}

/**
 * sub_00084BE0
 * Original: 0x00084BE0 - 0x00084BF9 (25 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084BE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00084BE0: ;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7AA820)); /* fadd dword ptr [0x7aa820] */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + eax * 4 + 0x14)); /* fdiv dword ptr [ecx + eax*4 + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + eax * 4 + 4)); /* fadd dword ptr [ecx + eax*4 + 4] */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00084C00
 * Original: 0x00084C00 - 0x00084C2A (42 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084C00(void)
{

loc_00084C00: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7BA274); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7BA270); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp); /* cvttss2si */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00084C40
 * Original: 0x00084C40 - 0x00084C7C (60 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084C40(void)
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

loc_00084C40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x4C);
    ecx = esi;
    PUSH32(esp, 0x00084C50u); RECOMP_ABI_CALL(0x00032813u, sub_00032813); /* call 0x00032813 */

loc_00084C50: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00084C70; /* je: equal / zero */

loc_00084C54: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x40); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00084C70; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x40)) */

loc_00084C5D: ;
    esi = MEM32(edi + 0x20);
    PUSH32(esp, 0x00084C65u); RECOMP_ABI_CALL(0x000157C2u, sub_000157C2); /* call 0x000157C2 */

loc_00084C65: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00084C70u); RECOMP_ABI_CALL(0x000200DCu, sub_000200DC); /* call 0x000200DC */

loc_00084C70: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00084C76u); RECOMP_ABI_CALL(0x00014719u, sub_00014719); /* call 0x00014719 */

loc_00084C76: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_00084C90
 * Original: 0x00084C90 - 0x00084CF0 (96 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084C90(void)
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

loc_00084C90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8EACE4);
    fp_push(MEMF(eax + 0x38)); /* fld float */
    eax = MEM32(ecx + 0x20);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edx = MEM32(0x8E96B0);
    fp_top() = sin(fp_top()); /* fsin */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp) = edx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA840)); /* fmul dword ptr [0x7aa840] */
    PUSH32(esp, eax);
    ecx = 0x8E96A0;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00084CD9u); RECOMP_ABI_CALL(0x000293BCu, sub_000293BC); /* call 0x000293BC */

loc_00084CD9: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp)); /* fadd dword ptr [esp] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 4) / fp_top()); /* fdivr dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB7CC)); /* fmul dword ptr [0x7ab7cc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7AD3C8)); /* fadd dword ptr [0x7ad3c8] */
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
 * sub_00084D10
 * Original: 0x00084D10 - 0x00084DB0 (160 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084D10(void)
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

loc_00084D10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if ((_fa == 0)) goto loc_00084D38; /* je: equal / zero */

loc_00084D1E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00084D2E; /* je: equal / zero */

loc_00084D21: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00084D45; /* jne: not equal / not zero */

loc_00084D24: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9938)); /* movss */
    goto loc_00084D40;

loc_00084D2E: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9934)); /* movss */
    goto loc_00084D40;

loc_00084D38: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9930)); /* movss */

loc_00084D40: ;
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_00084D45: ;
    PUSH32(esp, 0x00084D4Au); RECOMP_ABI_CALL(0x00084C90u, sub_00084C90); /* call 0x00084C90 */

loc_00084D4A: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x2F9);
    PUSH32(esp, 0x7BA278);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x00084D5Fu); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_00084D5F: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB2D0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AA820); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AD370); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x897568); /* mulss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 4); /* cvttss2si */
    ecx = MEM32(0x8EACE4);
    MEM16(ecx + 0x36) = LO16(eax);
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
 * sub_00084DE0
 * Original: 0x00084DE0 - 0x00084E5B (123 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084DE0(void)
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

loc_00084DE0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x8E9934)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00084DF6u); RECOMP_ABI_CALL(0x00084C90u, sub_00084C90); /* call 0x00084C90 */

loc_00084DF6: ;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x30D);
    PUSH32(esp, 0x7BA278);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x00084E0Au); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_00084E0A: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB2D0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x897568); /* mulss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 4); /* cvttss2si */
    ecx = MEM32(0x8EACE4);
    MEM16(ecx + 0x36) = LO16(eax);
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
 * sub_00084E80
 * Original: 0x00084E80 - 0x00084EC2 (66 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084E80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00084EBE; /* je: equal / zero */

loc_00084E8A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00084EBE; /* je: equal / zero */

loc_00084E8F: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00084EAD; /* je: equal / zero */

loc_00084E98: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00084EAD; /* je: equal / zero */

loc_00084E9C: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00084EA6u); RECOMP_ABI_CALL(0x0001579Fu, sub_0001579F); /* call 0x0001579F */

loc_00084EA6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, LO8(eax));
    goto loc_00084EAF;

loc_00084EAD: ;
    SET_LO8(ecx, 1);

loc_00084EAF: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00084EC0; /* je: equal / zero */

loc_00084EB5: ;
    eax = MEM32(esi * 4 + 0x7BA298);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00084EBE: ;
    eax = esi;

loc_00084EC0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00084EE0
 * Original: 0x00084EE0 - 0x00084FAA (202 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084EE0(void)
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

loc_00084EE0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    if (CMP_A(_fa, _fb)) goto loc_00084F68; /* ja: above (unsigned >) */

loc_00084F00: ;
    ecx = ZX8(MEM8(eax + 0x84FB8));
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    { uint32_t _jt = MEM32(ecx * 4 + 0x84FAC); /* switch: 3 entries, 3 targets */
    if (_jt == 0x00084F14u) goto loc_00084F14;
    if (_jt == 0x00084F22u) goto loc_00084F22;
    if (_jt == 0x00084F2Cu) goto loc_00084F2C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00084F14: ;
    xmm2 = XMM_SCALAR(MEMF(0x7AB1DC)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    goto loc_00084F34;

loc_00084F22: ;
    xmm2 = XMM_SCALAR(MEMF(0x7ABD68)); /* movss */
    goto loc_00084F34;

loc_00084F2C: ;
    xmm2 = XMM_SCALAR(MEMF(0x7ABD6C)); /* movss */

loc_00084F34: ;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    edx = ZX8(MEM8(eax + 0x84FD0));
    { uint32_t _jt = MEM32(edx * 4 + 0x84FC4); /* switch: 3 entries, 3 targets */
    if (_jt == 0x00084F48u) goto loc_00084F48;
    if (_jt == 0x00084F54u) goto loc_00084F54;
    if (_jt == 0x00084F5Bu) goto loc_00084F5B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00084F48: ;
    xmm1 = XMM_SCALAR(MEMF(0x7ABD78)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00084F54: ;
    MEMF(esp) = xmm1.f[0]; /* movss */
    goto loc_00084F68;

loc_00084F5B: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7ABD78); /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_00084F68: ;
    ecx = MEM32(0x8E9390);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00084F8D; /* je: equal / zero */

loc_00084F72: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00084F77u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00084F74u); } /* indirect call */
    }

loc_00084F77: ;
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x38); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00084F8D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x38)) */

loc_00084F83: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp); /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_00084F8D: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp);
    edx = eax;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(edx + 8) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00084FAA
 * Original: 0x00084FAA - 0x00084FC0 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084FAA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00084FAA: ;
    edi = edi;
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x4F) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & MEM8(edi + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + ecx * 2)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(edi + ecx * 2) = MEM8(edi + ecx * 2) + HI8(ecx);
    _fa = (uint32_t)(MEM8(edi + ecx * 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(edx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(edx) = MEM32(edx) + eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(MEM8(edx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + MEM8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

}

/**
 * sub_00085020
 * Original: 0x00085020 - 0x00085170 (336 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085020(void)
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

loc_00085020: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x34));
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    eax = MEM32(0x8E8F84);
    fp_top() = sin(fp_top()); /* fsin */
    xmm0 = XMM_SCALAR(MEMF(0x7AA7E8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7BA2DC)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax + 0x20);
    fp_push(MEMD(0x7BA2D0)); /* fld double */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    MEM32(esp + 4) = edx;
    eax = MEM32(ecx + 4);
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    MEM32(esp + 8) = eax;
    ecx = MEM32(ecx + 8);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00085123; /* jbe: below or equal (unsigned <=) */

loc_000850B7: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E931C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(0x7BA2C8)); /* movss */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7BA2C4)); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008510Fu); RECOMP_ABI_CALL(0x0002D88Bu, sub_0002D88B); /* call 0x0002D88B */

loc_0008510F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00085123; /* je: equal / zero */

loc_00085116: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AA7DC)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_00085123: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x8E99B4); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7A9EC0); /* mulss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7BA2C0); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085168; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00085162: ;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */

loc_00085168: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x34)) >> 32) & 1);
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000851D0
 * Original: 0x000851D0 - 0x00085208 (56 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000851D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000851D0: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7BA2E0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085205; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7BA2E0)) */

loc_000851D9: ;
    xmm1 = XMM_SCALAR(MEMF(0x7ABD78)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085205; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000851E6: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085205; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_000851F5: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AB1DC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085205; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00085202: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00085205: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00085220
 * Original: 0x00085220 - 0x0008525E (62 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085220: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0008525D; /* ja: above (unsigned >) */

loc_00085227: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x85260); /* switch: 8 entries, 8 targets */
    if (_jt == 0x0008522Eu) goto loc_0008522E;
    if (_jt == 0x00085234u) goto loc_00085234;
    if (_jt == 0x0008523Au) goto loc_0008523A;
    if (_jt == 0x00085240u) goto loc_00085240;
    if (_jt == 0x00085246u) goto loc_00085246;
    if (_jt == 0x0008524Cu) goto loc_0008524C;
    if (_jt == 0x00085252u) goto loc_00085252;
    if (_jt == 0x00085258u) goto loc_00085258;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0008522E: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00085234: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_0008523A: ;
    eax = 4;
    esp += 4; return; /* ret */

loc_00085240: ;
    eax = 8;
    esp += 4; return; /* ret */

loc_00085246: ;
    eax = 0x10;
    esp += 4; return; /* ret */

loc_0008524C: ;
    eax = 0x20;
    esp += 4; return; /* ret */

loc_00085252: ;
    eax = 0x40;
    esp += 4; return; /* ret */

loc_00085258: ;
    eax = 0x80;

loc_0008525D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008525E
 * Original: 0x0008525E - 0x0008530A (172 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008525E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008525E: ;
    edi = edi;
    PUSH32(esp, edx);
    MEM8(eax) = MEM8(eax) | LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(eax, LO8(eax) ^ 0x52);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax) = MEM8(eax) | LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(edx + 8)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(edx + 8) (8-bit) */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + 0x52) = MEM8(eax + 0x52) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax + 0x52)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) | LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    MEM8(eax) = MEM8(eax) | LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esp--;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    MEM8(eax) = MEM8(eax) | LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    MEM8(eax) = MEM8(eax) | LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, eax);
    PUSH32(esp, edx);
    MEM8(eax) = MEM8(eax) | LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
    SET_LO8(ecx, MEM8(esi + 0x64));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = 8;
    if (CMP_NE(_fa, _fb)) goto loc_000852C2; /* jne: not equal / not zero */

loc_000852B0: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AACB4); /* mulss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */

loc_000852C2: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000852C9u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000852C9: ;
    ecx = eax;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00085300; /* jne: not equal / not zero */

loc_000852D7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00085305; /* jl: less (signed <) */

loc_000852DB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000852E5; /* jle: less or equal (signed <=) */

loc_000852E0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00085305; /* jne: not equal / not zero */

loc_000852E5: ;
    PUSH32(esp, 0x000852EAu); RECOMP_ABI_CALL(0x00085220u, sub_00085220); /* call 0x00085220 */

loc_000852EA: ;
    esi = MEM32(esi + 0xF0);
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00085305; /* jne: not equal / not zero */

loc_000852F8: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x53);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00085305; /* jne: not equal / not zero */

loc_00085300: ;
    POP32(esp, edi);
    eax = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00085305: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00085330
 * Original: 0x00085330 - 0x00085331 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085330(void)
{

loc_00085330: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00085340
 * Original: 0x00085340 - 0x000853F9 (185 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085340(void)
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

loc_00085340: ;
    ecx = MEM32(edx + 0x20);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(0x8E9324)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7BA2E8)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fca = xmm1.f[0]; _fcb = MEMF(ecx + 0x30); /* comiss */
    xmm0 = xmm3; /* movaps */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085369; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ecx + 0x30)) */

loc_00085362: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */

loc_00085369: ;
    _fca = xmm1.f[0]; _fcb = MEMF(ecx + 0x38); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085377; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ecx + 0x38)) */

loc_0008536F: ;
    xmm2 = XMM_SCALAR(MEMF(0x7BA2E4)); /* movss */

loc_00085377: ;
    ecx = MEM32(edx + 0x20);
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x30); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x38); /* subss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(MEMF(esp)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(0x897540)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000853B4; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000853AF: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000853F1; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_000853B4: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000853C8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000853B9: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm1 = xmm0; /* movaps */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000853C8: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000853E3; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000853D1: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm1 = xmm2; /* movaps */
    xmm0 = xmm1; /* movaps */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000853E3: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */

loc_000853F1: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
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
 * sub_00085430
 * Original: 0x00085430 - 0x00085456 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085430: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(ecx + 0x3D8);
    if (CMP_L(_fas, _fbs)) goto loc_00085455; /* jl: less (signed <) */

loc_0008543A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008544F; /* jle: less or equal (signed <=) */

loc_0008543F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00085455; /* jne: not equal / not zero */

loc_00085444: ;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_0008544F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00085455u); RECOMP_ABI_CALL(0x0002CE9Au, sub_0002CE9A); /* call 0x0002CE9A */

loc_00085455: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00085460
 * Original: 0x00085460 - 0x00085472 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085460(void)
{

loc_00085460: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x3D8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00085471u); RECOMP_ABI_CALL(0x0002CE9Au, sub_0002CE9A); /* call 0x0002CE9A */

loc_00085471: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00085480
 * Original: 0x00085480 - 0x000855DC (348 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085480(void)
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

loc_00085480: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00085499u); RECOMP_ABI_CALL(0x00031FEEu, sub_00031FEE); /* call 0x00031FEE */

loc_00085499: ;
    eax = MEM32(esi + 0x20);
    esi = MEM32(esp + 0x48);
    ecx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x34); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x30); /* subss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x34); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    ecx = esp + 8;
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008551Au); RECOMP_ABI_CALL(0x000130D0u, sub_000130D0); /* call 0x000130D0 */

loc_0008551A: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0008552Au); RECOMP_ABI_CALL(0x000130D0u, sub_000130D0); /* call 0x000130D0 */

loc_0008552A: ;
    fp_pop(); /* fstp st(0) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    edx = MEM32(esi + 0x20);
    eax = MEM32(0x8EACE0);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 8); /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edx);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEM32(eax + 8) = edx;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(0x897540)); /* movss */
    POP32(esp, esi);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000855AA; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000855A5: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000855D0; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_000855AA: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000855BF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000855AF: ;
    eax = MEM32(esp + 0x34);
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000855BF: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000855D0; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000855CC: ;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */

loc_000855D0: ;
    eax = MEM32(esp + 0x34);
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00085640
 * Original: 0x00085640 - 0x00085708 (200 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00085640: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x8E8F84);
    ecx = MEM32(ecx + 0x20);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    edx = ecx;
    esi = MEM32(edx);
    MEM32(esp + 4) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(esp + 0xC) = edx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 8) = esi;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    POP32(esp, esi);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085695; /* jb: below (unsigned <) (xmm3.f[0] vs xmm1.f[0]) */

loc_0008568B: ;
    xmm1 = XMM_SCALAR(MEMF(0x8E931C)); /* movss */
    goto loc_0008569D;

loc_00085695: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(0x8E931C); /* subss */

loc_0008569D: ;
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    xmm3 = xmm1; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx); /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] / xmm3.f[0]; /* divss */
    xmm5.f[0] = xmm5.f[0] + MEMF(0x7A9980); /* addss */
    xmm3 = xmm0; /* movaps */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AD314)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 4); /* subss */
    edx = MEM32(esp + 0x10);
    xmm3.f[0] = xmm3.f[0] / xmm5.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 8); /* subss */
    ecx = eax;
    MEM32(ecx) = edx;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(ecx + 4) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 8) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00085740
 * Original: 0x00085740 - 0x0008575F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085740(void)
{

loc_00085740: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00085770
 * Original: 0x00085770 - 0x00085874 (260 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085770(void)
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

loc_00085770: ;
    ecx = MEM32(eax + 0x28);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00085870; /* jne: not equal / not zero */

loc_0008577F: ;
    SET_LO8(ecx, MEM8(eax + 0x64));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00085796; /* jne: not equal / not zero */

loc_0008578E: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_00085796: ;
    ecx = MEM32(0x8E8F84);
    eax = MEM32(ecx + 0x20);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x7BA2EC)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm4.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    if ((_fca > _fcb)) goto loc_00085870; /* ja: above (unsigned >) (xmm4.f[0] vs xmm2.f[0]) */

loc_000857C2: ;
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm3.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_00085870; /* jae: above or equal (unsigned >=) (xmm3.f[0] vs xmm5.f[0]) */

loc_000857CE: ;
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(0x7BA2E0)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00085870; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_00085800: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7ABD78); /* comiss */
    if ((_fca > _fcb)) goto loc_00085870; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7ABD78)) */

loc_00085809: ;
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB1DC)); /* movss */
    if ((_fca > _fcb)) goto loc_0008581E; /* ja: above (unsigned >) (xmm0.f[0] vs xmm5.f[0]) */

loc_00085816: ;
    xmm0 = XMM_SCALAR(MEMF(0x7ABD74)); /* movss */

loc_0008581E: ;
    eax = MEM32(ecx + 0x20);
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x38); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x0008585Eu); RECOMP_ABI_CALL(0x00012EAAu, sub_00012EAA); /* call 0x00012EAA */

loc_0008585E: ;
    edx = MEM32(0x8E8F84);
    ecx = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x20);
    PUSH32(esp, 0x00085870u); RECOMP_ABI_CALL(0x00034A1Eu, sub_00034A1E); /* call 0x00034A1E */

loc_00085870: ;
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
 * sub_000858C0
 * Original: 0x000858C0 - 0x000858CA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000858C0(void)
{

loc_000858C0: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000858D0
 * Original: 0x000858D0 - 0x000859E4 (276 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000858D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000858D0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x000858DBu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000858DB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008590A; /* je: equal / zero */

loc_000858E2: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E931C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7BA140)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEM32(0x8EACE8) = eax;
    goto loc_00085910;

loc_0008590A: ;
    MEM32(0x8EACE8) = esi;

loc_00085910: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x00085918u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00085918: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008594F; /* je: equal / zero */

loc_0008591F: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E931C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7AA7D8); /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7BA140)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEM32(0x8EACEC) = eax;
    goto loc_00085955;

loc_0008594F: ;
    MEM32(0x8EACEC) = esi;

loc_00085955: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0008595Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0008595D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008598F; /* je: equal / zero */

loc_00085964: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x8E931C); /* subss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7BA140)); /* movss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEM32(0x8EACF0) = eax;
    goto loc_00085995;

loc_0008598F: ;
    MEM32(0x8EACF0) = esi;

loc_00085995: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0008599Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0008599D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000859D8; /* je: equal / zero */

loc_000859A4: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AA7D8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x8E931C); /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7BA140)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEM32(0x8EACF4) = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00034AB9(); return; /* tail jmp 0x00034AB9 */

loc_000859D8: ;
    MEM32(0x8EACF4) = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00034AB9(); return; /* tail jmp 0x00034AB9 */

}

/**
 * sub_00085A30
 * Original: 0x00085A30 - 0x00085A50 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085A30: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00085A33: ;
    eax = MEM32(esi + 0x8EACE8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00085A3Fu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00085A3F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00085A33; /* jl: less (signed <) */

loc_00085A4A: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0001B40B(); return; /* tail jmp 0x0001B40B */

}

/**
 * sub_00085A60
 * Original: 0x00085A60 - 0x000860B6 (1622 bytes, 421 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00085A60: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(ecx, MEM8(0x8EAD94));
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_00085AE1; /* jne: not equal / not zero */

loc_00085A7D: ;
    ecx = MEM32(0x8EAD94);
    xmm0 = XMM_SCALAR(MEMF(0x8F9608)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x8F95F0); /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x897540)); /* movss */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEM32(0x8EAD94) = ecx;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085AB0; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00085AAB: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00085ACC; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00085AB0: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085ABB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00085AB5: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00085ACC;

loc_00085ABB: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00085ACC; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00085AC8: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00085ACC: ;
    PUSH32(esp, 0x6B6380);
    MEMF(0x8EAD90) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00085ADEu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_00085ADE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00085AE1: ;
    SET_LO8(ecx, MEM8(0x8EAD94));
    eax = 2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00085B54; /* jne: not equal / not zero */

loc_00085AF0: ;
    ecx = MEM32(0x8EAD94);
    xmm0 = XMM_SCALAR(MEMF(0x8F95F0)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x8F9608); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x897540)); /* movss */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEM32(0x8EAD94) = ecx;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085B23; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00085B1E: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00085B3F; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00085B23: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085B2E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00085B28: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00085B3F;

loc_00085B2E: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00085B3F; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00085B3B: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00085B3F: ;
    PUSH32(esp, 0x6B6370);
    MEMF(0x8EAD8C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00085B51u); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_00085B51: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00085B54: ;
    SET_LO8(ecx, MEM8(0x8EAD94));
    eax = 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00085BC7; /* jne: not equal / not zero */

loc_00085B63: ;
    ecx = MEM32(0x8EAD94);
    xmm0 = XMM_SCALAR(MEMF(0x8F95EC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x8F95F0); /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x897540)); /* movss */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEM32(0x8EAD94) = ecx;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085B96; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00085B91: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00085BB2; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00085B96: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085BA1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00085B9B: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00085BB2;

loc_00085BA1: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00085BB2; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00085BAE: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00085BB2: ;
    PUSH32(esp, 0x6B6360);
    MEMF(0x8EAD88) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00085BC4u); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_00085BC4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00085BC7: ;
    SET_LO8(ecx, MEM8(0x8EAD94));
    eax = 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00085C3A; /* jne: not equal / not zero */

loc_00085BD6: ;
    ecx = MEM32(0x8EAD94);
    xmm0 = XMM_SCALAR(MEMF(0x8F95EC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x8F95F0); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x897540)); /* movss */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEM32(0x8EAD94) = ecx;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085C09; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00085C04: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00085C25; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00085C09: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085C14; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00085C0E: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00085C25;

loc_00085C14: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00085C25; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00085C21: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00085C25: ;
    PUSH32(esp, 0x6B6350);
    MEMF(0x8EAD84) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00085C37u); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_00085C37: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00085C3A: ;
    SET_LO8(ecx, MEM8(0x8EAD94));
    eax = 0x10;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00085CAD; /* jne: not equal / not zero */

loc_00085C49: ;
    ecx = MEM32(0x8EAD94);
    xmm0 = XMM_SCALAR(MEMF(0x8F9600)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x8F95F0); /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x897540)); /* movss */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEM32(0x8EAD94) = ecx;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085C7C; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00085C77: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00085C98; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00085C7C: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085C87; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00085C81: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00085C98;

loc_00085C87: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00085C98; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00085C94: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00085C98: ;
    PUSH32(esp, 0x6B6340);
    MEMF(0x8EAD80) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00085CAAu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_00085CAA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00085CAD: ;
    SET_LO8(ecx, MEM8(0x8EAD94));
    eax = 0x20;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00085D20; /* jne: not equal / not zero */

loc_00085CBC: ;
    ecx = MEM32(0x8EAD94);
    xmm0 = XMM_SCALAR(MEMF(0x8F9600)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x8F95F0); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x897540)); /* movss */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEM32(0x8EAD94) = ecx;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085CEF; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00085CEA: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00085D0B; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00085CEF: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085CFA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00085CF4: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00085D0B;

loc_00085CFA: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00085D0B; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00085D07: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00085D0B: ;
    PUSH32(esp, 0x6B6330);
    MEMF(0x8EAD7C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00085D1Du); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_00085D1D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00085D20: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00085F60; /* jge: greater or equal (signed >=) */

loc_00085D2E: ;
    xmm1 = XMM_SCALAR(MEMF(0x8EAD90)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085E39; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00085D45: ;
    PUSH32(esp, 0x4BE);
    PUSH32(esp, 0x7BA278);
    PUSH32(esp, 5);
    PUSH32(esp, 0x00085D56u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_00085D56: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x897540)); /* movss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x7AB7C8); /* mulss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085D7A; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_00085D75: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00085D99; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_00085D7A: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085D85; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_00085D7F: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    goto loc_00085D99;

loc_00085D85: ;
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00085D99; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm1.f[0]) */

loc_00085D95: ;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */

loc_00085D99: ;
    xmm1 = XMM_SCALAR(MEMF(0x7BA2F0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00085DAA; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00085DA6: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00085DAA: ;
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085DB8; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_00085DB3: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00085DD7; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00085DB8: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085DC3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00085DBD: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_00085DD7;

loc_00085DC3: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00085DD7; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00085DD3: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_00085DD7: ;
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x10); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085DF1; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_00085DE2: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085DF1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00085DE7: ;
    MEMF(esp) = xmm1.f[0]; /* movss */
    goto loc_00085F63;

loc_00085DF1: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085E07; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00085DF6: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm2 = xmm1; /* movaps */
    MEMF(esp) = xmm2.f[0]; /* movss */
    goto loc_00085F63;

loc_00085E07: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085E24; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_00085E13: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    MEMF(esp) = xmm2.f[0]; /* movss */
    goto loc_00085F63;

loc_00085E24: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp) = xmm2.f[0]; /* movss */
    goto loc_00085F63;

loc_00085E39: ;
    xmm1 = XMM_SCALAR(MEMF(0x8EAD88)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085E91; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00085E46: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x8EAD8C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085E91; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x8EAD8C)) */

loc_00085E4F: ;
    PUSH32(esp, 0x4C3);
    PUSH32(esp, 0x7BA278);
    PUSH32(esp, 5);
    PUSH32(esp, 0x00085E60u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_00085E60: ;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00085E6Bu); RECOMP_ABI_CALL(0x00013D28u, sub_00013D28); /* call 0x00013D28 */

loc_00085E6B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0xF);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00085E7Bu); RECOMP_ABI_CALL(0x00013D28u, sub_00013D28); /* call 0x00013D28 */

loc_00085E7B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00085E89u); RECOMP_ABI_CALL(0x000160F0u, sub_000160F0); /* call 0x000160F0 */

loc_00085E89: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00085F57;

loc_00085E91: ;
    xmm1 = XMM_SCALAR(MEMF(0x8EAD80)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085EF0; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00085E9E: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x8EAD84); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085EF0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x8EAD84)) */

loc_00085EA7: ;
    PUSH32(esp, 0x4C8);
    PUSH32(esp, 0x7BA278);
    PUSH32(esp, 5);
    PUSH32(esp, 0x00085EB8u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_00085EB8: ;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00085EC3u); RECOMP_ABI_CALL(0x00013D28u, sub_00013D28); /* call 0x00013D28 */

loc_00085EC3: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0xF);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00085ED3u); RECOMP_ABI_CALL(0x00013D28u, sub_00013D28); /* call 0x00013D28 */

loc_00085ED3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00085EE1u); RECOMP_ABI_CALL(0x000160F0u, sub_000160F0); /* call 0x000160F0 */

loc_00085EE1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x00085EEEu); RECOMP_ABI_CALL(0x0001C3ECu, sub_0001C3EC); /* call 0x0001C3EC */

loc_00085EEE: ;
    goto loc_00085F60;

loc_00085EF0: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x8EAD7C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085F38; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x8EAD7C)) */

loc_00085EF9: ;
    PUSH32(esp, 0x4CD);
    PUSH32(esp, 0x7BA278);
    PUSH32(esp, 5);
    PUSH32(esp, 0x00085F0Au); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_00085F0A: ;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00085F15u); RECOMP_ABI_CALL(0x00013D28u, sub_00013D28); /* call 0x00013D28 */

loc_00085F15: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0xF);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00085F25u); RECOMP_ABI_CALL(0x00013D28u, sub_00013D28); /* call 0x00013D28 */

loc_00085F25: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00085F33u); RECOMP_ABI_CALL(0x000160F0u, sub_000160F0); /* call 0x000160F0 */

loc_00085F33: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00085F57;

loc_00085F38: ;
    PUSH32(esp, 0x4D1);
    PUSH32(esp, 0x7BA278);
    PUSH32(esp, 5);
    PUSH32(esp, 0x00085F49u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_00085F49: ;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00085F54u); RECOMP_ABI_CALL(0x00013D28u, sub_00013D28); /* call 0x00013D28 */

loc_00085F54: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00085F57: ;
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00085F60u); RECOMP_ABI_CALL(0x0002DEC1u, sub_0002DEC1); /* call 0x0002DEC1 */

loc_00085F60: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */

loc_00085F63: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B9D94)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_00085F81; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esp)) */

loc_00085F79: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_00085F81: ;
    xmm1 = XMM_SCALAR(MEMF(0x8E931C)); /* movss */
    ecx = MEM32(0x8E8F84);
    edx = MEM32(ecx + 0x20);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x30); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085FB7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00085FAF: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_00085FC1;

loc_00085FB7: ;
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */

loc_00085FC1: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00085FC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00085FC5u); } /* indirect call */
    }

loc_00085FC8: ;
    ecx = MEM32(eax + 0x20);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008602E; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00085FDE: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085FF3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00085FE3: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7B9DA4); /* mulss */
    goto loc_0008606A;

loc_00085FF3: ;
    xmm1 = XMM_SCALAR(MEMF(0x897550)); /* movss */

loc_00085FFB: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x7B9DA4); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(0x897540)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008601F; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008601A: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0008604E; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_0008601F: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008603D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00086024: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = MEMF(esp); /* comiss */
    goto loc_000860A0;

loc_0008602E: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00086054; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00086033: ;
    xmm1 = XMM_SCALAR(MEMF(0x7B9D94)); /* movss */
    goto loc_00085FFB;

loc_0008603D: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_0008604E; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008604A: ;
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */

loc_0008604E: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esp); /* comiss */
    goto loc_000860A0;

loc_00086054: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7B9DA4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x7B9D94); /* addss */

loc_0008606A: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(0x897540)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008607C; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00086077: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00086098; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_0008607C: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00086087; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00086081: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    goto loc_00086098;

loc_00086087: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00086098; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00086094: ;
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */

loc_00086098: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */

loc_000860A0: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000860A7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000860A2: ;
    MEMF(esp) = xmm1.f[0]; /* movss */

loc_000860A7: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    eax = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00086250
 * Original: 0x00086250 - 0x0008648C (572 bytes, 179 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086250(void)
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

loc_00086250: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    SET_LO8(eax, MEM8(edi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00086336; /* jl: less (signed <) */

loc_00086269: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00086277u); RECOMP_ABI_CALL(0x00016F50u, sub_00016F50); /* call 0x00016F50 */

loc_00086277: ;
    edx = MEM32(esp + 0x30);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00086284u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_00086284: ;
    ecx = eax;
    PUSH32(esp, 0x0008628Bu); RECOMP_ABI_CALL(0x000217E8u, sub_000217E8); /* call 0x000217E8 */

loc_0008628B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086336; /* je: equal / zero */

loc_00086293: ;
    ecx = MEM32(eax + 0x14);
    ecx = ecx + ecx * 2;
    SET_LO8(edx, MEM8(eax + ecx * 4 + 0x22));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00086336; /* jbe: below or equal (unsigned <=) */

loc_000862A5: ;
    ecx = MEM32(eax + 0x14);
    edx = ecx + ecx * 2;
    SET_LO8(ecx, MEM8(eax + edx * 4 + 0x20));
    eax = eax + edx * 4;
    SET_LO8(edx, MEM8(eax + 0x1F));
    MEM8(esp + 0x10) = LO8(ecx);
    eax = MEM32(esp + 0x10);
    MEM8(esp + 0x14) = LO8(edx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000862CCu); RECOMP_ABI_CALL(0x00013AA8u, sub_00013AA8); /* call 0x00013AA8 */

loc_000862CC: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x897540)); /* movss */
    edx = ZX8(LO8(eax));
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B1E18); /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000862F3; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000862EE: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0008631E; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000862F3: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000862FE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000862F8: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0008631E;

loc_000862FE: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00086310; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00086307: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_0008631E;

loc_00086310: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */

loc_0008631E: ;
    xmm1 = XMM_SCALAR(MEMF(0x7B9D94)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008632F; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008632B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00086373;

loc_0008632F: ;
    esi = 2;
    goto loc_00086373;

loc_00086336: ;
    eax = MEM32(edi + 0x20);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x30); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008635D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x30)) */

loc_00086342: ;
    PUSH32(esp, 0x596);
    PUSH32(esp, 0x7BA278);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00086353u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_00086353: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00086373;

loc_0008635D: ;
    PUSH32(esp, 0x59A);
    PUSH32(esp, 0x7BA278);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0008636Eu); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0008636E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_00086373: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00086375: ;
    ecx = ebx + esi;
    esi = ecx;
    esi = esi & 0x80000003u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00086387; /* jns: not sign (positive) */

loc_00086382: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 0xFFFFFFFCu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00086387: ;
    edx = MEM32(esi * 4 + 0x8EACE8);
    eax = MEM32(edx);
    MEM32(esp + 0x18) = eax;
    ecx = MEM32(edx + 4);
    SET_LO8(eax, MEM8(edi + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x1C) = ecx;
    edx = MEM32(edx + 8);
    MEM32(esp + 0x20) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000863BD; /* jne: not equal / not zero */

loc_000863A9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AACB4); /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */

loc_000863BD: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000863C8u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000863C8: ;
    ecx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000863FB; /* jl: less (signed <) */

loc_000863D1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000863DB; /* jle: less or equal (signed <=) */

loc_000863D6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000863FB; /* jne: not equal / not zero */

loc_000863DB: ;
    PUSH32(esp, 0x000863E0u); RECOMP_ABI_CALL(0x00085220u, sub_00085220); /* call 0x00085220 */

loc_000863E0: ;
    edx = MEM32(edi + 0xF0);
    ebp = (uint32_t)(int32_t)SMEM8(edx + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000863FB; /* jne: not equal / not zero */

loc_000863EE: ;
    edx = (uint32_t)(int32_t)SMEM8(edx + 0x53);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000863FB; /* jne: not equal / not zero */

loc_000863F6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086434; /* jne: not equal / not zero */

loc_000863FB: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00086375; /* jl: less (signed <) */

loc_00086405: ;
    eax = MEM32(edi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x7B70AC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x30); /* comiss */
    xmm2 = XMM_SCALAR(MEMF(0x7BA2EC)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008643E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x30)) */

loc_0008641E: ;
    ecx = MEM32(edi + 0xF0);
    _fca = xmm2.f[0]; _fcb = MEMF(ecx + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008643E; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(ecx + 0x1C)) */

loc_0008642A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00086434: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008643E: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = MEMF(eax + 0x30); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008644F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(eax + 0x30)) */

loc_00086447: ;
    xmm0 = XMM_SCALAR(MEMF(0x7BA2F4)); /* movss */

loc_0008644F: ;
    SET_LO8(eax, MEM8(edi + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7BA140)); /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00086476; /* jne: not equal / not zero */

loc_00086470: ;
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */

loc_00086476: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00086481u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_00086481: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00086520
 * Original: 0x00086520 - 0x00086715 (501 bytes, 154 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086520(void)
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

loc_00086520: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    SET_LO8(eax, MEM8(edi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000866EA; /* jl: less (signed <) */

loc_00086539: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00086547u); RECOMP_ABI_CALL(0x00016F50u, sub_00016F50); /* call 0x00016F50 */

loc_00086547: ;
    edx = MEM32(esp + 0x30);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00086554u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_00086554: ;
    ecx = eax;
    PUSH32(esp, 0x0008655Bu); RECOMP_ABI_CALL(0x000217E8u, sub_000217E8); /* call 0x000217E8 */

loc_0008655B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000866EA; /* je: equal / zero */

loc_00086563: ;
    ecx = MEM32(eax + 0x14);
    ecx = ecx + ecx * 2;
    SET_LO8(edx, MEM8(eax + ecx * 4 + 0x22));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000866EA; /* jbe: below or equal (unsigned <=) */

loc_00086575: ;
    ecx = MEM32(eax + 0x14);
    edx = ecx + ecx * 2;
    SET_LO8(ecx, MEM8(eax + edx * 4 + 0x20));
    eax = eax + edx * 4;
    SET_LO8(edx, MEM8(eax + 0x1F));
    MEM8(esp + 0x10) = LO8(ecx);
    eax = MEM32(esp + 0x10);
    MEM8(esp + 0x14) = LO8(edx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008659Cu); RECOMP_ABI_CALL(0x00013AA8u, sub_00013AA8); /* call 0x00013AA8 */

loc_0008659C: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x897540)); /* movss */
    edx = ZX8(LO8(eax));
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B1E18); /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000865C3; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000865BE: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000865EE; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000865C3: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000865CE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000865C8: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_000865EE;

loc_000865CE: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000865E0; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000865D7: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_000865EE;

loc_000865E0: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */

loc_000865EE: ;
    xmm1 = XMM_SCALAR(MEMF(0x7B9D94)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_00086704; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000865FF: ;
    esi = 2;

loc_00086604: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00086610;

    /* nop */
    /* nop */

loc_00086610: ;
    edx = ebx + esi;
    esi = edx;
    esi = esi & 0x80000003u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00086622; /* jns: not sign (positive) */

loc_0008661D: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 0xFFFFFFFCu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00086622: ;
    eax = MEM32(esi * 4 + 0x8EACE8);
    ecx = MEM32(eax);
    MEM32(esp + 0x18) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x1C) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x20) = eax;
    SET_LO8(eax, MEM8(edi + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086658; /* jne: not equal / not zero */

loc_00086644: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AACB4); /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */

loc_00086658: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00086663u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_00086663: ;
    ecx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00086696; /* jl: less (signed <) */

loc_0008666C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00086676; /* jle: less or equal (signed <=) */

loc_00086671: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086696; /* jne: not equal / not zero */

loc_00086676: ;
    PUSH32(esp, 0x0008667Bu); RECOMP_ABI_CALL(0x00085220u, sub_00085220); /* call 0x00085220 */

loc_0008667B: ;
    edx = MEM32(edi + 0xF0);
    ebp = (uint32_t)(int32_t)SMEM8(edx + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00086696; /* jne: not equal / not zero */

loc_00086689: ;
    edx = (uint32_t)(int32_t)SMEM8(edx + 0x53);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00086696; /* jne: not equal / not zero */

loc_00086691: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008670B; /* jne: not equal / not zero */

loc_00086696: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00086610; /* jl: less (signed <) */

loc_000866A0: ;
    eax = MEM32(0x8EACEC);
    ecx = MEM32(eax);
    MEM32(esp + 0x18) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x1C) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x20) = eax;
    SET_LO8(eax, MEM8(edi + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000866D4; /* jne: not equal / not zero */

loc_000866C0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AACB4); /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */

loc_000866D4: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000866DFu); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000866DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000866EA: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000865FF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_00086704: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00086604;

loc_0008670B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000867A0
 * Original: 0x000867A0 - 0x000867B2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000867A0(void)
{

loc_000867A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x3D8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000867B1u); RECOMP_ABI_CALL(0x0002CE9Au, sub_0002CE9A); /* call 0x0002CE9A */

loc_000867B1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000867C0
 * Original: 0x000867C0 - 0x00086819 (89 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000867C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000867C0: ;
    ecx = MEM32(esp + 4);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    xmm0 = XMM_SCALAR(MEMF(0x7BA2F8)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = 0x8F00FC;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi);
    SET_LO8(ebx, MEM8(edx + 0x54));
    POP32(esp, esi);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    eax = 2;
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000867EF; /* je: equal / zero */

loc_000867EC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000867EF: ;
    ecx = MEM32(ecx + 0xF0);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00086805; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000867FF: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00086805: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086813; /* je: equal / zero */

loc_0008680E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086818; /* jne: not equal / not zero */

loc_00086813: ;
    eax = 3;

loc_00086818: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00086830
 * Original: 0x00086830 - 0x000868AC (124 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086830: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086861; /* jne: not equal / not zero */

loc_0008683F: ;
    eax = MEM32(esi + 0x1D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008684Bu); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_0008684B: ;
    eax = MEM32(eax + 0x28);
    edx = MEM32(eax);
    ecx = eax + 0xC;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000868A7; /* jne: not equal / not zero */

loc_0008685A: ;
    ecx = MEM32(eax + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000868A7; /* je: equal / zero */

loc_00086861: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = 0;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00086882u); RECOMP_ABI_CALL(0x000348C0u, sub_000348C0); /* call 0x000348C0 */

loc_00086882: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x3D8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000868A0; /* jne: not equal / not zero */

loc_00086894: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0008689Bu); RECOMP_ABI_CALL(0x0002CE9Au, sub_0002CE9A); /* call 0x0002CE9A */

loc_0008689B: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000868A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000868A7u); RECOMP_ABI_CALL(0x0002CE9Au, sub_0002CE9A); /* call 0x0002CE9A */

loc_000868A7: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000868D0
 * Original: 0x000868D0 - 0x000868E2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000868D0(void)
{

loc_000868D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x3D8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000868E1u); RECOMP_ABI_CALL(0x0002CE9Au, sub_0002CE9A); /* call 0x0002CE9A */

loc_000868E1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000868F0
 * Original: 0x000868F0 - 0x00086987 (151 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000868F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000868F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086985; /* jne: not equal / not zero */

loc_00086900: ;
    eax = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM32(esi + 0x3E4) = eax;
    ecx = esi;
    MEMF(esi + 0x3E8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0008691Fu); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_0008691F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008692B; /* jne: not equal / not zero */

loc_00086923: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008695F; /* je: equal / zero */

loc_0008692B: ;
    eax = MEM32(esi + 0x3D8);
    MEM32(eax + 8) = 2;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    ecx = MEM32(0x8F0650);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008695F; /* je: equal / zero */

loc_00086949: ;
    eax = MEM32(ecx + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086959; /* je: equal / zero */

loc_00086954: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008695F; /* jne: not equal / not zero */

loc_00086959: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008695Fu); RECOMP_ABI_CALL(0x000248DAu, sub_000248DA); /* call 0x000248DA */

loc_0008695F: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    ecx = MEM32(eax * 4 + 0x8F0040);
    SET_LO8(edx, MEM8(ecx + 0x130));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00086985; /* jg: greater (signed >) */

loc_00086974: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x1DC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00086982u); RECOMP_ABI_CALL(0x0002D593u, sub_0002D593); /* call 0x0002D593 */

loc_00086982: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00086985: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000869B0
 * Original: 0x000869B0 - 0x00086B9E (494 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000869B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_000869B0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E8F84);
    edx = MEM32(eax + 0x20);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x30)) >> 32) & 1);
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ecx + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(esp) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = eax;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000869FE; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000869F9: ;
    xmm1 = xmm2; /* movaps */
    goto loc_00086A05;

loc_000869FE: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_00086A05: ;
    xmm3 = XMM_SCALAR(MEMF(0x7BA140)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00086B92; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_00086A16: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00086A26; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00086A21: ;
    xmm1 = xmm2; /* movaps */
    goto loc_00086A2D;

loc_00086A26: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_00086A2D: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00086B92; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_00086A36: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm3 = xmm4; /* movaps */
    if ((_fca >= _fcb)) goto loc_00086A57; /* jae: above or equal (unsigned >=) (xmm5.f[0] vs xmm0.f[0]) */

loc_00086A54: ;
    xmm3 = xmm1; /* movaps */

loc_00086A57: ;
    xmm2 = XMM_SCALAR(MEMF(esp)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00086A64; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_00086A61: ;
    xmm1 = xmm4; /* movaps */

loc_00086A64: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00086B92; /* jp: parity */

loc_00086A71: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00086A7B; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00086A76: ;
    xmm1 = xmm2; /* movaps */
    goto loc_00086A82;

loc_00086A7B: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_00086A82: ;
    xmm2 = XMM_SCALAR(MEMF(0x8E931C)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(0x7AEBF0); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00086B92; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00086A9E: ;
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00086AA8; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm0.f[0]) */

loc_00086AA3: ;
    xmm0 = xmm5; /* movaps */
    goto loc_00086AAC;

loc_00086AA8: ;
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */

loc_00086AAC: ;
    xmm2.f[0] = xmm2.f[0] - MEMF(0x7AB1CC); /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00086B92; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00086ABD: ;
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = 0x8F0044;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x1C)) >> 32) & 1);
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00086ADAu); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_00086ADA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00086B92; /* je: equal / zero */

loc_00086AE2: ;
    goto loc_00086AF0;

    /* nop */
    goto loc_00086AF0;

    /* nop */

loc_00086AF0: ;
    ecx = MEM32(eax + 0x20);
    xmm4 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x20) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    MEM32(esp + 0x1C) = edx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00086B26; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_00086B21: ;
    _fca = xmm6.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00086B30; /* ja: above (unsigned >) (xmm6.f[0] vs xmm1.f[0]) */

loc_00086B26: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00086B7D; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_00086B2B: ;
    _fca = xmm1.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00086B7D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm6.f[0]) */

loc_00086B30: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x7B04A0)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    xmm0 = xmm3; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm6.f[0] = xmm6.f[0] / xmm4.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] / xmm6.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00086B7D; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_00086B74: ;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00086B98; /* ja: above (unsigned >) (xmm2.f[0] vs xmm3.f[0]) */

loc_00086B7D: ;
    PUSH32(esp, 0);
    ecx = eax + 0x200;
    PUSH32(esp, 0x00086B8Au); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_00086B8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00086AF0; /* jne: not equal / not zero */

loc_00086B92: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00086B98: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00086B98
 * Original: 0x00086B98 - 0x00086B9E (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086B98(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086B98: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00086C20
 * Original: 0x00086C20 - 0x00086DB4 (404 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086C20(void)
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

loc_00086C20: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1C));
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    PUSH32(esp, 0x41200000);
    ecx = esi;
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x00086C37u); RECOMP_ABI_CALL(0x0003632Du, sub_0003632D); /* call 0x0003632D */

loc_00086C37: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00086DAC; /* je: equal / zero */

loc_00086C3F: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    PUSH32(esp, 0x41200000);
    ecx = edi;
    PUSH32(esp, 0x00086C50u); RECOMP_ABI_CALL(0x0003632Du, sub_0003632D); /* call 0x0003632D */

loc_00086C50: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00086DA3; /* je: equal / zero */

loc_00086C58: ;
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x46160000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00086C69u); RECOMP_ABI_CALL(0x00013A62u, sub_00013A62); /* call 0x00013A62 */

loc_00086C69: ;
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    ecx = MEM32(esi + 0x20);
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x38); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x34); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi + 0x20);
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x38); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x34); /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00086CE9u); RECOMP_ABI_CALL(0x00016D3Eu, sub_00016D3E); /* call 0x00016D3E */

loc_00086CE9: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x7AA840)); /* fld float */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x897540)); /* movss */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_00086D13; /* jb: below (unsigned <) */

loc_00086D0E: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00086D38; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00086D13: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00086D1E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00086D18: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00086D38;

loc_00086D1E: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_00086D35; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00086D31: ;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_00086D35: ;
    xmm0 = xmm2; /* movaps */

loc_00086D38: ;
    xmm2 = XMM_SCALAR(MEMF(0x7BA2FC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00086D49; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_00086D45: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_00086D49: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00086D57; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00086D4E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00086D57: ;
    edx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm1 = xmm2; /* movaps */
    if ((_fca >= _fcb)) goto loc_00086D7A; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00086D77: ;
    xmm1 = xmm0; /* movaps */

loc_00086D7A: ;
    eax = MEM32(edi + 0x20);
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00086D8A; /* jb: below (unsigned <) (xmm4.f[0] vs xmm3.f[0]) */

loc_00086D87: ;
    xmm0 = xmm2; /* movaps */

loc_00086D8A: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00086DA3; /* jp: parity */

loc_00086D93: ;
    ecx = MEM32(esi + 0xF0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00086D9Fu); RECOMP_ABI_CALL(0x0003462Cu, sub_0003462C); /* call 0x0003462C */

loc_00086D9F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00086D4E; /* jne: not equal / not zero */

loc_00086DA3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00086DAC: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
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
 * sub_00086E20
 * Original: 0x00086E20 - 0x00086EF1 (209 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086E20: ;
    ecx = MEM32(0x8EACE0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00086E2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086E2Au); } /* indirect call */
    }

loc_00086E2D: ;
    ecx = MEM32(0x8EACE0);
    esi = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEM32(ecx + 0xC) = esi;
    edx = MEM32(0x8EACE0);
    ecx = MEM32(esp + 0x18);
    MEM32(edx + 0x2C) = esi;
    eax = MEM32(0x8EACE0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEM8(eax + 4) = 1;
    PUSH32(esp, ecx);
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, 0x00086E6Bu); RECOMP_ABI_CALL(0x0001BAF5u, sub_0001BAF5); /* call 0x0001BAF5 */

loc_00086E6B: ;
    ebx = MEM32(esp + 0x10);
    SET_LO8(eax, LO8(ebx));
    edx = ebx + -5;
    _fb = (uint32_t)(5) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - 5);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x18);
    MEM32(esi + 0x2C) = edx;
    MEM8(esi + 0x38) = LO8(eax);
    PUSH32(esp, 0x00086E88u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00086E88: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086E9A; /* je: equal / zero */

loc_00086E8F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00086E98u); RECOMP_ABI_CALL(0x0002CC5Bu, sub_0002CC5B); /* call 0x0002CC5B */

loc_00086E98: ;
    goto loc_00086E9C;

loc_00086E9A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00086E9C: ;
    ecx = MEM32(esi + 0x1D4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00086EA9u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_00086EA9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x00086EB3u); RECOMP_ABI_CALL(0x000284F3u, sub_000284F3); /* call 0x000284F3 */

loc_00086EB3: ;
    edx = MEM32(0x895AB0);
    eax = MEM32(edx);
    ecx = MEM32(0x8EACE0);
    MEM32(ecx + 8) = eax;
    edx = MEM32(0x8E8F84);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00086ED4u); RECOMP_ABI_CALL(0x00031FE4u, sub_00031FE4); /* call 0x00031FE4 */

loc_00086ED4: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00086EDBu); RECOMP_ABI_CALL(0x0002E678u, sub_0002E678); /* call 0x0002E678 */

loc_00086EDB: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    ecx = MEM32(eax * 4 + 0x8F00F8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x4C) = esi;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00086F30
 * Original: 0x00086F30 - 0x00086F97 (103 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00086F30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 1;
    /* nop */

loc_00086F40: ;
    ecx = MEM32(ebx + 0x8F00F8);
    PUSH32(esp, 0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00086F50u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_00086F50: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086F8A; /* je: equal / zero */

loc_00086F56: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086F77; /* je: equal / zero */

loc_00086F5B: ;
    ecx = MEM32(esi + 0x240);
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00086F69u); RECOMP_ABI_CALL(0x000169ABu, sub_000169AB); /* call 0x000169AB */

loc_00086F69: ;
    ecx = MEM32(esi + 0x240);
    PUSH32(esp, edi);
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x00086F77u); RECOMP_ABI_CALL(0x000169ABu, sub_000169AB); /* call 0x000169AB */

loc_00086F77: ;
    PUSH32(esp, 0);
    ecx = esi + 0x1E8;
    PUSH32(esp, 0x00086F84u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_00086F84: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086F56; /* jne: not equal / not zero */

loc_00086F8A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00086F40; /* jl: less (signed <) */

loc_00086F92: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00086FB0
 * Original: 0x00086FB0 - 0x0008723C (652 bytes, 177 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086FB0(void)
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

loc_00086FB0: ;
    ecx = MEM32(0x8EACE0);
    ecx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086FCD; /* je: equal / zero */

loc_00086FC7: ;
    esi = esp + 0x30;
    goto loc_00086FDC;

loc_00086FCD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000871B1; /* je: equal / zero */

loc_00086FD6: ;
    esi = esp + 0x40;
    eax = edx;

loc_00086FDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000871B1; /* ja: above (unsigned >) */

loc_00086FE5: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x8723C); /* switch: 4 entries, 2 targets */
    if (_jt == 0x00086FECu) goto loc_00086FEC;
    if (_jt == 0x000870D4u) goto loc_000870D4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00086FEC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087019; /* je: equal / zero */

loc_00086FF0: ;
    edx = MEM32(ecx + 0xF0);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00087019; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_00087004: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x1E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1E8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00087011u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_00087011: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087234; /* je: equal / zero */

loc_00087019: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x28);
    ebx = MEM32(esp + 0x24);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00087033u); RECOMP_ABI_CALL(0x0001195Bu, sub_0001195B); /* call 0x0001195B */

loc_00087033: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000871B1; /* je: equal / zero */

loc_0008703F: ;
    /* nop */

loc_00087040: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000871B1; /* jge: greater or equal (signed >=) */

loc_00087049: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00087062; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_00087058: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7B0478); /* addss */
    goto loc_0008706A;

loc_00087062: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7B0478); /* subss */

loc_0008706A: ;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7BA140); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008708F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7BA140)) */

loc_0008707F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB8B0); /* addss */
    goto loc_000870AA;

loc_0008708F: ;
    xmm1 = XMM_SCALAR(MEMF(0x7BA2EC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000870B0; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008709C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7AB8B0); /* subss */

loc_000870AA: ;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */

loc_000870B0: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x000870C3u); RECOMP_ABI_CALL(0x0001195Bu, sub_0001195B); /* call 0x0001195B */

loc_000870C3: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00087040; /* jne: not equal / not zero */

loc_000870CF: ;
    goto loc_000871B1;

loc_000870D4: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x28);
    ebx = MEM32(esp + 0x24);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000870EEu); RECOMP_ABI_CALL(0x0001195Bu, sub_0001195B); /* call 0x0001195B */

loc_000870EE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000871B1; /* je: equal / zero */

loc_000870FA: ;
    /* nop */

loc_00087100: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000871B1; /* jge: greater or equal (signed >=) */

loc_00087109: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7BA140); /* comiss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    if ((_fca > _fcb)) goto loc_0008715B; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7BA140)) */

loc_0008711B: ;
    xmm1 = XMM_SCALAR(MEMF(0x7BA2EC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00087132; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00087128: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7B0478); /* subss */
    goto loc_00087163;

loc_00087132: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008713C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00087137: ;
    xmm1 = xmm0; /* movaps */
    goto loc_00087143;

loc_0008713C: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_00087143: ;
    _fca = xmm1.f[0]; _fcb = MEMF(0x7B0478); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00087169; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7B0478)) */

loc_0008714C: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008715B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00087151: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7B0478); /* subss */
    goto loc_00087163;

loc_0008715B: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7B0478); /* addss */

loc_00087163: ;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */

loc_00087169: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00087184; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0008717A: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7B0478); /* subss */
    goto loc_0008718C;

loc_00087184: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7B0478); /* addss */

loc_0008718C: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x000871A5u); RECOMP_ABI_CALL(0x0001195Bu, sub_0001195B); /* call 0x0001195B */

loc_000871A5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00087100; /* jne: not equal / not zero */

loc_000871B1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x24); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x897540)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000871FB; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000871F6: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00087229; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000871FB: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00087209; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00087200: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    goto loc_00087226;

loc_00087209: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008721B; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00087212: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    goto loc_00087226;

loc_0008721B: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */

loc_00087226: ;
    xmm0 = xmm2; /* movaps */

loc_00087229: ;
    edx = MEM32(0x8EACE0);
    MEMF(edx + 0x28) = xmm0.f[0]; /* movss */

loc_00087234: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_00087300
 * Original: 0x00087300 - 0x000873AA (170 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087300: ;
    SET_LO8(edx, MEM8(esp + 0x14));
    eax = ecx;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _sv=(uint32_t)(LO8(edx)), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        SET_LO8(edx, _sv << _sc);
        _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(edx, MEM8(esp + 0xC));
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    { uint32_t _sv=(uint32_t)(LO8(ecx)), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        SET_LO8(ecx, _sv << _sc);
        _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(edx, MEM8(esp + 8));
    { uint32_t _sv=(uint32_t)(LO8(ecx)), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        SET_LO8(ecx, _sv << _sc);
        _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(edx, MEM8(esp + 4));
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0;
    { uint32_t _sv=(uint32_t)(LO8(ecx)), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        SET_LO8(ecx, _sv << _sc);
        _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM16(eax + 0xC) = 0x24;
    MEM32(eax) = 0x7BA300;
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    SET_LO8(edx, MEM8(eax + 0x1C));
    SET_LO8(edx, LO8(edx) & 0x10);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(edx, MEM8(esp + 0x18));
    MEM8(eax + 0x1D) = LO8(edx);
    edx = MEM32(esp + 0x1C);
    MEM8(eax + 0x1C) = LO8(ecx);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(eax + 0x20) = esi;
    edx = MEM32(edx + 4);
    MEM32(eax + 0x24) = edx;
    SET_LO8(edx, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _sv=(uint32_t)(LO8(edx)), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        SET_LO8(edx, _sv << _sc);
        _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(edx) & 0x10);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax + 0x1C) = LO8(edx);
    POP32(esp, esi);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_000873E0
 * Original: 0x000873E0 - 0x000873E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000873E0(void)
{

loc_000873E0: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_000873F0
 * Original: 0x000873F0 - 0x000873F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000873F0(void)
{

loc_000873F0: ;
    eax = 0x28;
    esp += 4; return; /* ret */

}
